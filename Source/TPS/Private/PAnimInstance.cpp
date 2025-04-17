// Fill out your copyright notice in the Description page of Project Settings.


#include "PAnimInstance.h"

#include "Debugger.h"
#include "PCharacter.h"
#include "AI/AIBaseClass.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"

void UPAnimInstance::NativeInitializeAnimation()
{
	PCharacter = Cast<APCharacter>(TryGetPawnOwner());
	ECharacter = Cast<AAIBaseClass>(TryGetPawnOwner());
}


void UPAnimInstance::UpdateAnimationProperties(float DeltaTtime)
{
	if(PCharacter == nullptr)
	{
		PCharacter = Cast<APCharacter>(TryGetPawnOwner());
	}
	if(ECharacter == nullptr)
	{
		ECharacter = Cast<AAIBaseClass>(TryGetPawnOwner());
	}

	if(PCharacter)
	{
		//Set Speed
		FVector Velocity = PCharacter->GetVelocity();
		Velocity.Z = 0;
		Speed = Velocity.Size();
		
		bIsInAir = PCharacter->GetCharacterMovement()->IsFalling();

		if(PCharacter->GetCharacterMovement()->GetCurrentAcceleration().Size() > 0.f)
		{
			bIsAccelerating = true;
		}
		else
		{
			bIsAccelerating = false;
		}

		bIsCrouched = PCharacter->GetCharacterMovement()->IsCrouching();
		
		bIsEquiping = PCharacter->GetIsEquiping();

		PlayerVelocity = PCharacter->GetCharacterMovement()->Velocity;

		bIsSprinting = PCharacter->GetSprinting();

		bIsProning = PCharacter->GetProning();

		bIsDead = PCharacter->GetDead();
		
		bIsWalking = PCharacter->GetWalking();
		
		CurrentWeaponEnum = PCharacter->GetWeaponTypeEnum();

		bIsAiming = PCharacter->GetAiming();

		FRotator AimRotation = PCharacter->GetBaseAimRotation();
		FRotator MovementRotation = UKismetMathLibrary::MakeRotFromX(
			PCharacter->GetVelocity());
		MovementOffsetYaw = UKismetMathLibrary::NormalizedDeltaRotator(
			MovementRotation,
			AimRotation).Yaw;


		FRotator ActorRotation = PCharacter->GetActorRotation();
		FRotator ControlRotation = PCharacter->GetControlRotation();
		FRotator AimOffsetRotation = UKismetMathLibrary::NormalizedDeltaRotator(ControlRotation, ActorRotation);
		
		AimOffset.Roll = AimOffsetRotation.Roll;
		AimOffset.Pitch = AimOffsetRotation.Pitch;
		AimOffset.Yaw = -AimOffsetRotation.Yaw;

		bIsShieldAbilityActive = PCharacter->GetShieldAbility();
	}
	
	if(ECharacter)
	{
		
		//Set Speed
		FVector Velocity = ECharacter->GetVelocity();
		Velocity.Z = 0;
		Speed = Velocity.Size();
		
		bIsInAir = ECharacter->GetCharacterMovement()->IsFalling();
		
		bIsDead = ECharacter->GetDead();
		
		bIsCrouched = ECharacter->GetCharacterMovement()->IsCrouching();

		PlayerVelocity = ECharacter->GetCharacterMovement()->Velocity;

		

		

		FRotator AimRotation = ECharacter->GetBaseAimRotation();
		FRotator MovementRotation = UKismetMathLibrary::MakeRotFromX(
			ECharacter->GetVelocity());
		MovementOffsetYaw = UKismetMathLibrary::NormalizedDeltaRotator(
			MovementRotation,
			AimRotation).Yaw;


		FRotator ActorRotation = ECharacter->GetActorRotation();
		FRotator ControlRotation = ECharacter->GetControlRotation();
		FRotator AimOffsetRotation = UKismetMathLibrary::NormalizedDeltaRotator(ControlRotation, ActorRotation);
		
		AimOffset.Roll = AimOffsetRotation.Roll;
		AimOffset.Pitch = AimOffsetRotation.Pitch;
		AimOffset.Yaw = -AimOffsetRotation.Yaw;

		
	}
}


