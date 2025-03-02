// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALSV4_CPP/Public/Character/Animation/Notify/ALSAnimNotifyGroundedEntryState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeALSAnimNotifyGroundedEntryState() {}
// Cross Module References
	ALSV4_CPP_API UClass* Z_Construct_UClass_UALSAnimNotifyGroundedEntryState();
	ALSV4_CPP_API UClass* Z_Construct_UClass_UALSAnimNotifyGroundedEntryState_NoRegister();
	ALSV4_CPP_API UEnum* Z_Construct_UEnum_ALSV4_CPP_EALSGroundedEntryState();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_ALSV4_CPP();
// End Cross Module References
	void UALSAnimNotifyGroundedEntryState::StaticRegisterNativesUALSAnimNotifyGroundedEntryState()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UALSAnimNotifyGroundedEntryState);
	UClass* Z_Construct_UClass_UALSAnimNotifyGroundedEntryState_NoRegister()
	{
		return UALSAnimNotifyGroundedEntryState::StaticClass();
	}
	struct Z_Construct_UClass_UALSAnimNotifyGroundedEntryState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_GroundedEntryState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundedEntryState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_GroundedEntryState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UALSAnimNotifyGroundedEntryState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_ALSV4_CPP,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UALSAnimNotifyGroundedEntryState_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSAnimNotifyGroundedEntryState_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "Character/Animation/Notify/ALSAnimNotifyGroundedEntryState.h" },
		{ "ModuleRelativePath", "Public/Character/Animation/Notify/ALSAnimNotifyGroundedEntryState.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UALSAnimNotifyGroundedEntryState_Statics::NewProp_GroundedEntryState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSAnimNotifyGroundedEntryState_Statics::NewProp_GroundedEntryState_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "ModuleRelativePath", "Public/Character/Animation/Notify/ALSAnimNotifyGroundedEntryState.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UALSAnimNotifyGroundedEntryState_Statics::NewProp_GroundedEntryState = { "GroundedEntryState", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSAnimNotifyGroundedEntryState, GroundedEntryState), Z_Construct_UEnum_ALSV4_CPP_EALSGroundedEntryState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSAnimNotifyGroundedEntryState_Statics::NewProp_GroundedEntryState_MetaData), Z_Construct_UClass_UALSAnimNotifyGroundedEntryState_Statics::NewProp_GroundedEntryState_MetaData) }; // 1781834569
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UALSAnimNotifyGroundedEntryState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSAnimNotifyGroundedEntryState_Statics::NewProp_GroundedEntryState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSAnimNotifyGroundedEntryState_Statics::NewProp_GroundedEntryState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UALSAnimNotifyGroundedEntryState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UALSAnimNotifyGroundedEntryState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UALSAnimNotifyGroundedEntryState_Statics::ClassParams = {
		&UALSAnimNotifyGroundedEntryState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UALSAnimNotifyGroundedEntryState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UALSAnimNotifyGroundedEntryState_Statics::PropPointers),
		0,
		0x001120A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSAnimNotifyGroundedEntryState_Statics::Class_MetaDataParams), Z_Construct_UClass_UALSAnimNotifyGroundedEntryState_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UALSAnimNotifyGroundedEntryState_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UALSAnimNotifyGroundedEntryState()
	{
		if (!Z_Registration_Info_UClass_UALSAnimNotifyGroundedEntryState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UALSAnimNotifyGroundedEntryState.OuterSingleton, Z_Construct_UClass_UALSAnimNotifyGroundedEntryState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UALSAnimNotifyGroundedEntryState.OuterSingleton;
	}
	template<> ALSV4_CPP_API UClass* StaticClass<UALSAnimNotifyGroundedEntryState>()
	{
		return UALSAnimNotifyGroundedEntryState::StaticClass();
	}
	UALSAnimNotifyGroundedEntryState::UALSAnimNotifyGroundedEntryState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UALSAnimNotifyGroundedEntryState);
	UALSAnimNotifyGroundedEntryState::~UALSAnimNotifyGroundedEntryState() {}
	struct Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Character_Animation_Notify_ALSAnimNotifyGroundedEntryState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Character_Animation_Notify_ALSAnimNotifyGroundedEntryState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UALSAnimNotifyGroundedEntryState, UALSAnimNotifyGroundedEntryState::StaticClass, TEXT("UALSAnimNotifyGroundedEntryState"), &Z_Registration_Info_UClass_UALSAnimNotifyGroundedEntryState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UALSAnimNotifyGroundedEntryState), 3442492645U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Character_Animation_Notify_ALSAnimNotifyGroundedEntryState_h_1773085543(TEXT("/Script/ALSV4_CPP"),
		Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Character_Animation_Notify_ALSAnimNotifyGroundedEntryState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Character_Animation_Notify_ALSAnimNotifyGroundedEntryState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
