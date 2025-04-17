// Fill out your copyright notice in the Description page of Project Settings.


#include "Abilities/InvisibilityAbility.h"

#include "PCharacter.h"

void UInvisibilityAbility::ActiveInvisibleAbility(AActor* AbilityOwner)
{
	PlayerCharacter = Cast<APCharacter>(AbilityOwner);
	if (!PlayerCharacter) return;

	USkeletalMeshComponent* OwnerMesh = PlayerCharacter->GetMesh();
	if (!OwnerMesh) return;

	OriginalOwnerMaterials.Empty();

	int32 MaterialCount = OwnerMesh->GetNumMaterials();
	for (int32 Index = 0; Index < MaterialCount; ++Index)
	{
		UMaterialInterface* Mat = OwnerMesh->GetMaterial(Index);
		if (Mat)
		{
			OwnerMesh->SetMaterial(Index,InvisibleMaterial);
			OriginalOwnerMaterials.Add(Mat);
		}
	}

	
	
}

void UInvisibilityAbility::EndInvisibleAbility()
{
	if (!PlayerCharacter) return;
	
	USkeletalMeshComponent* OwnerMesh = PlayerCharacter->GetMesh();
	if (!OwnerMesh) return;
	
	for(int32 Index = 0; Index < OriginalOwnerMaterials.Num() ; ++Index)
	{
		if(OriginalOwnerMaterials[Index])
		{
			OwnerMesh->SetMaterial(Index, OriginalOwnerMaterials[Index]);
		}
	}
}
