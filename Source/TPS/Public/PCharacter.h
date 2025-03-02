// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PCharacter.generated.h"

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

	UFUNCTION(BlueprintCallable)
	void ToggleCamera();

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

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	FORCEINLINE USpringArmComponent* GetSpringArm() const { return SpringArmComp; }
	
};
