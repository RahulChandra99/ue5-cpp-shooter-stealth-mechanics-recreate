// PWeapon.cpp
#include "PWeapon.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"
#include "NiagaraFunctionLibrary.h"
#include "Particles/ParticleSystemComponent.h"
#include "Camera/CameraShakeBase.h"
#include "Animation/AnimInstance.h"
#include "TimerManager.h"
#include "CoreMinimal.h"
#include "Debugger.h"
#include "PCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/Widget.h"
#include "Engine/Texture2D.h"
#include "PhysicalMaterials/PhysicalMaterial.h"
#include "TPS/TPS.h"

APWeapon::APWeapon()
{
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	MeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MeshComp"));
	MeshComponent->SetupAttachment(RootComponent);
	SetReplicates(true);

	SniperBulletMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SniperBulletMesh"));
	SniperBulletMesh->SetupAttachment(RootComponent); 
	SniperBulletMesh->SetVisibility(false);
	SniperBulletMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	SniperBulletCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("SniperBulletCamera"));
	SniperBulletCamera->SetupAttachment(SniperBulletMesh); // Attach it to the bullet
	SniperBulletCamera->bUsePawnControlRotation = false;
	SniperBulletCamera->SetAutoActivate(false);
	SniperBulletCamera->SetRelativeLocation(FVector(-30, 0, 0)); // Slightly behind bullet
}

int32 APWeapon::GetCurrentAmmo()
{
	if(WeaponAsset)
	{
		return CurrentMagzineAmmo;
	}
	else
	{
		return 0;
	}
}

int32 APWeapon::GetWeaponMagzine()
{
	if(WeaponAsset)
	{
		return CurrentTotalMagzine;
	}
	else
	{
		return 0;
	}
}

void APWeapon::BeginPlay()
{
	Super::BeginPlay();
	if (WeaponAsset)
	{
		WeaponStructure = WeaponAsset->WeaponData;
	}

	CurrentMagzineAmmo = WeaponStructure.CurrentAmmo;
	CurrentTotalMagzine = WeaponStructure.MagSize;
}

void APWeapon::Fire()
{
	if (!CharacterRef || !GetWorld() || bIsReloading) return;

	if (CurrentMagzineAmmo <= 0)
	{
		// Play empty clip sound
		if (WeaponStructure.EmptyClipSound)
		{
			UGameplayStatics::PlaySoundAtLocation(this, WeaponStructure.EmptyClipSound, GetActorLocation());
		}

		// Auto-reload if enabled
		if (WeaponStructure.bIsAutoReload)
		{
			Reload();
		}

		return;
	}

	CurrentMagzineAmmo--;

	if (WeaponStructure.FireSound)
	{
		UGameplayStatics::PlaySoundAtLocation(this, WeaponStructure.FireSound, GetActorLocation());
	}

	if(PCharacterRef)
		PCharacterRef->OnWeaponFired.Broadcast();

	FVector EyeLocation;
	FRotator EyeRotation;
	CharacterRef->GetActorEyesViewPoint(EyeLocation, EyeRotation);

	CachedShotDirection = EyeRotation.Vector();
	FVector EndLocationTrace = EyeLocation + (CachedShotDirection * WeaponStructure.ShootingRange);
	TracerEndPoint = EndLocationTrace;

	FCollisionQueryParams QueryParams;
	QueryParams.AddIgnoredActor(CharacterRef);
	QueryParams.AddIgnoredActor(this);
	QueryParams.bTraceComplex = true;
	QueryParams.bReturnPhysicalMaterial = true;

	
	bool bIsHit = GetWorld()->LineTraceSingleByChannel(
		CachedHitResult,
		EyeLocation,
		EndLocationTrace,
		ECC_GameTraceChannel1, // COLLISION_WEAPON
		QueryParams
	);

	if (bIsHit)
	{
		CachedHitActor = CachedHitResult.GetActor();

		

		if(WeaponAsset->WeaponData.WeaponEnum == EWeaponTypes::EWT_Sniper)
		{
			FVector MuzzleLocation = MeshComponent->GetSocketLocation(WeaponStructure.MuzzleSocketName);
			StartSniperBulletTravel(MuzzleLocation, CachedHitResult.ImpactPoint, 3000.0f);
		}
		else
		{
			ImpactEffects();
		}
		
	}

	if(WeaponAsset->WeaponData.WeaponEnum != EWeaponTypes::EWT_Sniper)
	{
		PlayFireEffects();

		PlayFireMontage();
	}

	
}

