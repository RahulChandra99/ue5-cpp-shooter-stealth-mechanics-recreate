// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "DashAbility.generated.h"

class UNiagaraSystem;
class APCharacter;
/**
 * 
 */
UCLASS()
class TPS_API UDashAbility : public UGameplayAbility
{
	GENERATED_BODY()

	UPROPERTY()
	APCharacter* PlayerCharacter;

	UFUNCTION(BlueprintCallable)
	void ActiveDashAbility(AActor* AbilityOwner);

	UFUNCTION(BlueprintCallable)
	void EndDashAbility();
	
	UPROPERTY(EditAnywhere, Category="Components")
	TObjectPtr<USoundBase> DashSoundCue;

	UPROPERTY(EditAnywhere, Category="Components")
	TObjectPtr<UNiagaraSystem> DashNiagaraSystem;

	UPROPERTY(EditAnywhere)
	float DistanceToTeleportTo = 700.f;
	
};
