// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "InvisibilityAbility.generated.h"

class APCharacter;
/**
 * 
 */
UCLASS()
class TPS_API UInvisibilityAbility : public UGameplayAbility
{
	GENERATED_BODY()

public:

	UPROPERTY()
	APCharacter* PlayerCharacter;

	UFUNCTION(BlueprintCallable)
	void ActiveInvisibleAbility(AActor* AbilityOwner);

	UFUNCTION(BlueprintCallable)
	void EndInvisibleAbility();

	TArray<UMaterialInterface*> OriginalOwnerMaterials;

	UPROPERTY(EditAnywhere)
	UMaterialInterface* InvisibleMaterial;
	
};