void APWeapon::StartFire(AActor* MyOwner)
{
	if (bIsReloading || bIsShotgunFiring) return;

	if (CharacterRef == nullptr)
		CharacterRef = Cast<ACharacter>(MyOwner);

	if (PCharacterRef == nullptr)
		PCharacterRef = Cast<APCharacter>(CharacterRef);

	// Handle automatic weapons
	if (WeaponStructure.bIsAutomatic)
	{
		GetWorldTimerManager().SetTimer(
			TimerHandle_TimeBetweenShots,
			this,
			&APWeapon::AutomaticFire,
			WeaponStructure.FireRate,
			true
		);
	}
	else
	{
		Fire();

		// If it's a shotgun (bullets per shot > 1), add fire delay
		if (WeaponStructure.WeaponEnum == EWeaponTypes::EWT_Shotgun)
		{
			bIsShotgunFiring = true;

			GetWorld()->GetTimerManager().SetTimer(TimerHandle_ShotgunDelay, this, &APWeapon::ResetShotgunCooldown, WeaponStructure.FireRate, false);
		}
	}
}

void APWeapon::ResetShotgunCooldown()
{
	bIsShotgunFiring = false;
}


void APWeapon::StopFire()
{
	GetWorldTimerManager().ClearTimer(TimerHandle_TimeBetweenShots);
}

void APWeapon::AutomaticFire()
{
	if (bIsReloading) return;

	

	Fire();
}


void APWeapon::Reload()
{
	if (bIsReloading || !CharacterRef) return;

	// Don't reload if magazine is full or no ammo in reserve
	if (CurrentMagzineAmmo >= WeaponStructure.CurrentAmmo || CurrentTotalMagzine <= 0)
		return;

	bIsReloading = true;

	if(PCharacterRef)
		PCharacterRef->OnWeaponReload.Broadcast();

	
	UAnimInstance* AnimInstance = CharacterRef->GetMesh()->GetAnimInstance();
	if (AnimInstance)
	{
		AnimInstance->Montage_Play(WeaponStructure.ReloadMontage);
	}


	// Play reload sound
	if (WeaponStructure.ReloadSound)
	{
		UGameplayStatics::PlaySoundAtLocation(this, WeaponStructure.ReloadSound, GetActorLocation());
	}

	// Refill ammo after delay
	FTimerHandle ReloadTimer;
	GetWorld()->GetTimerManager().SetTimer(ReloadTimer, FTimerDelegate::CreateLambda([this]()
	{
		int32 AmmoNeeded = WeaponStructure.CurrentAmmo - CurrentMagzineAmmo;
		int32 AmmoToReload = FMath::Min(AmmoNeeded, CurrentTotalMagzine);

		CurrentMagzineAmmo += AmmoToReload;
		CurrentTotalMagzine -= AmmoToReload;

		bIsReloading = false;

		if(PCharacterRef)
			PCharacterRef->OnWeaponReload.Broadcast();
		
	}), WeaponStructure.ReloadTime, false);
}

void APWeapon::ImpactEffects()
{
	if (CachedHitResult.PhysMaterial.IsValid())
	{
		EPhysicalSurface SurfaceType = UPhysicalMaterial::DetermineSurfaceType(CachedHitResult.PhysMaterial.Get());
		float ActualDamage = WeaponStructure.Damage;
		if (SurfaceType == SURFACE_FLESHVULNERABLE)
		{
			ActualDamage *= 4.0f;
		}

		UGameplayStatics::ApplyPointDamage(
			CachedHitActor,
			ActualDamage,
			CachedShotDirection,
			CachedHitResult,
			CharacterRef->GetInstigatorController(),
			this,
			WeaponStructure.DamageType
		);

		switch (SurfaceType)
		{
		case SURFACE_FLESHDEFAULT:
		case SURFACE_FLESHVULNERABLE:
			UGameplayStatics::SpawnEmitterAtLocation(
				GetWorld(),
				WeaponStructure.FleshImpactEffect,
				CachedHitResult.ImpactPoint,
				CachedHitResult.ImpactNormal.Rotation()
			);
			break;

		default:
			UNiagaraFunctionLibrary::SpawnSystemAtLocation(
				GetWorld(),
				WeaponStructure.DefaultImpactEffect,
				CachedHitResult.ImpactPoint,
				CachedHitResult.ImpactNormal.Rotation()
			);
			break;
		}
	}
	TracerEndPoint = CachedHitResult.ImpactPoint;
}

