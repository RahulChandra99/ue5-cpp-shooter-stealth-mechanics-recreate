// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALSV4_CPP/Public/Character/Animation/Notify/ALSAnimNotifyCameraShake.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeALSAnimNotifyCameraShake() {}
// Cross Module References
	ALSV4_CPP_API UClass* Z_Construct_UClass_UALSAnimNotifyCameraShake();
	ALSV4_CPP_API UClass* Z_Construct_UClass_UALSAnimNotifyCameraShake_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ALSV4_CPP();
// End Cross Module References
	void UALSAnimNotifyCameraShake::StaticRegisterNativesUALSAnimNotifyCameraShake()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UALSAnimNotifyCameraShake);
	UClass* Z_Construct_UClass_UALSAnimNotifyCameraShake_NoRegister()
	{
		return UALSAnimNotifyCameraShake::StaticClass();
	}
	struct Z_Construct_UClass_UALSAnimNotifyCameraShake_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShakeClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ShakeClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UALSAnimNotifyCameraShake_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_ALSV4_CPP,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UALSAnimNotifyCameraShake_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSAnimNotifyCameraShake_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Generic camera shake animation notify for pawns with controller enabled\n */" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "Character/Animation/Notify/ALSAnimNotifyCameraShake.h" },
		{ "ModuleRelativePath", "Public/Character/Animation/Notify/ALSAnimNotifyCameraShake.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generic camera shake animation notify for pawns with controller enabled" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSAnimNotifyCameraShake_Statics::NewProp_ShakeClass_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "ModuleRelativePath", "Public/Character/Animation/Notify/ALSAnimNotifyCameraShake.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UALSAnimNotifyCameraShake_Statics::NewProp_ShakeClass = { "ShakeClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSAnimNotifyCameraShake, ShakeClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSAnimNotifyCameraShake_Statics::NewProp_ShakeClass_MetaData), Z_Construct_UClass_UALSAnimNotifyCameraShake_Statics::NewProp_ShakeClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSAnimNotifyCameraShake_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "ModuleRelativePath", "Public/Character/Animation/Notify/ALSAnimNotifyCameraShake.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UALSAnimNotifyCameraShake_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSAnimNotifyCameraShake, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSAnimNotifyCameraShake_Statics::NewProp_Scale_MetaData), Z_Construct_UClass_UALSAnimNotifyCameraShake_Statics::NewProp_Scale_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UALSAnimNotifyCameraShake_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSAnimNotifyCameraShake_Statics::NewProp_ShakeClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSAnimNotifyCameraShake_Statics::NewProp_Scale,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UALSAnimNotifyCameraShake_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UALSAnimNotifyCameraShake>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UALSAnimNotifyCameraShake_Statics::ClassParams = {
		&UALSAnimNotifyCameraShake::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UALSAnimNotifyCameraShake_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UALSAnimNotifyCameraShake_Statics::PropPointers),
		0,
		0x001120A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSAnimNotifyCameraShake_Statics::Class_MetaDataParams), Z_Construct_UClass_UALSAnimNotifyCameraShake_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UALSAnimNotifyCameraShake_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UALSAnimNotifyCameraShake()
	{
		if (!Z_Registration_Info_UClass_UALSAnimNotifyCameraShake.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UALSAnimNotifyCameraShake.OuterSingleton, Z_Construct_UClass_UALSAnimNotifyCameraShake_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UALSAnimNotifyCameraShake.OuterSingleton;
	}
	template<> ALSV4_CPP_API UClass* StaticClass<UALSAnimNotifyCameraShake>()
	{
		return UALSAnimNotifyCameraShake::StaticClass();
	}
	UALSAnimNotifyCameraShake::UALSAnimNotifyCameraShake(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UALSAnimNotifyCameraShake);
	UALSAnimNotifyCameraShake::~UALSAnimNotifyCameraShake() {}
	struct Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_hitman_stealth_recreate_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Character_Animation_Notify_ALSAnimNotifyCameraShake_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_hitman_stealth_recreate_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Character_Animation_Notify_ALSAnimNotifyCameraShake_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UALSAnimNotifyCameraShake, UALSAnimNotifyCameraShake::StaticClass, TEXT("UALSAnimNotifyCameraShake"), &Z_Registration_Info_UClass_UALSAnimNotifyCameraShake, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UALSAnimNotifyCameraShake), 3403456990U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_hitman_stealth_recreate_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Character_Animation_Notify_ALSAnimNotifyCameraShake_h_2063103731(TEXT("/Script/ALSV4_CPP"),
		Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_hitman_stealth_recreate_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Character_Animation_Notify_ALSAnimNotifyCameraShake_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_hitman_stealth_recreate_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Character_Animation_Notify_ALSAnimNotifyCameraShake_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
