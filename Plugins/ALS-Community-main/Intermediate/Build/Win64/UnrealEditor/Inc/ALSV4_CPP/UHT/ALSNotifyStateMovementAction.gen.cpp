// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALSV4_CPP/Public/Character/Animation/Notify/ALSNotifyStateMovementAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeALSNotifyStateMovementAction() {}
// Cross Module References
	ALSV4_CPP_API UClass* Z_Construct_UClass_UALSNotifyStateMovementAction();
	ALSV4_CPP_API UClass* Z_Construct_UClass_UALSNotifyStateMovementAction_NoRegister();
	ALSV4_CPP_API UEnum* Z_Construct_UEnum_ALSV4_CPP_EALSMovementAction();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_ALSV4_CPP();
// End Cross Module References
	void UALSNotifyStateMovementAction::StaticRegisterNativesUALSNotifyStateMovementAction()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UALSNotifyStateMovementAction);
	UClass* Z_Construct_UClass_UALSNotifyStateMovementAction_NoRegister()
	{
		return UALSNotifyStateMovementAction::StaticClass();
	}
	struct Z_Construct_UClass_UALSNotifyStateMovementAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MovementAction_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementAction_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MovementAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UALSNotifyStateMovementAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_ALSV4_CPP,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UALSNotifyStateMovementAction_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSNotifyStateMovementAction_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "Character/Animation/Notify/ALSNotifyStateMovementAction.h" },
		{ "ModuleRelativePath", "Public/Character/Animation/Notify/ALSNotifyStateMovementAction.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UALSNotifyStateMovementAction_Statics::NewProp_MovementAction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSNotifyStateMovementAction_Statics::NewProp_MovementAction_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "ModuleRelativePath", "Public/Character/Animation/Notify/ALSNotifyStateMovementAction.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UALSNotifyStateMovementAction_Statics::NewProp_MovementAction = { "MovementAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSNotifyStateMovementAction, MovementAction), Z_Construct_UEnum_ALSV4_CPP_EALSMovementAction, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSNotifyStateMovementAction_Statics::NewProp_MovementAction_MetaData), Z_Construct_UClass_UALSNotifyStateMovementAction_Statics::NewProp_MovementAction_MetaData) }; // 1229765569
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UALSNotifyStateMovementAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSNotifyStateMovementAction_Statics::NewProp_MovementAction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSNotifyStateMovementAction_Statics::NewProp_MovementAction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UALSNotifyStateMovementAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UALSNotifyStateMovementAction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UALSNotifyStateMovementAction_Statics::ClassParams = {
		&UALSNotifyStateMovementAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UALSNotifyStateMovementAction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UALSNotifyStateMovementAction_Statics::PropPointers),
		0,
		0x001130A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSNotifyStateMovementAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UALSNotifyStateMovementAction_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UALSNotifyStateMovementAction_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UALSNotifyStateMovementAction()
	{
		if (!Z_Registration_Info_UClass_UALSNotifyStateMovementAction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UALSNotifyStateMovementAction.OuterSingleton, Z_Construct_UClass_UALSNotifyStateMovementAction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UALSNotifyStateMovementAction.OuterSingleton;
	}
	template<> ALSV4_CPP_API UClass* StaticClass<UALSNotifyStateMovementAction>()
	{
		return UALSNotifyStateMovementAction::StaticClass();
	}
	UALSNotifyStateMovementAction::UALSNotifyStateMovementAction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UALSNotifyStateMovementAction);
	UALSNotifyStateMovementAction::~UALSNotifyStateMovementAction() {}
	struct Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Character_Animation_Notify_ALSNotifyStateMovementAction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Character_Animation_Notify_ALSNotifyStateMovementAction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UALSNotifyStateMovementAction, UALSNotifyStateMovementAction::StaticClass, TEXT("UALSNotifyStateMovementAction"), &Z_Registration_Info_UClass_UALSNotifyStateMovementAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UALSNotifyStateMovementAction), 1488849829U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Character_Animation_Notify_ALSNotifyStateMovementAction_h_405206504(TEXT("/Script/ALSV4_CPP"),
		Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Character_Animation_Notify_ALSNotifyStateMovementAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Character_Animation_Notify_ALSNotifyStateMovementAction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