void APWeapon::PlayFireEffects()
{
	if (!WeaponStructure.MuzzleEffect) return;

	UNiagaraFunctionLibrary::SpawnSystemAttached(
		WeaponStructure.MuzzleEffect,
		MeshComponent,
		WeaponStructure.MuzzleSocketName,
		FVector::ZeroVector,
		FRotator::ZeroRotator,
		EAttachLocation::SnapToTarget,
		true
	);

	UNiagaraFunctionLibrary::SpawnSystemAttached(
		WeaponStructure.BulletMuzzleEffect,
		MeshComponent,
		WeaponStructure.MuzzleSocketName,
		FVector::ZeroVector,
		FRotator::ZeroRotator,
		EAttachLocation::SnapToTarget,
		true
	);

	FVector MuzzleLocation = MeshComponent->GetSocketLocation(WeaponStructure.MuzzleSocketName);

	if (WeaponStructure.TracerEffect)
	{
		UParticleSystemComponent* TracerComp = UGameplayStatics::SpawnEmitterAtLocation(
			GetWorld(),
			WeaponStructure.TracerEffect,
			MuzzleLocation
		);
		if (TracerComp)
		{
			TracerComp->SetVectorParameter(WeaponStructure.TracerTargetName, TracerEndPoint);
		}
	}

	APawn* WeaponOwner = Cast<APawn>(GetOwner());
	if (WeaponOwner)
	{
		APlayerController* PlayerController = Cast<APlayerController>(WeaponOwner->GetController());
		if (PlayerController)
		{
			PlayerController->ClientStartCameraShake(WeaponStructure.FireCamShake);

			if (!WeaponStructure.bIsMeleeWeapon)
			{
				FRotator ControlRot = PlayerController->GetControlRotation();

				// Reduce vertical kick further
				float RecoilPitch = FMath::FRandRange(-WeaponStructure.VerticalRecoil, WeaponStructure.VerticalRecoil);
				float RecoilYaw   = FMath::FRandRange(-WeaponStructure.HorizontalRecoil, WeaponStructure.HorizontalRecoil);

				// Apply only very subtle pitch change
				ControlRot.Pitch += RecoilPitch;
				ControlRot.Yaw += RecoilYaw;

				PlayerController->SetControlRotation(ControlRot);
			}


		}
	}
	
	
}

void APWeapon::PlayFireMontage()
{
	// Play fire animation
	if (WeaponStructure.FireMontage)
	{
		
		if (CharacterRef)
		{
			UAnimInstance* AnimInstance = CharacterRef->GetMesh()->GetAnimInstance();
			if (AnimInstance)
			{
				AnimInstance->Montage_Play(WeaponStructure.FireMontage);
			}
		}
	}
}

void APWeapon::StartSniperBulletTravel(FVector Start, FVector End, float Speed)
{
	SniperBulletStart = Start;
	SniperBulletEnd = End;
	SniperBulletElapsedTime = 0.0f;

	float Distance = FVector::Distance(Start, End);
	SniperBulletTravelTime = Distance / Speed;

	SniperBulletMesh->SetWorldLocation(Start);
	SniperBulletMesh->SetVisibility(true);

	// Enable slow motion
	UGameplayStatics::SetGlobalTimeDilation(GetWorld(), 0.1f);

	APlayerController* PC = Cast<APlayerController>(CharacterRef->GetController());
	if (PC)
	{
		PC->SetViewTargetWithBlend(this, 0.1f, EViewTargetBlendFunction::VTBlend_Cubic); // Weapon owns the camera
		SniperBulletCamera->SetActive(true);
	}

	// Start timer to move bullet
	GetWorldTimerManager().SetTimer(SniperBulletTimerHandle, this, &APWeapon::UpdateSniperBulletTravel, 0.01f, true);
}

void APWeapon::UpdateSniperBulletTravel()
{
	SniperBulletElapsedTime += 0.01f;

	float Alpha = SniperBulletElapsedTime / SniperBulletTravelTime;
	FVector NewLocation = FMath::Lerp(SniperBulletStart, SniperBulletEnd, Alpha);
	SniperBulletMesh->SetWorldLocation(NewLocation);

	if (Alpha >= 1.0f)
	{
		// Stop movement timer
		GetWorldTimerManager().ClearTimer(SniperBulletTimerHandle);

		// Keep bullet visible at impact point
		SniperBulletMesh->SetWorldLocation(SniperBulletEnd);

		// Trigger effects now
		UGameplayStatics::SetGlobalTimeDilation(GetWorld(), 0.3f); // Optional pause on hit
		PlayFireEffects();
		PlayFireMontage();
		ImpactEffects();

		SniperBulletMesh->SetVisibility(false);

		// Delay reset after a cinematic hold (e.g., 2.5 seconds in slow-mo)
		GetWorldTimerManager().SetTimer(
			SniperCamHoldTimerHandle,
			this,
			&APWeapon::ResetSniperCamAndBullet,
			1.5f, // Duration in *dilated* time
			false
		);
	}
}

void APWeapon::ResetSniperCamAndBullet()
{
	

	// Restore normal time
	UGameplayStatics::SetGlobalTimeDilation(GetWorld(), 1.0f);
	
	SniperBulletCamera->SetFieldOfView(150.f);

	// Reset camera to character
	APlayerController* PC = Cast<APlayerController>(CharacterRef->GetController());
	if (PC && CharacterRef)
	{
		PC->SetViewTargetWithBlend(CharacterRef, 0.25f, EViewTargetBlendFunction::VTBlend_Cubic);
		SniperBulletCamera->SetActive(false);
	}
}