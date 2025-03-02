// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALSV4_CPP/Public/Library/ALSCharacterStructLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeALSCharacterStructLibrary() {}
// Cross Module References
	ALSV4_CPP_API UEnum* Z_Construct_UEnum_ALSV4_CPP_EALSSpawnType();
	ALSV4_CPP_API UScriptStruct* Z_Construct_UScriptStruct_FALSCameraGaitSettings();
	ALSV4_CPP_API UScriptStruct* Z_Construct_UScriptStruct_FALSCameraSettings();
	ALSV4_CPP_API UScriptStruct* Z_Construct_UScriptStruct_FALSCameraStateSettings();
	ALSV4_CPP_API UScriptStruct* Z_Construct_UScriptStruct_FALSComponentAndTransform();
	ALSV4_CPP_API UScriptStruct* Z_Construct_UScriptStruct_FALSHitFX();
	ALSV4_CPP_API UScriptStruct* Z_Construct_UScriptStruct_FALSMantleAsset();
	ALSV4_CPP_API UScriptStruct* Z_Construct_UScriptStruct_FALSMantleParams();
	ALSV4_CPP_API UScriptStruct* Z_Construct_UScriptStruct_FALSMantleTraceSettings();
	ALSV4_CPP_API UScriptStruct* Z_Construct_UScriptStruct_FALSMovementSettings();
	ALSV4_CPP_API UScriptStruct* Z_Construct_UScriptStruct_FALSMovementStanceSettings();
	ALSV4_CPP_API UScriptStruct* Z_Construct_UScriptStruct_FALSMovementStateSettings();
	ALSV4_CPP_API UScriptStruct* Z_Construct_UScriptStruct_FALSRotateInPlaceAsset();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveVector_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAttachLocation();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EPhysicalSurface();
	UPackage* Z_Construct_UPackage__Script_ALSV4_CPP();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ALSComponentAndTransform;
