// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WeaponTypes.h"
#include "Abilities/KnifeMeleeAbility.h"
#include "GameFramework/Character.h"
#include "PCharacter.generated.h"

class UAttributeSetBase;
class UShieldAbility;
class UInvisibilityAbility;
class UNiagaraSystem;
class UCustomAbilitySystemComponent;
class UHealthComponent;
class APWeapon;
class UCameraComponent;
class USpringArmComponent;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnWeaponFired);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWeaponChanged,APWeapon*,NewWeapon);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnWeaponReload);

UCLASS()
class TPS_API APCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	APCharacter();

	UPROPERTY(BlueprintAssignable, Category = "Weapon")
	FOnWeaponFired OnWeaponFired;

	UPROPERTY(BlueprintAssignable, Category="Weapon")
	FOnWeaponChanged OnWeaponChanged;

	UPROPERTY(BlueprintAssignable, Category="Weapon")
	FOnWeaponReload OnWeaponReload;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Character Movement
	void MoveForward(float Value);
	void MoveRight(float Value);
	void TurnAtRate(float Rate);
	void LookUpAtRate(float Rate);
	void SprintStart();
	void SprintEnd();
	void Walk();
	void ToggleCrouch();
	void ToggleProne();

	FTimerHandle EquipDelayHandle;

	
	// Camera Handling
	void ToggleCamera();
	
	// Weapon Handling
	void EquipWeapon(EWeaponTypes NewWeapon);
	void HolsterAllWeapons();
	void AttachCurrentWeapon();
	void SelectWeapon1();
	void SelectWeapon2();
	void SelectWeapon3();
	void SelectWeapon4();
	void SelectWeapon5();
	void SelectWeapon6();
	void SelectWeapon7();
	void HolsterWeapons();
	void LMBShoot();
	void LMBShootReleased();
	void RMBADS();
	void RMBUnADS();
	void Reload();

	void Interact();
	
	FName PrimaryEquipSocket, SecondaryEquipSocket;
	

	// View Location Override
	virtual FVector GetPawnViewLocation() const override;

protected:
	UPROPERTY(EditAnywhere, Category="_RCShooter | Weapons")
	TArray<FName> EquipSockets;

	UPROPERTY(EditAnywhere, Category="_RCShooter | Weapons")
	TArray<FName> HolsterSockets;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Getters
	FORCEINLINE USpringArmComponent* GetSpringArm() const { return SpringArmComp; }
	FORCEINLINE bool GetSprinting() const { return bIsSprinting; }
	FORCEINLINE bool GetWalking() const { return bIsWalking; }
	FORCEINLINE bool GetAiming() const { return bIsAiming; }
	FORCEINLINE bool GetProning() const { return bIsProning; }
	FORCEINLINE bool GetDead() const { return bIsDead; }
	FORCEINLINE bool GetIsEquiping() const { return bIsEquiping; }
	FORCEINLINE bool GetShieldAbility() const { return bIsShieldAbilityActive; }
	FORCEINLINE EWeaponTypes GetWeaponTypeEnum() const { return CurrentWeaponEnum ;}

	UFUNCTION(BlueprintCallable)
	FORCEINLINE APWeapon* GetCurrentWeapon() const { return CurrentWeapon ;}


	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "_RCShooter | Ability")
	bool bIsShieldAbilityActive;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "_RCShooter | Ability")
	bool bIsKnifeAbilityActive;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="_RCShooter | Abilities")
	TObjectPtr<UCapsuleComponent> KnifeCollider;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "_RCShooter | Attributes")
	UAttributeSetBase* AttributeSetBaseComp;
	

	UFUNCTION()
	void ToggleWeaponVisibility();

	UFUNCTION()
	void PerformKnifeMeleeTrace();

	
	
protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="_RCShooter | Components")
	TSubclassOf<UUserWidget> SniperReticleWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="_RCShooter | Components")
	TSubclassOf<UUserWidget> MainWidgetClass;

	UUserWidget* ReticleWidget;
	UUserWidget* InGameWidget;

#pragma region Abilities

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category= "_RCShooter | Abilites")
	TObjectPtr<UCustomAbilitySystemComponent> CustomAbilitySystemComponent;

	UFUNCTION()
	void ActivateShieldAbility();

	UFUNCTION()
	void ActivateMeleeAbility();

	UFUNCTION()
	void ActivateInvisibleAbility();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category= "_RCShooter | Abilites")
	TSubclassOf<UGameplayAbility> ShieldAbilityClass;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category= "_RCShooter | Abilites")
	TSubclassOf<UGameplayAbility> KnifeMeleeAbilityClass;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category= "_RCShooter | Abilites")
	TSubclassOf<UGameplayAbility> InvisibleAbilityClass;

	UFUNCTION()
	void GiveAbilities();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="_RCShooter | Abilities")
	TObjectPtr<USkeletalMeshComponent> KnifeMeshComponent;

	
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="_RCShooter | Abilities")
	TObjectPtr<UParticleSystem> KnifeHitEffect;


	UFUNCTION(BlueprintCallable, Category="_RCShooter | Abilities")
	void TeleportForward(float Distance);
    
	UFUNCTION(BlueprintImplementableEvent, Category = "_RCShooter | Abilities")
	void OnTeleportComplete();
    	
	UFUNCTION(BlueprintCallable, Category = "_RCShooter | Abilities")
	bool GetIsTeleporting() const { return bIsTeleporting; }
    
	FVector StartLocation;         
	FVector TargetLocation;       
	float ElapsedTime = 0.0f;      
	bool bIsTeleporting = false;   
	FTimerHandle TeleportTimerHandle;
    
	UPROPERTY(EditAnywhere, Category = "_RCShooter | Abilities | Dash")
	float TeleportTime = 0.4f;

