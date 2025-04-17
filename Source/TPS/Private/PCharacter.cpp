// Fill out your copyright notice in the Description page of Project Settings.


#include "TPS/Public/PCharacter.h"

#include "AbilitySystemComponent.h"
#include "Debugger.h"
#include "PWeapon.h"
#include "WeaponTypes.h"
#include "Abilities/CustomAbilitySystemComponent.h"
#include "Abilities/ShieldAbility.h"
#include "Abilities/Attributes/AttributeSetBase.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/HealthComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/PawnMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameplayTagContainer.h"
#include "Blueprint/UserWidget.h"
#include "Kismet/GameplayStatics.h"
#include "Net/UnrealNetwork.h"
#include "TPS/TPS.h"

// Sets default values
APCharacter::APCharacter():
	BaseTurnRate(45.f),
	BaseLookUpRate(45.f),
	bIsFPActive(false),
	bIsCrouching(false),
	bIsProning(false),
	bIsSprinting(false),
	bIsWalking(false),
	ADSValue(50),
	ADSSpeed(70),
	NormalSpeed(300),
	WalkSpeed(150),
	SprintSpeed(600),
	ProneSpeed(50),
	CrouchCapsuleHeight(55.0f),
	ProneCapsuleHeight(30.0f),
	StandingCapsuleHeight(88.0f)
	
{
	PrimaryActorTick.bCanEverTick = true;

	SpringArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArmComp->SetupAttachment(RootComponent);
	SpringArmComp->bUsePawnControlRotation = true;
	SpringArmComp->TargetArmLength = 300.f;
	
	TpCameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("TPCamera"));
	TpCameraComp->SetupAttachment(SpringArmComp,USpringArmComponent::SocketName);
	TpCameraComp->bUsePawnControlRotation = false;

	FpCameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("FPCamera"));
	FpCameraComp->SetupAttachment(GetMesh(),TEXT("head"));
	FpCameraComp->bUsePawnControlRotation = true;

	GetMovementComponent()->GetNavAgentPropertiesRef().bCanCrouch = true;
	GetCapsuleComponent()->SetCollisionResponseToChannel(COLLISION_WEAPON, ECR_Ignore);
	
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = true;
	bUseControllerRotationRoll = false;

	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.f,540.f,0.f);
	GetCharacterMovement()->JumpZVelocity = 600.f;
	GetCharacterMovement()->AirControl = 0.2f;

	FpCameraComp->SetActive(false);
	TpCameraComp->SetActive(true);

	CurrentWeapon = nullptr;
	
	TargetCapsuleHalfHeight = StandingCapsuleHeight;
	TargetSprintArmSocketOffset = StandingSpringArmOffset;

	HealthComponent = CreateDefaultSubobject<UHealthComponent>("HealthComponent");

	CustomAbilitySystemComponent = CreateDefaultSubobject<UCustomAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	AttributeSetBaseComp = CreateDefaultSubobject<UAttributeSetBase>(TEXT("AttributeSetBaseComponent"));

	KnifeMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>("KnifeMesh");
	KnifeMeshComponent->SetupAttachment(GetMesh(),"KnifeSocket");
	KnifeMeshComponent->SetHiddenInGame(true);

	KnifeCollider = CreateDefaultSubobject<UCapsuleComponent>(TEXT("KnifeCollider"));
	KnifeCollider->SetupAttachment(KnifeMeshComponent);
	KnifeCollider->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	

}

