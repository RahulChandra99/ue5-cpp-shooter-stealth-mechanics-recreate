// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "RollingMines.generated.h"

class UHealthComponent;

UCLASS()
class TPS_API ARollingMines : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ARollingMines();

protected:

	virtual void BeginPlay() override;
	
	UPROPERTY(VisibleDefaultsOnly, Category="Components")
	TObjectPtr<UStaticMeshComponent> MeshComp;

	UPROPERTY(VisibleDefaultsOnly, Category="Components")
	TObjectPtr<UHealthComponent> HealthComponent;

	UFUNCTION()
	FVector GetNextPathPoint();
	
	FVector NextPathPoint;

	UPROPERTY(EditAnywhere, Category="Components")
	float MovementForce;

	UPROPERTY(EditAnywhere, Category="Components")
	bool bUseVelocityChange;

	UPROPERTY(EditAnywhere, Category="Components")
	float RequiredDistanceToTarget;

	UFUNCTION()
	void HandleTakeDamage(UHealthComponent* HealthComp,
	float Health,
	float HealthData,
	const class UDamageType* DamageType,
	class AController* InstigatedBy,
	AActor* DamageCauser);	
	
public:

	virtual void Tick(float DeltaSeconds) override;

};
