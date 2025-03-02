// Fill out your copyright notice in the Description page of Project Settings.


#include "PAnimInstance.h"

#include "PCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"

void UPAnimInstance::UpdateAnimationProperties(float DeltaTtime)
{
	if(PCharacter == nullptr)
	{
		PCharacter = Cast<APCharacter>(TryGetPawnOwner());
	}

	if(PCharacter)
	{
		FVector Velocity{PCharacter->GetVelocity()};
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

		PlayerVelocity = PCharacter->GetCharacterMovement()->Velocity;

		bIsSprinting = PCharacter->GetSprinting();

		bIsWalking = PCharacter->GetWalking();
	}
}

void UPAnimInstance::NativeInitializeAnimation()
{
	PCharacter = Cast<APCharacter>(TryGetPawnOwner());
}