// Called when the game starts or when spawned
void APCharacter::BeginPlay()
{
	Super::BeginPlay();

	HealthComponent->OnHealthChanged.AddDynamic(this, &APCharacter::OnHealthChanged);

	//Spawn Weapons
	EquipWeapon(EWeaponTypes::EWT_None);

	UnADSValue = TpCameraComp->FieldOfView;
	GetCharacterMovement()->MaxWalkSpeed = NormalSpeed;

	if(CustomAbilitySystemComponent)
	{
		GiveAbilities();
	}

	AttributeSetBaseComp->OnHealthChanged.AddDynamic(this, &APCharacter::OnHealthChangedd);

	if (SniperReticleWidgetClass)
	{
		ReticleWidget = CreateWidget<UUserWidget>(GetWorld(), SniperReticleWidgetClass);
		if (ReticleWidget)
		{
			ReticleWidget->AddToViewport();
			ReticleWidget->SetVisibility(ESlateVisibility::Hidden);
		}
	}

	if (MainWidgetClass)
	{
		InGameWidget = CreateWidget<UUserWidget>(GetWorld(), MainWidgetClass);
		if (InGameWidget)
		{
			InGameWidget->AddToViewport();
		}
	}
}

void APCharacter::MoveForward(float Value)
{
	if(Controller != nullptr && (Value != 0.0f))
	{
		const FRotator Rotation{Controller->GetControlRotation()};
		const FRotator YawRotation{0,Rotation.Yaw,0};

		const FVector Direction {FRotationMatrix{YawRotation}.GetUnitAxis(EAxis::X)};
		AddMovementInput(Direction, Value);
	}
}

void APCharacter::MoveRight(float Value)
{
	if(Controller != nullptr && (Value != 0.0f))
	{
		const FRotator Rotation{Controller->GetControlRotation()};
		const FRotator YawRotation{0,Rotation.Yaw,0};

		const FVector Direction {FRotationMatrix{YawRotation}.GetUnitAxis(EAxis::Y)};
		AddMovementInput(Direction, Value);
	}
}

