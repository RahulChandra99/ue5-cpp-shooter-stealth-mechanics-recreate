// Fill out your copyright notice in the Description page of Project Settings.


#include "Abilities/DashAbility.h"

#include "NiagaraFunctionLibrary.h"
#include "PCharacter.h"
#include "Kismet/GameplayStatics.h"



void UDashAbility::ActiveDashAbility(AActor* AbilityOwner)
{
	PlayerCharacter = Cast<APCharacter>(AbilityOwner);
	if (!PlayerCharacter) return;

	USkeletalMeshComponent* OwnerMesh = PlayerCharacter->GetMesh();
	if(!OwnerMesh) return;

	APlayerController* OwnerController = PlayerCharacter->GetLocalViewingPlayerController();
	if(!OwnerController) return;
	
	//set visibility false
	OwnerMesh->SetVisibility(false);
	
	//set collision no collision
	OwnerMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	
	//set ignore look input false
	OwnerController->SetIgnoreLookInput(true);
	
	// set ignore move input true
	OwnerController->SetIgnoreMoveInput(true);
	
	//spawn fx
	UNiagaraFunctionLibrary::SpawnSystemAtLocation(
		GetWorld(),
		DashNiagaraSystem,
		PlayerCharacter->GetActorLocation(),
		FRotator::ZeroRotator);
	
	//play sound
	UGameplayStatics::PlaySoundAtLocation(GetWorld(),DashSoundCue,PlayerCharacter->GetActorLocation());
	
	//teleport forward
	
}

void UDashAbility::EndDashAbility()
{
	USkeletalMeshComponent* OwnerMesh = PlayerCharacter->GetMesh();
	if(!OwnerMesh) return;

	APlayerController* OwnerController = PlayerCharacter->GetLocalViewingPlayerController();
	if(!OwnerController) return;

	//set visibility true
	OwnerMesh->SetVisibility(true);
	
	//set collision 
	OwnerMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	
	//set ignore look input 
	OwnerController->SetIgnoreLookInput(false);
	
	// set ignore move input 
	OwnerController->SetIgnoreMoveInput(false);
	
}
