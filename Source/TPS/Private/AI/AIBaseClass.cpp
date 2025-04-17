// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/AIBaseClass.h"

#include "Debugger.h"
#include "PWeapon.h"
#include "AI/EnemyAIController.h"
#include "Components/CapsuleComponent.h"
#include "Components/HealthComponent.h"
#include "GameFramework/PawnMovementComponent.h"

AAIBaseClass::AAIBaseClass()
{
	PrimaryActorTick.bCanEverTick = true;

	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
	AIControllerClass = AEnemyAIController::StaticClass();
	
	GunMesh = CreateDefaultSubobject<USkeletalMeshComponent>("GunMesh");
	GunMesh->SetupAttachment(GetMesh(),WeaponSocketName);

	HealthComponent = CreateDefaultSubobject<UHealthComponent>("HealthComponent");

}

void AAIBaseClass::BeginPlay()
{
	Super::BeginPlay();

	HealthComponent->OnHealthChanged.AddDynamic(this, &AAIBaseClass::OnHealthChanged);
	
	SpawnWeapon();
	
}

void AAIBaseClass::SpawnWeapon()
{
	if (!WeaponClass) return;

	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	SpawnParams.Owner = this;

	EquippedWeapon = GetWorld()->SpawnActor<APWeapon>(WeaponClass, SpawnParams);
	if (EquippedWeapon)
	{
		EquippedWeapon->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetIncludingScale, WeaponSocketName);
	}
}

void AAIBaseClass::OnHealthChanged(UHealthComponent* HealthComp, float Health, float HealthData,
								  const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser)
{
	if(Health <= 0.f)
	{
		Debug::Print("Dead");
		//Die Animation
		GetMovementComponent()->StopMovementImmediately();
		GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		DetachFromControllerPendingDestroy();
		SetLifeSpan(10.f);
			
	}	
}


void AAIBaseClass::StartShooting()
{
	// Play fire animation, spawn projectiles, etc.
	Debug::Print("Bang Bang!");
}

void AAIBaseClass::StartShootingAtPlayer(ACharacter* Player)
{
	if (!Player || !EquippedWeapon) return;

	TargetPlayer = Player;

	GetWorldTimerManager().SetTimer(ShootingTimerHandle, this, &AAIBaseClass::Shoot, 0.5f, true);
}

void AAIBaseClass::StopShooting()
{
	GetWorldTimerManager().ClearTimer(ShootingTimerHandle);
	TargetPlayer = nullptr;
}

void AAIBaseClass::Shoot()
{
	if (!EquippedWeapon || !TargetPlayer) return;

	EquippedWeapon->Fire(); 
}

void AAIBaseClass::RotateTowardsPlayer(float DeltaTime)
{
	if (!TargetPlayer) return;

	FVector Direction = TargetPlayer->GetActorLocation() - GetActorLocation();
	FRotator LookAtRotation = FRotationMatrix::MakeFromX(Direction).Rotator();
	FRotator NewRotation = FMath::RInterpTo(GetActorRotation(), LookAtRotation, DeltaTime, 5.f);
	SetActorRotation(NewRotation);
}

void AAIBaseClass::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	RotateTowardsPlayer(DeltaTime);
}