void APCharacter::TurnAtRate(float Rate)
{
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void APCharacter::LookUpAtRate(float Rate)
{
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}


void APCharacter::ToggleCamera()
{
	bIsFPActive = !bIsFPActive;
	
	if(bIsFPActive)
	{
		FpCameraComp->SetActive(true);
		TpCameraComp->SetActive(false);
		bUseControllerRotationYaw = false;
		
	}
	else
	{
		TpCameraComp->SetActive(true);
		FpCameraComp->SetActive(false);
		bUseControllerRotationYaw = true;
	}
}

void APCharacter::ToggleCrouch()
{
	if (bIsProning) return; // Prevent toggling crouch while prone

	bIsCrouching = !bIsCrouching;

	if (bIsCrouching)
	{
		Crouch();
		GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;
		TargetCapsuleHalfHeight = CrouchCapsuleHeight;
		TargetSprintArmSocketOffset = CrouchSpringArmOffset;
	}
	else
	{
		UnCrouch();
		GetCharacterMovement()->MaxWalkSpeed = NormalSpeed;
		TargetCapsuleHalfHeight = StandingCapsuleHeight;
		TargetSprintArmSocketOffset = StandingSpringArmOffset;
	}
}

void APCharacter::ToggleProne()
{
	if (bIsCrouching) return; // Prevent toggling prone while crouching

	bIsProning = !bIsProning;

	if (bIsProning)
	{
		bIsCrouching = false; // Ensure crouch is off
		UnCrouch();
		GetCharacterMovement()->MaxWalkSpeed = ProneSpeed;
		TargetCapsuleHalfHeight = ProneCapsuleHeight;
		TargetSprintArmSocketOffset = ProneSpringArmOffset;
	}
	else
	{
		GetCharacterMovement()->MaxWalkSpeed = NormalSpeed;
		TargetCapsuleHalfHeight = StandingCapsuleHeight;
		TargetSprintArmSocketOffset = StandingSpringArmOffset;
	}
}

void APCharacter::SprintStart()
{
	if (bIsCrouching || bIsProning) return; // Can't sprint when crouched or prone

	bIsSprinting = true;
	//bUseControllerRotationYaw = false;

	GetCharacterMovement()->MaxWalkSpeed = SprintSpeed;
	
}

void APCharacter::SprintEnd()
{
	bIsSprinting = false;
	//bUseControllerRotationYaw = true;

	GetCharacterMovement()->MaxWalkSpeed = NormalSpeed;
}

void APCharacter::Walk()
{
	bIsWalking = !bIsWalking;

	if(bIsWalking)
	{
		GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;
	}
	else
	{
		GetCharacterMovement()->MaxWalkSpeed = NormalSpeed;
	}
}






void APCharacter::EquipWeapon(EWeaponTypes NewWeapon)
{
	
	CurrentWeaponEnum = NewWeapon;

	
	if(WeaponsArray.IsEmpty())
	{
		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = this;
		SpawnParams.Instigator = GetInstigator();
	
		for (int i = 0; i< WeaponClasses.Num(); i++)
		{
			APWeapon* WeaponToSpawn = GetWorld()->SpawnActor<APWeapon>(WeaponClasses[i],
				FVector::ZeroVector,
				FRotator::ZeroRotator,
				SpawnParams);
			WeaponsArray.AddUnique(WeaponToSpawn);
		}
		HolsterAllWeapons();
	}
	else
	{
		bIsEquiping = true;
		GetWorld()->GetTimerManager().SetTimer(EquipDelayHandle, this, &APCharacter::HolsterAllWeapons, 0.5f, false);
		
	}


}

void APCharacter::HolsterAllWeapons()
{
	//holster weapons
	CurrentWeapon = nullptr;
	CurrentWeapon2 = nullptr;
	ADSValue = 50;
	ADSSpeed = 20;
	
	//Holster Pistols
	WeaponsArray[0]->AttachToComponent(GetMesh(),
			FAttachmentTransformRules::SnapToTargetIncludingScale, HolsterSockets[0]);
	WeaponsArray[1]->AttachToComponent(GetMesh(),
		FAttachmentTransformRules::SnapToTargetIncludingScale, HolsterSockets[1]);

	//Holster Rifle
	WeaponsArray[2]->AttachToComponent(GetMesh(), 
	FAttachmentTransformRules::SnapToTargetIncludingScale, HolsterSockets[2]);

	//Holster Shotgun
	WeaponsArray[3]->AttachToComponent(GetMesh(),
		FAttachmentTransformRules::SnapToTargetIncludingScale, HolsterSockets[3]);
		
	//Holster Sniper
	WeaponsArray[4]->AttachToComponent(GetMesh(),
		FAttachmentTransformRules::SnapToTargetIncludingScale, HolsterSockets[4]);

	//Holster RocketLauncher
	WeaponsArray[5]->AttachToComponent(GetMesh(),
		FAttachmentTransformRules::SnapToTargetIncludingScale, HolsterSockets[5]);
		
	//Holster Axe
	WeaponsArray[6]->AttachToComponent(GetMesh(),
		FAttachmentTransformRules::SnapToTargetIncludingScale, HolsterSockets[6]);

	//Holster Shield
	WeaponsArray[7]->AttachToComponent(GetMesh(),
		FAttachmentTransformRules::SnapToTargetIncludingScale, HolsterSockets[7]);

	GetWorld()->GetTimerManager().SetTimer(EquipDelayHandle, this, &APCharacter::AttachCurrentWeapon, 0.7f, false);

}

void APCharacter::AttachCurrentWeapon()
{
	
	bIsEquiping = false;

	OnWeaponChanged.Broadcast(CurrentWeapon);
	
	switch (CurrentWeaponEnum)
	{
	case EWeaponTypes::EWT_None:

		//holster weapons

		HolsterAllWeapons();
		break;
		
	case EWeaponTypes::EWT_DualPistol:
		//equip Dual Pistol
			
		CurrentWeapon = WeaponsArray[0];
		CurrentWeapon2 = WeaponsArray[1];
		PrimaryEquipSocket = EquipSockets[0];
		SecondaryEquipSocket = EquipSockets[1];

		if (CurrentWeapon && CurrentWeapon2)
		{
			
			CurrentWeapon->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetIncludingScale, PrimaryEquipSocket);
			CurrentWeapon2->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetIncludingScale, SecondaryEquipSocket);
		}
		break;
	case EWeaponTypes::EWT_RifleHip:

		//equip Rifle
		
		CurrentWeapon = WeaponsArray[2];
		PrimaryEquipSocket = EquipSockets[2];

		if (CurrentWeapon)
		{
			CurrentWeapon->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetIncludingScale, PrimaryEquipSocket);

			
		}
		break;
	case EWeaponTypes::EWT_Sniper:

		//equip Rifle
		
			CurrentWeapon = WeaponsArray[4];
		PrimaryEquipSocket = EquipSockets[4];

		if (CurrentWeapon)
		{
			CurrentWeapon->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetIncludingScale, PrimaryEquipSocket);
			
		}
		break;
	case EWeaponTypes::EWT_RocketLauncher:

		//equip Rifle
		
			CurrentWeapon = WeaponsArray[5];
		PrimaryEquipSocket = EquipSockets[5];

		if (CurrentWeapon)
		{
			CurrentWeapon->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetIncludingScale, PrimaryEquipSocket);

			
		}
		break;
	case EWeaponTypes::EWT_Shotgun:

		//equip shotgun
		
			CurrentWeapon = WeaponsArray[3];
		PrimaryEquipSocket = EquipSockets[3];

		if (CurrentWeapon)
		{
			CurrentWeapon->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetIncludingScale, PrimaryEquipSocket);

			
		}
		break;
	case EWeaponTypes::EWT_PistolSilencer:

		//equip silenced pistol
		CurrentWeapon = WeaponsArray[1];
		PrimaryEquipSocket = EquipSockets[1];

		if (CurrentWeapon)
		{
			
			CurrentWeapon->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetIncludingScale, PrimaryEquipSocket);

			
		}
		break;
	
	case EWeaponTypes::EWT_Axe:

		//equip axe
		CurrentWeapon = WeaponsArray[6];
		CurrentWeapon2 = WeaponsArray[7];
		PrimaryEquipSocket = EquipSockets[6];
		SecondaryEquipSocket = EquipSockets[7];

		if (CurrentWeapon && CurrentWeapon2)
		{
			CurrentWeapon->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetIncludingScale, PrimaryEquipSocket);
			CurrentWeapon2->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetIncludingScale, SecondaryEquipSocket);
			
		}
		break;
	default:
		break;
	}

	if(CurrentWeapon)
	{
		if(CurrentWeapon->WeaponAsset)
		{
			ADSValue = CurrentWeapon->WeaponAsset->WeaponData.AimedFOV;
			ADSSpeed = CurrentWeapon->WeaponAsset->WeaponData.AimInterpSpeed;
		}
		
	}
	
		
}


