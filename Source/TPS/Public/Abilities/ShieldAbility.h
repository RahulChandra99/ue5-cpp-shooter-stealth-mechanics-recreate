// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "ShieldAbility.generated.h"

class APCharacter;
class UNiagaraComponent;
class UNiagaraSystem;
/**
 * 
 */
UCLASS()
class TPS_API UShieldAbility : public UGameplayAbility
{
	GENERATED_BODY()


protected:

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="_RCShooter | Abilities")
	UNiagaraSystem* ShieldNS;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="_RCShooter | Abilities")
	FName ShieldSocketName;
	

	UPROPERTY()
	TObjectPtr<UNiagaraComponent> ShieldEffectRef;

	UPROPERTY()
	APCharacter* PlayerCharacter;

	UFUNCTION(BlueprintCallable)
	void ActiveShieldAbility(AActor* AbilityOwner);

	UFUNCTION(BlueprintCallable)
	void EndShieldAbility();
};
