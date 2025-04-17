// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WeaponStructure.h"
#include "GameFramework/Actor.h"
#include "Weapons/WeaponDataAsset.h"
#include "PWeapon.generated.h"


class UCameraComponent;
class UWidget;
class APCharacter;
class USphereComponent;

UCLASS()
class TPS_API APWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	APWeapon();
	
	UFUNCTION(BlueprintCallable, Category="_RCShooter | Weapon")
	void Fire();

	void StartFire(AActor* MyOwner);
	void ResetShotgunCooldown();

	void StopFire();
	void AutomaticFire();
	void Reload();
	void ImpactEffects();

	UPROPERTY()
	ACharacter* CharacterRef;

	UPROPERTY()
	APCharacter* PCharacterRef;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "_RCShooter | Weapons")
	USkeletalMeshComponent* MeshComponent;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "_RCShooter | Weapons")
	TObjectPtr<UWeaponDataAsset> WeaponAsset;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "_RCShooter | Weapons")
	UStaticMeshComponent* SniperBulletMesh;

	UPROPERTY(VisibleAnywhere, Category="Sniper")
	UCameraComponent* SniperBulletCamera;
	
	FWeaponStructure WeaponStructure;
	FTimerHandle TimerHandle_ShotgunDelay;
	bool bIsShotgunFiring;

	UFUNCTION(BlueprintCallable)
	int32 GetCurrentAmmo();

	UFUNCTION(BlueprintCallable)
	int32 GetWeaponMagzine();

	UFUNCTION(BlueprintCallable)
	FORCEINLINE bool GetIsReloading() const { return bIsReloading;}

	int32 CurrentMagzineAmmo;
	int32 CurrentTotalMagzine;

protected:

	virtual void BeginPlay() override;

	bool bIsReloading = false;

	

private:

	FTimerHandle TimerHandle_TimeBetweenShots;

	FVector TracerEndPoint;

	void PlayFireEffects();
	void PlayFireMontage();
	void StartSniperBulletTravel(FVector Start, FVector End, float Speed);
	void UpdateSniperBulletTravel();
	void ResetSniperCamAndBullet();

	FVector SniperBulletStart;
	FVector SniperBulletEnd;
	float SniperBulletTravelTime = 1.0f;
	float SniperBulletElapsedTime = 0.0f;
	FTimerHandle SniperBulletTimerHandle;
	FTimerHandle SniperCamHoldTimerHandle;
	AActor* CachedHitActor;
	FHitResult CachedHitResult;
	FVector CachedShotDirection;
};
