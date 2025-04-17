// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HealthComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_SixParams(FOnHealthChangedSignature,
	UHealthComponent*,HealthComp,
	float, Health,
	float, HealthData,
	const class UDamageType*, DamageType,
	class AController*, InstigatedBy,
	AActor*, DamageCauser);

UCLASS( ClassGroup=(RC), meta=(BlueprintSpawnableComponent) )
class TPS_API UHealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UHealthComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="RC | Health")
	float DefaultHealth;

	UPROPERTY(BlueprintReadOnly, Category="RC | Health")
	float CurrentHealth;
	
	UFUNCTION()
	void HandleTakeAnyDamage(AActor* DamagedActor, float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser );

public:

	UPROPERTY(BlueprintAssignable, Category="RC | Events")
	FOnHealthChangedSignature OnHealthChanged;
};
