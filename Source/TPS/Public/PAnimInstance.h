// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "PAnimInstance.generated.h"

enum class EWeaponTypes : uint8;
/**
 * 
 */
UCLASS()
class TPS_API UPAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable)
	void UpdateAnimationProperties(float DeltaTtime);

	virtual void NativeInitializeAnimation() override;

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	class APCharacter* PCharacter;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	class AAIBaseClass* ECharacter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite,  Category = "_RCShooter | Movement", meta = (AllowPrivateAccess = "true"))
	float MovementOffsetYaw;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Player|Movement", meta = (AllowPrivateAccess = true))
	float Speed;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Player|Movement", meta = (AllowPrivateAccess = true))
	FVector PlayerVelocity;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Player|Movement", meta = (AllowPrivateAccess = true))
	bool bIsInAir;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Player|Movement", meta = (AllowPrivateAccess = true))
	bool bIsAccelerating;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Player|Movement", meta = (AllowPrivateAccess = true))
	bool bIsCrouched;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Player|Movement", meta = (AllowPrivateAccess = true))
	bool bIsEquiping;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Player|Movement", meta = (AllowPrivateAccess = true))
	bool bIsSprinting;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Player|Movement", meta = (AllowPrivateAccess = true))
	bool bIsWalking;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Player|Movement", meta = (AllowPrivateAccess = true))
	bool bIsProning;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Player|Movement", meta = (AllowPrivateAccess = true))
	bool bIsAiming;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Player|Movement", meta = (AllowPrivateAccess = true))
	bool bIsDead;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "_RCShooter | Weapons", meta = (AllowPrivateAccess = "true"))
	EWeaponTypes CurrentWeaponEnum;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Player|Movement", meta = (AllowPrivateAccess = true))
	bool bIsShieldAbilityActive;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "_RCShooter | Weapons", meta = (AllowPrivateAccess = "true"))
	FRotator AimOffset;
	
};