class UScriptStruct* FALSComponentAndTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ALSComponentAndTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ALSComponentAndTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FALSComponentAndTransform, (UObject*)Z_Construct_UPackage__Script_ALSV4_CPP(), TEXT("ALSComponentAndTransform"));
	}
	return Z_Registration_Info_UScriptStruct_ALSComponentAndTransform.OuterSingleton;
}
template<> ALSV4_CPP_API UScriptStruct* StaticStruct<FALSComponentAndTransform>()
{
	return FALSComponentAndTransform::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FALSComponentAndTransform_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Component;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSComponentAndTransform_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterStructLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FALSComponentAndTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FALSComponentAndTransform>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSComponentAndTransform_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "Character Struct Library" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FALSComponentAndTransform_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSComponentAndTransform, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSComponentAndTransform_Statics::NewProp_Transform_MetaData), Z_Construct_UScriptStruct_FALSComponentAndTransform_Statics::NewProp_Transform_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSComponentAndTransform_Statics::NewProp_Component_MetaData[] = {
		{ "Category", "Character Struct Library" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FALSComponentAndTransform_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0014000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSComponentAndTransform, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSComponentAndTransform_Statics::NewProp_Component_MetaData), Z_Construct_UScriptStruct_FALSComponentAndTransform_Statics::NewProp_Component_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FALSComponentAndTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSComponentAndTransform_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSComponentAndTransform_Statics::NewProp_Component,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FALSComponentAndTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALSV4_CPP,
		nullptr,
		&NewStructOps,
		"ALSComponentAndTransform",
		Z_Construct_UScriptStruct_FALSComponentAndTransform_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSComponentAndTransform_Statics::PropPointers),
		sizeof(FALSComponentAndTransform),
		alignof(FALSComponentAndTransform),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSComponentAndTransform_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FALSComponentAndTransform_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSComponentAndTransform_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FALSComponentAndTransform()
	{
		if (!Z_Registration_Info_UScriptStruct_ALSComponentAndTransform.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ALSComponentAndTransform.InnerSingleton, Z_Construct_UScriptStruct_FALSComponentAndTransform_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ALSComponentAndTransform.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ALSCameraSettings;
class UScriptStruct* FALSCameraSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ALSCameraSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ALSCameraSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FALSCameraSettings, (UObject*)Z_Construct_UPackage__Script_ALSV4_CPP(), TEXT("ALSCameraSettings"));
	}
	return Z_Registration_Info_UScriptStruct_ALSCameraSettings.OuterSingleton;
}
template<> ALSV4_CPP_API UScriptStruct* StaticStruct<FALSCameraSettings>()
{
	return FALSCameraSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FALSCameraSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetArmLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetArmLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SocketOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SocketOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LagSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LagSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationLagSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationLagSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDoCollisionTest_MetaData[];
#endif
		static void NewProp_bDoCollisionTest_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoCollisionTest;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSCameraSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterStructLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FALSCameraSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FALSCameraSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSCameraSettings_Statics::NewProp_TargetArmLength_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSCameraSettings_Statics::NewProp_TargetArmLength = { "TargetArmLength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSCameraSettings, TargetArmLength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSCameraSettings_Statics::NewProp_TargetArmLength_MetaData), Z_Construct_UScriptStruct_FALSCameraSettings_Statics::NewProp_TargetArmLength_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSCameraSettings_Statics::NewProp_SocketOffset_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FALSCameraSettings_Statics::NewProp_SocketOffset = { "SocketOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSCameraSettings, SocketOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSCameraSettings_Statics::NewProp_SocketOffset_MetaData), Z_Construct_UScriptStruct_FALSCameraSettings_Statics::NewProp_SocketOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSCameraSettings_Statics::NewProp_LagSpeed_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSCameraSettings_Statics::NewProp_LagSpeed = { "LagSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSCameraSettings, LagSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSCameraSettings_Statics::NewProp_LagSpeed_MetaData), Z_Construct_UScriptStruct_FALSCameraSettings_Statics::NewProp_LagSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSCameraSettings_Statics::NewProp_RotationLagSpeed_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSCameraSettings_Statics::NewProp_RotationLagSpeed = { "RotationLagSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSCameraSettings, RotationLagSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSCameraSettings_Statics::NewProp_RotationLagSpeed_MetaData), Z_Construct_UScriptStruct_FALSCameraSettings_Statics::NewProp_RotationLagSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSCameraSettings_Statics::NewProp_bDoCollisionTest_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterStructLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FALSCameraSettings_Statics::NewProp_bDoCollisionTest_SetBit(void* Obj)
	{
		((FALSCameraSettings*)Obj)->bDoCollisionTest = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FALSCameraSettings_Statics::NewProp_bDoCollisionTest = { "bDoCollisionTest", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FALSCameraSettings), &Z_Construct_UScriptStruct_FALSCameraSettings_Statics::NewProp_bDoCollisionTest_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSCameraSettings_Statics::NewProp_bDoCollisionTest_MetaData), Z_Construct_UScriptStruct_FALSCameraSettings_Statics::NewProp_bDoCollisionTest_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FALSCameraSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSCameraSettings_Statics::NewProp_TargetArmLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSCameraSettings_Statics::NewProp_SocketOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSCameraSettings_Statics::NewProp_LagSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSCameraSettings_Statics::NewProp_RotationLagSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSCameraSettings_Statics::NewProp_bDoCollisionTest,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FALSCameraSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALSV4_CPP,
		nullptr,
		&NewStructOps,
		"ALSCameraSettings",
		Z_Construct_UScriptStruct_FALSCameraSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSCameraSettings_Statics::PropPointers),
		sizeof(FALSCameraSettings),
		alignof(FALSCameraSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSCameraSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FALSCameraSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSCameraSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FALSCameraSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_ALSCameraSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ALSCameraSettings.InnerSingleton, Z_Construct_UScriptStruct_FALSCameraSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ALSCameraSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ALSCameraGaitSettings;
class UScriptStruct* FALSCameraGaitSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ALSCameraGaitSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ALSCameraGaitSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FALSCameraGaitSettings, (UObject*)Z_Construct_UPackage__Script_ALSV4_CPP(), TEXT("ALSCameraGaitSettings"));
	}
	return Z_Registration_Info_UScriptStruct_ALSCameraGaitSettings.OuterSingleton;
}
template<> ALSV4_CPP_API UScriptStruct* StaticStruct<FALSCameraGaitSettings>()
{
	return FALSCameraGaitSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FALSCameraGaitSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Walking_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Walking;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Running_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Running;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sprinting_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Sprinting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Crouching_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Crouching;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSCameraGaitSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterStructLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FALSCameraGaitSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FALSCameraGaitSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSCameraGaitSettings_Statics::NewProp_Walking_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FALSCameraGaitSettings_Statics::NewProp_Walking = { "Walking", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSCameraGaitSettings, Walking), Z_Construct_UScriptStruct_FALSCameraSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSCameraGaitSettings_Statics::NewProp_Walking_MetaData), Z_Construct_UScriptStruct_FALSCameraGaitSettings_Statics::NewProp_Walking_MetaData) }; // 592242880
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSCameraGaitSettings_Statics::NewProp_Running_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FALSCameraGaitSettings_Statics::NewProp_Running = { "Running", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSCameraGaitSettings, Running), Z_Construct_UScriptStruct_FALSCameraSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSCameraGaitSettings_Statics::NewProp_Running_MetaData), Z_Construct_UScriptStruct_FALSCameraGaitSettings_Statics::NewProp_Running_MetaData) }; // 592242880
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSCameraGaitSettings_Statics::NewProp_Sprinting_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FALSCameraGaitSettings_Statics::NewProp_Sprinting = { "Sprinting", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSCameraGaitSettings, Sprinting), Z_Construct_UScriptStruct_FALSCameraSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSCameraGaitSettings_Statics::NewProp_Sprinting_MetaData), Z_Construct_UScriptStruct_FALSCameraGaitSettings_Statics::NewProp_Sprinting_MetaData) }; // 592242880
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSCameraGaitSettings_Statics::NewProp_Crouching_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FALSCameraGaitSettings_Statics::NewProp_Crouching = { "Crouching", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSCameraGaitSettings, Crouching), Z_Construct_UScriptStruct_FALSCameraSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSCameraGaitSettings_Statics::NewProp_Crouching_MetaData), Z_Construct_UScriptStruct_FALSCameraGaitSettings_Statics::NewProp_Crouching_MetaData) }; // 592242880
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FALSCameraGaitSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSCameraGaitSettings_Statics::NewProp_Walking,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSCameraGaitSettings_Statics::NewProp_Running,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSCameraGaitSettings_Statics::NewProp_Sprinting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSCameraGaitSettings_Statics::NewProp_Crouching,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FALSCameraGaitSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALSV4_CPP,
		nullptr,
		&NewStructOps,
		"ALSCameraGaitSettings",
		Z_Construct_UScriptStruct_FALSCameraGaitSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSCameraGaitSettings_Statics::PropPointers),
		sizeof(FALSCameraGaitSettings),
		alignof(FALSCameraGaitSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSCameraGaitSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FALSCameraGaitSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSCameraGaitSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FALSCameraGaitSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_ALSCameraGaitSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ALSCameraGaitSettings.InnerSingleton, Z_Construct_UScriptStruct_FALSCameraGaitSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ALSCameraGaitSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ALSCameraStateSettings;
class UScriptStruct* FALSCameraStateSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ALSCameraStateSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ALSCameraStateSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FALSCameraStateSettings, (UObject*)Z_Construct_UPackage__Script_ALSV4_CPP(), TEXT("ALSCameraStateSettings"));
	}
	return Z_Registration_Info_UScriptStruct_ALSCameraStateSettings.OuterSingleton;
}
template<> ALSV4_CPP_API UScriptStruct* StaticStruct<FALSCameraStateSettings>()
{
	return FALSCameraStateSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FALSCameraStateSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VelocityDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VelocityDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookingDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LookingDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Aiming_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Aiming;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSCameraStateSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterStructLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FALSCameraStateSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FALSCameraStateSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSCameraStateSettings_Statics::NewProp_VelocityDirection_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FALSCameraStateSettings_Statics::NewProp_VelocityDirection = { "VelocityDirection", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSCameraStateSettings, VelocityDirection), Z_Construct_UScriptStruct_FALSCameraGaitSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSCameraStateSettings_Statics::NewProp_VelocityDirection_MetaData), Z_Construct_UScriptStruct_FALSCameraStateSettings_Statics::NewProp_VelocityDirection_MetaData) }; // 1194917815
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSCameraStateSettings_Statics::NewProp_LookingDirection_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FALSCameraStateSettings_Statics::NewProp_LookingDirection = { "LookingDirection", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSCameraStateSettings, LookingDirection), Z_Construct_UScriptStruct_FALSCameraGaitSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSCameraStateSettings_Statics::NewProp_LookingDirection_MetaData), Z_Construct_UScriptStruct_FALSCameraStateSettings_Statics::NewProp_LookingDirection_MetaData) }; // 1194917815
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSCameraStateSettings_Statics::NewProp_Aiming_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FALSCameraStateSettings_Statics::NewProp_Aiming = { "Aiming", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSCameraStateSettings, Aiming), Z_Construct_UScriptStruct_FALSCameraGaitSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSCameraStateSettings_Statics::NewProp_Aiming_MetaData), Z_Construct_UScriptStruct_FALSCameraStateSettings_Statics::NewProp_Aiming_MetaData) }; // 1194917815
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FALSCameraStateSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSCameraStateSettings_Statics::NewProp_VelocityDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSCameraStateSettings_Statics::NewProp_LookingDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSCameraStateSettings_Statics::NewProp_Aiming,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FALSCameraStateSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALSV4_CPP,
		nullptr,
		&NewStructOps,
		"ALSCameraStateSettings",
		Z_Construct_UScriptStruct_FALSCameraStateSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSCameraStateSettings_Statics::PropPointers),
		sizeof(FALSCameraStateSettings),
		alignof(FALSCameraStateSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSCameraStateSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FALSCameraStateSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSCameraStateSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FALSCameraStateSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_ALSCameraStateSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ALSCameraStateSettings.InnerSingleton, Z_Construct_UScriptStruct_FALSCameraStateSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ALSCameraStateSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ALSMantleAsset;
class UScriptStruct* FALSMantleAsset::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ALSMantleAsset.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ALSMantleAsset.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FALSMantleAsset, (UObject*)Z_Construct_UPackage__Script_ALSV4_CPP(), TEXT("ALSMantleAsset"));
	}
	return Z_Registration_Info_UScriptStruct_ALSMantleAsset.OuterSingleton;
}
template<> ALSV4_CPP_API UScriptStruct* StaticStruct<FALSMantleAsset>()
{
	return FALSMantleAsset::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FALSMantleAsset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AnimMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PositionCorrectionCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PositionCorrectionCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartingOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartingOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LowHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LowHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LowPlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LowPlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LowStartPosition_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LowStartPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HighHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HighHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HighPlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HighPlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HighStartPosition_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HighStartPosition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSMantleAsset_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterStructLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FALSMantleAsset_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FALSMantleAsset>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSMantleAsset_Statics::NewProp_AnimMontage_MetaData[] = {
		{ "Category", "Mantle System" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FALSMantleAsset_Statics::NewProp_AnimMontage = { "AnimMontage", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSMantleAsset, AnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSMantleAsset_Statics::NewProp_AnimMontage_MetaData), Z_Construct_UScriptStruct_FALSMantleAsset_Statics::NewProp_AnimMontage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSMantleAsset_Statics::NewProp_PositionCorrectionCurve_MetaData[] = {
		{ "Category", "Mantle System" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FALSMantleAsset_Statics::NewProp_PositionCorrectionCurve = { "PositionCorrectionCurve", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSMantleAsset, PositionCorrectionCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSMantleAsset_Statics::NewProp_PositionCorrectionCurve_MetaData), Z_Construct_UScriptStruct_FALSMantleAsset_Statics::NewProp_PositionCorrectionCurve_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSMantleAsset_Statics::NewProp_StartingOffset_MetaData[] = {
		{ "Category", "Mantle System" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FALSMantleAsset_Statics::NewProp_StartingOffset = { "StartingOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSMantleAsset, StartingOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSMantleAsset_Statics::NewProp_StartingOffset_MetaData), Z_Construct_UScriptStruct_FALSMantleAsset_Statics::NewProp_StartingOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSMantleAsset_Statics::NewProp_LowHeight_MetaData[] = {
		{ "Category", "Mantle System" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSMantleAsset_Statics::NewProp_LowHeight = { "LowHeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSMantleAsset, LowHeight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSMantleAsset_Statics::NewProp_LowHeight_MetaData), Z_Construct_UScriptStruct_FALSMantleAsset_Statics::NewProp_LowHeight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSMantleAsset_Statics::NewProp_LowPlayRate_MetaData[] = {
		{ "Category", "Mantle System" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSMantleAsset_Statics::NewProp_LowPlayRate = { "LowPlayRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSMantleAsset, LowPlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSMantleAsset_Statics::NewProp_LowPlayRate_MetaData), Z_Construct_UScriptStruct_FALSMantleAsset_Statics::NewProp_LowPlayRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSMantleAsset_Statics::NewProp_LowStartPosition_MetaData[] = {
		{ "Category", "Mantle System" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSMantleAsset_Statics::NewProp_LowStartPosition = { "LowStartPosition", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSMantleAsset, LowStartPosition), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSMantleAsset_Statics::NewProp_LowStartPosition_MetaData), Z_Construct_UScriptStruct_FALSMantleAsset_Statics::NewProp_LowStartPosition_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSMantleAsset_Statics::NewProp_HighHeight_MetaData[] = {
		{ "Category", "Mantle System" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSMantleAsset_Statics::NewProp_HighHeight = { "HighHeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSMantleAsset, HighHeight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSMantleAsset_Statics::NewProp_HighHeight_MetaData), Z_Construct_UScriptStruct_FALSMantleAsset_Statics::NewProp_HighHeight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSMantleAsset_Statics::NewProp_HighPlayRate_MetaData[] = {
		{ "Category", "Mantle System" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSMantleAsset_Statics::NewProp_HighPlayRate = { "HighPlayRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSMantleAsset, HighPlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSMantleAsset_Statics::NewProp_HighPlayRate_MetaData), Z_Construct_UScriptStruct_FALSMantleAsset_Statics::NewProp_HighPlayRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSMantleAsset_Statics::NewProp_HighStartPosition_MetaData[] = {
		{ "Category", "Mantle System" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSMantleAsset_Statics::NewProp_HighStartPosition = { "HighStartPosition", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSMantleAsset, HighStartPosition), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSMantleAsset_Statics::NewProp_HighStartPosition_MetaData), Z_Construct_UScriptStruct_FALSMantleAsset_Statics::NewProp_HighStartPosition_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FALSMantleAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSMantleAsset_Statics::NewProp_AnimMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSMantleAsset_Statics::NewProp_PositionCorrectionCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSMantleAsset_Statics::NewProp_StartingOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSMantleAsset_Statics::NewProp_LowHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSMantleAsset_Statics::NewProp_LowPlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSMantleAsset_Statics::NewProp_LowStartPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSMantleAsset_Statics::NewProp_HighHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSMantleAsset_Statics::NewProp_HighPlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSMantleAsset_Statics::NewProp_HighStartPosition,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FALSMantleAsset_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALSV4_CPP,
		nullptr,
		&NewStructOps,
		"ALSMantleAsset",
		Z_Construct_UScriptStruct_FALSMantleAsset_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSMantleAsset_Statics::PropPointers),
		sizeof(FALSMantleAsset),
		alignof(FALSMantleAsset),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSMantleAsset_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FALSMantleAsset_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSMantleAsset_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FALSMantleAsset()
	{
		if (!Z_Registration_Info_UScriptStruct_ALSMantleAsset.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ALSMantleAsset.InnerSingleton, Z_Construct_UScriptStruct_FALSMantleAsset_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ALSMantleAsset.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ALSMantleParams;
class UScriptStruct* FALSMantleParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ALSMantleParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ALSMantleParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FALSMantleParams, (UObject*)Z_Construct_UPackage__Script_ALSV4_CPP(), TEXT("ALSMantleParams"));
	}
	return Z_Registration_Info_UScriptStruct_ALSMantleParams.OuterSingleton;
}
template<> ALSV4_CPP_API UScriptStruct* StaticStruct<FALSMantleParams>()
{
	return FALSMantleParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FALSMantleParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AnimMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PositionCorrectionCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PositionCorrectionCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartingPosition_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartingPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartingOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartingOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSMantleParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterStructLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FALSMantleParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FALSMantleParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSMantleParams_Statics::NewProp_AnimMontage_MetaData[] = {
		{ "Category", "Mantle System" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FALSMantleParams_Statics::NewProp_AnimMontage = { "AnimMontage", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSMantleParams, AnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSMantleParams_Statics::NewProp_AnimMontage_MetaData), Z_Construct_UScriptStruct_FALSMantleParams_Statics::NewProp_AnimMontage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSMantleParams_Statics::NewProp_PositionCorrectionCurve_MetaData[] = {
		{ "Category", "Mantle System" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FALSMantleParams_Statics::NewProp_PositionCorrectionCurve = { "PositionCorrectionCurve", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSMantleParams, PositionCorrectionCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSMantleParams_Statics::NewProp_PositionCorrectionCurve_MetaData), Z_Construct_UScriptStruct_FALSMantleParams_Statics::NewProp_PositionCorrectionCurve_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSMantleParams_Statics::NewProp_StartingPosition_MetaData[] = {
		{ "Category", "Mantle System" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSMantleParams_Statics::NewProp_StartingPosition = { "StartingPosition", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSMantleParams, StartingPosition), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSMantleParams_Statics::NewProp_StartingPosition_MetaData), Z_Construct_UScriptStruct_FALSMantleParams_Statics::NewProp_StartingPosition_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSMantleParams_Statics::NewProp_PlayRate_MetaData[] = {
		{ "Category", "Mantle System" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSMantleParams_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSMantleParams, PlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSMantleParams_Statics::NewProp_PlayRate_MetaData), Z_Construct_UScriptStruct_FALSMantleParams_Statics::NewProp_PlayRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSMantleParams_Statics::NewProp_StartingOffset_MetaData[] = {
		{ "Category", "Mantle System" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FALSMantleParams_Statics::NewProp_StartingOffset = { "StartingOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSMantleParams, StartingOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSMantleParams_Statics::NewProp_StartingOffset_MetaData), Z_Construct_UScriptStruct_FALSMantleParams_Statics::NewProp_StartingOffset_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FALSMantleParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSMantleParams_Statics::NewProp_AnimMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSMantleParams_Statics::NewProp_PositionCorrectionCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSMantleParams_Statics::NewProp_StartingPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSMantleParams_Statics::NewProp_PlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSMantleParams_Statics::NewProp_StartingOffset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FALSMantleParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALSV4_CPP,
		nullptr,
		&NewStructOps,
		"ALSMantleParams",
		Z_Construct_UScriptStruct_FALSMantleParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSMantleParams_Statics::PropPointers),
		sizeof(FALSMantleParams),
		alignof(FALSMantleParams),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSMantleParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FALSMantleParams_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSMantleParams_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FALSMantleParams()
	{
		if (!Z_Registration_Info_UScriptStruct_ALSMantleParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ALSMantleParams.InnerSingleton, Z_Construct_UScriptStruct_FALSMantleParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ALSMantleParams.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ALSMantleTraceSettings;
class UScriptStruct* FALSMantleTraceSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ALSMantleTraceSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ALSMantleTraceSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FALSMantleTraceSettings, (UObject*)Z_Construct_UPackage__Script_ALSV4_CPP(), TEXT("ALSMantleTraceSettings"));
	}
	return Z_Registration_Info_UScriptStruct_ALSMantleTraceSettings.OuterSingleton;
}
template<> ALSV4_CPP_API UScriptStruct* StaticStruct<FALSMantleTraceSettings>()
{
	return FALSMantleTraceSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FALSMantleTraceSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxLedgeHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxLedgeHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinLedgeHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinLedgeHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReachDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReachDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForwardTraceRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ForwardTraceRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DownwardTraceRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DownwardTraceRadius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSMantleTraceSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterStructLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FALSMantleTraceSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FALSMantleTraceSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSMantleTraceSettings_Statics::NewProp_MaxLedgeHeight_MetaData[] = {
		{ "Category", "Mantle System" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSMantleTraceSettings_Statics::NewProp_MaxLedgeHeight = { "MaxLedgeHeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSMantleTraceSettings, MaxLedgeHeight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSMantleTraceSettings_Statics::NewProp_MaxLedgeHeight_MetaData), Z_Construct_UScriptStruct_FALSMantleTraceSettings_Statics::NewProp_MaxLedgeHeight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSMantleTraceSettings_Statics::NewProp_MinLedgeHeight_MetaData[] = {
		{ "Category", "Mantle System" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSMantleTraceSettings_Statics::NewProp_MinLedgeHeight = { "MinLedgeHeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSMantleTraceSettings, MinLedgeHeight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSMantleTraceSettings_Statics::NewProp_MinLedgeHeight_MetaData), Z_Construct_UScriptStruct_FALSMantleTraceSettings_Statics::NewProp_MinLedgeHeight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSMantleTraceSettings_Statics::NewProp_ReachDistance_MetaData[] = {
		{ "Category", "Mantle System" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSMantleTraceSettings_Statics::NewProp_ReachDistance = { "ReachDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSMantleTraceSettings, ReachDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSMantleTraceSettings_Statics::NewProp_ReachDistance_MetaData), Z_Construct_UScriptStruct_FALSMantleTraceSettings_Statics::NewProp_ReachDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSMantleTraceSettings_Statics::NewProp_ForwardTraceRadius_MetaData[] = {
		{ "Category", "Mantle System" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSMantleTraceSettings_Statics::NewProp_ForwardTraceRadius = { "ForwardTraceRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSMantleTraceSettings, ForwardTraceRadius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSMantleTraceSettings_Statics::NewProp_ForwardTraceRadius_MetaData), Z_Construct_UScriptStruct_FALSMantleTraceSettings_Statics::NewProp_ForwardTraceRadius_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSMantleTraceSettings_Statics::NewProp_DownwardTraceRadius_MetaData[] = {
		{ "Category", "Mantle System" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSMantleTraceSettings_Statics::NewProp_DownwardTraceRadius = { "DownwardTraceRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSMantleTraceSettings, DownwardTraceRadius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSMantleTraceSettings_Statics::NewProp_DownwardTraceRadius_MetaData), Z_Construct_UScriptStruct_FALSMantleTraceSettings_Statics::NewProp_DownwardTraceRadius_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FALSMantleTraceSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSMantleTraceSettings_Statics::NewProp_MaxLedgeHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSMantleTraceSettings_Statics::NewProp_MinLedgeHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSMantleTraceSettings_Statics::NewProp_ReachDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSMantleTraceSettings_Statics::NewProp_ForwardTraceRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSMantleTraceSettings_Statics::NewProp_DownwardTraceRadius,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FALSMantleTraceSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALSV4_CPP,
		nullptr,
		&NewStructOps,
		"ALSMantleTraceSettings",
		Z_Construct_UScriptStruct_FALSMantleTraceSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSMantleTraceSettings_Statics::PropPointers),
		sizeof(FALSMantleTraceSettings),
		alignof(FALSMantleTraceSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSMantleTraceSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FALSMantleTraceSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSMantleTraceSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FALSMantleTraceSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_ALSMantleTraceSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ALSMantleTraceSettings.InnerSingleton, Z_Construct_UScriptStruct_FALSMantleTraceSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ALSMantleTraceSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ALSMovementSettings;
class UScriptStruct* FALSMovementSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ALSMovementSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ALSMovementSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FALSMovementSettings, (UObject*)Z_Construct_UPackage__Script_ALSV4_CPP(), TEXT("ALSMovementSettings"));
	}
	return Z_Registration_Info_UScriptStruct_ALSMovementSettings.OuterSingleton;
}
template<> ALSV4_CPP_API UScriptStruct* StaticStruct<FALSMovementSettings>()
{
	return FALSMovementSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FALSMovementSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WalkSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RunSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RunSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SprintSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MovementCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationRateCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RotationRateCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSMovementSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterStructLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FALSMovementSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FALSMovementSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSMovementSettings_Statics::NewProp_WalkSpeed_MetaData[] = {
		{ "Category", "Movement Settings" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSMovementSettings_Statics::NewProp_WalkSpeed = { "WalkSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSMovementSettings, WalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSMovementSettings_Statics::NewProp_WalkSpeed_MetaData), Z_Construct_UScriptStruct_FALSMovementSettings_Statics::NewProp_WalkSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSMovementSettings_Statics::NewProp_RunSpeed_MetaData[] = {
		{ "Category", "Movement Settings" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSMovementSettings_Statics::NewProp_RunSpeed = { "RunSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSMovementSettings, RunSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSMovementSettings_Statics::NewProp_RunSpeed_MetaData), Z_Construct_UScriptStruct_FALSMovementSettings_Statics::NewProp_RunSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSMovementSettings_Statics::NewProp_SprintSpeed_MetaData[] = {
		{ "Category", "Movement Settings" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSMovementSettings_Statics::NewProp_SprintSpeed = { "SprintSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSMovementSettings, SprintSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSMovementSettings_Statics::NewProp_SprintSpeed_MetaData), Z_Construct_UScriptStruct_FALSMovementSettings_Statics::NewProp_SprintSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSMovementSettings_Statics::NewProp_MovementCurve_MetaData[] = {
		{ "Category", "Movement Settings" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FALSMovementSettings_Statics::NewProp_MovementCurve = { "MovementCurve", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSMovementSettings, MovementCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSMovementSettings_Statics::NewProp_MovementCurve_MetaData), Z_Construct_UScriptStruct_FALSMovementSettings_Statics::NewProp_MovementCurve_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSMovementSettings_Statics::NewProp_RotationRateCurve_MetaData[] = {
		{ "Category", "Movement Settings" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FALSMovementSettings_Statics::NewProp_RotationRateCurve = { "RotationRateCurve", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSMovementSettings, RotationRateCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSMovementSettings_Statics::NewProp_RotationRateCurve_MetaData), Z_Construct_UScriptStruct_FALSMovementSettings_Statics::NewProp_RotationRateCurve_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FALSMovementSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSMovementSettings_Statics::NewProp_WalkSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSMovementSettings_Statics::NewProp_RunSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSMovementSettings_Statics::NewProp_SprintSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSMovementSettings_Statics::NewProp_MovementCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSMovementSettings_Statics::NewProp_RotationRateCurve,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FALSMovementSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALSV4_CPP,
		nullptr,
		&NewStructOps,
		"ALSMovementSettings",
		Z_Construct_UScriptStruct_FALSMovementSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSMovementSettings_Statics::PropPointers),
		sizeof(FALSMovementSettings),
		alignof(FALSMovementSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSMovementSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FALSMovementSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSMovementSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FALSMovementSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_ALSMovementSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ALSMovementSettings.InnerSingleton, Z_Construct_UScriptStruct_FALSMovementSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ALSMovementSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ALSMovementStanceSettings;
class UScriptStruct* FALSMovementStanceSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ALSMovementStanceSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ALSMovementStanceSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FALSMovementStanceSettings, (UObject*)Z_Construct_UPackage__Script_ALSV4_CPP(), TEXT("ALSMovementStanceSettings"));
	}
	return Z_Registration_Info_UScriptStruct_ALSMovementStanceSettings.OuterSingleton;
}
template<> ALSV4_CPP_API UScriptStruct* StaticStruct<FALSMovementStanceSettings>()
{
	return FALSMovementStanceSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FALSMovementStanceSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Standing_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Standing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Crouching_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Crouching;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSMovementStanceSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterStructLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FALSMovementStanceSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FALSMovementStanceSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSMovementStanceSettings_Statics::NewProp_Standing_MetaData[] = {
		{ "Category", "Movement Settings" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FALSMovementStanceSettings_Statics::NewProp_Standing = { "Standing", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSMovementStanceSettings, Standing), Z_Construct_UScriptStruct_FALSMovementSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSMovementStanceSettings_Statics::NewProp_Standing_MetaData), Z_Construct_UScriptStruct_FALSMovementStanceSettings_Statics::NewProp_Standing_MetaData) }; // 3190297434
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSMovementStanceSettings_Statics::NewProp_Crouching_MetaData[] = {
		{ "Category", "Movement Settings" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FALSMovementStanceSettings_Statics::NewProp_Crouching = { "Crouching", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSMovementStanceSettings, Crouching), Z_Construct_UScriptStruct_FALSMovementSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSMovementStanceSettings_Statics::NewProp_Crouching_MetaData), Z_Construct_UScriptStruct_FALSMovementStanceSettings_Statics::NewProp_Crouching_MetaData) }; // 3190297434
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FALSMovementStanceSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSMovementStanceSettings_Statics::NewProp_Standing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSMovementStanceSettings_Statics::NewProp_Crouching,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FALSMovementStanceSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALSV4_CPP,
		nullptr,
		&NewStructOps,
		"ALSMovementStanceSettings",
		Z_Construct_UScriptStruct_FALSMovementStanceSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSMovementStanceSettings_Statics::PropPointers),
		sizeof(FALSMovementStanceSettings),
		alignof(FALSMovementStanceSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSMovementStanceSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FALSMovementStanceSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSMovementStanceSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FALSMovementStanceSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_ALSMovementStanceSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ALSMovementStanceSettings.InnerSingleton, Z_Construct_UScriptStruct_FALSMovementStanceSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ALSMovementStanceSettings.InnerSingleton;
	}

static_assert(std::is_polymorphic<FALSMovementStateSettings>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FALSMovementStateSettings cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ALSMovementStateSettings;
class UScriptStruct* FALSMovementStateSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ALSMovementStateSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ALSMovementStateSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FALSMovementStateSettings, (UObject*)Z_Construct_UPackage__Script_ALSV4_CPP(), TEXT("ALSMovementStateSettings"));
	}
	return Z_Registration_Info_UScriptStruct_ALSMovementStateSettings.OuterSingleton;
}
template<> ALSV4_CPP_API UScriptStruct* StaticStruct<FALSMovementStateSettings>()
{
	return FALSMovementStateSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FALSMovementStateSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VelocityDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VelocityDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookingDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LookingDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Aiming_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Aiming;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSMovementStateSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterStructLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FALSMovementStateSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FALSMovementStateSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSMovementStateSettings_Statics::NewProp_VelocityDirection_MetaData[] = {
		{ "Category", "Movement Settings" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FALSMovementStateSettings_Statics::NewProp_VelocityDirection = { "VelocityDirection", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSMovementStateSettings, VelocityDirection), Z_Construct_UScriptStruct_FALSMovementStanceSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSMovementStateSettings_Statics::NewProp_VelocityDirection_MetaData), Z_Construct_UScriptStruct_FALSMovementStateSettings_Statics::NewProp_VelocityDirection_MetaData) }; // 3485912856
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSMovementStateSettings_Statics::NewProp_LookingDirection_MetaData[] = {
		{ "Category", "Movement Settings" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FALSMovementStateSettings_Statics::NewProp_LookingDirection = { "LookingDirection", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSMovementStateSettings, LookingDirection), Z_Construct_UScriptStruct_FALSMovementStanceSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSMovementStateSettings_Statics::NewProp_LookingDirection_MetaData), Z_Construct_UScriptStruct_FALSMovementStateSettings_Statics::NewProp_LookingDirection_MetaData) }; // 3485912856
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSMovementStateSettings_Statics::NewProp_Aiming_MetaData[] = {
		{ "Category", "Movement Settings" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FALSMovementStateSettings_Statics::NewProp_Aiming = { "Aiming", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSMovementStateSettings, Aiming), Z_Construct_UScriptStruct_FALSMovementStanceSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSMovementStateSettings_Statics::NewProp_Aiming_MetaData), Z_Construct_UScriptStruct_FALSMovementStateSettings_Statics::NewProp_Aiming_MetaData) }; // 3485912856
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FALSMovementStateSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSMovementStateSettings_Statics::NewProp_VelocityDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSMovementStateSettings_Statics::NewProp_LookingDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSMovementStateSettings_Statics::NewProp_Aiming,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FALSMovementStateSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALSV4_CPP,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ALSMovementStateSettings",
		Z_Construct_UScriptStruct_FALSMovementStateSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSMovementStateSettings_Statics::PropPointers),
		sizeof(FALSMovementStateSettings),
		alignof(FALSMovementStateSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSMovementStateSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FALSMovementStateSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSMovementStateSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FALSMovementStateSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_ALSMovementStateSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ALSMovementStateSettings.InnerSingleton, Z_Construct_UScriptStruct_FALSMovementStateSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ALSMovementStateSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ALSRotateInPlaceAsset;
class UScriptStruct* FALSRotateInPlaceAsset::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ALSRotateInPlaceAsset.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ALSRotateInPlaceAsset.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FALSRotateInPlaceAsset, (UObject*)Z_Construct_UPackage__Script_ALSV4_CPP(), TEXT("ALSRotateInPlaceAsset"));
	}
	return Z_Registration_Info_UScriptStruct_ALSRotateInPlaceAsset.OuterSingleton;
}
template<> ALSV4_CPP_API UScriptStruct* StaticStruct<FALSRotateInPlaceAsset>()
{
	return FALSRotateInPlaceAsset::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FALSRotateInPlaceAsset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Animation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Animation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SlotName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlowTurnRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SlowTurnRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FastTurnRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FastTurnRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlowPlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SlowPlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FastPlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FastPlayRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSRotateInPlaceAsset_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterStructLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FALSRotateInPlaceAsset_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FALSRotateInPlaceAsset>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSRotateInPlaceAsset_Statics::NewProp_Animation_MetaData[] = {
		{ "Category", "Rotation System" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FALSRotateInPlaceAsset_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSRotateInPlaceAsset, Animation), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSRotateInPlaceAsset_Statics::NewProp_Animation_MetaData), Z_Construct_UScriptStruct_FALSRotateInPlaceAsset_Statics::NewProp_Animation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSRotateInPlaceAsset_Statics::NewProp_SlotName_MetaData[] = {
		{ "Category", "Rotation System" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FALSRotateInPlaceAsset_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSRotateInPlaceAsset, SlotName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSRotateInPlaceAsset_Statics::NewProp_SlotName_MetaData), Z_Construct_UScriptStruct_FALSRotateInPlaceAsset_Statics::NewProp_SlotName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSRotateInPlaceAsset_Statics::NewProp_SlowTurnRate_MetaData[] = {
		{ "Category", "Rotation System" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSRotateInPlaceAsset_Statics::NewProp_SlowTurnRate = { "SlowTurnRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSRotateInPlaceAsset, SlowTurnRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSRotateInPlaceAsset_Statics::NewProp_SlowTurnRate_MetaData), Z_Construct_UScriptStruct_FALSRotateInPlaceAsset_Statics::NewProp_SlowTurnRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSRotateInPlaceAsset_Statics::NewProp_FastTurnRate_MetaData[] = {
		{ "Category", "Rotation System" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSRotateInPlaceAsset_Statics::NewProp_FastTurnRate = { "FastTurnRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSRotateInPlaceAsset, FastTurnRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSRotateInPlaceAsset_Statics::NewProp_FastTurnRate_MetaData), Z_Construct_UScriptStruct_FALSRotateInPlaceAsset_Statics::NewProp_FastTurnRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSRotateInPlaceAsset_Statics::NewProp_SlowPlayRate_MetaData[] = {
		{ "Category", "Rotation System" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSRotateInPlaceAsset_Statics::NewProp_SlowPlayRate = { "SlowPlayRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSRotateInPlaceAsset, SlowPlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSRotateInPlaceAsset_Statics::NewProp_SlowPlayRate_MetaData), Z_Construct_UScriptStruct_FALSRotateInPlaceAsset_Statics::NewProp_SlowPlayRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSRotateInPlaceAsset_Statics::NewProp_FastPlayRate_MetaData[] = {
		{ "Category", "Rotation System" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSRotateInPlaceAsset_Statics::NewProp_FastPlayRate = { "FastPlayRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSRotateInPlaceAsset, FastPlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSRotateInPlaceAsset_Statics::NewProp_FastPlayRate_MetaData), Z_Construct_UScriptStruct_FALSRotateInPlaceAsset_Statics::NewProp_FastPlayRate_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FALSRotateInPlaceAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSRotateInPlaceAsset_Statics::NewProp_Animation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSRotateInPlaceAsset_Statics::NewProp_SlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSRotateInPlaceAsset_Statics::NewProp_SlowTurnRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSRotateInPlaceAsset_Statics::NewProp_FastTurnRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSRotateInPlaceAsset_Statics::NewProp_SlowPlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSRotateInPlaceAsset_Statics::NewProp_FastPlayRate,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FALSRotateInPlaceAsset_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALSV4_CPP,
		nullptr,
		&NewStructOps,
		"ALSRotateInPlaceAsset",
		Z_Construct_UScriptStruct_FALSRotateInPlaceAsset_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSRotateInPlaceAsset_Statics::PropPointers),
		sizeof(FALSRotateInPlaceAsset),
		alignof(FALSRotateInPlaceAsset),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSRotateInPlaceAsset_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FALSRotateInPlaceAsset_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSRotateInPlaceAsset_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FALSRotateInPlaceAsset()
	{
		if (!Z_Registration_Info_UScriptStruct_ALSRotateInPlaceAsset.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ALSRotateInPlaceAsset.InnerSingleton, Z_Construct_UScriptStruct_FALSRotateInPlaceAsset_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ALSRotateInPlaceAsset.InnerSingleton;
	}

static_assert(std::is_polymorphic<FALSHitFX>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FALSHitFX cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ALSHitFX;
class UScriptStruct* FALSHitFX::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ALSHitFX.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ALSHitFX.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FALSHitFX, (UObject*)Z_Construct_UPackage__Script_ALSV4_CPP(), TEXT("ALSHitFX"));
	}
	return Z_Registration_Info_UScriptStruct_ALSHitFX.OuterSingleton;
}
template<> ALSV4_CPP_API UScriptStruct* StaticStruct<FALSHitFX>()
{
	return FALSHitFX::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FALSHitFX_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SurfaceType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Sound;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SoundSpawnType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundSpawnType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SoundSpawnType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundAttachmentType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SoundAttachmentType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundLocationOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SoundLocationOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundRotationOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SoundRotationOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DecalMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DecalMaterial;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DecalSpawnType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DecalSpawnType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DecalSpawnType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DecalAttachmentType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DecalAttachmentType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DecalLifeSpan_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DecalLifeSpan;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DecalSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DecalSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DecalLocationOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DecalLocationOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DecalRotationOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DecalRotationOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_NiagaraSystem;
		static const UECodeGen_Private::FBytePropertyParams NewProp_NiagaraSpawnType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraSpawnType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NiagaraSpawnType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraAttachmentType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_NiagaraAttachmentType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraLocationOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NiagaraLocationOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraRotationOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NiagaraRotationOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSHitFX_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterStructLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FALSHitFX_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FALSHitFX>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_SurfaceType_MetaData[] = {
		{ "Category", "Surface" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_SurfaceType = { "SurfaceType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSHitFX, SurfaceType), Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_SurfaceType_MetaData), Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_SurfaceType_MetaData) }; // 2508321301
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_Sound_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSHitFX, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_Sound_MetaData), Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_Sound_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_SoundSpawnType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_SoundSpawnType_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_SoundSpawnType = { "SoundSpawnType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSHitFX, SoundSpawnType), Z_Construct_UEnum_ALSV4_CPP_EALSSpawnType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_SoundSpawnType_MetaData), Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_SoundSpawnType_MetaData) }; // 1761893747
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_SoundAttachmentType_MetaData[] = {
		{ "Category", "Sound" },
		{ "EditCondition", "SoundSpawnType == EALSSpawnType::Attached" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_SoundAttachmentType = { "SoundAttachmentType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSHitFX, SoundAttachmentType), Z_Construct_UEnum_Engine_EAttachLocation, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_SoundAttachmentType_MetaData), Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_SoundAttachmentType_MetaData) }; // 4025501060
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_SoundLocationOffset_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_SoundLocationOffset = { "SoundLocationOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSHitFX, SoundLocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_SoundLocationOffset_MetaData), Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_SoundLocationOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_SoundRotationOffset_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_SoundRotationOffset = { "SoundRotationOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSHitFX, SoundRotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_SoundRotationOffset_MetaData), Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_SoundRotationOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_DecalMaterial_MetaData[] = {
		{ "Category", "Decal" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_DecalMaterial = { "DecalMaterial", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSHitFX, DecalMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_DecalMaterial_MetaData), Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_DecalMaterial_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_DecalSpawnType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_DecalSpawnType_MetaData[] = {
		{ "Category", "Decal" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_DecalSpawnType = { "DecalSpawnType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSHitFX, DecalSpawnType), Z_Construct_UEnum_ALSV4_CPP_EALSSpawnType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_DecalSpawnType_MetaData), Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_DecalSpawnType_MetaData) }; // 1761893747
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_DecalAttachmentType_MetaData[] = {
		{ "Category", "Decal" },
		{ "EditCondition", "DecalSpawnType == EALSSpawnType::Attached" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_DecalAttachmentType = { "DecalAttachmentType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSHitFX, DecalAttachmentType), Z_Construct_UEnum_Engine_EAttachLocation, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_DecalAttachmentType_MetaData), Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_DecalAttachmentType_MetaData) }; // 4025501060
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_DecalLifeSpan_MetaData[] = {
		{ "Category", "Decal" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_DecalLifeSpan = { "DecalLifeSpan", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSHitFX, DecalLifeSpan), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_DecalLifeSpan_MetaData), Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_DecalLifeSpan_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_DecalSize_MetaData[] = {
		{ "Category", "Decal" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_DecalSize = { "DecalSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSHitFX, DecalSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_DecalSize_MetaData), Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_DecalSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_DecalLocationOffset_MetaData[] = {
		{ "Category", "Decal" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_DecalLocationOffset = { "DecalLocationOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSHitFX, DecalLocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_DecalLocationOffset_MetaData), Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_DecalLocationOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_DecalRotationOffset_MetaData[] = {
		{ "Category", "Decal" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_DecalRotationOffset = { "DecalRotationOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSHitFX, DecalRotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_DecalRotationOffset_MetaData), Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_DecalRotationOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "Category", "Niagara" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSHitFX, NiagaraSystem), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_NiagaraSystem_MetaData), Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_NiagaraSystem_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_NiagaraSpawnType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_NiagaraSpawnType_MetaData[] = {
		{ "Category", "Niagara" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_NiagaraSpawnType = { "NiagaraSpawnType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSHitFX, NiagaraSpawnType), Z_Construct_UEnum_ALSV4_CPP_EALSSpawnType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_NiagaraSpawnType_MetaData), Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_NiagaraSpawnType_MetaData) }; // 1761893747
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_NiagaraAttachmentType_MetaData[] = {
		{ "Category", "Niagara" },
		{ "EditCondition", "NiagaraSpawnType == EALSSpawnType::Attached" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_NiagaraAttachmentType = { "NiagaraAttachmentType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSHitFX, NiagaraAttachmentType), Z_Construct_UEnum_Engine_EAttachLocation, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_NiagaraAttachmentType_MetaData), Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_NiagaraAttachmentType_MetaData) }; // 4025501060
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_NiagaraLocationOffset_MetaData[] = {
		{ "Category", "Niagara" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_NiagaraLocationOffset = { "NiagaraLocationOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSHitFX, NiagaraLocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_NiagaraLocationOffset_MetaData), Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_NiagaraLocationOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_NiagaraRotationOffset_MetaData[] = {
		{ "Category", "Niagara" },
		{ "ModuleRelativePath", "Public/Library/ALSCharacterStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_NiagaraRotationOffset = { "NiagaraRotationOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSHitFX, NiagaraRotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_NiagaraRotationOffset_MetaData), Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_NiagaraRotationOffset_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FALSHitFX_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_SurfaceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_Sound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_SoundSpawnType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_SoundSpawnType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_SoundAttachmentType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_SoundLocationOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_SoundRotationOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_DecalMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_DecalSpawnType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_DecalSpawnType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_DecalAttachmentType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_DecalLifeSpan,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_DecalSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_DecalLocationOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_DecalRotationOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_NiagaraSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_NiagaraSpawnType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_NiagaraSpawnType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_NiagaraAttachmentType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_NiagaraLocationOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSHitFX_Statics::NewProp_NiagaraRotationOffset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FALSHitFX_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALSV4_CPP,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ALSHitFX",
		Z_Construct_UScriptStruct_FALSHitFX_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSHitFX_Statics::PropPointers),
		sizeof(FALSHitFX),
		alignof(FALSHitFX),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSHitFX_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FALSHitFX_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSHitFX_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FALSHitFX()
	{
		if (!Z_Registration_Info_UScriptStruct_ALSHitFX.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ALSHitFX.InnerSingleton, Z_Construct_UScriptStruct_FALSHitFX_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ALSHitFX.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_hitman_stealth_recreate_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Library_ALSCharacterStructLibrary_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_hitman_stealth_recreate_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Library_ALSCharacterStructLibrary_h_Statics::ScriptStructInfo[] = {
		{ FALSComponentAndTransform::StaticStruct, Z_Construct_UScriptStruct_FALSComponentAndTransform_Statics::NewStructOps, TEXT("ALSComponentAndTransform"), &Z_Registration_Info_UScriptStruct_ALSComponentAndTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FALSComponentAndTransform), 2936654904U) },
		{ FALSCameraSettings::StaticStruct, Z_Construct_UScriptStruct_FALSCameraSettings_Statics::NewStructOps, TEXT("ALSCameraSettings"), &Z_Registration_Info_UScriptStruct_ALSCameraSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FALSCameraSettings), 592242880U) },
		{ FALSCameraGaitSettings::StaticStruct, Z_Construct_UScriptStruct_FALSCameraGaitSettings_Statics::NewStructOps, TEXT("ALSCameraGaitSettings"), &Z_Registration_Info_UScriptStruct_ALSCameraGaitSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FALSCameraGaitSettings), 1194917815U) },
		{ FALSCameraStateSettings::StaticStruct, Z_Construct_UScriptStruct_FALSCameraStateSettings_Statics::NewStructOps, TEXT("ALSCameraStateSettings"), &Z_Registration_Info_UScriptStruct_ALSCameraStateSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FALSCameraStateSettings), 2914746617U) },
		{ FALSMantleAsset::StaticStruct, Z_Construct_UScriptStruct_FALSMantleAsset_Statics::NewStructOps, TEXT("ALSMantleAsset"), &Z_Registration_Info_UScriptStruct_ALSMantleAsset, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FALSMantleAsset), 3343763034U) },
		{ FALSMantleParams::StaticStruct, Z_Construct_UScriptStruct_FALSMantleParams_Statics::NewStructOps, TEXT("ALSMantleParams"), &Z_Registration_Info_UScriptStruct_ALSMantleParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FALSMantleParams), 2726004196U) },
		{ FALSMantleTraceSettings::StaticStruct, Z_Construct_UScriptStruct_FALSMantleTraceSettings_Statics::NewStructOps, TEXT("ALSMantleTraceSettings"), &Z_Registration_Info_UScriptStruct_ALSMantleTraceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FALSMantleTraceSettings), 2225761018U) },
		{ FALSMovementSettings::StaticStruct, Z_Construct_UScriptStruct_FALSMovementSettings_Statics::NewStructOps, TEXT("ALSMovementSettings"), &Z_Registration_Info_UScriptStruct_ALSMovementSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FALSMovementSettings), 3190297434U) },
		{ FALSMovementStanceSettings::StaticStruct, Z_Construct_UScriptStruct_FALSMovementStanceSettings_Statics::NewStructOps, TEXT("ALSMovementStanceSettings"), &Z_Registration_Info_UScriptStruct_ALSMovementStanceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FALSMovementStanceSettings), 3485912856U) },
		{ FALSMovementStateSettings::StaticStruct, Z_Construct_UScriptStruct_FALSMovementStateSettings_Statics::NewStructOps, TEXT("ALSMovementStateSettings"), &Z_Registration_Info_UScriptStruct_ALSMovementStateSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FALSMovementStateSettings), 4128740719U) },
		{ FALSRotateInPlaceAsset::StaticStruct, Z_Construct_UScriptStruct_FALSRotateInPlaceAsset_Statics::NewStructOps, TEXT("ALSRotateInPlaceAsset"), &Z_Registration_Info_UScriptStruct_ALSRotateInPlaceAsset, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FALSRotateInPlaceAsset), 3602046675U) },
		{ FALSHitFX::StaticStruct, Z_Construct_UScriptStruct_FALSHitFX_Statics::NewStructOps, TEXT("ALSHitFX"), &Z_Registration_Info_UScriptStruct_ALSHitFX, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FALSHitFX), 2955861952U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_hitman_stealth_recreate_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Library_ALSCharacterStructLibrary_h_4107215814(TEXT("/Script/ALSV4_CPP"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_hitman_stealth_recreate_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Library_ALSCharacterStructLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_hitman_stealth_recreate_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Library_ALSCharacterStructLibrary_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