void APCharacter::SelectWeapon1() { EquipWeapon(EWeaponTypes::EWT_PistolSilencer); }
//void APCharacter::SelectWeapon2() { EquipWeapon(EWeaponTypes::EWT_DualPistol); }
void APCharacter::SelectWeapon2() { EquipWeapon(EWeaponTypes::EWT_RifleHip); }
void APCharacter::SelectWeapon3() { EquipWeapon(EWeaponTypes::EWT_Shotgun); }
void APCharacter::SelectWeapon4() { EquipWeapon(EWeaponTypes::EWT_Sniper); }
void APCharacter::SelectWeapon5() { EquipWeapon(EWeaponTypes::EWT_RocketLauncher); }
void APCharacter::SelectWeapon6() { EquipWeapon(EWeaponTypes::EWT_Axe); }
void APCharacter::SelectWeapon7() {  }
void APCharacter::HolsterWeapons() { EquipWeapon(EWeaponTypes::EWT_None); }

void APCharacter::LMBShoot()
{
	
	if(CurrentWeapon != nullptr)
	{
		CurrentWeapon->StartFire(this);

		
	}
		
}

void APCharacter::LMBShootReleased()
{
	if(CurrentWeapon != nullptr)
		CurrentWeapon->StopFire();
}

void APCharacter::RMBADS()
{
	bADS = true;
	bIsAiming = bADS;

	if(CurrentWeaponEnum == EWeaponTypes::EWT_Sniper)
	{
		if(ReticleWidget)
		{
			ReticleWidget->SetVisibility(ESlateVisibility::Visible);
		}
	}

	SprintEnd();
}

