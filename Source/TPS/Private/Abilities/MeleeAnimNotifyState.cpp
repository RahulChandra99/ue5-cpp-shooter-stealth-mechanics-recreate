// Fill out your copyright notice in the Description page of Project Settings.


#include "Abilities/MeleeAnimNotifyState.h"

#include "PCharacter.h"
#include "Components/CapsuleComponent.h"

void UMeleeAnimNotifyState::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation,
                                        float TotalDuration)
{

	APCharacter* PlayerCharacter = Cast<APCharacter>(MeshComp->GetOwner());
	if(PlayerCharacter)
	{
		PlayerCharacter->KnifeCollider->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
		PlayerCharacter->PerformKnifeMeleeTrace();
	}
}

void UMeleeAnimNotifyState::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation,
                                      const FAnimNotifyEventReference& EventReference)
{

	APCharacter* PlayerCharacter = Cast<APCharacter>(MeshComp->GetOwner());
	if(PlayerCharacter)
	{
		PlayerCharacter->KnifeCollider->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}
}
