// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/RollingMines.h"

#include "Debugger.h"
#include "NavigationPath.h"
#include "NavigationSystem.h"
#include "Components/HealthComponent.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ARollingMines::ARollingMines():
bUseVelocityChange(false),
MovementForce(1000.f),
RequiredDistanceToTarget(100.f)
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>("MeshComp");
	RootComponent = MeshComp;
	MeshComp->SetSimulatePhysics(true);
	MeshComp->SetCanEverAffectNavigation(false);

	HealthComponent = CreateDefaultSubobject<UHealthComponent>("HealthComp");
	HealthComponent->OnHealthChanged.AddDynamic(this, &ARollingMines::HandleTakeDamage);

}

void ARollingMines::BeginPlay()
{
	Super::BeginPlay();

	NextPathPoint = GetNextPathPoint();
}

FVector ARollingMines::GetNextPathPoint()
{
	// Get player location
	ACharacter* PlayerPawn = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
	if (!PlayerPawn)
	{
		return GetActorLocation();
	}

	// Get Navigation System
	UNavigationSystemV1* NavSystem = FNavigationSystem::GetCurrent<UNavigationSystemV1>(GetWorld());
	if (!NavSystem)
	{
		return GetActorLocation();
	}

	// Find path to player
	UNavigationPath* NavPath = NavSystem->FindPathToActorSynchronously(GetWorld(), GetActorLocation(), PlayerPawn);
	if (NavPath && NavPath->PathPoints.Num() > 1)
	{
		// Return the next point in the path
		return NavPath->PathPoints[1];
	}

	// Failed to find path
	return GetActorLocation();
}





void ARollingMines::HandleTakeDamage(UHealthComponent* HealthComp, float Health, float HealthData,
	const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser)
{
	//Explode on hitpoints = 0

	Debug::Print(FString::Printf(TEXT("Health %s of %s"),*FString::SanitizeFloat(Health), *GetName()));
}

void ARollingMines::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	float DistanceToTarget = (GetActorLocation() - NextPathPoint).Size();
	
	if(DistanceToTarget <= RequiredDistanceToTarget)
	{
		NextPathPoint = GetNextPathPoint();

		DrawDebugString(GetWorld(), GetActorLocation(),"Target Reached");
	}
	else
	{
		//Keep moving towards next target

		FVector ForceDirection = NextPathPoint - GetActorLocation();
		ForceDirection.Normalize();
		ForceDirection *= MovementForce;

		MeshComp->AddForce(ForceDirection,NAME_None, bUseVelocityChange);

		DrawDebugDirectionalArrow(GetWorld(), GetActorLocation(), GetActorLocation() + ForceDirection, 32, FColor::Yellow, false, 0.f);
	}

	DrawDebugSphere(GetWorld(), NextPathPoint, 20,12,FColor::Yellow,false,0.f,0.f);
}

