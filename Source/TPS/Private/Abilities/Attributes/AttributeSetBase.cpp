// Fill out your copyright notice in the Description page of Project Settings.


#include "Abilities/Attributes/AttributeSetBase.h"
#include "GameplayEffectExtension.h"
#include "GameplayEffectTypes.h"
#include "GameplayEffect.h"

UAttributeSetBase::UAttributeSetBase()
	:Health(200.f),
	MaxHealth(200.f)
{
	
}

void UAttributeSetBase::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
	if (Data.EvaluatedData.Attribute.GetUProperty() == FindFieldChecked<FProperty>(UAttributeSetBase::StaticClass(), GET_MEMBER_NAME_CHECKED(UAttributeSetBase, Health)))
	{
		Health.SetCurrentValue(FMath::Clamp(Health.GetCurrentValue(),0,MaxHealth.GetCurrentValue()));
		UE_LOG(LogTemp, Warning, TEXT("Ouch, I took some damage, now my health is: %f"), Health.GetCurrentValue());

		OnHealthChanged.Broadcast(Health.GetCurrentValue(), MaxHealth.GetCurrentValue());
	}
	
}
