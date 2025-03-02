// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALSV4_CPP/Public/Character/ALSCharacterMovementComponent.h"
#include "ALSV4_CPP/Public/Library/ALSCharacterStructLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeALSCharacterMovementComponent() {}
// Cross Module References
	ALSV4_CPP_API UClass* Z_Construct_UClass_UALSCharacterMovementComponent();
	ALSV4_CPP_API UClass* Z_Construct_UClass_UALSCharacterMovementComponent_NoRegister();
	ALSV4_CPP_API UEnum* Z_Construct_UEnum_ALSV4_CPP_EALSGait();
	ALSV4_CPP_API UScriptStruct* Z_Construct_UScriptStruct_FALSMovementSettings();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
	UPackage* Z_Construct_UPackage__Script_ALSV4_CPP();
// End Cross Module References
	DEFINE_FUNCTION(UALSCharacterMovementComponent::execServer_SetAllowedGait)
	{
		P_GET_ENUM(EALSGait,Z_Param_NewAllowedGait);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_SetAllowedGait_Implementation(EALSGait(Z_Param_NewAllowedGait));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSCharacterMovementComponent::execSetAllowedGait)
	{
		P_GET_ENUM(EALSGait,Z_Param_NewAllowedGait);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAllowedGait(EALSGait(Z_Param_NewAllowedGait));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSCharacterMovementComponent::execSetMovementSettings)
	{
		P_GET_STRUCT(FALSMovementSettings,Z_Param_NewMovementSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMovementSettings(Z_Param_NewMovementSettings);
		P_NATIVE_END;
	}
	struct ALSCharacterMovementComponent_eventServer_SetAllowedGait_Parms
	{
		EALSGait NewAllowedGait;
	};
	static FName NAME_UALSCharacterMovementComponent_Server_SetAllowedGait = FName(TEXT("Server_SetAllowedGait"));
	void UALSCharacterMovementComponent::Server_SetAllowedGait(EALSGait NewAllowedGait)
	{
		ALSCharacterMovementComponent_eventServer_SetAllowedGait_Parms Parms;
		Parms.NewAllowedGait=NewAllowedGait;
		ProcessEvent(FindFunctionChecked(NAME_UALSCharacterMovementComponent_Server_SetAllowedGait),&Parms);
	}
	void UALSCharacterMovementComponent::StaticRegisterNativesUALSCharacterMovementComponent()
	{
		UClass* Class = UALSCharacterMovementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Server_SetAllowedGait", &UALSCharacterMovementComponent::execServer_SetAllowedGait },
			{ "SetAllowedGait", &UALSCharacterMovementComponent::execSetAllowedGait },
			{ "SetMovementSettings", &UALSCharacterMovementComponent::execSetMovementSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UALSCharacterMovementComponent_Server_SetAllowedGait_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewAllowedGait_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewAllowedGait;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UALSCharacterMovementComponent_Server_SetAllowedGait_Statics::NewProp_NewAllowedGait_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UALSCharacterMovementComponent_Server_SetAllowedGait_Statics::NewProp_NewAllowedGait = { "NewAllowedGait", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSCharacterMovementComponent_eventServer_SetAllowedGait_Parms, NewAllowedGait), Z_Construct_UEnum_ALSV4_CPP_EALSGait, METADATA_PARAMS(0, nullptr) }; // 4204508735
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSCharacterMovementComponent_Server_SetAllowedGait_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSCharacterMovementComponent_Server_SetAllowedGait_Statics::NewProp_NewAllowedGait_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSCharacterMovementComponent_Server_SetAllowedGait_Statics::NewProp_NewAllowedGait,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSCharacterMovementComponent_Server_SetAllowedGait_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement Settings" },
		{ "ModuleRelativePath", "Public/Character/ALSCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSCharacterMovementComponent_Server_SetAllowedGait_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSCharacterMovementComponent, nullptr, "Server_SetAllowedGait", nullptr, nullptr, Z_Construct_UFunction_UALSCharacterMovementComponent_Server_SetAllowedGait_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSCharacterMovementComponent_Server_SetAllowedGait_Statics::PropPointers), sizeof(ALSCharacterMovementComponent_eventServer_SetAllowedGait_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSCharacterMovementComponent_Server_SetAllowedGait_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSCharacterMovementComponent_Server_SetAllowedGait_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSCharacterMovementComponent_Server_SetAllowedGait_Statics::PropPointers) < 2048);
	static_assert(sizeof(ALSCharacterMovementComponent_eventServer_SetAllowedGait_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UALSCharacterMovementComponent_Server_SetAllowedGait()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSCharacterMovementComponent_Server_SetAllowedGait_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSCharacterMovementComponent_SetAllowedGait_Statics
	{
		struct ALSCharacterMovementComponent_eventSetAllowedGait_Parms
		{
			EALSGait NewAllowedGait;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewAllowedGait_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewAllowedGait;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UALSCharacterMovementComponent_SetAllowedGait_Statics::NewProp_NewAllowedGait_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UALSCharacterMovementComponent_SetAllowedGait_Statics::NewProp_NewAllowedGait = { "NewAllowedGait", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSCharacterMovementComponent_eventSetAllowedGait_Parms, NewAllowedGait), Z_Construct_UEnum_ALSV4_CPP_EALSGait, METADATA_PARAMS(0, nullptr) }; // 4204508735
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSCharacterMovementComponent_SetAllowedGait_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSCharacterMovementComponent_SetAllowedGait_Statics::NewProp_NewAllowedGait_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSCharacterMovementComponent_SetAllowedGait_Statics::NewProp_NewAllowedGait,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSCharacterMovementComponent_SetAllowedGait_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Set Max Walking Speed (Called from the owning client)\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/ALSCharacterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set Max Walking Speed (Called from the owning client)" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSCharacterMovementComponent_SetAllowedGait_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSCharacterMovementComponent, nullptr, "SetAllowedGait", nullptr, nullptr, Z_Construct_UFunction_UALSCharacterMovementComponent_SetAllowedGait_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSCharacterMovementComponent_SetAllowedGait_Statics::PropPointers), sizeof(Z_Construct_UFunction_UALSCharacterMovementComponent_SetAllowedGait_Statics::ALSCharacterMovementComponent_eventSetAllowedGait_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSCharacterMovementComponent_SetAllowedGait_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSCharacterMovementComponent_SetAllowedGait_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSCharacterMovementComponent_SetAllowedGait_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UALSCharacterMovementComponent_SetAllowedGait_Statics::ALSCharacterMovementComponent_eventSetAllowedGait_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UALSCharacterMovementComponent_SetAllowedGait()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSCharacterMovementComponent_SetAllowedGait_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSCharacterMovementComponent_SetMovementSettings_Statics
	{
		struct ALSCharacterMovementComponent_eventSetMovementSettings_Parms
		{
			FALSMovementSettings NewMovementSettings;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewMovementSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UALSCharacterMovementComponent_SetMovementSettings_Statics::NewProp_NewMovementSettings = { "NewMovementSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSCharacterMovementComponent_eventSetMovementSettings_Parms, NewMovementSettings), Z_Construct_UScriptStruct_FALSMovementSettings, METADATA_PARAMS(0, nullptr) }; // 3190297434
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSCharacterMovementComponent_SetMovementSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSCharacterMovementComponent_SetMovementSettings_Statics::NewProp_NewMovementSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSCharacterMovementComponent_SetMovementSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement Settings" },
		{ "ModuleRelativePath", "Public/Character/ALSCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSCharacterMovementComponent_SetMovementSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSCharacterMovementComponent, nullptr, "SetMovementSettings", nullptr, nullptr, Z_Construct_UFunction_UALSCharacterMovementComponent_SetMovementSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSCharacterMovementComponent_SetMovementSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UALSCharacterMovementComponent_SetMovementSettings_Statics::ALSCharacterMovementComponent_eventSetMovementSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSCharacterMovementComponent_SetMovementSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSCharacterMovementComponent_SetMovementSettings_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSCharacterMovementComponent_SetMovementSettings_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UALSCharacterMovementComponent_SetMovementSettings_Statics::ALSCharacterMovementComponent_eventSetMovementSettings_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UALSCharacterMovementComponent_SetMovementSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSCharacterMovementComponent_SetMovementSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UALSCharacterMovementComponent);
	UClass* Z_Construct_UClass_UALSCharacterMovementComponent_NoRegister()
	{
		return UALSCharacterMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UALSCharacterMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRequestMovementSettingsChange_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_bRequestMovementSettingsChange;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AllowedGait_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllowedGait_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AllowedGait;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMovementSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentMovementSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UALSCharacterMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ALSV4_CPP,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UALSCharacterMovementComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UALSCharacterMovementComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UALSCharacterMovementComponent_Server_SetAllowedGait, "Server_SetAllowedGait" }, // 2120784813
		{ &Z_Construct_UFunction_UALSCharacterMovementComponent_SetAllowedGait, "SetAllowedGait" }, // 2448694930
		{ &Z_Construct_UFunction_UALSCharacterMovementComponent_SetMovementSettings, "SetMovementSettings" }, // 527611362
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UALSCharacterMovementComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSCharacterMovementComponent_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Authoritative networked Character Movement\n */" },
#endif
		{ "IncludePath", "Character/ALSCharacterMovementComponent.h" },
		{ "ModuleRelativePath", "Public/Character/ALSCharacterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Authoritative networked Character Movement" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSCharacterMovementComponent_Statics::NewProp_bRequestMovementSettingsChange_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Movement Settings Variables\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/ALSCharacterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Movement Settings Variables" },
#endif
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UALSCharacterMovementComponent_Statics::NewProp_bRequestMovementSettingsChange = { "bRequestMovementSettingsChange", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSCharacterMovementComponent, bRequestMovementSettingsChange), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSCharacterMovementComponent_Statics::NewProp_bRequestMovementSettingsChange_MetaData), Z_Construct_UClass_UALSCharacterMovementComponent_Statics::NewProp_bRequestMovementSettingsChange_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UALSCharacterMovementComponent_Statics::NewProp_AllowedGait_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSCharacterMovementComponent_Statics::NewProp_AllowedGait_MetaData[] = {
		{ "ModuleRelativePath", "Public/Character/ALSCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UALSCharacterMovementComponent_Statics::NewProp_AllowedGait = { "AllowedGait", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSCharacterMovementComponent, AllowedGait), Z_Construct_UEnum_ALSV4_CPP_EALSGait, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSCharacterMovementComponent_Statics::NewProp_AllowedGait_MetaData), Z_Construct_UClass_UALSCharacterMovementComponent_Statics::NewProp_AllowedGait_MetaData) }; // 4204508735
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSCharacterMovementComponent_Statics::NewProp_CurrentMovementSettings_MetaData[] = {
		{ "Category", "ALS|Movement System" },
		{ "ModuleRelativePath", "Public/Character/ALSCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UALSCharacterMovementComponent_Statics::NewProp_CurrentMovementSettings = { "CurrentMovementSettings", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSCharacterMovementComponent, CurrentMovementSettings), Z_Construct_UScriptStruct_FALSMovementSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSCharacterMovementComponent_Statics::NewProp_CurrentMovementSettings_MetaData), Z_Construct_UClass_UALSCharacterMovementComponent_Statics::NewProp_CurrentMovementSettings_MetaData) }; // 3190297434
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UALSCharacterMovementComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSCharacterMovementComponent_Statics::NewProp_bRequestMovementSettingsChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSCharacterMovementComponent_Statics::NewProp_AllowedGait_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSCharacterMovementComponent_Statics::NewProp_AllowedGait,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSCharacterMovementComponent_Statics::NewProp_CurrentMovementSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UALSCharacterMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UALSCharacterMovementComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UALSCharacterMovementComponent_Statics::ClassParams = {
		&UALSCharacterMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UALSCharacterMovementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UALSCharacterMovementComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSCharacterMovementComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UALSCharacterMovementComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UALSCharacterMovementComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UALSCharacterMovementComponent()
	{
		if (!Z_Registration_Info_UClass_UALSCharacterMovementComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UALSCharacterMovementComponent.OuterSingleton, Z_Construct_UClass_UALSCharacterMovementComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UALSCharacterMovementComponent.OuterSingleton;
	}
	template<> ALSV4_CPP_API UClass* StaticClass<UALSCharacterMovementComponent>()
	{
		return UALSCharacterMovementComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UALSCharacterMovementComponent);
	UALSCharacterMovementComponent::~UALSCharacterMovementComponent() {}
	struct Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Character_ALSCharacterMovementComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Character_ALSCharacterMovementComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UALSCharacterMovementComponent, UALSCharacterMovementComponent::StaticClass, TEXT("UALSCharacterMovementComponent"), &Z_Registration_Info_UClass_UALSCharacterMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UALSCharacterMovementComponent), 1999930216U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Character_ALSCharacterMovementComponent_h_2761295154(TEXT("/Script/ALSV4_CPP"),
		Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Character_ALSCharacterMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Character_ALSCharacterMovementComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
