// Fill out your copyright notice in the Description page of Project Settings.


#include "Abilities/KnifeMeleeAbility.h"

#include "Debugger.h"
#include "PCharacter.h"
#include "PWeapon.h"
#include "GameFramework/Character.h"

void UKnifeMeleeAbility::ActiveKnifeAbility(AActor* AbilityOwner)
{
	PlayerCharacter = Cast<APCharacter>(AbilityOwner);
	if (!PlayerCharacter) return;
	PlayerCharacter->ToggleWeaponVisibility();

	PlayerCharacter->bIsKnifeAbilityActive = true;
		
}


void UKnifeMeleeAbility::EndKnifeAbility()
{
	PlayerCharacter->ToggleWeaponVisibility();
	PlayerCharacter->bIsKnifeAbilityActive = false;
	
}
