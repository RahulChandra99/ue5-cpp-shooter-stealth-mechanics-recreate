// Fill out your copyright notice in the Description page of Project Settings.


#include "Abilities/ShieldAbility.h"

#include "Debugger.h"
#include "NiagaraFunctionLibrary.h"
#include "NiagaraComponent.h"
#include "PCharacter.h"
#include "GameFramework/Character.h"




void UShieldAbility::ActiveShieldAbility(AActor* AbilityOwner)
{
    PlayerCharacter = Cast<APCharacter>(AbilityOwner);
    if (!PlayerCharacter) return;
    

    if (ShieldNS && PlayerCharacter->GetMesh()->DoesSocketExist(ShieldSocketName))
    {
        Debug::Print("Working");

        PlayerCharacter->bIsShieldAbilityActive = true;

        FTransform SocketTransform = PlayerCharacter->GetMesh()->GetSocketTransform(ShieldSocketName);

        ShieldEffectRef = UNiagaraFunctionLibrary::SpawnSystemAttached(
            ShieldNS,
            PlayerCharacter->GetMesh(),
            ShieldSocketName,
            FVector::ZeroVector,
            FRotator::ZeroRotator,
            EAttachLocation::SnapToTarget,
            true
        );

        if (ShieldEffectRef)
        {
            ShieldEffectRef->SetRelativeScale3D(FVector(0.8f));
            ShieldEffectRef->Activate();
        }
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("ShieldAbility: Socket %s not found on character!"), *ShieldSocketName.ToString());
    }
}


void UShieldAbility::EndShieldAbility()
{
    Debug::Print("Shield ability ended");
    PlayerCharacter->bIsShieldAbilityActive = false;
    ShieldEffectRef->DestroyComponent();
    
}
