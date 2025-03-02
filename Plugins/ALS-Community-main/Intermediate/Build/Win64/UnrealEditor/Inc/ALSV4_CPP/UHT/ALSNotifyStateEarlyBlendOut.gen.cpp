// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALSV4_CPP/Public/Character/Animation/Notify/ALSNotifyStateEarlyBlendOut.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeALSNotifyStateEarlyBlendOut() {}
// Cross Module References
	ALSV4_CPP_API UClass* Z_Construct_UClass_UALSNotifyStateEarlyBlendOut();
	ALSV4_CPP_API UClass* Z_Construct_UClass_UALSNotifyStateEarlyBlendOut_NoRegister();
	ALSV4_CPP_API UEnum* Z_Construct_UEnum_ALSV4_CPP_EALSMovementState();
	ALSV4_CPP_API UEnum* Z_Construct_UEnum_ALSV4_CPP_EALSStance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_ALSV4_CPP();
// End Cross Module References
	void UALSNotifyStateEarlyBlendOut::StaticRegisterNativesUALSNotifyStateEarlyBlendOut()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UALSNotifyStateEarlyBlendOut);
	UClass* Z_Construct_UClass_UALSNotifyStateEarlyBlendOut_NoRegister()
	{
		return UALSNotifyStateEarlyBlendOut::StaticClass();
	}
	struct Z_Construct_UClass_UALSNotifyStateEarlyBlendOut_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThisMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ThisMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendOutTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendOutTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCheckMovementState_MetaData[];
#endif
		static void NewProp_bCheckMovementState_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckMovementState;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MovementStateEquals_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementStateEquals_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MovementStateEquals;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCheckStance_MetaData[];
#endif
		static void NewProp_bCheckStance_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckStance;
		static const UECodeGen_Private::FBytePropertyParams NewProp_StanceEquals_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StanceEquals_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_StanceEquals;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCheckMovementInput_MetaData[];
#endif
		static void NewProp_bCheckMovementInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckMovementInput;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UALSNotifyStateEarlyBlendOut_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_ALSV4_CPP,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UALSNotifyStateEarlyBlendOut_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSNotifyStateEarlyBlendOut_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Character early blend out anim state\n */" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "Character/Animation/Notify/ALSNotifyStateEarlyBlendOut.h" },
		{ "ModuleRelativePath", "Public/Character/Animation/Notify/ALSNotifyStateEarlyBlendOut.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Character early blend out anim state" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSNotifyStateEarlyBlendOut_Statics::NewProp_ThisMontage_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "ModuleRelativePath", "Public/Character/Animation/Notify/ALSNotifyStateEarlyBlendOut.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UALSNotifyStateEarlyBlendOut_Statics::NewProp_ThisMontage = { "ThisMontage", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSNotifyStateEarlyBlendOut, ThisMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSNotifyStateEarlyBlendOut_Statics::NewProp_ThisMontage_MetaData), Z_Construct_UClass_UALSNotifyStateEarlyBlendOut_Statics::NewProp_ThisMontage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSNotifyStateEarlyBlendOut_Statics::NewProp_BlendOutTime_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "ModuleRelativePath", "Public/Character/Animation/Notify/ALSNotifyStateEarlyBlendOut.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UALSNotifyStateEarlyBlendOut_Statics::NewProp_BlendOutTime = { "BlendOutTime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSNotifyStateEarlyBlendOut, BlendOutTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSNotifyStateEarlyBlendOut_Statics::NewProp_BlendOutTime_MetaData), Z_Construct_UClass_UALSNotifyStateEarlyBlendOut_Statics::NewProp_BlendOutTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSNotifyStateEarlyBlendOut_Statics::NewProp_bCheckMovementState_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "ModuleRelativePath", "Public/Character/Animation/Notify/ALSNotifyStateEarlyBlendOut.h" },
	};
#endif
	void Z_Construct_UClass_UALSNotifyStateEarlyBlendOut_Statics::NewProp_bCheckMovementState_SetBit(void* Obj)
	{
		((UALSNotifyStateEarlyBlendOut*)Obj)->bCheckMovementState = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UALSNotifyStateEarlyBlendOut_Statics::NewProp_bCheckMovementState = { "bCheckMovementState", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UALSNotifyStateEarlyBlendOut), &Z_Construct_UClass_UALSNotifyStateEarlyBlendOut_Statics::NewProp_bCheckMovementState_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSNotifyStateEarlyBlendOut_Statics::NewProp_bCheckMovementState_MetaData), Z_Construct_UClass_UALSNotifyStateEarlyBlendOut_Statics::NewProp_bCheckMovementState_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UALSNotifyStateEarlyBlendOut_Statics::NewProp_MovementStateEquals_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSNotifyStateEarlyBlendOut_Statics::NewProp_MovementStateEquals_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "ModuleRelativePath", "Public/Character/Animation/Notify/ALSNotifyStateEarlyBlendOut.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UALSNotifyStateEarlyBlendOut_Statics::NewProp_MovementStateEquals = { "MovementStateEquals", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSNotifyStateEarlyBlendOut, MovementStateEquals), Z_Construct_UEnum_ALSV4_CPP_EALSMovementState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSNotifyStateEarlyBlendOut_Statics::NewProp_MovementStateEquals_MetaData), Z_Construct_UClass_UALSNotifyStateEarlyBlendOut_Statics::NewProp_MovementStateEquals_MetaData) }; // 2855841202
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSNotifyStateEarlyBlendOut_Statics::NewProp_bCheckStance_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "ModuleRelativePath", "Public/Character/Animation/Notify/ALSNotifyStateEarlyBlendOut.h" },
	};
