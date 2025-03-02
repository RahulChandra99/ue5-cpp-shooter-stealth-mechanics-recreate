// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PCharacter.generated.h"

class APWeapon;
class UCameraComponent;
class USpringArmComponent;

UCLASS()
class TPS_API APCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void MoveForward(float Value);
	void MoveRight(float Value);
	void TurnAtRate(float Rate);
	void LookUpAtRate(float Rate);
	
	void BeginCrouch();
	void EndCrouch();
	
	void ToggleCamera();
	void ToggleCrouch();

	void Sprint();
	void Walk();

	void EquipWeapon(int WeaponIndex);
	void SelectWeapon1();
	void SelectWeapon2();

private:

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Player | Camera", meta = (AllowPrivateAccess = true))
	UCameraComponent* TpCameraComp;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Player | Camera", meta = (AllowPrivateAccess = true))
	UCameraComponent* FpCameraComp;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Player | Camera", meta = (AllowPrivateAccess = true))
	USpringArmComponent* SpringArmComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Player | Movement", meta = (AllowPrivateAccess = true))
	float BaseTurnRate;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Player | Movement", meta = (AllowPrivateAccess = true))
	float BaseLookUpRate;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Player | Movement", meta = (AllowPrivateAccess = true))
	bool bIsFPActive;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Player | Movement", meta = (AllowPrivateAccess = true))
	bool bIsCrouching;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Player | Movement", meta = (AllowPrivateAccess = true))
	bool bIsSprinting;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Player | Movement", meta = (AllowPrivateAccess = true))
	bool bIsWalking;

	//Weapons
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Player | Weapons", meta = (AllowPrivateAccess = true))
	TArray<TSubclassOf<APWeapon>> WeaponClasses;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Player | Weapons", meta = (AllowPrivateAccess = true))
	APWeapon* CurrentWeapon;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Player | Weapons", meta = (AllowPrivateAccess = true))
	int CurrentWeaponIndex;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	FORCEINLINE USpringArmComponent* GetSpringArm() const { return SpringArmComp; }

	FORCEINLINE bool GetSprinting() const { return bIsSprinting; }

	FORCEINLINE bool GetWalking() const { return bIsWalking; }
	
};
