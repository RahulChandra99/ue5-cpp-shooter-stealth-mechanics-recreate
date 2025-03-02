// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALSV4_CPP/Public/Library/ALSAnimationStructLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeALSAnimationStructLibrary() {}
// Cross Module References
	ALSV4_CPP_API UEnum* Z_Construct_UEnum_ALSV4_CPP_EALSHipsDirection();
	ALSV4_CPP_API UEnum* Z_Construct_UEnum_ALSV4_CPP_EALSMovementState();
	ALSV4_CPP_API UEnum* Z_Construct_UEnum_ALSV4_CPP_EALSViewMode();
	ALSV4_CPP_API UScriptStruct* Z_Construct_UScriptStruct_FALSAnimCharacterInformation();
	ALSV4_CPP_API UScriptStruct* Z_Construct_UScriptStruct_FALSAnimConfiguration();
	ALSV4_CPP_API UScriptStruct* Z_Construct_UScriptStruct_FALSAnimGraphAimingValues();
	ALSV4_CPP_API UScriptStruct* Z_Construct_UScriptStruct_FALSAnimGraphFootIK();
	ALSV4_CPP_API UScriptStruct* Z_Construct_UScriptStruct_FALSAnimGraphGrounded();
	ALSV4_CPP_API UScriptStruct* Z_Construct_UScriptStruct_FALSAnimGraphInAir();
	ALSV4_CPP_API UScriptStruct* Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending();
	ALSV4_CPP_API UScriptStruct* Z_Construct_UScriptStruct_FALSAnimRotateInPlace();
	ALSV4_CPP_API UScriptStruct* Z_Construct_UScriptStruct_FALSAnimTurnInPlace();
	ALSV4_CPP_API UScriptStruct* Z_Construct_UScriptStruct_FALSDynamicMontageParams();
	ALSV4_CPP_API UScriptStruct* Z_Construct_UScriptStruct_FALSLeanAmount();
	ALSV4_CPP_API UScriptStruct* Z_Construct_UScriptStruct_FALSTurnInPlaceAsset();
	ALSV4_CPP_API UScriptStruct* Z_Construct_UScriptStruct_FALSVelocityBlend();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ALSV4_CPP();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ALSDynamicMontageParams;
