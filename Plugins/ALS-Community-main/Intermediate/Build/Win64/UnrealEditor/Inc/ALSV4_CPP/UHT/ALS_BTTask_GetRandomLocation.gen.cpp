// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALSV4_CPP/Public/AI/ALS_BTTask_GetRandomLocation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeALS_BTTask_GetRandomLocation() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
	ALSV4_CPP_API UClass* Z_Construct_UClass_UALS_BTTask_GetRandomLocation();
	ALSV4_CPP_API UClass* Z_Construct_UClass_UALS_BTTask_GetRandomLocation_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationQueryFilter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ALSV4_CPP();
// End Cross Module References
	void UALS_BTTask_GetRandomLocation::StaticRegisterNativesUALS_BTTask_GetRandomLocation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UALS_BTTask_GetRandomLocation);
	UClass* Z_Construct_UClass_UALS_BTTask_GetRandomLocation_NoRegister()
	{
		return UALS_BTTask_GetRandomLocation::StaticClass();
	}
	struct Z_Construct_UClass_UALS_BTTask_GetRandomLocation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filter_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Filter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UALS_BTTask_GetRandomLocation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ALSV4_CPP,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UALS_BTTask_GetRandomLocation_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALS_BTTask_GetRandomLocation_Statics::Class_MetaDataParams[] = {
		{ "Category", "ALS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Picks a random location reachable through NavMesh within the Max Distance from the Owning Pawn's current location and assigns it to the specified Blackboard Key. */" },
#endif
		{ "DisplayName", "Get Random Location" },
		{ "IncludePath", "AI/ALS_BTTask_GetRandomLocation.h" },
		{ "ModuleRelativePath", "Public/AI/ALS_BTTask_GetRandomLocation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Picks a random location reachable through NavMesh within the Max Distance from the Owning Pawn's current location and assigns it to the specified Blackboard Key." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALS_BTTask_GetRandomLocation_Statics::NewProp_MaxDistance_MetaData[] = {
		{ "Category", "Navigation" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum distance the random location picked may be from pawn. */" },
#endif
		{ "ModuleRelativePath", "Public/AI/ALS_BTTask_GetRandomLocation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum distance the random location picked may be from pawn." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UALS_BTTask_GetRandomLocation_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALS_BTTask_GetRandomLocation, MaxDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALS_BTTask_GetRandomLocation_Statics::NewProp_MaxDistance_MetaData), Z_Construct_UClass_UALS_BTTask_GetRandomLocation_Statics::NewProp_MaxDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALS_BTTask_GetRandomLocation_Statics::NewProp_Filter_MetaData[] = {
		{ "Category", "Navigation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Navigation Query filter used when picking the location, only picks locations reachable using this filter when assigned. */" },
#endif
		{ "ModuleRelativePath", "Public/AI/ALS_BTTask_GetRandomLocation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Navigation Query filter used when picking the location, only picks locations reachable using this filter when assigned." },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UALS_BTTask_GetRandomLocation_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALS_BTTask_GetRandomLocation, Filter), Z_Construct_UClass_UClass, Z_Construct_UClass_UNavigationQueryFilter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALS_BTTask_GetRandomLocation_Statics::NewProp_Filter_MetaData), Z_Construct_UClass_UALS_BTTask_GetRandomLocation_Statics::NewProp_Filter_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UALS_BTTask_GetRandomLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALS_BTTask_GetRandomLocation_Statics::NewProp_MaxDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALS_BTTask_GetRandomLocation_Statics::NewProp_Filter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UALS_BTTask_GetRandomLocation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UALS_BTTask_GetRandomLocation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UALS_BTTask_GetRandomLocation_Statics::ClassParams = {
		&UALS_BTTask_GetRandomLocation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UALS_BTTask_GetRandomLocation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UALS_BTTask_GetRandomLocation_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALS_BTTask_GetRandomLocation_Statics::Class_MetaDataParams), Z_Construct_UClass_UALS_BTTask_GetRandomLocation_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UALS_BTTask_GetRandomLocation_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UALS_BTTask_GetRandomLocation()
	{
		if (!Z_Registration_Info_UClass_UALS_BTTask_GetRandomLocation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UALS_BTTask_GetRandomLocation.OuterSingleton, Z_Construct_UClass_UALS_BTTask_GetRandomLocation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UALS_BTTask_GetRandomLocation.OuterSingleton;
	}
	template<> ALSV4_CPP_API UClass* StaticClass<UALS_BTTask_GetRandomLocation>()
	{
		return UALS_BTTask_GetRandomLocation::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UALS_BTTask_GetRandomLocation);
	UALS_BTTask_GetRandomLocation::~UALS_BTTask_GetRandomLocation() {}
	struct Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_AI_ALS_BTTask_GetRandomLocation_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_AI_ALS_BTTask_GetRandomLocation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UALS_BTTask_GetRandomLocation, UALS_BTTask_GetRandomLocation::StaticClass, TEXT("UALS_BTTask_GetRandomLocation"), &Z_Registration_Info_UClass_UALS_BTTask_GetRandomLocation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UALS_BTTask_GetRandomLocation), 2034598152U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_AI_ALS_BTTask_GetRandomLocation_h_4129775956(TEXT("/Script/ALSV4_CPP"),
		Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_AI_ALS_BTTask_GetRandomLocation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_AI_ALS_BTTask_GetRandomLocation_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