void APCharacter::RMBUnADS()
{
	bADS = false;
	bIsAiming = bADS;

	if(CurrentWeaponEnum == EWeaponTypes::EWT_Sniper)
	{
		if(ReticleWidget)
		{
			ReticleWidget->SetVisibility(ESlateVisibility::Hidden);
		}
	}

}

void APCharacter::Reload()
{
	if(CurrentWeapon)
	{
		CurrentWeapon->Reload();
	}
}

void APCharacter::Interact()
{
	
}


void APCharacter::OnHealthChanged(UHealthComponent* HealthComp, float Health, float HealthData,
                                  const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser)
{
	if(Health <= 0.f && !bIsDead)
	{
		bIsDead = true;
		//Die Animation
		GetMovementComponent()->StopMovementImmediately();
		GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		DetachFromControllerPendingDestroy();
		SetLifeSpan(10.f);
			
	}	
}

void APCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(APCharacter, CurrentWeapon);
}

FVector APCharacter::GetPawnViewLocation() const
{
	if(TpCameraComp)
	{
		return TpCameraComp->GetComponentLocation();
	}

	return Super::GetPawnViewLocation();
}

void APCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	if (TpCameraComp)
	{
		float TargetFOV = UnADSValue;

		if (bADS)
		{
			TargetFOV = ADSValue;
		}
		else if (bIsSprinting)
		{
			TargetFOV = SprintFOV; // define this higher than UnADSValue
		}

		float CurrentFOV = FMath::FInterpTo(TpCameraComp->FieldOfView, TargetFOV, DeltaTime, ADSSpeed);
		TpCameraComp->SetFieldOfView(FMath::Clamp(CurrentFOV, FMath::Min3(ADSValue, UnADSValue, SprintFOV), FMath::Max3(ADSValue, UnADSValue, SprintFOV)));
	}

	// Smooth capsule height transition
	/*float NewCapsuleHeight = FMath::Lerp(GetCapsuleComponent()->GetUnscaledCapsuleHalfHeight(), TargetCapsuleHalfHeight, DeltaTime * 10.0f);
	GetCapsuleComponent()->SetCapsuleHalfHeight(NewCapsuleHeight);*/

	FVector SpringArmOffset = SpringArmComp->TargetOffset;
	SpringArmOffset = FMath::Lerp(SpringArmOffset, TargetSprintArmSocketOffset, DeltaTime * 5.0f);
	SpringArmComp->TargetOffset = SpringArmOffset;

	if (bIsTeleporting)
	{
		ElapsedTime += DeltaTime;
		
		float Alpha = FMath::Clamp(ElapsedTime / TeleportTime, 0.0f, 1.0f);
		
		float SmoothAlpha = FMath::InterpEaseInOut(0.0f, 1.0f, Alpha, 2.0f);
		FVector NewLocation = FMath::Lerp(StartLocation, TargetLocation, SmoothAlpha);

		SetActorLocation(NewLocation);

		if (Alpha >= 1.0f)
		{
			bIsTeleporting = false; 
			OnTeleportComplete(); 
		}
	}
}