#pragma endregion 

	


private:
	/** Camera Components **/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "_RCShooter | Camera", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UCameraComponent> TpCameraComp;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "_RCShooter | Camera", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UCameraComponent> FpCameraComp;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "_RCShooter | Camera", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<USpringArmComponent> SpringArmComp;

	/** Movement Properties **/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "_RCShooter | Movement", meta = (AllowPrivateAccess = "true"))
	float BaseTurnRate;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "_RCShooter | Movement", meta = (AllowPrivateAccess = "true"))
	float BaseLookUpRate;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "_RCShooter | Movement", meta = (AllowPrivateAccess = "true"))
	bool bIsCrouching;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "_RCShooter | Movement", meta = (AllowPrivateAccess = "true"))
	bool bIsSprinting;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "_RCShooter | Movement", meta = (AllowPrivateAccess = "true"))
	bool bIsProning;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "_RCShooter | Movement", meta = (AllowPrivateAccess = "true"))
	bool bIsWalking;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "_RCShooter | Movement", meta = (AllowPrivateAccess = "true"))
	bool bIsAiming;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "_RCShooter | Movement", meta = (AllowPrivateAccess = "true"))
	bool bIsDead;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "_RCShooter | Movement", meta = (AllowPrivateAccess = "true"))
	bool bIsEquiping;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "_RCShooter | Movement", meta = (AllowPrivateAccess = "true"))
	float NormalSpeed;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "_RCShooter | Movement", meta = (AllowPrivateAccess = "true"))
	float SprintSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "_RCShooter | Movement", meta = (AllowPrivateAccess = "true"))
	float WalkSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "_RCShooter | Movement", meta = (AllowPrivateAccess = "true"))
	float ProneSpeed;

	// Capsule Heights
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "_RCShooter | Movement", meta = (AllowPrivateAccess = "true"))
	float StandingCapsuleHeight;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "_RCShooter | Movement", meta = (AllowPrivateAccess = "true"))
	float CrouchCapsuleHeight;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "_RCShooter | Movement", meta = (AllowPrivateAccess = "true"))
	float ProneCapsuleHeight;

	// Camera Heights
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "_RCShooter | Movement", meta = (AllowPrivateAccess = "true"))
	FVector StandingSpringArmOffset;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "_RCShooter | Movement", meta = (AllowPrivateAccess = "true"))
	FVector CrouchSpringArmOffset;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "_RCShooter | Movement", meta = (AllowPrivateAccess = "true"))
	FVector ProneSpringArmOffset;

	// Current Target Values
	float TargetCapsuleHalfHeight;
	FVector TargetSprintArmSocketOffset;

	/** Camera State **/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "_RCShooter | Camera", meta = (AllowPrivateAccess = "true"))
	bool bIsFPActive;
	
	/** Weapon Properties **/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "_RCShooter | Camera", meta = (AllowPrivateAccess = "true"))
	bool bADS;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "_RCShooter | Camera", meta = (AllowPrivateAccess = "true"))
	float UnADSValue;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "_RCShooter | Camera", meta = (AllowPrivateAccess = "true"))
	float ADSValue;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "_RCShooter | Camera", meta = (AllowPrivateAccess = "true"))
	float SprintFOV;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "_RCShooter | Camera", meta = (AllowPrivateAccess = "true", ClampMin = 0.1, ClampMax = 100))
	float ADSSpeed;

	/** Weapon Management **/
	UPROPERTY(Replicated, VisibleAnywhere, BlueprintReadOnly, Category = "_RCShooter | Weapons", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<APWeapon> CurrentWeapon;

	UPROPERTY(Replicated, VisibleAnywhere, BlueprintReadOnly, Category = "_RCShooter | Weapons", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<APWeapon> CurrentWeapon2;
	

	// Array to store spawned weapons
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "_RCShooter | Weapons", meta = (AllowPrivateAccess = "true"))
	TArray<APWeapon*> WeaponsArray; // 0-pistol,1-pistol,2-rifle,3-shotgun
	

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "_RCShooter | Weapons", meta = (AllowPrivateAccess = "true"))
	EWeaponTypes CurrentWeaponEnum;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "_RCShooter | Weapons", meta = (AllowPrivateAccess = "true"))
	TArray<TSubclassOf<APWeapon>> WeaponClasses;// 0-pistol,1-pistol,2-rifle,3-shotgun,4-silenced pistol

	//Components
	
	TObjectPtr<UHealthComponent> HealthComponent;

	UFUNCTION()
	void OnHealthChanged(UHealthComponent* HealthComp,
	float Health,
	float HealthData,
	const class UDamageType* DamageType,
	class AController* InstigatedBy,
	AActor* DamageCauser);
	
	UFUNCTION()
	void OnHealthChangedd(float Health, float MaxHealth);

	

	

	UPROPERTY(EditAnywhere, Category="_RCShooter | Animations")
	TObjectPtr<UAnimMontage> DeathAnimationMontage;

	UPROPERTY(EditAnywhere, Category="_RCShooter | Animations")
	TObjectPtr<UAnimMontage> EquipWeaponAM;

	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName ="OnHealthChanged"))
	void BP_OnHealthChanged(float Health, float MaxHealth);

	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName ="OnDied"))
	void BP_Die();
};
