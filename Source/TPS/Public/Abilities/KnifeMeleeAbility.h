// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "KnifeMeleeAbility.generated.h"

class APWeapon;
class APCharacter;
/**
 * 
 */
UCLASS()
class TPS_API UKnifeMeleeAbility : public UGameplayAbility
{
	GENERATED_BODY()

protected:
	
	
	UPROPERTY()
	APCharacter* PlayerCharacter;

	UFUNCTION(BlueprintCallable)
	void ActiveKnifeAbility(AActor* AbilityOwner);

	UFUNCTION(BlueprintCallable)
	void EndKnifeAbility();

	
	
};