// Called to bind functionality to input
void APCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	check(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward",this,&APCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight",this,&APCharacter::MoveRight);
	PlayerInputComponent->BindAxis("LookUp",this,&APCharacter::LookUpAtRate);
	PlayerInputComponent->BindAxis("Turn",this,&APCharacter::TurnAtRate);

	PlayerInputComponent->BindAction("Crouch",IE_Pressed,this,&APCharacter::ToggleCrouch);
	PlayerInputComponent->BindAction("Prone",IE_Pressed,this,&APCharacter::ToggleProne);
	PlayerInputComponent->BindAction("Sprint",IE_Pressed,this,&APCharacter::SprintStart);
	PlayerInputComponent->BindAction("Sprint",IE_Released,this,&APCharacter::SprintEnd);
	PlayerInputComponent->BindAction("Walk",IE_Pressed,this,&APCharacter::Walk);
	PlayerInputComponent->BindAction("Walk",IE_Released,this,&APCharacter::Walk);
	PlayerInputComponent->BindAction("Jump",IE_Pressed,this,&ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump",IE_Released,this,&ACharacter::StopJumping);
	PlayerInputComponent->BindAction("ToggleCamera",IE_Pressed,this,&APCharacter::ToggleCamera);

	PlayerInputComponent->BindAction("SelectWeapon1", IE_Pressed, this, &APCharacter::SelectWeapon1);
	PlayerInputComponent->BindAction("SelectWeapon2", IE_Pressed, this, &APCharacter::SelectWeapon2);
	PlayerInputComponent->BindAction("SelectWeapon3", IE_Pressed, this, &APCharacter::SelectWeapon3);
	PlayerInputComponent->BindAction("SelectWeapon4", IE_Pressed, this, &APCharacter::SelectWeapon4);
	PlayerInputComponent->BindAction("SelectWeapon5", IE_Pressed, this, &APCharacter::SelectWeapon5);
	PlayerInputComponent->BindAction("SelectWeapon6", IE_Pressed, this, &APCharacter::SelectWeapon6);
	PlayerInputComponent->BindAction("SelectWeapon7", IE_Pressed, this, &APCharacter::SelectWeapon7);
	PlayerInputComponent->BindAction("Holster", IE_Pressed, this, &APCharacter::HolsterWeapons);

	PlayerInputComponent->BindAction("Shoot", IE_Pressed, this, &APCharacter::LMBShoot);
	PlayerInputComponent->BindAction("Reload", IE_Pressed, this, &APCharacter::Reload);
	PlayerInputComponent->BindAction("Shoot", IE_Released, this, &APCharacter::LMBShootReleased);
	PlayerInputComponent->BindAction("ADS", IE_Pressed, this, &APCharacter::RMBADS);
	PlayerInputComponent->BindAction("ADS", IE_Released, this, &APCharacter::RMBUnADS);

	PlayerInputComponent->BindAction("Interact", IE_Pressed, this, &APCharacter::Interact);

	//Abilities
	PlayerInputComponent->BindAction("ShieldAbility", IE_Pressed, this, &APCharacter::ActivateShieldAbility);
	PlayerInputComponent->BindAction("MeleeAbility", IE_Pressed, this, &APCharacter::ActivateMeleeAbility);
	PlayerInputComponent->BindAction("InvisibleAbility", IE_Pressed, this, &APCharacter::ActivateInvisibleAbility);
	
}

void APCharacter::ToggleWeaponVisibility()
{
	static bool bShouldShowKnife = true;
	
	if (KnifeMeshComponent)
	{
		KnifeMeshComponent->SetHiddenInGame(!bShouldShowKnife);
	}

	bShouldShowKnife = !bShouldShowKnife; 
	
	if (CurrentWeapon && CurrentWeapon->MeshComponent)
	{
		bool bIsHidden = CurrentWeapon->MeshComponent->bHiddenInGame;
		bool bNewHiddenState = !bIsHidden;

		CurrentWeapon->MeshComponent->SetHiddenInGame(bNewHiddenState);

		if (UCapsuleComponent* Capsule = CurrentWeapon->FindComponentByClass<UCapsuleComponent>())
		{
			Capsule->SetCollisionEnabled(bNewHiddenState ? ECollisionEnabled::NoCollision : ECollisionEnabled::QueryAndPhysics);
		}
		
	}

	if (CurrentWeapon2 && CurrentWeapon2->MeshComponent)
	{
		bool bIsHidden2 = CurrentWeapon2->MeshComponent->bHiddenInGame;
		bool bNewHiddenState2 = !bIsHidden2;

		CurrentWeapon2->MeshComponent->SetHiddenInGame(bNewHiddenState2);

		if (UCapsuleComponent* Capsule2 = CurrentWeapon2->FindComponentByClass<UCapsuleComponent>())
		{
			Capsule2->SetCollisionEnabled(bNewHiddenState2 ? ECollisionEnabled::NoCollision : ECollisionEnabled::QueryAndPhysics);
		}
		
	}

	
}



