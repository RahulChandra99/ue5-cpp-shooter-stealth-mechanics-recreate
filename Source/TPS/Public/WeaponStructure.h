#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/Texture2D.h"
#include "PhysicalMaterials/PhysicalMaterial.h"
#include "WeaponStructure.generated.h"

class UNiagaraSystem;
class UParticleSystem;
class USoundBase;
class APWeapon;
class UCameraShakeBase;
class UAnimMontage;
enum class EWeaponTypes : uint8;

/**
 * Structure to define a weapon and all of its gameplay and cosmetic properties
 */
USTRUCT(BlueprintType)
struct FWeaponStructure
{
	GENERATED_BODY()

	/** ===========================
	*		Basic Weapon Info
	*  =========================== */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon | Info")
	FName WeaponName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon | Info")
	EWeaponTypes WeaponEnum;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon | Info")
	TObjectPtr<APWeapon> WeaponClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon | Info")
	bool bIsMeleeWeapon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon | Info")
	bool bIsAutomatic;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon | Info")
	TObjectPtr<UTexture2D> WeaponUIImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon | Info")
	UTexture2D* CrosshairImage;

	/** ===========================
	*		Ammo & Weapon Stats
	*  =========================== */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon | Stats")
	int32 MagSize;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon | Stats")
	int32 CurrentAmmo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon | Stats")
	float Damage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon | Stats")
	float ShootingRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon | Stats")
	TSubclassOf<UDamageType> DamageType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon | Stats")
	int32 BulletsPerShot = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon | Stats")
	float FireRate = 0.2f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon | Stats")
	bool bIsBurstFire = false;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon | Stats")
	bool bIsAutoReload = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon | Stats")
	int32 BurstCount = 3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon | Stats")
	float ReloadTime = 2.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon | Stats")
	bool bIsSequentialReload = false;

	/** ===========================
	*		Recoil & Accuracy
	*  =========================== */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon | Recoil")
	float VerticalRecoil = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon | Recoil")
	float HorizontalRecoil = 0.5f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon | Accuracy")
	float BulletSpread = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon | Accuracy")
	float SpreadIncreasePerShot = 0.2f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon | Accuracy")
	float MaxSpread = 3.0f;

	/** ===========================
	*		Aiming
	*  =========================== */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon | Aiming")
	bool bCanAim = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon | Aiming")
	float AimedFOV = 60.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon | Aiming")
	float AimInterpSpeed = 10.0f;

	/** ===========================
	*		Visual FX
	*  =========================== */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon | FX | Muzzle")
	UNiagaraSystem* MuzzleEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon | FX | Muzzle")
	UNiagaraSystem* BulletMuzzleEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon | FX | Muzzle")
	FName MuzzleSocketName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon | FX | Tracer")
	UParticleSystem* TracerEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon | FX | Tracer")
	FName TracerTargetName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon | FX | Tracer")
	UNiagaraSystem* TrailEffect;

	/** ===========================
	*		Impact FX
	*  =========================== */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon | FX | Impact")
	UNiagaraSystem* DefaultImpactEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon | FX | Impact")
	UParticleSystem* FleshImpactEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon | FX | Impact")
	TMap<UPhysicalMaterial*, UNiagaraSystem*> ImpactEffectsPerSurface;

	/** ===========================
	*		Audio FX
	*  =========================== */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon | Audio")
	USoundBase* FireSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon | Audio")
	USoundBase* ReloadSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon | Audio")
	USoundBase* EmptyClipSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon | Audio")
	TMap<UPhysicalMaterial*, USoundBase*> ImpactSoundsPerSurface;

	/** ===========================
	*		Camera & Feedback
	*  =========================== */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon | Camera")
	TSubclassOf<UCameraShakeBase> FireCamShake;

	/** ===========================
	*		Animations
	*  =========================== */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon | Animation")
	UAnimMontage* FireMontage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon | Animation")
	UAnimMontage* ReloadMontage;
	

	/** ===========================
	*		Splash Damage (for explosive weapons)
	*  =========================== */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon | Damage")
	float SplashRadius = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon | Damage")
	float SplashDamage = 0.0f;
};
