// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALSV4_CPP/Public/Character/Animation/Notify/ALSNotifyStateOverlayOverride.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeALSNotifyStateOverlayOverride() {}
// Cross Module References
	ALSV4_CPP_API UClass* Z_Construct_UClass_UALSNotifyStateOverlayOverride();
	ALSV4_CPP_API UClass* Z_Construct_UClass_UALSNotifyStateOverlayOverride_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_ALSV4_CPP();
// End Cross Module References
	void UALSNotifyStateOverlayOverride::StaticRegisterNativesUALSNotifyStateOverlayOverride()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UALSNotifyStateOverlayOverride);
	UClass* Z_Construct_UClass_UALSNotifyStateOverlayOverride_NoRegister()
	{
		return UALSNotifyStateOverlayOverride::StaticClass();
	}
	struct Z_Construct_UClass_UALSNotifyStateOverlayOverride_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlayOverrideState_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_OverlayOverrideState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UALSNotifyStateOverlayOverride_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_ALSV4_CPP,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UALSNotifyStateOverlayOverride_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSNotifyStateOverlayOverride_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "Character/Animation/Notify/ALSNotifyStateOverlayOverride.h" },
		{ "ModuleRelativePath", "Public/Character/Animation/Notify/ALSNotifyStateOverlayOverride.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSNotifyStateOverlayOverride_Statics::NewProp_OverlayOverrideState_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "ModuleRelativePath", "Public/Character/Animation/Notify/ALSNotifyStateOverlayOverride.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UALSNotifyStateOverlayOverride_Statics::NewProp_OverlayOverrideState = { "OverlayOverrideState", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSNotifyStateOverlayOverride, OverlayOverrideState), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSNotifyStateOverlayOverride_Statics::NewProp_OverlayOverrideState_MetaData), Z_Construct_UClass_UALSNotifyStateOverlayOverride_Statics::NewProp_OverlayOverrideState_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UALSNotifyStateOverlayOverride_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSNotifyStateOverlayOverride_Statics::NewProp_OverlayOverrideState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UALSNotifyStateOverlayOverride_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UALSNotifyStateOverlayOverride>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UALSNotifyStateOverlayOverride_Statics::ClassParams = {
		&UALSNotifyStateOverlayOverride::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UALSNotifyStateOverlayOverride_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UALSNotifyStateOverlayOverride_Statics::PropPointers),
		0,
		0x001130A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSNotifyStateOverlayOverride_Statics::Class_MetaDataParams), Z_Construct_UClass_UALSNotifyStateOverlayOverride_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UALSNotifyStateOverlayOverride_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UALSNotifyStateOverlayOverride()
	{
		if (!Z_Registration_Info_UClass_UALSNotifyStateOverlayOverride.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UALSNotifyStateOverlayOverride.OuterSingleton, Z_Construct_UClass_UALSNotifyStateOverlayOverride_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UALSNotifyStateOverlayOverride.OuterSingleton;
	}
	template<> ALSV4_CPP_API UClass* StaticClass<UALSNotifyStateOverlayOverride>()
	{
		return UALSNotifyStateOverlayOverride::StaticClass();
	}
	UALSNotifyStateOverlayOverride::UALSNotifyStateOverlayOverride(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UALSNotifyStateOverlayOverride);
	UALSNotifyStateOverlayOverride::~UALSNotifyStateOverlayOverride() {}
	struct Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Character_Animation_Notify_ALSNotifyStateOverlayOverride_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Character_Animation_Notify_ALSNotifyStateOverlayOverride_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UALSNotifyStateOverlayOverride, UALSNotifyStateOverlayOverride::StaticClass, TEXT("UALSNotifyStateOverlayOverride"), &Z_Registration_Info_UClass_UALSNotifyStateOverlayOverride, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UALSNotifyStateOverlayOverride), 1582352488U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Character_Animation_Notify_ALSNotifyStateOverlayOverride_h_3677375942(TEXT("/Script/ALSV4_CPP"),
		Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Character_Animation_Notify_ALSNotifyStateOverlayOverride_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Character_Animation_Notify_ALSNotifyStateOverlayOverride_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