class UScriptStruct* FALSDynamicMontageParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ALSDynamicMontageParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ALSDynamicMontageParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FALSDynamicMontageParams, (UObject*)Z_Construct_UPackage__Script_ALSV4_CPP(), TEXT("ALSDynamicMontageParams"));
	}
	return Z_Registration_Info_UScriptStruct_ALSDynamicMontageParams.OuterSingleton;
}
template<> ALSV4_CPP_API UScriptStruct* StaticStruct<FALSDynamicMontageParams>()
{
	return FALSDynamicMontageParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FALSDynamicMontageParams_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendInTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendInTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendOutTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendOutTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSDynamicMontageParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FALSDynamicMontageParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FALSDynamicMontageParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSDynamicMontageParams_Statics::NewProp_Animation_MetaData[] = {
		{ "Category", "ALS|Dynamic Transition" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FALSDynamicMontageParams_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSDynamicMontageParams, Animation), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSDynamicMontageParams_Statics::NewProp_Animation_MetaData), Z_Construct_UScriptStruct_FALSDynamicMontageParams_Statics::NewProp_Animation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSDynamicMontageParams_Statics::NewProp_BlendInTime_MetaData[] = {
		{ "Category", "ALS|Dynamic Transition" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSDynamicMontageParams_Statics::NewProp_BlendInTime = { "BlendInTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSDynamicMontageParams, BlendInTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSDynamicMontageParams_Statics::NewProp_BlendInTime_MetaData), Z_Construct_UScriptStruct_FALSDynamicMontageParams_Statics::NewProp_BlendInTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSDynamicMontageParams_Statics::NewProp_BlendOutTime_MetaData[] = {
		{ "Category", "ALS|Dynamic Transition" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSDynamicMontageParams_Statics::NewProp_BlendOutTime = { "BlendOutTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSDynamicMontageParams, BlendOutTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSDynamicMontageParams_Statics::NewProp_BlendOutTime_MetaData), Z_Construct_UScriptStruct_FALSDynamicMontageParams_Statics::NewProp_BlendOutTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSDynamicMontageParams_Statics::NewProp_PlayRate_MetaData[] = {
		{ "Category", "ALS|Dynamic Transition" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSDynamicMontageParams_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSDynamicMontageParams, PlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSDynamicMontageParams_Statics::NewProp_PlayRate_MetaData), Z_Construct_UScriptStruct_FALSDynamicMontageParams_Statics::NewProp_PlayRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSDynamicMontageParams_Statics::NewProp_StartTime_MetaData[] = {
		{ "Category", "ALS|Dynamic Transition" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSDynamicMontageParams_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSDynamicMontageParams, StartTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSDynamicMontageParams_Statics::NewProp_StartTime_MetaData), Z_Construct_UScriptStruct_FALSDynamicMontageParams_Statics::NewProp_StartTime_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FALSDynamicMontageParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSDynamicMontageParams_Statics::NewProp_Animation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSDynamicMontageParams_Statics::NewProp_BlendInTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSDynamicMontageParams_Statics::NewProp_BlendOutTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSDynamicMontageParams_Statics::NewProp_PlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSDynamicMontageParams_Statics::NewProp_StartTime,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FALSDynamicMontageParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALSV4_CPP,
		nullptr,
		&NewStructOps,
		"ALSDynamicMontageParams",
		Z_Construct_UScriptStruct_FALSDynamicMontageParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSDynamicMontageParams_Statics::PropPointers),
		sizeof(FALSDynamicMontageParams),
		alignof(FALSDynamicMontageParams),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSDynamicMontageParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FALSDynamicMontageParams_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSDynamicMontageParams_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FALSDynamicMontageParams()
	{
		if (!Z_Registration_Info_UScriptStruct_ALSDynamicMontageParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ALSDynamicMontageParams.InnerSingleton, Z_Construct_UScriptStruct_FALSDynamicMontageParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ALSDynamicMontageParams.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ALSLeanAmount;
class UScriptStruct* FALSLeanAmount::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ALSLeanAmount.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ALSLeanAmount.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FALSLeanAmount, (UObject*)Z_Construct_UPackage__Script_ALSV4_CPP(), TEXT("ALSLeanAmount"));
	}
	return Z_Registration_Info_UScriptStruct_ALSLeanAmount.OuterSingleton;
}
template<> ALSV4_CPP_API UScriptStruct* StaticStruct<FALSLeanAmount>()
{
	return FALSLeanAmount::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FALSLeanAmount_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LR_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LR;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FB_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FB;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSLeanAmount_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FALSLeanAmount_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FALSLeanAmount>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSLeanAmount_Statics::NewProp_LR_MetaData[] = {
		{ "Category", "ALS|Anim Graph - Grounded" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSLeanAmount_Statics::NewProp_LR = { "LR", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSLeanAmount, LR), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSLeanAmount_Statics::NewProp_LR_MetaData), Z_Construct_UScriptStruct_FALSLeanAmount_Statics::NewProp_LR_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSLeanAmount_Statics::NewProp_FB_MetaData[] = {
		{ "Category", "ALS|Anim Graph - Grounded" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSLeanAmount_Statics::NewProp_FB = { "FB", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSLeanAmount, FB), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSLeanAmount_Statics::NewProp_FB_MetaData), Z_Construct_UScriptStruct_FALSLeanAmount_Statics::NewProp_FB_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FALSLeanAmount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSLeanAmount_Statics::NewProp_LR,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSLeanAmount_Statics::NewProp_FB,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FALSLeanAmount_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALSV4_CPP,
		nullptr,
		&NewStructOps,
		"ALSLeanAmount",
		Z_Construct_UScriptStruct_FALSLeanAmount_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSLeanAmount_Statics::PropPointers),
		sizeof(FALSLeanAmount),
		alignof(FALSLeanAmount),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSLeanAmount_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FALSLeanAmount_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSLeanAmount_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FALSLeanAmount()
	{
		if (!Z_Registration_Info_UScriptStruct_ALSLeanAmount.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ALSLeanAmount.InnerSingleton, Z_Construct_UScriptStruct_FALSLeanAmount_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ALSLeanAmount.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ALSVelocityBlend;
class UScriptStruct* FALSVelocityBlend::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ALSVelocityBlend.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ALSVelocityBlend.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FALSVelocityBlend, (UObject*)Z_Construct_UPackage__Script_ALSV4_CPP(), TEXT("ALSVelocityBlend"));
	}
	return Z_Registration_Info_UScriptStruct_ALSVelocityBlend.OuterSingleton;
}
template<> ALSV4_CPP_API UScriptStruct* StaticStruct<FALSVelocityBlend>()
{
	return FALSVelocityBlend::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FALSVelocityBlend_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_F_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_F;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_B;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_L_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_L;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_R_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_R;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSVelocityBlend_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FALSVelocityBlend_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FALSVelocityBlend>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSVelocityBlend_Statics::NewProp_F_MetaData[] = {
		{ "Category", "ALS|Anim Graph - Grounded" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSVelocityBlend_Statics::NewProp_F = { "F", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSVelocityBlend, F), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSVelocityBlend_Statics::NewProp_F_MetaData), Z_Construct_UScriptStruct_FALSVelocityBlend_Statics::NewProp_F_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSVelocityBlend_Statics::NewProp_B_MetaData[] = {
		{ "Category", "ALS|Anim Graph - Grounded" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSVelocityBlend_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSVelocityBlend, B), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSVelocityBlend_Statics::NewProp_B_MetaData), Z_Construct_UScriptStruct_FALSVelocityBlend_Statics::NewProp_B_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSVelocityBlend_Statics::NewProp_L_MetaData[] = {
		{ "Category", "ALS|Anim Graph - Grounded" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSVelocityBlend_Statics::NewProp_L = { "L", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSVelocityBlend, L), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSVelocityBlend_Statics::NewProp_L_MetaData), Z_Construct_UScriptStruct_FALSVelocityBlend_Statics::NewProp_L_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSVelocityBlend_Statics::NewProp_R_MetaData[] = {
		{ "Category", "ALS|Anim Graph - Grounded" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSVelocityBlend_Statics::NewProp_R = { "R", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSVelocityBlend, R), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSVelocityBlend_Statics::NewProp_R_MetaData), Z_Construct_UScriptStruct_FALSVelocityBlend_Statics::NewProp_R_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FALSVelocityBlend_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSVelocityBlend_Statics::NewProp_F,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSVelocityBlend_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSVelocityBlend_Statics::NewProp_L,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSVelocityBlend_Statics::NewProp_R,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FALSVelocityBlend_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALSV4_CPP,
		nullptr,
		&NewStructOps,
		"ALSVelocityBlend",
		Z_Construct_UScriptStruct_FALSVelocityBlend_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSVelocityBlend_Statics::PropPointers),
		sizeof(FALSVelocityBlend),
		alignof(FALSVelocityBlend),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSVelocityBlend_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FALSVelocityBlend_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSVelocityBlend_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FALSVelocityBlend()
	{
		if (!Z_Registration_Info_UScriptStruct_ALSVelocityBlend.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ALSVelocityBlend.InnerSingleton, Z_Construct_UScriptStruct_FALSVelocityBlend_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ALSVelocityBlend.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ALSTurnInPlaceAsset;
class UScriptStruct* FALSTurnInPlaceAsset::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ALSTurnInPlaceAsset.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ALSTurnInPlaceAsset.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FALSTurnInPlaceAsset, (UObject*)Z_Construct_UPackage__Script_ALSV4_CPP(), TEXT("ALSTurnInPlaceAsset"));
	}
	return Z_Registration_Info_UScriptStruct_ALSTurnInPlaceAsset.OuterSingleton;
}
template<> ALSV4_CPP_API UScriptStruct* StaticStruct<FALSTurnInPlaceAsset>()
{
	return FALSTurnInPlaceAsset::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FALSTurnInPlaceAsset_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimatedAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimatedAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SlotName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaleTurnAngle_MetaData[];
#endif
		static void NewProp_ScaleTurnAngle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ScaleTurnAngle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSTurnInPlaceAsset_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FALSTurnInPlaceAsset_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FALSTurnInPlaceAsset>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSTurnInPlaceAsset_Statics::NewProp_Animation_MetaData[] = {
		{ "Category", "ALS|Turn In Place" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FALSTurnInPlaceAsset_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSTurnInPlaceAsset, Animation), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSTurnInPlaceAsset_Statics::NewProp_Animation_MetaData), Z_Construct_UScriptStruct_FALSTurnInPlaceAsset_Statics::NewProp_Animation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSTurnInPlaceAsset_Statics::NewProp_AnimatedAngle_MetaData[] = {
		{ "Category", "ALS|Turn In Place" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSTurnInPlaceAsset_Statics::NewProp_AnimatedAngle = { "AnimatedAngle", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSTurnInPlaceAsset, AnimatedAngle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSTurnInPlaceAsset_Statics::NewProp_AnimatedAngle_MetaData), Z_Construct_UScriptStruct_FALSTurnInPlaceAsset_Statics::NewProp_AnimatedAngle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSTurnInPlaceAsset_Statics::NewProp_SlotName_MetaData[] = {
		{ "Category", "ALS|Turn In Place" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FALSTurnInPlaceAsset_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSTurnInPlaceAsset, SlotName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSTurnInPlaceAsset_Statics::NewProp_SlotName_MetaData), Z_Construct_UScriptStruct_FALSTurnInPlaceAsset_Statics::NewProp_SlotName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSTurnInPlaceAsset_Statics::NewProp_PlayRate_MetaData[] = {
		{ "Category", "ALS|Turn In Place" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSTurnInPlaceAsset_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSTurnInPlaceAsset, PlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSTurnInPlaceAsset_Statics::NewProp_PlayRate_MetaData), Z_Construct_UScriptStruct_FALSTurnInPlaceAsset_Statics::NewProp_PlayRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSTurnInPlaceAsset_Statics::NewProp_ScaleTurnAngle_MetaData[] = {
		{ "Category", "ALS|Turn In Place" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FALSTurnInPlaceAsset_Statics::NewProp_ScaleTurnAngle_SetBit(void* Obj)
	{
		((FALSTurnInPlaceAsset*)Obj)->ScaleTurnAngle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FALSTurnInPlaceAsset_Statics::NewProp_ScaleTurnAngle = { "ScaleTurnAngle", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FALSTurnInPlaceAsset), &Z_Construct_UScriptStruct_FALSTurnInPlaceAsset_Statics::NewProp_ScaleTurnAngle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSTurnInPlaceAsset_Statics::NewProp_ScaleTurnAngle_MetaData), Z_Construct_UScriptStruct_FALSTurnInPlaceAsset_Statics::NewProp_ScaleTurnAngle_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FALSTurnInPlaceAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSTurnInPlaceAsset_Statics::NewProp_Animation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSTurnInPlaceAsset_Statics::NewProp_AnimatedAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSTurnInPlaceAsset_Statics::NewProp_SlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSTurnInPlaceAsset_Statics::NewProp_PlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSTurnInPlaceAsset_Statics::NewProp_ScaleTurnAngle,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FALSTurnInPlaceAsset_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALSV4_CPP,
		nullptr,
		&NewStructOps,
		"ALSTurnInPlaceAsset",
		Z_Construct_UScriptStruct_FALSTurnInPlaceAsset_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSTurnInPlaceAsset_Statics::PropPointers),
		sizeof(FALSTurnInPlaceAsset),
		alignof(FALSTurnInPlaceAsset),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSTurnInPlaceAsset_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FALSTurnInPlaceAsset_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSTurnInPlaceAsset_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FALSTurnInPlaceAsset()
	{
		if (!Z_Registration_Info_UScriptStruct_ALSTurnInPlaceAsset.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ALSTurnInPlaceAsset.InnerSingleton, Z_Construct_UScriptStruct_FALSTurnInPlaceAsset_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ALSTurnInPlaceAsset.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ALSAnimCharacterInformation;
class UScriptStruct* FALSAnimCharacterInformation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ALSAnimCharacterInformation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ALSAnimCharacterInformation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FALSAnimCharacterInformation, (UObject*)Z_Construct_UPackage__Script_ALSV4_CPP(), TEXT("ALSAnimCharacterInformation"));
	}
	return Z_Registration_Info_UScriptStruct_ALSAnimCharacterInformation.OuterSingleton;
}
template<> ALSV4_CPP_API UScriptStruct* StaticStruct<FALSAnimCharacterInformation>()
{
	return FALSAnimCharacterInformation::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimingRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AimingRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterActorRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterActorRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelativeVelocityDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeVelocityDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Acceleration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Acceleration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementInput_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MovementInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsMoving_MetaData[];
#endif
		static void NewProp_bIsMoving_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMoving;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasMovementInput_MetaData[];
#endif
		static void NewProp_bHasMovementInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasMovementInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementInputAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementInputAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimYawRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AimYawRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZoomAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomAmount;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PrevMovementState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrevMovementState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PrevMovementState;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ViewMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ViewMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FALSAnimCharacterInformation>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::NewProp_AimingRotation_MetaData[] = {
		{ "Category", "ALS|Character Information" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::NewProp_AimingRotation = { "AimingRotation", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimCharacterInformation, AimingRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::NewProp_AimingRotation_MetaData), Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::NewProp_AimingRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::NewProp_CharacterActorRotation_MetaData[] = {
		{ "Category", "ALS|Character Information" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::NewProp_CharacterActorRotation = { "CharacterActorRotation", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimCharacterInformation, CharacterActorRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::NewProp_CharacterActorRotation_MetaData), Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::NewProp_CharacterActorRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::NewProp_Velocity_MetaData[] = {
		{ "Category", "ALS|Character Information" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimCharacterInformation, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::NewProp_Velocity_MetaData), Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::NewProp_Velocity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::NewProp_RelativeVelocityDirection_MetaData[] = {
		{ "Category", "ALS|Character Information" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::NewProp_RelativeVelocityDirection = { "RelativeVelocityDirection", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimCharacterInformation, RelativeVelocityDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::NewProp_RelativeVelocityDirection_MetaData), Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::NewProp_RelativeVelocityDirection_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::NewProp_Acceleration_MetaData[] = {
		{ "Category", "ALS|Character Information" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::NewProp_Acceleration = { "Acceleration", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimCharacterInformation, Acceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::NewProp_Acceleration_MetaData), Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::NewProp_Acceleration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::NewProp_MovementInput_MetaData[] = {
		{ "Category", "ALS|Character Information" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::NewProp_MovementInput = { "MovementInput", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimCharacterInformation, MovementInput), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::NewProp_MovementInput_MetaData), Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::NewProp_MovementInput_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::NewProp_bIsMoving_MetaData[] = {
		{ "Category", "ALS|Character Information" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::NewProp_bIsMoving_SetBit(void* Obj)
	{
		((FALSAnimCharacterInformation*)Obj)->bIsMoving = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::NewProp_bIsMoving = { "bIsMoving", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FALSAnimCharacterInformation), &Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::NewProp_bIsMoving_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::NewProp_bIsMoving_MetaData), Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::NewProp_bIsMoving_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::NewProp_bHasMovementInput_MetaData[] = {
		{ "Category", "ALS|Character Information" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::NewProp_bHasMovementInput_SetBit(void* Obj)
	{
		((FALSAnimCharacterInformation*)Obj)->bHasMovementInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::NewProp_bHasMovementInput = { "bHasMovementInput", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FALSAnimCharacterInformation), &Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::NewProp_bHasMovementInput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::NewProp_bHasMovementInput_MetaData), Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::NewProp_bHasMovementInput_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "ALS|Character Information" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimCharacterInformation, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::NewProp_Speed_MetaData), Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::NewProp_Speed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::NewProp_MovementInputAmount_MetaData[] = {
		{ "Category", "ALS|Character Information" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::NewProp_MovementInputAmount = { "MovementInputAmount", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimCharacterInformation, MovementInputAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::NewProp_MovementInputAmount_MetaData), Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::NewProp_MovementInputAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::NewProp_AimYawRate_MetaData[] = {
		{ "Category", "ALS|Character Information" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::NewProp_AimYawRate = { "AimYawRate", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimCharacterInformation, AimYawRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::NewProp_AimYawRate_MetaData), Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::NewProp_AimYawRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::NewProp_ZoomAmount_MetaData[] = {
		{ "Category", "ALS|Character Information" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::NewProp_ZoomAmount = { "ZoomAmount", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimCharacterInformation, ZoomAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::NewProp_ZoomAmount_MetaData), Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::NewProp_ZoomAmount_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::NewProp_PrevMovementState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::NewProp_PrevMovementState_MetaData[] = {
		{ "Category", "ALS|Character Information" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::NewProp_PrevMovementState = { "PrevMovementState", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimCharacterInformation, PrevMovementState), Z_Construct_UEnum_ALSV4_CPP_EALSMovementState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::NewProp_PrevMovementState_MetaData), Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::NewProp_PrevMovementState_MetaData) }; // 2855841202
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::NewProp_ViewMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::NewProp_ViewMode_MetaData[] = {
		{ "Category", "ALS|Character Information" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::NewProp_ViewMode = { "ViewMode", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimCharacterInformation, ViewMode), Z_Construct_UEnum_ALSV4_CPP_EALSViewMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::NewProp_ViewMode_MetaData), Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::NewProp_ViewMode_MetaData) }; // 98731475
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::NewProp_AimingRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::NewProp_CharacterActorRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::NewProp_Velocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::NewProp_RelativeVelocityDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::NewProp_Acceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::NewProp_MovementInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::NewProp_bIsMoving,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::NewProp_bHasMovementInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::NewProp_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::NewProp_MovementInputAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::NewProp_AimYawRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::NewProp_ZoomAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::NewProp_PrevMovementState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::NewProp_PrevMovementState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::NewProp_ViewMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::NewProp_ViewMode,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALSV4_CPP,
		nullptr,
		&NewStructOps,
		"ALSAnimCharacterInformation",
		Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::PropPointers),
		sizeof(FALSAnimCharacterInformation),
		alignof(FALSAnimCharacterInformation),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FALSAnimCharacterInformation()
	{
		if (!Z_Registration_Info_UScriptStruct_ALSAnimCharacterInformation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ALSAnimCharacterInformation.InnerSingleton, Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ALSAnimCharacterInformation.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ALSAnimGraphGrounded;
class UScriptStruct* FALSAnimGraphGrounded::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ALSAnimGraphGrounded.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ALSAnimGraphGrounded.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FALSAnimGraphGrounded, (UObject*)Z_Construct_UPackage__Script_ALSV4_CPP(), TEXT("ALSAnimGraphGrounded"));
	}
	return Z_Registration_Info_UScriptStruct_ALSAnimGraphGrounded.OuterSingleton;
}
template<> ALSV4_CPP_API UScriptStruct* StaticStruct<FALSAnimGraphGrounded>()
{
	return FALSAnimGraphGrounded::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_TrackedHipsDirection_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackedHipsDirection_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TrackedHipsDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldMove_MetaData[];
#endif
		static void NewProp_bShouldMove_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldMove;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRotateL_MetaData[];
#endif
		static void NewProp_bRotateL_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRotateL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRotateR_MetaData[];
#endif
		static void NewProp_bRotateR_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRotateR;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPivot_MetaData[];
#endif
		static void NewProp_bPivot_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPivot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotateRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotateRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DiagonalScaleAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DiagonalScaleAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WalkRunBlend_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkRunBlend;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StandingPlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StandingPlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrouchingPlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CrouchingPlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StrideBlend_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StrideBlend;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FYaw_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FYaw;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BYaw_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BYaw;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LYaw_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LYaw;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RYaw_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RYaw;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FALSAnimGraphGrounded>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_TrackedHipsDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_TrackedHipsDirection_MetaData[] = {
		{ "Category", "ALS|Anim Graph - Grounded" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_TrackedHipsDirection = { "TrackedHipsDirection", nullptr, (EPropertyFlags)0x0010000000030005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimGraphGrounded, TrackedHipsDirection), Z_Construct_UEnum_ALSV4_CPP_EALSHipsDirection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_TrackedHipsDirection_MetaData), Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_TrackedHipsDirection_MetaData) }; // 1711658086
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_bShouldMove_MetaData[] = {
		{ "Category", "ALS|Anim Graph - Grounded" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_bShouldMove_SetBit(void* Obj)
	{
		((FALSAnimGraphGrounded*)Obj)->bShouldMove = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_bShouldMove = { "bShouldMove", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FALSAnimGraphGrounded), &Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_bShouldMove_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_bShouldMove_MetaData), Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_bShouldMove_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_bRotateL_MetaData[] = {
		{ "Category", "ALS|Anim Graph - Grounded" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Should be false initially\n" },
#endif
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should be false initially" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_bRotateL_SetBit(void* Obj)
	{
		((FALSAnimGraphGrounded*)Obj)->bRotateL = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_bRotateL = { "bRotateL", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FALSAnimGraphGrounded), &Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_bRotateL_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_bRotateL_MetaData), Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_bRotateL_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_bRotateR_MetaData[] = {
		{ "Category", "ALS|Anim Graph - Grounded" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_bRotateR_SetBit(void* Obj)
	{
		((FALSAnimGraphGrounded*)Obj)->bRotateR = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_bRotateR = { "bRotateR", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FALSAnimGraphGrounded), &Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_bRotateR_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_bRotateR_MetaData), Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_bRotateR_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_bPivot_MetaData[] = {
		{ "Category", "ALS|Anim Graph - Grounded" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_bPivot_SetBit(void* Obj)
	{
		((FALSAnimGraphGrounded*)Obj)->bPivot = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_bPivot = { "bPivot", nullptr, (EPropertyFlags)0x0010000000030005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FALSAnimGraphGrounded), &Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_bPivot_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_bPivot_MetaData), Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_bPivot_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_RotateRate_MetaData[] = {
		{ "Category", "ALS|Anim Graph - Grounded" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_RotateRate = { "RotateRate", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimGraphGrounded, RotateRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_RotateRate_MetaData), Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_RotateRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_RotationScale_MetaData[] = {
		{ "Category", "ALS|Anim Graph - Grounded" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_RotationScale = { "RotationScale", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimGraphGrounded, RotationScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_RotationScale_MetaData), Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_RotationScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_DiagonalScaleAmount_MetaData[] = {
		{ "Category", "ALS|Anim Graph - Grounded" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_DiagonalScaleAmount = { "DiagonalScaleAmount", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimGraphGrounded, DiagonalScaleAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_DiagonalScaleAmount_MetaData), Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_DiagonalScaleAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_WalkRunBlend_MetaData[] = {
		{ "Category", "ALS|Anim Graph - Grounded" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_WalkRunBlend = { "WalkRunBlend", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimGraphGrounded, WalkRunBlend), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_WalkRunBlend_MetaData), Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_WalkRunBlend_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_StandingPlayRate_MetaData[] = {
		{ "Category", "ALS|Anim Graph - Grounded" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_StandingPlayRate = { "StandingPlayRate", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimGraphGrounded, StandingPlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_StandingPlayRate_MetaData), Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_StandingPlayRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_CrouchingPlayRate_MetaData[] = {
		{ "Category", "ALS|Anim Graph - Grounded" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_CrouchingPlayRate = { "CrouchingPlayRate", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimGraphGrounded, CrouchingPlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_CrouchingPlayRate_MetaData), Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_CrouchingPlayRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_StrideBlend_MetaData[] = {
		{ "Category", "ALS|Anim Graph - Grounded" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_StrideBlend = { "StrideBlend", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimGraphGrounded, StrideBlend), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_StrideBlend_MetaData), Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_StrideBlend_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_FYaw_MetaData[] = {
		{ "Category", "ALS|Anim Graph - Grounded" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_FYaw = { "FYaw", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimGraphGrounded, FYaw), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_FYaw_MetaData), Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_FYaw_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_BYaw_MetaData[] = {
		{ "Category", "ALS|Anim Graph - Grounded" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_BYaw = { "BYaw", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimGraphGrounded, BYaw), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_BYaw_MetaData), Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_BYaw_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_LYaw_MetaData[] = {
		{ "Category", "ALS|Anim Graph - Grounded" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_LYaw = { "LYaw", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimGraphGrounded, LYaw), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_LYaw_MetaData), Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_LYaw_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_RYaw_MetaData[] = {
		{ "Category", "ALS|Anim Graph - Grounded" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_RYaw = { "RYaw", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimGraphGrounded, RYaw), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_RYaw_MetaData), Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_RYaw_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_TrackedHipsDirection_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_TrackedHipsDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_bShouldMove,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_bRotateL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_bRotateR,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_bPivot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_RotateRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_RotationScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_DiagonalScaleAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_WalkRunBlend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_StandingPlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_CrouchingPlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_StrideBlend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_FYaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_BYaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_LYaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewProp_RYaw,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALSV4_CPP,
		nullptr,
		&NewStructOps,
		"ALSAnimGraphGrounded",
		Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::PropPointers),
		sizeof(FALSAnimGraphGrounded),
		alignof(FALSAnimGraphGrounded),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FALSAnimGraphGrounded()
	{
		if (!Z_Registration_Info_UScriptStruct_ALSAnimGraphGrounded.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ALSAnimGraphGrounded.InnerSingleton, Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ALSAnimGraphGrounded.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ALSAnimGraphInAir;
class UScriptStruct* FALSAnimGraphInAir::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ALSAnimGraphInAir.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ALSAnimGraphInAir.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FALSAnimGraphInAir, (UObject*)Z_Construct_UPackage__Script_ALSV4_CPP(), TEXT("ALSAnimGraphInAir"));
	}
	return Z_Registration_Info_UScriptStruct_ALSAnimGraphInAir.OuterSingleton;
}
template<> ALSV4_CPP_API UScriptStruct* StaticStruct<FALSAnimGraphInAir>()
{
	return FALSAnimGraphInAir::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FALSAnimGraphInAir_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bJumped_MetaData[];
#endif
		static void NewProp_bJumped_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bJumped;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpPlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_JumpPlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FallSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FallSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LandPrediction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LandPrediction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimGraphInAir_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FALSAnimGraphInAir_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FALSAnimGraphInAir>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimGraphInAir_Statics::NewProp_bJumped_MetaData[] = {
		{ "Category", "ALS|Anim Graph - In Air" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FALSAnimGraphInAir_Statics::NewProp_bJumped_SetBit(void* Obj)
	{
		((FALSAnimGraphInAir*)Obj)->bJumped = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FALSAnimGraphInAir_Statics::NewProp_bJumped = { "bJumped", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FALSAnimGraphInAir), &Z_Construct_UScriptStruct_FALSAnimGraphInAir_Statics::NewProp_bJumped_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimGraphInAir_Statics::NewProp_bJumped_MetaData), Z_Construct_UScriptStruct_FALSAnimGraphInAir_Statics::NewProp_bJumped_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimGraphInAir_Statics::NewProp_JumpPlayRate_MetaData[] = {
		{ "Category", "ALS|Anim Graph - In Air" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSAnimGraphInAir_Statics::NewProp_JumpPlayRate = { "JumpPlayRate", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimGraphInAir, JumpPlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimGraphInAir_Statics::NewProp_JumpPlayRate_MetaData), Z_Construct_UScriptStruct_FALSAnimGraphInAir_Statics::NewProp_JumpPlayRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimGraphInAir_Statics::NewProp_FallSpeed_MetaData[] = {
		{ "Category", "ALS|Anim Graph - In Air" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSAnimGraphInAir_Statics::NewProp_FallSpeed = { "FallSpeed", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimGraphInAir, FallSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimGraphInAir_Statics::NewProp_FallSpeed_MetaData), Z_Construct_UScriptStruct_FALSAnimGraphInAir_Statics::NewProp_FallSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimGraphInAir_Statics::NewProp_LandPrediction_MetaData[] = {
		{ "Category", "ALS|Anim Graph - In Air" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSAnimGraphInAir_Statics::NewProp_LandPrediction = { "LandPrediction", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimGraphInAir, LandPrediction), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimGraphInAir_Statics::NewProp_LandPrediction_MetaData), Z_Construct_UScriptStruct_FALSAnimGraphInAir_Statics::NewProp_LandPrediction_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FALSAnimGraphInAir_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimGraphInAir_Statics::NewProp_bJumped,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimGraphInAir_Statics::NewProp_JumpPlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimGraphInAir_Statics::NewProp_FallSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimGraphInAir_Statics::NewProp_LandPrediction,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FALSAnimGraphInAir_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALSV4_CPP,
		nullptr,
		&NewStructOps,
		"ALSAnimGraphInAir",
		Z_Construct_UScriptStruct_FALSAnimGraphInAir_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimGraphInAir_Statics::PropPointers),
		sizeof(FALSAnimGraphInAir),
		alignof(FALSAnimGraphInAir),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimGraphInAir_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FALSAnimGraphInAir_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimGraphInAir_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FALSAnimGraphInAir()
	{
		if (!Z_Registration_Info_UScriptStruct_ALSAnimGraphInAir.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ALSAnimGraphInAir.InnerSingleton, Z_Construct_UScriptStruct_FALSAnimGraphInAir_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ALSAnimGraphInAir.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ALSAnimGraphAimingValues;
class UScriptStruct* FALSAnimGraphAimingValues::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ALSAnimGraphAimingValues.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ALSAnimGraphAimingValues.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FALSAnimGraphAimingValues, (UObject*)Z_Construct_UPackage__Script_ALSV4_CPP(), TEXT("ALSAnimGraphAimingValues"));
	}
	return Z_Registration_Info_UScriptStruct_ALSAnimGraphAimingValues.OuterSingleton;
}
template<> ALSV4_CPP_API UScriptStruct* StaticStruct<FALSAnimGraphAimingValues>()
{
	return FALSAnimGraphAimingValues::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FALSAnimGraphAimingValues_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmoothedAimingRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SmoothedAimingRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpineRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpineRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimingAngle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AimingAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimSweepTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AimSweepTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputYawOffsetTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InputYawOffsetTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForwardYawTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ForwardYawTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftYawTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LeftYawTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightYawTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RightYawTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimGraphAimingValues_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FALSAnimGraphAimingValues_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FALSAnimGraphAimingValues>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimGraphAimingValues_Statics::NewProp_SmoothedAimingRotation_MetaData[] = {
		{ "Category", "ALS|Anim Graph - Aiming Values" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FALSAnimGraphAimingValues_Statics::NewProp_SmoothedAimingRotation = { "SmoothedAimingRotation", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimGraphAimingValues, SmoothedAimingRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimGraphAimingValues_Statics::NewProp_SmoothedAimingRotation_MetaData), Z_Construct_UScriptStruct_FALSAnimGraphAimingValues_Statics::NewProp_SmoothedAimingRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimGraphAimingValues_Statics::NewProp_SpineRotation_MetaData[] = {
		{ "Category", "ALS|Anim Graph - Aiming Values" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FALSAnimGraphAimingValues_Statics::NewProp_SpineRotation = { "SpineRotation", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimGraphAimingValues, SpineRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimGraphAimingValues_Statics::NewProp_SpineRotation_MetaData), Z_Construct_UScriptStruct_FALSAnimGraphAimingValues_Statics::NewProp_SpineRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimGraphAimingValues_Statics::NewProp_AimingAngle_MetaData[] = {
		{ "Category", "ALS|Anim Graph - Aiming Values" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FALSAnimGraphAimingValues_Statics::NewProp_AimingAngle = { "AimingAngle", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimGraphAimingValues, AimingAngle), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimGraphAimingValues_Statics::NewProp_AimingAngle_MetaData), Z_Construct_UScriptStruct_FALSAnimGraphAimingValues_Statics::NewProp_AimingAngle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimGraphAimingValues_Statics::NewProp_AimSweepTime_MetaData[] = {
		{ "Category", "ALS|Anim Graph - Aiming Values" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSAnimGraphAimingValues_Statics::NewProp_AimSweepTime = { "AimSweepTime", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimGraphAimingValues, AimSweepTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimGraphAimingValues_Statics::NewProp_AimSweepTime_MetaData), Z_Construct_UScriptStruct_FALSAnimGraphAimingValues_Statics::NewProp_AimSweepTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimGraphAimingValues_Statics::NewProp_InputYawOffsetTime_MetaData[] = {
		{ "Category", "ALS|Anim Graph - Aiming Values" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSAnimGraphAimingValues_Statics::NewProp_InputYawOffsetTime = { "InputYawOffsetTime", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimGraphAimingValues, InputYawOffsetTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimGraphAimingValues_Statics::NewProp_InputYawOffsetTime_MetaData), Z_Construct_UScriptStruct_FALSAnimGraphAimingValues_Statics::NewProp_InputYawOffsetTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimGraphAimingValues_Statics::NewProp_ForwardYawTime_MetaData[] = {
		{ "Category", "ALS|Anim Graph - Aiming Values" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSAnimGraphAimingValues_Statics::NewProp_ForwardYawTime = { "ForwardYawTime", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimGraphAimingValues, ForwardYawTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimGraphAimingValues_Statics::NewProp_ForwardYawTime_MetaData), Z_Construct_UScriptStruct_FALSAnimGraphAimingValues_Statics::NewProp_ForwardYawTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimGraphAimingValues_Statics::NewProp_LeftYawTime_MetaData[] = {
		{ "Category", "ALS|Anim Graph - Aiming Values" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSAnimGraphAimingValues_Statics::NewProp_LeftYawTime = { "LeftYawTime", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimGraphAimingValues, LeftYawTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimGraphAimingValues_Statics::NewProp_LeftYawTime_MetaData), Z_Construct_UScriptStruct_FALSAnimGraphAimingValues_Statics::NewProp_LeftYawTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimGraphAimingValues_Statics::NewProp_RightYawTime_MetaData[] = {
		{ "Category", "ALS|Anim Graph - Aiming Values" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSAnimGraphAimingValues_Statics::NewProp_RightYawTime = { "RightYawTime", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimGraphAimingValues, RightYawTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimGraphAimingValues_Statics::NewProp_RightYawTime_MetaData), Z_Construct_UScriptStruct_FALSAnimGraphAimingValues_Statics::NewProp_RightYawTime_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FALSAnimGraphAimingValues_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimGraphAimingValues_Statics::NewProp_SmoothedAimingRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimGraphAimingValues_Statics::NewProp_SpineRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimGraphAimingValues_Statics::NewProp_AimingAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimGraphAimingValues_Statics::NewProp_AimSweepTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimGraphAimingValues_Statics::NewProp_InputYawOffsetTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimGraphAimingValues_Statics::NewProp_ForwardYawTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimGraphAimingValues_Statics::NewProp_LeftYawTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimGraphAimingValues_Statics::NewProp_RightYawTime,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FALSAnimGraphAimingValues_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALSV4_CPP,
		nullptr,
		&NewStructOps,
		"ALSAnimGraphAimingValues",
		Z_Construct_UScriptStruct_FALSAnimGraphAimingValues_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimGraphAimingValues_Statics::PropPointers),
		sizeof(FALSAnimGraphAimingValues),
		alignof(FALSAnimGraphAimingValues),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimGraphAimingValues_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FALSAnimGraphAimingValues_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimGraphAimingValues_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FALSAnimGraphAimingValues()
	{
		if (!Z_Registration_Info_UScriptStruct_ALSAnimGraphAimingValues.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ALSAnimGraphAimingValues.InnerSingleton, Z_Construct_UScriptStruct_FALSAnimGraphAimingValues_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ALSAnimGraphAimingValues.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ALSAnimGraphLayerBlending;
class UScriptStruct* FALSAnimGraphLayerBlending::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ALSAnimGraphLayerBlending.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ALSAnimGraphLayerBlending.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending, (UObject*)Z_Construct_UPackage__Script_ALSV4_CPP(), TEXT("ALSAnimGraphLayerBlending"));
	}
	return Z_Registration_Info_UScriptStruct_ALSAnimGraphLayerBlending.OuterSingleton;
}
template<> ALSV4_CPP_API UScriptStruct* StaticStruct<FALSAnimGraphLayerBlending>()
{
	return FALSAnimGraphLayerBlending::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlayOverrideState_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_OverlayOverrideState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnableAimOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EnableAimOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BasePose_N_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BasePose_N;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BasePose_CLF_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BasePose_CLF;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Arm_L_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Arm_L;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Arm_L_Add_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Arm_L_Add;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Arm_L_LS_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Arm_L_LS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Arm_L_MS_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Arm_L_MS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Arm_R_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Arm_R;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Arm_R_Add_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Arm_R_Add;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Arm_R_LS_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Arm_R_LS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Arm_R_MS_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Arm_R_MS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hand_L_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Hand_L;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hand_R_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Hand_R;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Legs_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Legs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Legs_Add_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Legs_Add;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pelvis_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Pelvis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pelvis_Add_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Pelvis_Add;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Spine_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Spine;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Spine_Add_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Spine_Add;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Head_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Head;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Head_Add_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Head_Add;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnableHandIK_L_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EnableHandIK_L;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnableHandIK_R_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EnableHandIK_R;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FALSAnimGraphLayerBlending>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_OverlayOverrideState_MetaData[] = {
		{ "Category", "ALS|Anim Graph - Layer Blending" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_OverlayOverrideState = { "OverlayOverrideState", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimGraphLayerBlending, OverlayOverrideState), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_OverlayOverrideState_MetaData), Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_OverlayOverrideState_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_EnableAimOffset_MetaData[] = {
		{ "Category", "ALS|Anim Graph - Layer Blending" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_EnableAimOffset = { "EnableAimOffset", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimGraphLayerBlending, EnableAimOffset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_EnableAimOffset_MetaData), Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_EnableAimOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_BasePose_N_MetaData[] = {
		{ "Category", "ALS|Anim Graph - Layer Blending" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_BasePose_N = { "BasePose_N", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimGraphLayerBlending, BasePose_N), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_BasePose_N_MetaData), Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_BasePose_N_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_BasePose_CLF_MetaData[] = {
		{ "Category", "ALS|Anim Graph - Layer Blending" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_BasePose_CLF = { "BasePose_CLF", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimGraphLayerBlending, BasePose_CLF), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_BasePose_CLF_MetaData), Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_BasePose_CLF_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Arm_L_MetaData[] = {
		{ "Category", "ALS|Anim Graph - Layer Blending" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Arm_L = { "Arm_L", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimGraphLayerBlending, Arm_L), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Arm_L_MetaData), Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Arm_L_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Arm_L_Add_MetaData[] = {
		{ "Category", "ALS|Anim Graph - Layer Blending" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Arm_L_Add = { "Arm_L_Add", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimGraphLayerBlending, Arm_L_Add), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Arm_L_Add_MetaData), Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Arm_L_Add_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Arm_L_LS_MetaData[] = {
		{ "Category", "ALS|Anim Graph - Layer Blending" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Arm_L_LS = { "Arm_L_LS", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimGraphLayerBlending, Arm_L_LS), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Arm_L_LS_MetaData), Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Arm_L_LS_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Arm_L_MS_MetaData[] = {
		{ "Category", "ALS|Anim Graph - Layer Blending" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Arm_L_MS = { "Arm_L_MS", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimGraphLayerBlending, Arm_L_MS), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Arm_L_MS_MetaData), Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Arm_L_MS_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Arm_R_MetaData[] = {
		{ "Category", "ALS|Anim Graph - Layer Blending" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Arm_R = { "Arm_R", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimGraphLayerBlending, Arm_R), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Arm_R_MetaData), Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Arm_R_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Arm_R_Add_MetaData[] = {
		{ "Category", "ALS|Anim Graph - Layer Blending" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Arm_R_Add = { "Arm_R_Add", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimGraphLayerBlending, Arm_R_Add), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Arm_R_Add_MetaData), Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Arm_R_Add_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Arm_R_LS_MetaData[] = {
		{ "Category", "ALS|Anim Graph - Layer Blending" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Arm_R_LS = { "Arm_R_LS", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimGraphLayerBlending, Arm_R_LS), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Arm_R_LS_MetaData), Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Arm_R_LS_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Arm_R_MS_MetaData[] = {
		{ "Category", "ALS|Anim Graph - Layer Blending" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Arm_R_MS = { "Arm_R_MS", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimGraphLayerBlending, Arm_R_MS), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Arm_R_MS_MetaData), Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Arm_R_MS_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Hand_L_MetaData[] = {
		{ "Category", "ALS|Anim Graph - Layer Blending" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Hand_L = { "Hand_L", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimGraphLayerBlending, Hand_L), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Hand_L_MetaData), Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Hand_L_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Hand_R_MetaData[] = {
		{ "Category", "ALS|Anim Graph - Layer Blending" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Hand_R = { "Hand_R", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimGraphLayerBlending, Hand_R), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Hand_R_MetaData), Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Hand_R_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Legs_MetaData[] = {
		{ "Category", "ALS|Anim Graph - Layer Blending" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Legs = { "Legs", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimGraphLayerBlending, Legs), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Legs_MetaData), Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Legs_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Legs_Add_MetaData[] = {
		{ "Category", "ALS|Anim Graph - Layer Blending" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Legs_Add = { "Legs_Add", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimGraphLayerBlending, Legs_Add), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Legs_Add_MetaData), Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Legs_Add_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Pelvis_MetaData[] = {
		{ "Category", "ALS|Anim Graph - Layer Blending" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Pelvis = { "Pelvis", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimGraphLayerBlending, Pelvis), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Pelvis_MetaData), Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Pelvis_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Pelvis_Add_MetaData[] = {
		{ "Category", "ALS|Anim Graph - Layer Blending" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Pelvis_Add = { "Pelvis_Add", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimGraphLayerBlending, Pelvis_Add), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Pelvis_Add_MetaData), Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Pelvis_Add_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Spine_MetaData[] = {
		{ "Category", "ALS|Anim Graph - Layer Blending" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Spine = { "Spine", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimGraphLayerBlending, Spine), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Spine_MetaData), Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Spine_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Spine_Add_MetaData[] = {
		{ "Category", "ALS|Anim Graph - Layer Blending" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Spine_Add = { "Spine_Add", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimGraphLayerBlending, Spine_Add), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Spine_Add_MetaData), Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Spine_Add_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Head_MetaData[] = {
		{ "Category", "ALS|Anim Graph - Layer Blending" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Head = { "Head", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimGraphLayerBlending, Head), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Head_MetaData), Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Head_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Head_Add_MetaData[] = {
		{ "Category", "ALS|Anim Graph - Layer Blending" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Head_Add = { "Head_Add", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimGraphLayerBlending, Head_Add), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Head_Add_MetaData), Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Head_Add_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_EnableHandIK_L_MetaData[] = {
		{ "Category", "ALS|Anim Graph - Layer Blending" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_EnableHandIK_L = { "EnableHandIK_L", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimGraphLayerBlending, EnableHandIK_L), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_EnableHandIK_L_MetaData), Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_EnableHandIK_L_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_EnableHandIK_R_MetaData[] = {
		{ "Category", "ALS|Anim Graph - Layer Blending" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_EnableHandIK_R = { "EnableHandIK_R", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimGraphLayerBlending, EnableHandIK_R), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_EnableHandIK_R_MetaData), Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_EnableHandIK_R_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_OverlayOverrideState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_EnableAimOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_BasePose_N,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_BasePose_CLF,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Arm_L,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Arm_L_Add,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Arm_L_LS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Arm_L_MS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Arm_R,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Arm_R_Add,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Arm_R_LS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Arm_R_MS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Hand_L,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Hand_R,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Legs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Legs_Add,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Pelvis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Pelvis_Add,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Spine,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Spine_Add,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Head,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_Head_Add,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_EnableHandIK_L,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewProp_EnableHandIK_R,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALSV4_CPP,
		nullptr,
		&NewStructOps,
		"ALSAnimGraphLayerBlending",
		Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::PropPointers),
		sizeof(FALSAnimGraphLayerBlending),
		alignof(FALSAnimGraphLayerBlending),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending()
	{
		if (!Z_Registration_Info_UScriptStruct_ALSAnimGraphLayerBlending.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ALSAnimGraphLayerBlending.InnerSingleton, Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ALSAnimGraphLayerBlending.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ALSAnimGraphFootIK;
class UScriptStruct* FALSAnimGraphFootIK::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ALSAnimGraphFootIK.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ALSAnimGraphFootIK.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FALSAnimGraphFootIK, (UObject*)Z_Construct_UPackage__Script_ALSV4_CPP(), TEXT("ALSAnimGraphFootIK"));
	}
	return Z_Registration_Info_UScriptStruct_ALSAnimGraphFootIK.OuterSingleton;
}
template<> ALSV4_CPP_API UScriptStruct* StaticStruct<FALSAnimGraphFootIK>()
{
	return FALSAnimGraphFootIK::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootLock_L_Alpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FootLock_L_Alpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootLock_R_Alpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FootLock_R_Alpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseFootLockCurve_L_MetaData[];
#endif
		static void NewProp_UseFootLockCurve_L_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseFootLockCurve_L;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseFootLockCurve_R_MetaData[];
#endif
		static void NewProp_UseFootLockCurve_R_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseFootLockCurve_R;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootLock_L_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FootLock_L_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetFootLock_R_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetFootLock_R_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootLock_R_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FootLock_R_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetFootLock_L_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetFootLock_L_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootLock_L_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FootLock_L_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetFootLock_R_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetFootLock_R_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootLock_R_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FootLock_R_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootOffset_L_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FootOffset_L_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootOffset_R_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FootOffset_R_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootOffset_L_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FootOffset_L_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootOffset_R_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FootOffset_R_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PelvisOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PelvisOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PelvisAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PelvisAlpha;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FALSAnimGraphFootIK>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_FootLock_L_Alpha_MetaData[] = {
		{ "Category", "ALS|Anim Graph - Foot IK" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_FootLock_L_Alpha = { "FootLock_L_Alpha", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimGraphFootIK, FootLock_L_Alpha), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_FootLock_L_Alpha_MetaData), Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_FootLock_L_Alpha_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_FootLock_R_Alpha_MetaData[] = {
		{ "Category", "ALS|Anim Graph - Foot IK" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_FootLock_R_Alpha = { "FootLock_R_Alpha", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimGraphFootIK, FootLock_R_Alpha), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_FootLock_R_Alpha_MetaData), Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_FootLock_R_Alpha_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_UseFootLockCurve_L_MetaData[] = {
		{ "Category", "ALS|Anim Graph - Foot IK" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_UseFootLockCurve_L_SetBit(void* Obj)
	{
		((FALSAnimGraphFootIK*)Obj)->UseFootLockCurve_L = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_UseFootLockCurve_L = { "UseFootLockCurve_L", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FALSAnimGraphFootIK), &Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_UseFootLockCurve_L_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_UseFootLockCurve_L_MetaData), Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_UseFootLockCurve_L_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_UseFootLockCurve_R_MetaData[] = {
		{ "Category", "ALS|Anim Graph - Foot IK" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_UseFootLockCurve_R_SetBit(void* Obj)
	{
		((FALSAnimGraphFootIK*)Obj)->UseFootLockCurve_R = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_UseFootLockCurve_R = { "UseFootLockCurve_R", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FALSAnimGraphFootIK), &Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_UseFootLockCurve_R_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_UseFootLockCurve_R_MetaData), Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_UseFootLockCurve_R_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_FootLock_L_Location_MetaData[] = {
		{ "Category", "ALS|Anim Graph - Foot IK" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_FootLock_L_Location = { "FootLock_L_Location", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimGraphFootIK, FootLock_L_Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_FootLock_L_Location_MetaData), Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_FootLock_L_Location_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_TargetFootLock_R_Location_MetaData[] = {
		{ "Category", "ALS|Anim Graph - Foot IK" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_TargetFootLock_R_Location = { "TargetFootLock_R_Location", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimGraphFootIK, TargetFootLock_R_Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_TargetFootLock_R_Location_MetaData), Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_TargetFootLock_R_Location_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_FootLock_R_Location_MetaData[] = {
		{ "Category", "ALS|Anim Graph - Foot IK" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_FootLock_R_Location = { "FootLock_R_Location", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimGraphFootIK, FootLock_R_Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_FootLock_R_Location_MetaData), Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_FootLock_R_Location_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_TargetFootLock_L_Rotation_MetaData[] = {
		{ "Category", "ALS|Anim Graph - Foot IK" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_TargetFootLock_L_Rotation = { "TargetFootLock_L_Rotation", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimGraphFootIK, TargetFootLock_L_Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_TargetFootLock_L_Rotation_MetaData), Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_TargetFootLock_L_Rotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_FootLock_L_Rotation_MetaData[] = {
		{ "Category", "ALS|Anim Graph - Foot IK" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_FootLock_L_Rotation = { "FootLock_L_Rotation", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimGraphFootIK, FootLock_L_Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_FootLock_L_Rotation_MetaData), Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_FootLock_L_Rotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_TargetFootLock_R_Rotation_MetaData[] = {
		{ "Category", "ALS|Anim Graph - Foot IK" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_TargetFootLock_R_Rotation = { "TargetFootLock_R_Rotation", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimGraphFootIK, TargetFootLock_R_Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_TargetFootLock_R_Rotation_MetaData), Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_TargetFootLock_R_Rotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_FootLock_R_Rotation_MetaData[] = {
		{ "Category", "ALS|Anim Graph - Foot IK" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_FootLock_R_Rotation = { "FootLock_R_Rotation", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimGraphFootIK, FootLock_R_Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_FootLock_R_Rotation_MetaData), Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_FootLock_R_Rotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_FootOffset_L_Location_MetaData[] = {
		{ "Category", "ALS|Anim Graph - Foot IK" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_FootOffset_L_Location = { "FootOffset_L_Location", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimGraphFootIK, FootOffset_L_Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_FootOffset_L_Location_MetaData), Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_FootOffset_L_Location_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_FootOffset_R_Location_MetaData[] = {
		{ "Category", "ALS|Anim Graph - Foot IK" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_FootOffset_R_Location = { "FootOffset_R_Location", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimGraphFootIK, FootOffset_R_Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_FootOffset_R_Location_MetaData), Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_FootOffset_R_Location_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_FootOffset_L_Rotation_MetaData[] = {
		{ "Category", "ALS|Anim Graph - Foot IK" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_FootOffset_L_Rotation = { "FootOffset_L_Rotation", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimGraphFootIK, FootOffset_L_Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_FootOffset_L_Rotation_MetaData), Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_FootOffset_L_Rotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_FootOffset_R_Rotation_MetaData[] = {
		{ "Category", "ALS|Anim Graph - Foot IK" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_FootOffset_R_Rotation = { "FootOffset_R_Rotation", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimGraphFootIK, FootOffset_R_Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_FootOffset_R_Rotation_MetaData), Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_FootOffset_R_Rotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_PelvisOffset_MetaData[] = {
		{ "Category", "ALS|Anim Graph - Foot IK" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_PelvisOffset = { "PelvisOffset", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimGraphFootIK, PelvisOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_PelvisOffset_MetaData), Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_PelvisOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_PelvisAlpha_MetaData[] = {
		{ "Category", "ALS|Anim Graph - Foot IK" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_PelvisAlpha = { "PelvisAlpha", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimGraphFootIK, PelvisAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_PelvisAlpha_MetaData), Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_PelvisAlpha_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_FootLock_L_Alpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_FootLock_R_Alpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_UseFootLockCurve_L,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_UseFootLockCurve_R,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_FootLock_L_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_TargetFootLock_R_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_FootLock_R_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_TargetFootLock_L_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_FootLock_L_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_TargetFootLock_R_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_FootLock_R_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_FootOffset_L_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_FootOffset_R_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_FootOffset_L_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_FootOffset_R_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_PelvisOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewProp_PelvisAlpha,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALSV4_CPP,
		nullptr,
		&NewStructOps,
		"ALSAnimGraphFootIK",
		Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::PropPointers),
		sizeof(FALSAnimGraphFootIK),
		alignof(FALSAnimGraphFootIK),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FALSAnimGraphFootIK()
	{
		if (!Z_Registration_Info_UScriptStruct_ALSAnimGraphFootIK.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ALSAnimGraphFootIK.InnerSingleton, Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ALSAnimGraphFootIK.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ALSAnimTurnInPlace;
class UScriptStruct* FALSAnimTurnInPlace::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ALSAnimTurnInPlace.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ALSAnimTurnInPlace.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FALSAnimTurnInPlace, (UObject*)Z_Construct_UPackage__Script_ALSV4_CPP(), TEXT("ALSAnimTurnInPlace"));
	}
	return Z_Registration_Info_UScriptStruct_ALSAnimTurnInPlace.OuterSingleton;
}
template<> ALSV4_CPP_API UScriptStruct* StaticStruct<FALSAnimTurnInPlace>()
{
	return FALSAnimTurnInPlace::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FALSAnimTurnInPlace_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurnCheckMinAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TurnCheckMinAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Turn180Threshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Turn180Threshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimYawRateLimit_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AimYawRateLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElapsedDelayTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ElapsedDelayTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinAngleDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinAngleDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxAngleDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAngleDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_N_TurnIP_L90_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_N_TurnIP_L90;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_N_TurnIP_R90_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_N_TurnIP_R90;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_N_TurnIP_L180_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_N_TurnIP_L180;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_N_TurnIP_R180_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_N_TurnIP_R180;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CLF_TurnIP_L90_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CLF_TurnIP_L90;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CLF_TurnIP_R90_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CLF_TurnIP_R90;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CLF_TurnIP_L180_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CLF_TurnIP_L180;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CLF_TurnIP_R180_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CLF_TurnIP_R180;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimTurnInPlace_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FALSAnimTurnInPlace_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FALSAnimTurnInPlace>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimTurnInPlace_Statics::NewProp_TurnCheckMinAngle_MetaData[] = {
		{ "Category", "ALS|Turn In Place" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSAnimTurnInPlace_Statics::NewProp_TurnCheckMinAngle = { "TurnCheckMinAngle", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimTurnInPlace, TurnCheckMinAngle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimTurnInPlace_Statics::NewProp_TurnCheckMinAngle_MetaData), Z_Construct_UScriptStruct_FALSAnimTurnInPlace_Statics::NewProp_TurnCheckMinAngle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimTurnInPlace_Statics::NewProp_Turn180Threshold_MetaData[] = {
		{ "Category", "ALS|Turn In Place" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSAnimTurnInPlace_Statics::NewProp_Turn180Threshold = { "Turn180Threshold", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimTurnInPlace, Turn180Threshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimTurnInPlace_Statics::NewProp_Turn180Threshold_MetaData), Z_Construct_UScriptStruct_FALSAnimTurnInPlace_Statics::NewProp_Turn180Threshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimTurnInPlace_Statics::NewProp_AimYawRateLimit_MetaData[] = {
		{ "Category", "ALS|Turn In Place" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSAnimTurnInPlace_Statics::NewProp_AimYawRateLimit = { "AimYawRateLimit", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimTurnInPlace, AimYawRateLimit), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimTurnInPlace_Statics::NewProp_AimYawRateLimit_MetaData), Z_Construct_UScriptStruct_FALSAnimTurnInPlace_Statics::NewProp_AimYawRateLimit_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimTurnInPlace_Statics::NewProp_ElapsedDelayTime_MetaData[] = {
		{ "Category", "ALS|Turn In Place" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSAnimTurnInPlace_Statics::NewProp_ElapsedDelayTime = { "ElapsedDelayTime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimTurnInPlace, ElapsedDelayTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimTurnInPlace_Statics::NewProp_ElapsedDelayTime_MetaData), Z_Construct_UScriptStruct_FALSAnimTurnInPlace_Statics::NewProp_ElapsedDelayTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimTurnInPlace_Statics::NewProp_MinAngleDelay_MetaData[] = {
		{ "Category", "ALS|Turn In Place" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSAnimTurnInPlace_Statics::NewProp_MinAngleDelay = { "MinAngleDelay", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimTurnInPlace, MinAngleDelay), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimTurnInPlace_Statics::NewProp_MinAngleDelay_MetaData), Z_Construct_UScriptStruct_FALSAnimTurnInPlace_Statics::NewProp_MinAngleDelay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimTurnInPlace_Statics::NewProp_MaxAngleDelay_MetaData[] = {
		{ "Category", "ALS|Turn In Place" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSAnimTurnInPlace_Statics::NewProp_MaxAngleDelay = { "MaxAngleDelay", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimTurnInPlace, MaxAngleDelay), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimTurnInPlace_Statics::NewProp_MaxAngleDelay_MetaData), Z_Construct_UScriptStruct_FALSAnimTurnInPlace_Statics::NewProp_MaxAngleDelay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimTurnInPlace_Statics::NewProp_N_TurnIP_L90_MetaData[] = {
		{ "Category", "ALS|Turn In Place" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FALSAnimTurnInPlace_Statics::NewProp_N_TurnIP_L90 = { "N_TurnIP_L90", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimTurnInPlace, N_TurnIP_L90), Z_Construct_UScriptStruct_FALSTurnInPlaceAsset, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimTurnInPlace_Statics::NewProp_N_TurnIP_L90_MetaData), Z_Construct_UScriptStruct_FALSAnimTurnInPlace_Statics::NewProp_N_TurnIP_L90_MetaData) }; // 3590343332
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimTurnInPlace_Statics::NewProp_N_TurnIP_R90_MetaData[] = {
		{ "Category", "ALS|Turn In Place" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FALSAnimTurnInPlace_Statics::NewProp_N_TurnIP_R90 = { "N_TurnIP_R90", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimTurnInPlace, N_TurnIP_R90), Z_Construct_UScriptStruct_FALSTurnInPlaceAsset, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimTurnInPlace_Statics::NewProp_N_TurnIP_R90_MetaData), Z_Construct_UScriptStruct_FALSAnimTurnInPlace_Statics::NewProp_N_TurnIP_R90_MetaData) }; // 3590343332
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimTurnInPlace_Statics::NewProp_N_TurnIP_L180_MetaData[] = {
		{ "Category", "ALS|Turn In Place" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FALSAnimTurnInPlace_Statics::NewProp_N_TurnIP_L180 = { "N_TurnIP_L180", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimTurnInPlace, N_TurnIP_L180), Z_Construct_UScriptStruct_FALSTurnInPlaceAsset, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimTurnInPlace_Statics::NewProp_N_TurnIP_L180_MetaData), Z_Construct_UScriptStruct_FALSAnimTurnInPlace_Statics::NewProp_N_TurnIP_L180_MetaData) }; // 3590343332
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimTurnInPlace_Statics::NewProp_N_TurnIP_R180_MetaData[] = {
		{ "Category", "ALS|Turn In Place" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FALSAnimTurnInPlace_Statics::NewProp_N_TurnIP_R180 = { "N_TurnIP_R180", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimTurnInPlace, N_TurnIP_R180), Z_Construct_UScriptStruct_FALSTurnInPlaceAsset, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimTurnInPlace_Statics::NewProp_N_TurnIP_R180_MetaData), Z_Construct_UScriptStruct_FALSAnimTurnInPlace_Statics::NewProp_N_TurnIP_R180_MetaData) }; // 3590343332
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimTurnInPlace_Statics::NewProp_CLF_TurnIP_L90_MetaData[] = {
		{ "Category", "ALS|Turn In Place" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FALSAnimTurnInPlace_Statics::NewProp_CLF_TurnIP_L90 = { "CLF_TurnIP_L90", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimTurnInPlace, CLF_TurnIP_L90), Z_Construct_UScriptStruct_FALSTurnInPlaceAsset, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimTurnInPlace_Statics::NewProp_CLF_TurnIP_L90_MetaData), Z_Construct_UScriptStruct_FALSAnimTurnInPlace_Statics::NewProp_CLF_TurnIP_L90_MetaData) }; // 3590343332
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimTurnInPlace_Statics::NewProp_CLF_TurnIP_R90_MetaData[] = {
		{ "Category", "ALS|Turn In Place" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FALSAnimTurnInPlace_Statics::NewProp_CLF_TurnIP_R90 = { "CLF_TurnIP_R90", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimTurnInPlace, CLF_TurnIP_R90), Z_Construct_UScriptStruct_FALSTurnInPlaceAsset, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimTurnInPlace_Statics::NewProp_CLF_TurnIP_R90_MetaData), Z_Construct_UScriptStruct_FALSAnimTurnInPlace_Statics::NewProp_CLF_TurnIP_R90_MetaData) }; // 3590343332
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimTurnInPlace_Statics::NewProp_CLF_TurnIP_L180_MetaData[] = {
		{ "Category", "ALS|Turn In Place" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FALSAnimTurnInPlace_Statics::NewProp_CLF_TurnIP_L180 = { "CLF_TurnIP_L180", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimTurnInPlace, CLF_TurnIP_L180), Z_Construct_UScriptStruct_FALSTurnInPlaceAsset, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimTurnInPlace_Statics::NewProp_CLF_TurnIP_L180_MetaData), Z_Construct_UScriptStruct_FALSAnimTurnInPlace_Statics::NewProp_CLF_TurnIP_L180_MetaData) }; // 3590343332
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimTurnInPlace_Statics::NewProp_CLF_TurnIP_R180_MetaData[] = {
		{ "Category", "ALS|Turn In Place" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FALSAnimTurnInPlace_Statics::NewProp_CLF_TurnIP_R180 = { "CLF_TurnIP_R180", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimTurnInPlace, CLF_TurnIP_R180), Z_Construct_UScriptStruct_FALSTurnInPlaceAsset, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimTurnInPlace_Statics::NewProp_CLF_TurnIP_R180_MetaData), Z_Construct_UScriptStruct_FALSAnimTurnInPlace_Statics::NewProp_CLF_TurnIP_R180_MetaData) }; // 3590343332
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FALSAnimTurnInPlace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimTurnInPlace_Statics::NewProp_TurnCheckMinAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimTurnInPlace_Statics::NewProp_Turn180Threshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimTurnInPlace_Statics::NewProp_AimYawRateLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimTurnInPlace_Statics::NewProp_ElapsedDelayTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimTurnInPlace_Statics::NewProp_MinAngleDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimTurnInPlace_Statics::NewProp_MaxAngleDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimTurnInPlace_Statics::NewProp_N_TurnIP_L90,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimTurnInPlace_Statics::NewProp_N_TurnIP_R90,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimTurnInPlace_Statics::NewProp_N_TurnIP_L180,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimTurnInPlace_Statics::NewProp_N_TurnIP_R180,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimTurnInPlace_Statics::NewProp_CLF_TurnIP_L90,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimTurnInPlace_Statics::NewProp_CLF_TurnIP_R90,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimTurnInPlace_Statics::NewProp_CLF_TurnIP_L180,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimTurnInPlace_Statics::NewProp_CLF_TurnIP_R180,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FALSAnimTurnInPlace_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALSV4_CPP,
		nullptr,
		&NewStructOps,
		"ALSAnimTurnInPlace",
		Z_Construct_UScriptStruct_FALSAnimTurnInPlace_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimTurnInPlace_Statics::PropPointers),
		sizeof(FALSAnimTurnInPlace),
		alignof(FALSAnimTurnInPlace),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimTurnInPlace_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FALSAnimTurnInPlace_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimTurnInPlace_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FALSAnimTurnInPlace()
	{
		if (!Z_Registration_Info_UScriptStruct_ALSAnimTurnInPlace.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ALSAnimTurnInPlace.InnerSingleton, Z_Construct_UScriptStruct_FALSAnimTurnInPlace_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ALSAnimTurnInPlace.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ALSAnimRotateInPlace;
class UScriptStruct* FALSAnimRotateInPlace::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ALSAnimRotateInPlace.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ALSAnimRotateInPlace.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FALSAnimRotateInPlace, (UObject*)Z_Construct_UPackage__Script_ALSV4_CPP(), TEXT("ALSAnimRotateInPlace"));
	}
	return Z_Registration_Info_UScriptStruct_ALSAnimRotateInPlace.OuterSingleton;
}
template<> ALSV4_CPP_API UScriptStruct* StaticStruct<FALSAnimRotateInPlace>()
{
	return FALSAnimRotateInPlace::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FALSAnimRotateInPlace_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotateMinThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotateMinThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotateMaxThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotateMaxThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimYawRateMinRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AimYawRateMinRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimYawRateMaxRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AimYawRateMaxRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinPlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinPlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxPlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxPlayRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimRotateInPlace_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FALSAnimRotateInPlace_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FALSAnimRotateInPlace>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimRotateInPlace_Statics::NewProp_RotateMinThreshold_MetaData[] = {
		{ "Category", "ALS|Rotate In Place" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSAnimRotateInPlace_Statics::NewProp_RotateMinThreshold = { "RotateMinThreshold", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimRotateInPlace, RotateMinThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimRotateInPlace_Statics::NewProp_RotateMinThreshold_MetaData), Z_Construct_UScriptStruct_FALSAnimRotateInPlace_Statics::NewProp_RotateMinThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimRotateInPlace_Statics::NewProp_RotateMaxThreshold_MetaData[] = {
		{ "Category", "ALS|Rotate In Place" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSAnimRotateInPlace_Statics::NewProp_RotateMaxThreshold = { "RotateMaxThreshold", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimRotateInPlace, RotateMaxThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimRotateInPlace_Statics::NewProp_RotateMaxThreshold_MetaData), Z_Construct_UScriptStruct_FALSAnimRotateInPlace_Statics::NewProp_RotateMaxThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimRotateInPlace_Statics::NewProp_AimYawRateMinRange_MetaData[] = {
		{ "Category", "ALS|Rotate In Place" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSAnimRotateInPlace_Statics::NewProp_AimYawRateMinRange = { "AimYawRateMinRange", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimRotateInPlace, AimYawRateMinRange), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimRotateInPlace_Statics::NewProp_AimYawRateMinRange_MetaData), Z_Construct_UScriptStruct_FALSAnimRotateInPlace_Statics::NewProp_AimYawRateMinRange_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimRotateInPlace_Statics::NewProp_AimYawRateMaxRange_MetaData[] = {
		{ "Category", "ALS|Rotate In Place" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSAnimRotateInPlace_Statics::NewProp_AimYawRateMaxRange = { "AimYawRateMaxRange", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimRotateInPlace, AimYawRateMaxRange), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimRotateInPlace_Statics::NewProp_AimYawRateMaxRange_MetaData), Z_Construct_UScriptStruct_FALSAnimRotateInPlace_Statics::NewProp_AimYawRateMaxRange_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimRotateInPlace_Statics::NewProp_MinPlayRate_MetaData[] = {
		{ "Category", "ALS|Rotate In Place" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSAnimRotateInPlace_Statics::NewProp_MinPlayRate = { "MinPlayRate", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimRotateInPlace, MinPlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimRotateInPlace_Statics::NewProp_MinPlayRate_MetaData), Z_Construct_UScriptStruct_FALSAnimRotateInPlace_Statics::NewProp_MinPlayRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimRotateInPlace_Statics::NewProp_MaxPlayRate_MetaData[] = {
		{ "Category", "ALS|Rotate In Place" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSAnimRotateInPlace_Statics::NewProp_MaxPlayRate = { "MaxPlayRate", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimRotateInPlace, MaxPlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimRotateInPlace_Statics::NewProp_MaxPlayRate_MetaData), Z_Construct_UScriptStruct_FALSAnimRotateInPlace_Statics::NewProp_MaxPlayRate_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FALSAnimRotateInPlace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimRotateInPlace_Statics::NewProp_RotateMinThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimRotateInPlace_Statics::NewProp_RotateMaxThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimRotateInPlace_Statics::NewProp_AimYawRateMinRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimRotateInPlace_Statics::NewProp_AimYawRateMaxRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimRotateInPlace_Statics::NewProp_MinPlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimRotateInPlace_Statics::NewProp_MaxPlayRate,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FALSAnimRotateInPlace_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALSV4_CPP,
		nullptr,
		&NewStructOps,
		"ALSAnimRotateInPlace",
		Z_Construct_UScriptStruct_FALSAnimRotateInPlace_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimRotateInPlace_Statics::PropPointers),
		sizeof(FALSAnimRotateInPlace),
		alignof(FALSAnimRotateInPlace),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimRotateInPlace_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FALSAnimRotateInPlace_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimRotateInPlace_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FALSAnimRotateInPlace()
	{
		if (!Z_Registration_Info_UScriptStruct_ALSAnimRotateInPlace.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ALSAnimRotateInPlace.InnerSingleton, Z_Construct_UScriptStruct_FALSAnimRotateInPlace_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ALSAnimRotateInPlace.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ALSAnimConfiguration;
class UScriptStruct* FALSAnimConfiguration::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ALSAnimConfiguration.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ALSAnimConfiguration.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FALSAnimConfiguration, (UObject*)Z_Construct_UPackage__Script_ALSV4_CPP(), TEXT("ALSAnimConfiguration"));
	}
	return Z_Registration_Info_UScriptStruct_ALSAnimConfiguration.OuterSingleton;
}
template<> ALSV4_CPP_API UScriptStruct* StaticStruct<FALSAnimConfiguration>()
{
	return FALSAnimConfiguration::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FALSAnimConfiguration_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimatedWalkSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimatedWalkSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimatedRunSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimatedRunSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimatedSprintSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimatedSprintSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimatedCrouchSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimatedCrouchSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VelocityBlendInterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VelocityBlendInterpSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundedLeanInterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundedLeanInterpSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAirLeanInterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InAirLeanInterpSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmoothedAimingRotationInterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SmoothedAimingRotationInterpSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputYawOffsetInterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InputYawOffsetInterpSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TriggerPivotSpeedLimit_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TriggerPivotSpeedLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FootHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicTransitionThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DynamicTransitionThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IK_TraceDistanceAboveFoot_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IK_TraceDistanceAboveFoot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IK_TraceDistanceBelowFoot_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IK_TraceDistanceBelowFoot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimConfiguration_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FALSAnimConfiguration_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FALSAnimConfiguration>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimConfiguration_Statics::NewProp_AnimatedWalkSpeed_MetaData[] = {
		{ "Category", "ALS|Main Configuration" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSAnimConfiguration_Statics::NewProp_AnimatedWalkSpeed = { "AnimatedWalkSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimConfiguration, AnimatedWalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimConfiguration_Statics::NewProp_AnimatedWalkSpeed_MetaData), Z_Construct_UScriptStruct_FALSAnimConfiguration_Statics::NewProp_AnimatedWalkSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimConfiguration_Statics::NewProp_AnimatedRunSpeed_MetaData[] = {
		{ "Category", "ALS|Main Configuration" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSAnimConfiguration_Statics::NewProp_AnimatedRunSpeed = { "AnimatedRunSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimConfiguration, AnimatedRunSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimConfiguration_Statics::NewProp_AnimatedRunSpeed_MetaData), Z_Construct_UScriptStruct_FALSAnimConfiguration_Statics::NewProp_AnimatedRunSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimConfiguration_Statics::NewProp_AnimatedSprintSpeed_MetaData[] = {
		{ "Category", "ALS|Main Configuration" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSAnimConfiguration_Statics::NewProp_AnimatedSprintSpeed = { "AnimatedSprintSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimConfiguration, AnimatedSprintSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimConfiguration_Statics::NewProp_AnimatedSprintSpeed_MetaData), Z_Construct_UScriptStruct_FALSAnimConfiguration_Statics::NewProp_AnimatedSprintSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimConfiguration_Statics::NewProp_AnimatedCrouchSpeed_MetaData[] = {
		{ "Category", "ALS|Main Configuration" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSAnimConfiguration_Statics::NewProp_AnimatedCrouchSpeed = { "AnimatedCrouchSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimConfiguration, AnimatedCrouchSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimConfiguration_Statics::NewProp_AnimatedCrouchSpeed_MetaData), Z_Construct_UScriptStruct_FALSAnimConfiguration_Statics::NewProp_AnimatedCrouchSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimConfiguration_Statics::NewProp_VelocityBlendInterpSpeed_MetaData[] = {
		{ "Category", "ALS|Main Configuration" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSAnimConfiguration_Statics::NewProp_VelocityBlendInterpSpeed = { "VelocityBlendInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimConfiguration, VelocityBlendInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimConfiguration_Statics::NewProp_VelocityBlendInterpSpeed_MetaData), Z_Construct_UScriptStruct_FALSAnimConfiguration_Statics::NewProp_VelocityBlendInterpSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimConfiguration_Statics::NewProp_GroundedLeanInterpSpeed_MetaData[] = {
		{ "Category", "ALS|Main Configuration" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSAnimConfiguration_Statics::NewProp_GroundedLeanInterpSpeed = { "GroundedLeanInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimConfiguration, GroundedLeanInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimConfiguration_Statics::NewProp_GroundedLeanInterpSpeed_MetaData), Z_Construct_UScriptStruct_FALSAnimConfiguration_Statics::NewProp_GroundedLeanInterpSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimConfiguration_Statics::NewProp_InAirLeanInterpSpeed_MetaData[] = {
		{ "Category", "ALS|Main Configuration" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSAnimConfiguration_Statics::NewProp_InAirLeanInterpSpeed = { "InAirLeanInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimConfiguration, InAirLeanInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimConfiguration_Statics::NewProp_InAirLeanInterpSpeed_MetaData), Z_Construct_UScriptStruct_FALSAnimConfiguration_Statics::NewProp_InAirLeanInterpSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimConfiguration_Statics::NewProp_SmoothedAimingRotationInterpSpeed_MetaData[] = {
		{ "Category", "ALS|Main Configuration" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSAnimConfiguration_Statics::NewProp_SmoothedAimingRotationInterpSpeed = { "SmoothedAimingRotationInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimConfiguration, SmoothedAimingRotationInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimConfiguration_Statics::NewProp_SmoothedAimingRotationInterpSpeed_MetaData), Z_Construct_UScriptStruct_FALSAnimConfiguration_Statics::NewProp_SmoothedAimingRotationInterpSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimConfiguration_Statics::NewProp_InputYawOffsetInterpSpeed_MetaData[] = {
		{ "Category", "ALS|Main Configuration" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSAnimConfiguration_Statics::NewProp_InputYawOffsetInterpSpeed = { "InputYawOffsetInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimConfiguration, InputYawOffsetInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimConfiguration_Statics::NewProp_InputYawOffsetInterpSpeed_MetaData), Z_Construct_UScriptStruct_FALSAnimConfiguration_Statics::NewProp_InputYawOffsetInterpSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimConfiguration_Statics::NewProp_TriggerPivotSpeedLimit_MetaData[] = {
		{ "Category", "ALS|Main Configuration" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSAnimConfiguration_Statics::NewProp_TriggerPivotSpeedLimit = { "TriggerPivotSpeedLimit", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimConfiguration, TriggerPivotSpeedLimit), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimConfiguration_Statics::NewProp_TriggerPivotSpeedLimit_MetaData), Z_Construct_UScriptStruct_FALSAnimConfiguration_Statics::NewProp_TriggerPivotSpeedLimit_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimConfiguration_Statics::NewProp_FootHeight_MetaData[] = {
		{ "Category", "ALS|Main Configuration" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSAnimConfiguration_Statics::NewProp_FootHeight = { "FootHeight", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimConfiguration, FootHeight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimConfiguration_Statics::NewProp_FootHeight_MetaData), Z_Construct_UScriptStruct_FALSAnimConfiguration_Statics::NewProp_FootHeight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimConfiguration_Statics::NewProp_DynamicTransitionThreshold_MetaData[] = {
		{ "Category", "ALS|Main Configuration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Threshold value for activating dynamic transition on various animations */" },
#endif
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Threshold value for activating dynamic transition on various animations" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSAnimConfiguration_Statics::NewProp_DynamicTransitionThreshold = { "DynamicTransitionThreshold", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimConfiguration, DynamicTransitionThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimConfiguration_Statics::NewProp_DynamicTransitionThreshold_MetaData), Z_Construct_UScriptStruct_FALSAnimConfiguration_Statics::NewProp_DynamicTransitionThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimConfiguration_Statics::NewProp_IK_TraceDistanceAboveFoot_MetaData[] = {
		{ "Category", "ALS|Main Configuration" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSAnimConfiguration_Statics::NewProp_IK_TraceDistanceAboveFoot = { "IK_TraceDistanceAboveFoot", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimConfiguration, IK_TraceDistanceAboveFoot), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimConfiguration_Statics::NewProp_IK_TraceDistanceAboveFoot_MetaData), Z_Construct_UScriptStruct_FALSAnimConfiguration_Statics::NewProp_IK_TraceDistanceAboveFoot_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSAnimConfiguration_Statics::NewProp_IK_TraceDistanceBelowFoot_MetaData[] = {
		{ "Category", "ALS|Main Configuration" },
		{ "ModuleRelativePath", "Public/Library/ALSAnimationStructLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALSAnimConfiguration_Statics::NewProp_IK_TraceDistanceBelowFoot = { "IK_TraceDistanceBelowFoot", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSAnimConfiguration, IK_TraceDistanceBelowFoot), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimConfiguration_Statics::NewProp_IK_TraceDistanceBelowFoot_MetaData), Z_Construct_UScriptStruct_FALSAnimConfiguration_Statics::NewProp_IK_TraceDistanceBelowFoot_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FALSAnimConfiguration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimConfiguration_Statics::NewProp_AnimatedWalkSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimConfiguration_Statics::NewProp_AnimatedRunSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimConfiguration_Statics::NewProp_AnimatedSprintSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimConfiguration_Statics::NewProp_AnimatedCrouchSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimConfiguration_Statics::NewProp_VelocityBlendInterpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimConfiguration_Statics::NewProp_GroundedLeanInterpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimConfiguration_Statics::NewProp_InAirLeanInterpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimConfiguration_Statics::NewProp_SmoothedAimingRotationInterpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimConfiguration_Statics::NewProp_InputYawOffsetInterpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimConfiguration_Statics::NewProp_TriggerPivotSpeedLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimConfiguration_Statics::NewProp_FootHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimConfiguration_Statics::NewProp_DynamicTransitionThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimConfiguration_Statics::NewProp_IK_TraceDistanceAboveFoot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSAnimConfiguration_Statics::NewProp_IK_TraceDistanceBelowFoot,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FALSAnimConfiguration_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALSV4_CPP,
		nullptr,
		&NewStructOps,
		"ALSAnimConfiguration",
		Z_Construct_UScriptStruct_FALSAnimConfiguration_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimConfiguration_Statics::PropPointers),
		sizeof(FALSAnimConfiguration),
		alignof(FALSAnimConfiguration),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimConfiguration_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FALSAnimConfiguration_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSAnimConfiguration_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FALSAnimConfiguration()
	{
		if (!Z_Registration_Info_UScriptStruct_ALSAnimConfiguration.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ALSAnimConfiguration.InnerSingleton, Z_Construct_UScriptStruct_FALSAnimConfiguration_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ALSAnimConfiguration.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_hitman_stealth_recreate_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Library_ALSAnimationStructLibrary_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_hitman_stealth_recreate_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Library_ALSAnimationStructLibrary_h_Statics::ScriptStructInfo[] = {
		{ FALSDynamicMontageParams::StaticStruct, Z_Construct_UScriptStruct_FALSDynamicMontageParams_Statics::NewStructOps, TEXT("ALSDynamicMontageParams"), &Z_Registration_Info_UScriptStruct_ALSDynamicMontageParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FALSDynamicMontageParams), 2192810112U) },
		{ FALSLeanAmount::StaticStruct, Z_Construct_UScriptStruct_FALSLeanAmount_Statics::NewStructOps, TEXT("ALSLeanAmount"), &Z_Registration_Info_UScriptStruct_ALSLeanAmount, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FALSLeanAmount), 2278959983U) },
		{ FALSVelocityBlend::StaticStruct, Z_Construct_UScriptStruct_FALSVelocityBlend_Statics::NewStructOps, TEXT("ALSVelocityBlend"), &Z_Registration_Info_UScriptStruct_ALSVelocityBlend, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FALSVelocityBlend), 2009730132U) },
		{ FALSTurnInPlaceAsset::StaticStruct, Z_Construct_UScriptStruct_FALSTurnInPlaceAsset_Statics::NewStructOps, TEXT("ALSTurnInPlaceAsset"), &Z_Registration_Info_UScriptStruct_ALSTurnInPlaceAsset, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FALSTurnInPlaceAsset), 3590343332U) },
		{ FALSAnimCharacterInformation::StaticStruct, Z_Construct_UScriptStruct_FALSAnimCharacterInformation_Statics::NewStructOps, TEXT("ALSAnimCharacterInformation"), &Z_Registration_Info_UScriptStruct_ALSAnimCharacterInformation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FALSAnimCharacterInformation), 3194795416U) },
		{ FALSAnimGraphGrounded::StaticStruct, Z_Construct_UScriptStruct_FALSAnimGraphGrounded_Statics::NewStructOps, TEXT("ALSAnimGraphGrounded"), &Z_Registration_Info_UScriptStruct_ALSAnimGraphGrounded, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FALSAnimGraphGrounded), 2273608184U) },
		{ FALSAnimGraphInAir::StaticStruct, Z_Construct_UScriptStruct_FALSAnimGraphInAir_Statics::NewStructOps, TEXT("ALSAnimGraphInAir"), &Z_Registration_Info_UScriptStruct_ALSAnimGraphInAir, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FALSAnimGraphInAir), 1251373788U) },
		{ FALSAnimGraphAimingValues::StaticStruct, Z_Construct_UScriptStruct_FALSAnimGraphAimingValues_Statics::NewStructOps, TEXT("ALSAnimGraphAimingValues"), &Z_Registration_Info_UScriptStruct_ALSAnimGraphAimingValues, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FALSAnimGraphAimingValues), 3395056830U) },
		{ FALSAnimGraphLayerBlending::StaticStruct, Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending_Statics::NewStructOps, TEXT("ALSAnimGraphLayerBlending"), &Z_Registration_Info_UScriptStruct_ALSAnimGraphLayerBlending, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FALSAnimGraphLayerBlending), 1854436681U) },
		{ FALSAnimGraphFootIK::StaticStruct, Z_Construct_UScriptStruct_FALSAnimGraphFootIK_Statics::NewStructOps, TEXT("ALSAnimGraphFootIK"), &Z_Registration_Info_UScriptStruct_ALSAnimGraphFootIK, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FALSAnimGraphFootIK), 2622995893U) },
		{ FALSAnimTurnInPlace::StaticStruct, Z_Construct_UScriptStruct_FALSAnimTurnInPlace_Statics::NewStructOps, TEXT("ALSAnimTurnInPlace"), &Z_Registration_Info_UScriptStruct_ALSAnimTurnInPlace, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FALSAnimTurnInPlace), 2851734283U) },
		{ FALSAnimRotateInPlace::StaticStruct, Z_Construct_UScriptStruct_FALSAnimRotateInPlace_Statics::NewStructOps, TEXT("ALSAnimRotateInPlace"), &Z_Registration_Info_UScriptStruct_ALSAnimRotateInPlace, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FALSAnimRotateInPlace), 3621750084U) },
		{ FALSAnimConfiguration::StaticStruct, Z_Construct_UScriptStruct_FALSAnimConfiguration_Statics::NewStructOps, TEXT("ALSAnimConfiguration"), &Z_Registration_Info_UScriptStruct_ALSAnimConfiguration, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FALSAnimConfiguration), 376508629U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_hitman_stealth_recreate_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Library_ALSAnimationStructLibrary_h_3939143058(TEXT("/Script/ALSV4_CPP"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_hitman_stealth_recreate_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Library_ALSAnimationStructLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_hitman_stealth_recreate_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Library_ALSAnimationStructLibrary_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
