// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AIBaseClass.generated.h"

class UHealthComponent;

UCLASS()
class TPS_API AAIBaseClass : public ACharacter
{
	GENERATED_BODY()

public:
	AAIBaseClass();

	UPROPERTY(EditDefaultsOnly, Category = "Combat")
	TSubclassOf<class APWeapon> WeaponClass;

	FORCEINLINE bool GetDead() const { return bIsDead; }


	UPROPERTY()
	APWeapon* EquippedWeapon = nullptr;

	UPROPERTY(EditDefaultsOnly, Category = "Combat")
	FName WeaponSocketName = "WeaponSocket";

	FTimerHandle ShootingTimerHandle;
	ACharacter* TargetPlayer = nullptr;

	void StartShootingAtPlayer(ACharacter* Player);
	void StopShooting();
	void Shoot();
	void RotateTowardsPlayer(float DeltaTime);

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TObjectPtr<USkeletalMeshComponent> GunMesh;
	

	UFUNCTION()
	void SpawnWeapon();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "_RCShooter | Movement", meta = (AllowPrivateAccess = "true"))
	bool bIsDead;

	TObjectPtr<UHealthComponent> HealthComponent;

	
	

	


	UFUNCTION()
	void OnHealthChanged(UHealthComponent* HealthComp,
	float Health,
	float HealthData,
	const class UDamageType* DamageType,
	class AController* InstigatedBy,
	AActor* DamageCauser);

public:	
	virtual void Tick(float DeltaTime) override;
	void StartShooting();
};
