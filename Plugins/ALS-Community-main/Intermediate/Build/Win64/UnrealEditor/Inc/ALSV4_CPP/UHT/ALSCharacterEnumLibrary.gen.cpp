// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALSV4_CPP/Public/Library/ALSCharacterEnumLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeALSCharacterEnumLibrary() {}
// Cross Module References
	ALSV4_CPP_API UEnum* Z_Construct_UEnum_ALSV4_CPP_EALSAnimFeatureExample();
	ALSV4_CPP_API UEnum* Z_Construct_UEnum_ALSV4_CPP_EALSFootstepType();
	ALSV4_CPP_API UEnum* Z_Construct_UEnum_ALSV4_CPP_EALSGait();
	ALSV4_CPP_API UEnum* Z_Construct_UEnum_ALSV4_CPP_EALSGroundedEntryState();
	ALSV4_CPP_API UEnum* Z_Construct_UEnum_ALSV4_CPP_EALSHipsDirection();
	ALSV4_CPP_API UEnum* Z_Construct_UEnum_ALSV4_CPP_EALSMantleType();
	ALSV4_CPP_API UEnum* Z_Construct_UEnum_ALSV4_CPP_EALSMovementAction();
	ALSV4_CPP_API UEnum* Z_Construct_UEnum_ALSV4_CPP_EALSMovementDirection();
	ALSV4_CPP_API UEnum* Z_Construct_UEnum_ALSV4_CPP_EALSMovementState();
	ALSV4_CPP_API UEnum* Z_Construct_UEnum_ALSV4_CPP_EALSOverlayState();
	ALSV4_CPP_API UEnum* Z_Construct_UEnum_ALSV4_CPP_EALSRotationMode();
	ALSV4_CPP_API UEnum* Z_Construct_UEnum_ALSV4_CPP_EALSSpawnType();
	ALSV4_CPP_API UEnum* Z_Construct_UEnum_ALSV4_CPP_EALSStance();
	ALSV4_CPP_API UEnum* Z_Construct_UEnum_ALSV4_CPP_EALSViewMode();
	UPackage* Z_Construct_UPackage__Script_ALSV4_CPP();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EALSGait;
	static UEnum* EALSGait_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EALSGait.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EALSGait.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ALSV4_CPP_EALSGait, (UObject*)Z_Construct_UPackage__Script_ALSV4_CPP(), TEXT("EALSGait"));
		}
		return Z_Registration_Info_UEnum_EALSGait.OuterSingleton;
	}
	template<> ALSV4_CPP_API UEnum* StaticEnum<EALSGait>()
	{
		return EALSGait_StaticEnum();
	}
	struct Z_Construct_UEnum_ALSV4_CPP_EALSGait_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ALSV4_CPP_EALSGait_Statics::Enumerators[] = {
		{ "EALSGait::Walking", (int64)EALSGait::Walking },
		{ "EALSGait::Running", (int64)EALSGait::Running },
		{ "EALSGait::Sprinting", (int64)EALSGait::Sprinting },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ALSV4_CPP_EALSGait_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Character gait state. Note: Also edit related struct in ALSStructEnumLibrary if you add new enums\n */" },
#endif
		{ "ModuleRelativePath", "Public/Library/ALSCharacterEnumLibrary.h" },
		{ "Running.Name", "EALSGait::Running" },
		{ "ScriptName", "ALS_Gait" },
		{ "Sprinting.Name", "EALSGait::Sprinting" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Character gait state. Note: Also edit related struct in ALSStructEnumLibrary if you add new enums" },
#endif
		{ "Walking.Name", "EALSGait::Walking" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ALSV4_CPP_EALSGait_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ALSV4_CPP,
		nullptr,
		"EALSGait",
		"EALSGait",
		Z_Construct_UEnum_ALSV4_CPP_EALSGait_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ALSV4_CPP_EALSGait_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ALSV4_CPP_EALSGait_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ALSV4_CPP_EALSGait_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ALSV4_CPP_EALSGait()
	{
		if (!Z_Registration_Info_UEnum_EALSGait.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EALSGait.InnerSingleton, Z_Construct_UEnum_ALSV4_CPP_EALSGait_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EALSGait.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EALSMovementAction;
	static UEnum* EALSMovementAction_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EALSMovementAction.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EALSMovementAction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ALSV4_CPP_EALSMovementAction, (UObject*)Z_Construct_UPackage__Script_ALSV4_CPP(), TEXT("EALSMovementAction"));
		}
		return Z_Registration_Info_UEnum_EALSMovementAction.OuterSingleton;
	}
	template<> ALSV4_CPP_API UEnum* StaticEnum<EALSMovementAction>()
	{
		return EALSMovementAction_StaticEnum();
	}
	struct Z_Construct_UEnum_ALSV4_CPP_EALSMovementAction_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ALSV4_CPP_EALSMovementAction_Statics::Enumerators[] = {
		{ "EALSMovementAction::None", (int64)EALSMovementAction::None },
		{ "EALSMovementAction::LowMantle", (int64)EALSMovementAction::LowMantle },
		{ "EALSMovementAction::HighMantle", (int64)EALSMovementAction::HighMantle },
		{ "EALSMovementAction::Rolling", (int64)EALSMovementAction::Rolling },
		{ "EALSMovementAction::GettingUp", (int64)EALSMovementAction::GettingUp },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ALSV4_CPP_EALSMovementAction_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Character movement action state. Note: Also edit related struct in ALSStructEnumLibrary if you add new enums\n */" },
#endif
		{ "GettingUp.Name", "EALSMovementAction::GettingUp" },
		{ "HighMantle.Name", "EALSMovementAction::HighMantle" },
		{ "LowMantle.Name", "EALSMovementAction::LowMantle" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterEnumLibrary.h" },
		{ "None.Name", "EALSMovementAction::None" },
		{ "Rolling.Name", "EALSMovementAction::Rolling" },
		{ "ScriptName", "ALS_MovementAction" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Character movement action state. Note: Also edit related struct in ALSStructEnumLibrary if you add new enums" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ALSV4_CPP_EALSMovementAction_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ALSV4_CPP,
		nullptr,
		"EALSMovementAction",
		"EALSMovementAction",
		Z_Construct_UEnum_ALSV4_CPP_EALSMovementAction_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ALSV4_CPP_EALSMovementAction_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ALSV4_CPP_EALSMovementAction_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ALSV4_CPP_EALSMovementAction_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ALSV4_CPP_EALSMovementAction()
	{
		if (!Z_Registration_Info_UEnum_EALSMovementAction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EALSMovementAction.InnerSingleton, Z_Construct_UEnum_ALSV4_CPP_EALSMovementAction_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EALSMovementAction.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EALSMovementState;
	static UEnum* EALSMovementState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EALSMovementState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EALSMovementState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ALSV4_CPP_EALSMovementState, (UObject*)Z_Construct_UPackage__Script_ALSV4_CPP(), TEXT("EALSMovementState"));
		}
		return Z_Registration_Info_UEnum_EALSMovementState.OuterSingleton;
	}
	template<> ALSV4_CPP_API UEnum* StaticEnum<EALSMovementState>()
	{
		return EALSMovementState_StaticEnum();
	}
	struct Z_Construct_UEnum_ALSV4_CPP_EALSMovementState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ALSV4_CPP_EALSMovementState_Statics::Enumerators[] = {
		{ "EALSMovementState::None", (int64)EALSMovementState::None },
		{ "EALSMovementState::Grounded", (int64)EALSMovementState::Grounded },
		{ "EALSMovementState::InAir", (int64)EALSMovementState::InAir },
		{ "EALSMovementState::Mantling", (int64)EALSMovementState::Mantling },
		{ "EALSMovementState::Ragdoll", (int64)EALSMovementState::Ragdoll },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ALSV4_CPP_EALSMovementState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Character movement state. Note: Also edit related struct in ALSStructEnumLibrary if you add new enums\n */" },
#endif
		{ "Grounded.Name", "EALSMovementState::Grounded" },
		{ "InAir.Name", "EALSMovementState::InAir" },
		{ "Mantling.Name", "EALSMovementState::Mantling" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterEnumLibrary.h" },
		{ "None.Name", "EALSMovementState::None" },
		{ "Ragdoll.Name", "EALSMovementState::Ragdoll" },
		{ "ScriptName", "ALS_MovementState" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Character movement state. Note: Also edit related struct in ALSStructEnumLibrary if you add new enums" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ALSV4_CPP_EALSMovementState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ALSV4_CPP,
		nullptr,
		"EALSMovementState",
		"EALSMovementState",
		Z_Construct_UEnum_ALSV4_CPP_EALSMovementState_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ALSV4_CPP_EALSMovementState_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ALSV4_CPP_EALSMovementState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ALSV4_CPP_EALSMovementState_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ALSV4_CPP_EALSMovementState()
	{
		if (!Z_Registration_Info_UEnum_EALSMovementState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EALSMovementState.InnerSingleton, Z_Construct_UEnum_ALSV4_CPP_EALSMovementState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EALSMovementState.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EALSOverlayState;
	static UEnum* EALSOverlayState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EALSOverlayState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EALSOverlayState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ALSV4_CPP_EALSOverlayState, (UObject*)Z_Construct_UPackage__Script_ALSV4_CPP(), TEXT("EALSOverlayState"));
		}
		return Z_Registration_Info_UEnum_EALSOverlayState.OuterSingleton;
	}
	template<> ALSV4_CPP_API UEnum* StaticEnum<EALSOverlayState>()
	{
		return EALSOverlayState_StaticEnum();
	}
	struct Z_Construct_UEnum_ALSV4_CPP_EALSOverlayState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ALSV4_CPP_EALSOverlayState_Statics::Enumerators[] = {
		{ "EALSOverlayState::Default", (int64)EALSOverlayState::Default },
		{ "EALSOverlayState::Masculine", (int64)EALSOverlayState::Masculine },
		{ "EALSOverlayState::Feminine", (int64)EALSOverlayState::Feminine },
		{ "EALSOverlayState::Injured", (int64)EALSOverlayState::Injured },
		{ "EALSOverlayState::HandsTied", (int64)EALSOverlayState::HandsTied },
		{ "EALSOverlayState::Rifle", (int64)EALSOverlayState::Rifle },
		{ "EALSOverlayState::PistolOneHanded", (int64)EALSOverlayState::PistolOneHanded },
		{ "EALSOverlayState::PistolTwoHanded", (int64)EALSOverlayState::PistolTwoHanded },
		{ "EALSOverlayState::Bow", (int64)EALSOverlayState::Bow },
		{ "EALSOverlayState::Torch", (int64)EALSOverlayState::Torch },
		{ "EALSOverlayState::Binoculars", (int64)EALSOverlayState::Binoculars },
		{ "EALSOverlayState::Box", (int64)EALSOverlayState::Box },
		{ "EALSOverlayState::Barrel", (int64)EALSOverlayState::Barrel },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ALSV4_CPP_EALSOverlayState_Statics::Enum_MetaDataParams[] = {
		{ "Barrel.Name", "EALSOverlayState::Barrel" },
		{ "Binoculars.Name", "EALSOverlayState::Binoculars" },
		{ "BlueprintType", "true" },
		{ "Bow.Name", "EALSOverlayState::Bow" },
		{ "Box.Name", "EALSOverlayState::Box" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Character overlay state. Note: Also edit related struct in ALSStructEnumLibrary if you add new enums\n */" },
#endif
		{ "Default.Name", "EALSOverlayState::Default" },
		{ "Feminine.Name", "EALSOverlayState::Feminine" },
		{ "HandsTied.Name", "EALSOverlayState::HandsTied" },
		{ "Injured.Name", "EALSOverlayState::Injured" },
		{ "Masculine.Name", "EALSOverlayState::Masculine" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterEnumLibrary.h" },
		{ "PistolOneHanded.Name", "EALSOverlayState::PistolOneHanded" },
		{ "PistolTwoHanded.Name", "EALSOverlayState::PistolTwoHanded" },
		{ "Rifle.Name", "EALSOverlayState::Rifle" },
		{ "ScriptName", "ALS_OverlayState" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Character overlay state. Note: Also edit related struct in ALSStructEnumLibrary if you add new enums" },
#endif
		{ "Torch.Name", "EALSOverlayState::Torch" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ALSV4_CPP_EALSOverlayState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ALSV4_CPP,
		nullptr,
		"EALSOverlayState",
		"EALSOverlayState",
		Z_Construct_UEnum_ALSV4_CPP_EALSOverlayState_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ALSV4_CPP_EALSOverlayState_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ALSV4_CPP_EALSOverlayState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ALSV4_CPP_EALSOverlayState_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ALSV4_CPP_EALSOverlayState()
	{
		if (!Z_Registration_Info_UEnum_EALSOverlayState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EALSOverlayState.InnerSingleton, Z_Construct_UEnum_ALSV4_CPP_EALSOverlayState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EALSOverlayState.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EALSRotationMode;
	static UEnum* EALSRotationMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EALSRotationMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EALSRotationMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ALSV4_CPP_EALSRotationMode, (UObject*)Z_Construct_UPackage__Script_ALSV4_CPP(), TEXT("EALSRotationMode"));
		}
		return Z_Registration_Info_UEnum_EALSRotationMode.OuterSingleton;
	}
	template<> ALSV4_CPP_API UEnum* StaticEnum<EALSRotationMode>()
	{
		return EALSRotationMode_StaticEnum();
	}
	struct Z_Construct_UEnum_ALSV4_CPP_EALSRotationMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ALSV4_CPP_EALSRotationMode_Statics::Enumerators[] = {
		{ "EALSRotationMode::VelocityDirection", (int64)EALSRotationMode::VelocityDirection },
		{ "EALSRotationMode::LookingDirection", (int64)EALSRotationMode::LookingDirection },
		{ "EALSRotationMode::Aiming", (int64)EALSRotationMode::Aiming },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ALSV4_CPP_EALSRotationMode_Statics::Enum_MetaDataParams[] = {
		{ "Aiming.Name", "EALSRotationMode::Aiming" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Character rotation mode. Note: Also edit related struct in ALSStructEnumLibrary if you add new enums\n */" },
#endif
		{ "LookingDirection.Name", "EALSRotationMode::LookingDirection" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterEnumLibrary.h" },
		{ "ScriptName", "ALS_RotationMode" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Character rotation mode. Note: Also edit related struct in ALSStructEnumLibrary if you add new enums" },
#endif
		{ "VelocityDirection.Name", "EALSRotationMode::VelocityDirection" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ALSV4_CPP_EALSRotationMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ALSV4_CPP,
		nullptr,
		"EALSRotationMode",
		"EALSRotationMode",
		Z_Construct_UEnum_ALSV4_CPP_EALSRotationMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ALSV4_CPP_EALSRotationMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ALSV4_CPP_EALSRotationMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ALSV4_CPP_EALSRotationMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ALSV4_CPP_EALSRotationMode()
	{
		if (!Z_Registration_Info_UEnum_EALSRotationMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EALSRotationMode.InnerSingleton, Z_Construct_UEnum_ALSV4_CPP_EALSRotationMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EALSRotationMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EALSStance;
	static UEnum* EALSStance_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EALSStance.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EALSStance.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ALSV4_CPP_EALSStance, (UObject*)Z_Construct_UPackage__Script_ALSV4_CPP(), TEXT("EALSStance"));
		}
		return Z_Registration_Info_UEnum_EALSStance.OuterSingleton;
	}
	template<> ALSV4_CPP_API UEnum* StaticEnum<EALSStance>()
	{
		return EALSStance_StaticEnum();
	}
	struct Z_Construct_UEnum_ALSV4_CPP_EALSStance_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ALSV4_CPP_EALSStance_Statics::Enumerators[] = {
		{ "EALSStance::Standing", (int64)EALSStance::Standing },
		{ "EALSStance::Crouching", (int64)EALSStance::Crouching },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ALSV4_CPP_EALSStance_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Character stance. Note: Also edit related struct in ALSStructEnumLibrary if you add new enums\n */" },
#endif
		{ "Crouching.Name", "EALSStance::Crouching" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterEnumLibrary.h" },
		{ "ScriptName", "ALS_Stance" },
		{ "Standing.Name", "EALSStance::Standing" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Character stance. Note: Also edit related struct in ALSStructEnumLibrary if you add new enums" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ALSV4_CPP_EALSStance_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ALSV4_CPP,
		nullptr,
		"EALSStance",
		"EALSStance",
		Z_Construct_UEnum_ALSV4_CPP_EALSStance_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ALSV4_CPP_EALSStance_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ALSV4_CPP_EALSStance_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ALSV4_CPP_EALSStance_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ALSV4_CPP_EALSStance()
	{
		if (!Z_Registration_Info_UEnum_EALSStance.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EALSStance.InnerSingleton, Z_Construct_UEnum_ALSV4_CPP_EALSStance_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EALSStance.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EALSViewMode;
	static UEnum* EALSViewMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EALSViewMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EALSViewMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ALSV4_CPP_EALSViewMode, (UObject*)Z_Construct_UPackage__Script_ALSV4_CPP(), TEXT("EALSViewMode"));
		}
		return Z_Registration_Info_UEnum_EALSViewMode.OuterSingleton;
	}
	template<> ALSV4_CPP_API UEnum* StaticEnum<EALSViewMode>()
	{
		return EALSViewMode_StaticEnum();
	}
	struct Z_Construct_UEnum_ALSV4_CPP_EALSViewMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ALSV4_CPP_EALSViewMode_Statics::Enumerators[] = {
		{ "EALSViewMode::ThirdPerson", (int64)EALSViewMode::ThirdPerson },
		{ "EALSViewMode::FirstPerson", (int64)EALSViewMode::FirstPerson },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ALSV4_CPP_EALSViewMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Character view mode. Note: Also edit related struct in ALSStructEnumLibrary if you add new enums\n */" },
#endif
		{ "FirstPerson.Name", "EALSViewMode::FirstPerson" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterEnumLibrary.h" },
		{ "ScriptName", "ALS_ViewMode" },
		{ "ThirdPerson.Name", "EALSViewMode::ThirdPerson" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Character view mode. Note: Also edit related struct in ALSStructEnumLibrary if you add new enums" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ALSV4_CPP_EALSViewMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ALSV4_CPP,
		nullptr,
		"EALSViewMode",
		"EALSViewMode",
		Z_Construct_UEnum_ALSV4_CPP_EALSViewMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ALSV4_CPP_EALSViewMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ALSV4_CPP_EALSViewMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ALSV4_CPP_EALSViewMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ALSV4_CPP_EALSViewMode()
	{
		if (!Z_Registration_Info_UEnum_EALSViewMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EALSViewMode.InnerSingleton, Z_Construct_UEnum_ALSV4_CPP_EALSViewMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EALSViewMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EALSAnimFeatureExample;
	static UEnum* EALSAnimFeatureExample_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EALSAnimFeatureExample.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EALSAnimFeatureExample.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ALSV4_CPP_EALSAnimFeatureExample, (UObject*)Z_Construct_UPackage__Script_ALSV4_CPP(), TEXT("EALSAnimFeatureExample"));
		}
		return Z_Registration_Info_UEnum_EALSAnimFeatureExample.OuterSingleton;
	}
	template<> ALSV4_CPP_API UEnum* StaticEnum<EALSAnimFeatureExample>()
	{
		return EALSAnimFeatureExample_StaticEnum();
	}
	struct Z_Construct_UEnum_ALSV4_CPP_EALSAnimFeatureExample_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ALSV4_CPP_EALSAnimFeatureExample_Statics::Enumerators[] = {
		{ "EALSAnimFeatureExample::StrideBlending", (int64)EALSAnimFeatureExample::StrideBlending },
		{ "EALSAnimFeatureExample::AdditiveBlending", (int64)EALSAnimFeatureExample::AdditiveBlending },
		{ "EALSAnimFeatureExample::SprintImpulse", (int64)EALSAnimFeatureExample::SprintImpulse },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ALSV4_CPP_EALSAnimFeatureExample_Statics::Enum_MetaDataParams[] = {
		{ "AdditiveBlending.Name", "EALSAnimFeatureExample::AdditiveBlending" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterEnumLibrary.h" },
		{ "ScriptName", "ALS_AnimFeatureExample" },
		{ "SprintImpulse.Name", "EALSAnimFeatureExample::SprintImpulse" },
		{ "StrideBlending.Name", "EALSAnimFeatureExample::StrideBlending" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ALSV4_CPP_EALSAnimFeatureExample_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ALSV4_CPP,
		nullptr,
		"EALSAnimFeatureExample",
		"EALSAnimFeatureExample",
		Z_Construct_UEnum_ALSV4_CPP_EALSAnimFeatureExample_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ALSV4_CPP_EALSAnimFeatureExample_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ALSV4_CPP_EALSAnimFeatureExample_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ALSV4_CPP_EALSAnimFeatureExample_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ALSV4_CPP_EALSAnimFeatureExample()
	{
		if (!Z_Registration_Info_UEnum_EALSAnimFeatureExample.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EALSAnimFeatureExample.InnerSingleton, Z_Construct_UEnum_ALSV4_CPP_EALSAnimFeatureExample_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EALSAnimFeatureExample.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EALSFootstepType;
	static UEnum* EALSFootstepType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EALSFootstepType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EALSFootstepType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ALSV4_CPP_EALSFootstepType, (UObject*)Z_Construct_UPackage__Script_ALSV4_CPP(), TEXT("EALSFootstepType"));
		}
		return Z_Registration_Info_UEnum_EALSFootstepType.OuterSingleton;
	}
	template<> ALSV4_CPP_API UEnum* StaticEnum<EALSFootstepType>()
	{
		return EALSFootstepType_StaticEnum();
	}
	struct Z_Construct_UEnum_ALSV4_CPP_EALSFootstepType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ALSV4_CPP_EALSFootstepType_Statics::Enumerators[] = {
		{ "EALSFootstepType::Step", (int64)EALSFootstepType::Step },
		{ "EALSFootstepType::WalkRun", (int64)EALSFootstepType::WalkRun },
		{ "EALSFootstepType::Jump", (int64)EALSFootstepType::Jump },
		{ "EALSFootstepType::Land", (int64)EALSFootstepType::Land },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ALSV4_CPP_EALSFootstepType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Jump.Name", "EALSFootstepType::Jump" },
		{ "Land.Name", "EALSFootstepType::Land" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterEnumLibrary.h" },
		{ "ScriptName", "ALS_FootstepType" },
		{ "Step.Name", "EALSFootstepType::Step" },
		{ "WalkRun.Name", "EALSFootstepType::WalkRun" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ALSV4_CPP_EALSFootstepType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ALSV4_CPP,
		nullptr,
		"EALSFootstepType",
		"EALSFootstepType",
		Z_Construct_UEnum_ALSV4_CPP_EALSFootstepType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ALSV4_CPP_EALSFootstepType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ALSV4_CPP_EALSFootstepType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ALSV4_CPP_EALSFootstepType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ALSV4_CPP_EALSFootstepType()
	{
		if (!Z_Registration_Info_UEnum_EALSFootstepType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EALSFootstepType.InnerSingleton, Z_Construct_UEnum_ALSV4_CPP_EALSFootstepType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EALSFootstepType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EALSGroundedEntryState;
	static UEnum* EALSGroundedEntryState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EALSGroundedEntryState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EALSGroundedEntryState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ALSV4_CPP_EALSGroundedEntryState, (UObject*)Z_Construct_UPackage__Script_ALSV4_CPP(), TEXT("EALSGroundedEntryState"));
		}
		return Z_Registration_Info_UEnum_EALSGroundedEntryState.OuterSingleton;
	}
	template<> ALSV4_CPP_API UEnum* StaticEnum<EALSGroundedEntryState>()
	{
		return EALSGroundedEntryState_StaticEnum();
	}
	struct Z_Construct_UEnum_ALSV4_CPP_EALSGroundedEntryState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ALSV4_CPP_EALSGroundedEntryState_Statics::Enumerators[] = {
		{ "EALSGroundedEntryState::None", (int64)EALSGroundedEntryState::None },
		{ "EALSGroundedEntryState::Roll", (int64)EALSGroundedEntryState::Roll },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ALSV4_CPP_EALSGroundedEntryState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterEnumLibrary.h" },
		{ "None.Name", "EALSGroundedEntryState::None" },
		{ "Roll.Name", "EALSGroundedEntryState::Roll" },
		{ "ScriptName", "ALS_GroundedEntryState" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ALSV4_CPP_EALSGroundedEntryState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ALSV4_CPP,
		nullptr,
		"EALSGroundedEntryState",
		"EALSGroundedEntryState",
		Z_Construct_UEnum_ALSV4_CPP_EALSGroundedEntryState_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ALSV4_CPP_EALSGroundedEntryState_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ALSV4_CPP_EALSGroundedEntryState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ALSV4_CPP_EALSGroundedEntryState_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ALSV4_CPP_EALSGroundedEntryState()
	{
		if (!Z_Registration_Info_UEnum_EALSGroundedEntryState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EALSGroundedEntryState.InnerSingleton, Z_Construct_UEnum_ALSV4_CPP_EALSGroundedEntryState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EALSGroundedEntryState.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EALSHipsDirection;
	static UEnum* EALSHipsDirection_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EALSHipsDirection.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EALSHipsDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ALSV4_CPP_EALSHipsDirection, (UObject*)Z_Construct_UPackage__Script_ALSV4_CPP(), TEXT("EALSHipsDirection"));
		}
		return Z_Registration_Info_UEnum_EALSHipsDirection.OuterSingleton;
	}
	template<> ALSV4_CPP_API UEnum* StaticEnum<EALSHipsDirection>()
	{
		return EALSHipsDirection_StaticEnum();
	}
	struct Z_Construct_UEnum_ALSV4_CPP_EALSHipsDirection_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ALSV4_CPP_EALSHipsDirection_Statics::Enumerators[] = {
		{ "EALSHipsDirection::F", (int64)EALSHipsDirection::F },
		{ "EALSHipsDirection::B", (int64)EALSHipsDirection::B },
		{ "EALSHipsDirection::RF", (int64)EALSHipsDirection::RF },
		{ "EALSHipsDirection::RB", (int64)EALSHipsDirection::RB },
		{ "EALSHipsDirection::LF", (int64)EALSHipsDirection::LF },
		{ "EALSHipsDirection::LB", (int64)EALSHipsDirection::LB },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ALSV4_CPP_EALSHipsDirection_Statics::Enum_MetaDataParams[] = {
		{ "B.Name", "EALSHipsDirection::B" },
		{ "BlueprintType", "true" },
		{ "F.Name", "EALSHipsDirection::F" },
		{ "LB.Name", "EALSHipsDirection::LB" },
		{ "LF.Name", "EALSHipsDirection::LF" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterEnumLibrary.h" },
		{ "RB.Name", "EALSHipsDirection::RB" },
		{ "RF.Name", "EALSHipsDirection::RF" },
		{ "ScriptName", "ALS_HipsDirection" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ALSV4_CPP_EALSHipsDirection_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ALSV4_CPP,
		nullptr,
		"EALSHipsDirection",
		"EALSHipsDirection",
		Z_Construct_UEnum_ALSV4_CPP_EALSHipsDirection_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ALSV4_CPP_EALSHipsDirection_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ALSV4_CPP_EALSHipsDirection_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ALSV4_CPP_EALSHipsDirection_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ALSV4_CPP_EALSHipsDirection()
	{
		if (!Z_Registration_Info_UEnum_EALSHipsDirection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EALSHipsDirection.InnerSingleton, Z_Construct_UEnum_ALSV4_CPP_EALSHipsDirection_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EALSHipsDirection.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EALSMantleType;
	static UEnum* EALSMantleType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EALSMantleType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EALSMantleType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ALSV4_CPP_EALSMantleType, (UObject*)Z_Construct_UPackage__Script_ALSV4_CPP(), TEXT("EALSMantleType"));
		}
		return Z_Registration_Info_UEnum_EALSMantleType.OuterSingleton;
	}
	template<> ALSV4_CPP_API UEnum* StaticEnum<EALSMantleType>()
	{
		return EALSMantleType_StaticEnum();
	}
	struct Z_Construct_UEnum_ALSV4_CPP_EALSMantleType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ALSV4_CPP_EALSMantleType_Statics::Enumerators[] = {
		{ "EALSMantleType::HighMantle", (int64)EALSMantleType::HighMantle },
		{ "EALSMantleType::LowMantle", (int64)EALSMantleType::LowMantle },
		{ "EALSMantleType::FallingCatch", (int64)EALSMantleType::FallingCatch },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ALSV4_CPP_EALSMantleType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FallingCatch.Name", "EALSMantleType::FallingCatch" },
		{ "HighMantle.Name", "EALSMantleType::HighMantle" },
		{ "LowMantle.Name", "EALSMantleType::LowMantle" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterEnumLibrary.h" },
		{ "ScriptName", "ALS_MantleType" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ALSV4_CPP_EALSMantleType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ALSV4_CPP,
		nullptr,
		"EALSMantleType",
		"EALSMantleType",
		Z_Construct_UEnum_ALSV4_CPP_EALSMantleType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ALSV4_CPP_EALSMantleType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ALSV4_CPP_EALSMantleType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ALSV4_CPP_EALSMantleType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ALSV4_CPP_EALSMantleType()
	{
		if (!Z_Registration_Info_UEnum_EALSMantleType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EALSMantleType.InnerSingleton, Z_Construct_UEnum_ALSV4_CPP_EALSMantleType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EALSMantleType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EALSMovementDirection;
	static UEnum* EALSMovementDirection_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EALSMovementDirection.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EALSMovementDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ALSV4_CPP_EALSMovementDirection, (UObject*)Z_Construct_UPackage__Script_ALSV4_CPP(), TEXT("EALSMovementDirection"));
		}
		return Z_Registration_Info_UEnum_EALSMovementDirection.OuterSingleton;
	}
	template<> ALSV4_CPP_API UEnum* StaticEnum<EALSMovementDirection>()
	{
		return EALSMovementDirection_StaticEnum();
	}
	struct Z_Construct_UEnum_ALSV4_CPP_EALSMovementDirection_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ALSV4_CPP_EALSMovementDirection_Statics::Enumerators[] = {
		{ "EALSMovementDirection::Forward", (int64)EALSMovementDirection::Forward },
		{ "EALSMovementDirection::Right", (int64)EALSMovementDirection::Right },
		{ "EALSMovementDirection::Left", (int64)EALSMovementDirection::Left },
		{ "EALSMovementDirection::Backward", (int64)EALSMovementDirection::Backward },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ALSV4_CPP_EALSMovementDirection_Statics::Enum_MetaDataParams[] = {
		{ "Backward.Name", "EALSMovementDirection::Backward" },
		{ "BlueprintType", "true" },
		{ "Forward.Name", "EALSMovementDirection::Forward" },
		{ "Left.Name", "EALSMovementDirection::Left" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterEnumLibrary.h" },
		{ "Right.Name", "EALSMovementDirection::Right" },
		{ "ScriptName", "ALS_MovementDirection" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ALSV4_CPP_EALSMovementDirection_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ALSV4_CPP,
		nullptr,
		"EALSMovementDirection",
		"EALSMovementDirection",
		Z_Construct_UEnum_ALSV4_CPP_EALSMovementDirection_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ALSV4_CPP_EALSMovementDirection_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ALSV4_CPP_EALSMovementDirection_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ALSV4_CPP_EALSMovementDirection_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ALSV4_CPP_EALSMovementDirection()
	{
		if (!Z_Registration_Info_UEnum_EALSMovementDirection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EALSMovementDirection.InnerSingleton, Z_Construct_UEnum_ALSV4_CPP_EALSMovementDirection_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EALSMovementDirection.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EALSSpawnType;
	static UEnum* EALSSpawnType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EALSSpawnType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EALSSpawnType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ALSV4_CPP_EALSSpawnType, (UObject*)Z_Construct_UPackage__Script_ALSV4_CPP(), TEXT("EALSSpawnType"));
		}
		return Z_Registration_Info_UEnum_EALSSpawnType.OuterSingleton;
	}
	template<> ALSV4_CPP_API UEnum* StaticEnum<EALSSpawnType>()
	{
		return EALSSpawnType_StaticEnum();
	}
	struct Z_Construct_UEnum_ALSV4_CPP_EALSSpawnType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ALSV4_CPP_EALSSpawnType_Statics::Enumerators[] = {
		{ "EALSSpawnType::Location", (int64)EALSSpawnType::Location },
		{ "EALSSpawnType::Attached", (int64)EALSSpawnType::Attached },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ALSV4_CPP_EALSSpawnType_Statics::Enum_MetaDataParams[] = {
		{ "Attached.Name", "EALSSpawnType::Attached" },
		{ "BlueprintType", "true" },
		{ "Location.Name", "EALSSpawnType::Location" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterEnumLibrary.h" },
		{ "ScriptName", "ALS_SpawnType" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ALSV4_CPP_EALSSpawnType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ALSV4_CPP,
		nullptr,
		"EALSSpawnType",
		"EALSSpawnType",
		Z_Construct_UEnum_ALSV4_CPP_EALSSpawnType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ALSV4_CPP_EALSSpawnType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ALSV4_CPP_EALSSpawnType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ALSV4_CPP_EALSSpawnType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ALSV4_CPP_EALSSpawnType()
	{
		if (!Z_Registration_Info_UEnum_EALSSpawnType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EALSSpawnType.InnerSingleton, Z_Construct_UEnum_ALSV4_CPP_EALSSpawnType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EALSSpawnType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Library_ALSCharacterEnumLibrary_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Library_ALSCharacterEnumLibrary_h_Statics::EnumInfo[] = {
		{ EALSGait_StaticEnum, TEXT("EALSGait"), &Z_Registration_Info_UEnum_EALSGait, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4204508735U) },
		{ EALSMovementAction_StaticEnum, TEXT("EALSMovementAction"), &Z_Registration_Info_UEnum_EALSMovementAction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1229765569U) },
		{ EALSMovementState_StaticEnum, TEXT("EALSMovementState"), &Z_Registration_Info_UEnum_EALSMovementState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2855841202U) },
		{ EALSOverlayState_StaticEnum, TEXT("EALSOverlayState"), &Z_Registration_Info_UEnum_EALSOverlayState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3560812144U) },
		{ EALSRotationMode_StaticEnum, TEXT("EALSRotationMode"), &Z_Registration_Info_UEnum_EALSRotationMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3543998324U) },
		{ EALSStance_StaticEnum, TEXT("EALSStance"), &Z_Registration_Info_UEnum_EALSStance, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 98898313U) },
		{ EALSViewMode_StaticEnum, TEXT("EALSViewMode"), &Z_Registration_Info_UEnum_EALSViewMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 98731475U) },
		{ EALSAnimFeatureExample_StaticEnum, TEXT("EALSAnimFeatureExample"), &Z_Registration_Info_UEnum_EALSAnimFeatureExample, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1611802247U) },
		{ EALSFootstepType_StaticEnum, TEXT("EALSFootstepType"), &Z_Registration_Info_UEnum_EALSFootstepType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1771331670U) },
		{ EALSGroundedEntryState_StaticEnum, TEXT("EALSGroundedEntryState"), &Z_Registration_Info_UEnum_EALSGroundedEntryState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1781834569U) },
		{ EALSHipsDirection_StaticEnum, TEXT("EALSHipsDirection"), &Z_Registration_Info_UEnum_EALSHipsDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1711658086U) },
		{ EALSMantleType_StaticEnum, TEXT("EALSMantleType"), &Z_Registration_Info_UEnum_EALSMantleType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1122269844U) },
		{ EALSMovementDirection_StaticEnum, TEXT("EALSMovementDirection"), &Z_Registration_Info_UEnum_EALSMovementDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1495404216U) },
		{ EALSSpawnType_StaticEnum, TEXT("EALSSpawnType"), &Z_Registration_Info_UEnum_EALSSpawnType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1761893747U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Library_ALSCharacterEnumLibrary_h_3012352654(TEXT("/Script/ALSV4_CPP"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Library_ALSCharacterEnumLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Library_ALSCharacterEnumLibrary_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