void APCharacter::ActivateShieldAbility()
{
	if(CustomAbilitySystemComponent)
	{
		CustomAbilitySystemComponent->TryActivateAbilityByClass(ShieldAbilityClass);
	}
}

void APCharacter::ActivateMeleeAbility()
{
	if(CustomAbilitySystemComponent)
	{
		if(!GetCharacterMovement()->IsFalling())
			CustomAbilitySystemComponent->TryActivateAbilityByClass(KnifeMeleeAbilityClass);
	}
}

void APCharacter::ActivateInvisibleAbility()
{
	if(CustomAbilitySystemComponent)
	{
		CustomAbilitySystemComponent->TryActivateAbilityByClass(InvisibleAbilityClass);
	}
}

void APCharacter::GiveAbilities()
{
	if (HasAuthority() && CustomAbilitySystemComponent)
	{
		CustomAbilitySystemComponent->GiveAbility(FGameplayAbilitySpec(ShieldAbilityClass, 0, -1));
		CustomAbilitySystemComponent->GiveAbility(FGameplayAbilitySpec(KnifeMeleeAbilityClass, 0, -1));
		CustomAbilitySystemComponent->GiveAbility(FGameplayAbilitySpec(InvisibleAbilityClass, 0, -1));
	}
}

void APCharacter::TeleportForward(float Distance)
{
	if (Controller != nullptr && GetWorld() != nullptr)
	{
		StartLocation = GetActorLocation();

		
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);
		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);

		
		FVector DesiredTargetLocation = StartLocation + (ForwardDirection * Distance);

		
		FHitResult HitResult;
		FVector TraceStart = DesiredTargetLocation + FVector(0, 0, 500); // Start trace above the target
		FVector TraceEnd = DesiredTargetLocation - FVector(0, 0, 500);   // End trace below the target
		FCollisionQueryParams TraceParams;
		TraceParams.bTraceComplex = true;
		TraceParams.AddIgnoredActor(this);
		

		if (GetWorld()->LineTraceSingleByChannel(HitResult, TraceStart, TraceEnd, ECC_Visibility, TraceParams))
		{
			TargetLocation = HitResult.ImpactPoint + FVector(0, 0, 50); // Offset slightly to avoid clipping
			UE_LOG(LogTemp, Warning, TEXT("Obstacle detected at: %s"), *HitResult.ImpactPoint.ToString());
		}
		else
		{
			
			TargetLocation = DesiredTargetLocation;
			UE_LOG(LogTemp, Warning, TEXT("No obstacle detected. Target: %s"), *TargetLocation.ToString());
		}

		
		bIsTeleporting = true;
		ElapsedTime = 0.0f;
	}
}

void APCharacter::PerformKnifeMeleeTrace()
{
	FVector Start = KnifeMeshComponent->GetSocketLocation("KnifeHiltSocket");
	FVector End = KnifeMeshComponent->GetSocketLocation("KnifeTipSocket");
	FHitResult Hit;
	FCollisionQueryParams Params;
	Params.AddIgnoredActor(this);

	bool bHit = GetWorld()->LineTraceSingleByChannel(
	   Hit,
	   Start,
	   End,
	   ECC_Pawn,
	   Params
   );

	if (bHit && !bIsDead)
	{
		FVector ImpactPoint = Hit.ImpactPoint;
		FVector ImpactNormal = Hit.ImpactNormal;
		
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), KnifeHitEffect, ImpactPoint, ImpactNormal.Rotation());
	}

	
}

void APCharacter::OnHealthChangedd(float Health, float MaxHealth)
{
	if(Health <= 0.f && !bIsDead)
	{
		bIsDead = true;
		BP_Die();
	}
	BP_OnHealthChanged(Health, MaxHealth);
}





