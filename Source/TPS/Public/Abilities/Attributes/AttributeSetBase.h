// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AttributeSetBase.generated.h"

/**
 * 
 */

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(
	FOnHealthChangedDelegate,
	float,
	Health,
	float,
	MaxHealth);
 
UCLASS()
class TPS_API UAttributeSetBase : public UAttributeSet
{
	GENERATED_BODY()

	UAttributeSetBase();
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="AttributeSetBase")
	FGameplayAttributeData Health;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="AttributeSetBase")
	FGameplayAttributeData MaxHealth;

	void PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data) override;

	FOnHealthChangedDelegate OnHealthChanged;
};
