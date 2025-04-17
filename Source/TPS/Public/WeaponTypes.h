#pragma once

#include "CoreMinimal.h"
#include "WeaponTypes.generated.h"

UENUM(BlueprintType)
enum class EWeaponTypes : uint8
{
	EWT_None UMETA(DisplayName = "None"),
	EWT_PistolSilencer UMETA(DisplayName = "PistolSilencer"),
	EWT_DualPistol UMETA(DisplayName = "DualPistol"),
	EWT_RifleHip UMETA(DisplayName = "Rifle"),
	EWT_Shotgun UMETA(DisplayName = "Shotgun"),
	EWT_Sniper UMETA(DisplayName = "Sniper"),
	EWT_RocketLauncher UMETA(DisplayName = "RocketLauncher"),
	EWT_Axe UMETA(DisplayName = "Axe"),
	EWT_Grenades UMETA(DisplayName = "Grenade")

};
