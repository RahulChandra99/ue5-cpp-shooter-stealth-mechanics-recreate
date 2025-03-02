// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALSV4_CPP/Public/AI/ALSAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeALSAIController() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	ALSV4_CPP_API UClass* Z_Construct_UClass_AALSAIController();
	ALSV4_CPP_API UClass* Z_Construct_UClass_AALSAIController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ALSV4_CPP();
// End Cross Module References
	void AALSAIController::StaticRegisterNativesAALSAIController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AALSAIController);
	UClass* Z_Construct_UClass_AALSAIController_NoRegister()
	{
		return AALSAIController::StaticClass();
	}
	struct Z_Construct_UClass_AALSAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Behaviour_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Behaviour;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AALSAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_ALSV4_CPP,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AALSAIController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALSAIController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "AI/ALSAIController.h" },
		{ "ModuleRelativePath", "Public/AI/ALSAIController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALSAIController_Statics::NewProp_Behaviour_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/AI/ALSAIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AALSAIController_Statics::NewProp_Behaviour = { "Behaviour", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AALSAIController, Behaviour), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AALSAIController_Statics::NewProp_Behaviour_MetaData), Z_Construct_UClass_AALSAIController_Statics::NewProp_Behaviour_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AALSAIController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALSAIController_Statics::NewProp_Behaviour,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AALSAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AALSAIController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AALSAIController_Statics::ClassParams = {
		&AALSAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AALSAIController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AALSAIController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AALSAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_AALSAIController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AALSAIController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AALSAIController()
	{
		if (!Z_Registration_Info_UClass_AALSAIController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AALSAIController.OuterSingleton, Z_Construct_UClass_AALSAIController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AALSAIController.OuterSingleton;
	}
	template<> ALSV4_CPP_API UClass* StaticClass<AALSAIController>()
	{
		return AALSAIController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AALSAIController);
	AALSAIController::~AALSAIController() {}
	struct Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_AI_ALSAIController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_AI_ALSAIController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AALSAIController, AALSAIController::StaticClass, TEXT("AALSAIController"), &Z_Registration_Info_UClass_AALSAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AALSAIController), 3996055847U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_AI_ALSAIController_h_3916732251(TEXT("/Script/ALSV4_CPP"),
		Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_AI_ALSAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_AI_ALSAIController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