#endif
	void Z_Construct_UClass_UALSNotifyStateEarlyBlendOut_Statics::NewProp_bCheckStance_SetBit(void* Obj)
	{
		((UALSNotifyStateEarlyBlendOut*)Obj)->bCheckStance = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UALSNotifyStateEarlyBlendOut_Statics::NewProp_bCheckStance = { "bCheckStance", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UALSNotifyStateEarlyBlendOut), &Z_Construct_UClass_UALSNotifyStateEarlyBlendOut_Statics::NewProp_bCheckStance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSNotifyStateEarlyBlendOut_Statics::NewProp_bCheckStance_MetaData), Z_Construct_UClass_UALSNotifyStateEarlyBlendOut_Statics::NewProp_bCheckStance_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UALSNotifyStateEarlyBlendOut_Statics::NewProp_StanceEquals_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSNotifyStateEarlyBlendOut_Statics::NewProp_StanceEquals_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "ModuleRelativePath", "Public/Character/Animation/Notify/ALSNotifyStateEarlyBlendOut.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UALSNotifyStateEarlyBlendOut_Statics::NewProp_StanceEquals = { "StanceEquals", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSNotifyStateEarlyBlendOut, StanceEquals), Z_Construct_UEnum_ALSV4_CPP_EALSStance, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSNotifyStateEarlyBlendOut_Statics::NewProp_StanceEquals_MetaData), Z_Construct_UClass_UALSNotifyStateEarlyBlendOut_Statics::NewProp_StanceEquals_MetaData) }; // 98898313
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSNotifyStateEarlyBlendOut_Statics::NewProp_bCheckMovementInput_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "ModuleRelativePath", "Public/Character/Animation/Notify/ALSNotifyStateEarlyBlendOut.h" },
	};
#endif
	void Z_Construct_UClass_UALSNotifyStateEarlyBlendOut_Statics::NewProp_bCheckMovementInput_SetBit(void* Obj)
	{
		((UALSNotifyStateEarlyBlendOut*)Obj)->bCheckMovementInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UALSNotifyStateEarlyBlendOut_Statics::NewProp_bCheckMovementInput = { "bCheckMovementInput", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UALSNotifyStateEarlyBlendOut), &Z_Construct_UClass_UALSNotifyStateEarlyBlendOut_Statics::NewProp_bCheckMovementInput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSNotifyStateEarlyBlendOut_Statics::NewProp_bCheckMovementInput_MetaData), Z_Construct_UClass_UALSNotifyStateEarlyBlendOut_Statics::NewProp_bCheckMovementInput_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UALSNotifyStateEarlyBlendOut_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSNotifyStateEarlyBlendOut_Statics::NewProp_ThisMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSNotifyStateEarlyBlendOut_Statics::NewProp_BlendOutTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSNotifyStateEarlyBlendOut_Statics::NewProp_bCheckMovementState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSNotifyStateEarlyBlendOut_Statics::NewProp_MovementStateEquals_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSNotifyStateEarlyBlendOut_Statics::NewProp_MovementStateEquals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSNotifyStateEarlyBlendOut_Statics::NewProp_bCheckStance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSNotifyStateEarlyBlendOut_Statics::NewProp_StanceEquals_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSNotifyStateEarlyBlendOut_Statics::NewProp_StanceEquals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSNotifyStateEarlyBlendOut_Statics::NewProp_bCheckMovementInput,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UALSNotifyStateEarlyBlendOut_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UALSNotifyStateEarlyBlendOut>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UALSNotifyStateEarlyBlendOut_Statics::ClassParams = {
		&UALSNotifyStateEarlyBlendOut::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UALSNotifyStateEarlyBlendOut_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UALSNotifyStateEarlyBlendOut_Statics::PropPointers),
		0,
		0x001130A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSNotifyStateEarlyBlendOut_Statics::Class_MetaDataParams), Z_Construct_UClass_UALSNotifyStateEarlyBlendOut_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UALSNotifyStateEarlyBlendOut_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UALSNotifyStateEarlyBlendOut()
	{
		if (!Z_Registration_Info_UClass_UALSNotifyStateEarlyBlendOut.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UALSNotifyStateEarlyBlendOut.OuterSingleton, Z_Construct_UClass_UALSNotifyStateEarlyBlendOut_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UALSNotifyStateEarlyBlendOut.OuterSingleton;
	}
	template<> ALSV4_CPP_API UClass* StaticClass<UALSNotifyStateEarlyBlendOut>()
	{
		return UALSNotifyStateEarlyBlendOut::StaticClass();
	}
	UALSNotifyStateEarlyBlendOut::UALSNotifyStateEarlyBlendOut(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UALSNotifyStateEarlyBlendOut);
	UALSNotifyStateEarlyBlendOut::~UALSNotifyStateEarlyBlendOut() {}
	struct Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Character_Animation_Notify_ALSNotifyStateEarlyBlendOut_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Character_Animation_Notify_ALSNotifyStateEarlyBlendOut_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UALSNotifyStateEarlyBlendOut, UALSNotifyStateEarlyBlendOut::StaticClass, TEXT("UALSNotifyStateEarlyBlendOut"), &Z_Registration_Info_UClass_UALSNotifyStateEarlyBlendOut, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UALSNotifyStateEarlyBlendOut), 731917342U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Character_Animation_Notify_ALSNotifyStateEarlyBlendOut_h_90528174(TEXT("/Script/ALSV4_CPP"),
		Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Character_Animation_Notify_ALSNotifyStateEarlyBlendOut_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Character_Animation_Notify_ALSNotifyStateEarlyBlendOut_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
