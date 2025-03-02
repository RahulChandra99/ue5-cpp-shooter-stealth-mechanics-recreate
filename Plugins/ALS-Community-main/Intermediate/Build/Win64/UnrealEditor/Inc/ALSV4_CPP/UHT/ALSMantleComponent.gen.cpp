// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALSV4_CPP/Public/Components/ALSMantleComponent.h"
#include "ALSV4_CPP/Public/Library/ALSCharacterStructLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeALSMantleComponent() {}
// Cross Module References
	ALSV4_CPP_API UClass* Z_Construct_UClass_AALSBaseCharacter_NoRegister();
	ALSV4_CPP_API UClass* Z_Construct_UClass_UALSDebugComponent_NoRegister();
	ALSV4_CPP_API UClass* Z_Construct_UClass_UALSMantleComponent();
	ALSV4_CPP_API UClass* Z_Construct_UClass_UALSMantleComponent_NoRegister();
	ALSV4_CPP_API UEnum* Z_Construct_UEnum_ALSV4_CPP_EALSMantleType();
	ALSV4_CPP_API UEnum* Z_Construct_UEnum_ALSV4_CPP_EALSOverlayState();
	ALSV4_CPP_API UScriptStruct* Z_Construct_UScriptStruct_FALSComponentAndTransform();
	ALSV4_CPP_API UScriptStruct* Z_Construct_UScriptStruct_FALSMantleAsset();
	ALSV4_CPP_API UScriptStruct* Z_Construct_UScriptStruct_FALSMantleParams();
	ALSV4_CPP_API UScriptStruct* Z_Construct_UScriptStruct_FALSMantleTraceSettings();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTimelineComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDrawDebugTrace();
	UPackage* Z_Construct_UPackage__Script_ALSV4_CPP();
// End Cross Module References
	DEFINE_FUNCTION(UALSMantleComponent::execMulticast_MantleStart)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_MantleHeight);
		P_GET_STRUCT(FALSComponentAndTransform,Z_Param_MantleLedgeWS);
		P_GET_ENUM(EALSMantleType,Z_Param_MantleType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_MantleStart_Implementation(Z_Param_MantleHeight,Z_Param_MantleLedgeWS,EALSMantleType(Z_Param_MantleType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSMantleComponent::execServer_MantleStart)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_MantleHeight);
		P_GET_STRUCT(FALSComponentAndTransform,Z_Param_MantleLedgeWS);
		P_GET_ENUM(EALSMantleType,Z_Param_MantleType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_MantleStart_Implementation(Z_Param_MantleHeight,Z_Param_MantleLedgeWS,EALSMantleType(Z_Param_MantleType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSMantleComponent::execOnOwnerRagdollStateChanged)
	{
		P_GET_UBOOL(Z_Param_bRagdollState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOwnerRagdollStateChanged(Z_Param_bRagdollState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSMantleComponent::execOnOwnerJumpInput)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOwnerJumpInput();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSMantleComponent::execMantleEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MantleEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSMantleComponent::execMantleUpdate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_BlendIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MantleUpdate(Z_Param_BlendIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSMantleComponent::execMantleStart)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_MantleHeight);
		P_GET_STRUCT_REF(FALSComponentAndTransform,Z_Param_Out_MantleLedgeWS);
		P_GET_ENUM(EALSMantleType,Z_Param_MantleType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MantleStart(Z_Param_MantleHeight,Z_Param_Out_MantleLedgeWS,EALSMantleType(Z_Param_MantleType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSMantleComponent::execMantleCheck)
	{
		P_GET_STRUCT_REF(FALSMantleTraceSettings,Z_Param_Out_TraceSettings);
		P_GET_PROPERTY(FByteProperty,Z_Param_DebugType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->MantleCheck(Z_Param_Out_TraceSettings,EDrawDebugTrace::Type(Z_Param_DebugType));
		P_NATIVE_END;
	}
	struct ALSMantleComponent_eventGetMantleAsset_Parms
	{
		EALSMantleType MantleType;
		EALSOverlayState CurrentOverlayState;
		FALSMantleAsset ReturnValue;
	};
	struct ALSMantleComponent_eventMulticast_MantleStart_Parms
	{
		float MantleHeight;
		FALSComponentAndTransform MantleLedgeWS;
		EALSMantleType MantleType;
	};
	struct ALSMantleComponent_eventServer_MantleStart_Parms
	{
		float MantleHeight;
		FALSComponentAndTransform MantleLedgeWS;
		EALSMantleType MantleType;
	};
	static FName NAME_UALSMantleComponent_GetMantleAsset = FName(TEXT("GetMantleAsset"));
	FALSMantleAsset UALSMantleComponent::GetMantleAsset(EALSMantleType MantleType, EALSOverlayState CurrentOverlayState)
	{
		ALSMantleComponent_eventGetMantleAsset_Parms Parms;
		Parms.MantleType=MantleType;
		Parms.CurrentOverlayState=CurrentOverlayState;
		ProcessEvent(FindFunctionChecked(NAME_UALSMantleComponent_GetMantleAsset),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UALSMantleComponent_Multicast_MantleStart = FName(TEXT("Multicast_MantleStart"));
	void UALSMantleComponent::Multicast_MantleStart(float MantleHeight, FALSComponentAndTransform const& MantleLedgeWS, EALSMantleType MantleType)
	{
		ALSMantleComponent_eventMulticast_MantleStart_Parms Parms;
		Parms.MantleHeight=MantleHeight;
		Parms.MantleLedgeWS=MantleLedgeWS;
		Parms.MantleType=MantleType;
		ProcessEvent(FindFunctionChecked(NAME_UALSMantleComponent_Multicast_MantleStart),&Parms);
	}
	static FName NAME_UALSMantleComponent_Server_MantleStart = FName(TEXT("Server_MantleStart"));
	void UALSMantleComponent::Server_MantleStart(float MantleHeight, FALSComponentAndTransform const& MantleLedgeWS, EALSMantleType MantleType)
	{
		ALSMantleComponent_eventServer_MantleStart_Parms Parms;
		Parms.MantleHeight=MantleHeight;
		Parms.MantleLedgeWS=MantleLedgeWS;
		Parms.MantleType=MantleType;
		ProcessEvent(FindFunctionChecked(NAME_UALSMantleComponent_Server_MantleStart),&Parms);
	}
	void UALSMantleComponent::StaticRegisterNativesUALSMantleComponent()
	{
		UClass* Class = UALSMantleComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MantleCheck", &UALSMantleComponent::execMantleCheck },
			{ "MantleEnd", &UALSMantleComponent::execMantleEnd },
			{ "MantleStart", &UALSMantleComponent::execMantleStart },
			{ "MantleUpdate", &UALSMantleComponent::execMantleUpdate },
			{ "Multicast_MantleStart", &UALSMantleComponent::execMulticast_MantleStart },
			{ "OnOwnerJumpInput", &UALSMantleComponent::execOnOwnerJumpInput },
			{ "OnOwnerRagdollStateChanged", &UALSMantleComponent::execOnOwnerRagdollStateChanged },
			{ "Server_MantleStart", &UALSMantleComponent::execServer_MantleStart },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UALSMantleComponent_GetMantleAsset_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_MantleType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MantleType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentOverlayState_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentOverlayState;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UALSMantleComponent_GetMantleAsset_Statics::NewProp_MantleType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UALSMantleComponent_GetMantleAsset_Statics::NewProp_MantleType = { "MantleType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSMantleComponent_eventGetMantleAsset_Parms, MantleType), Z_Construct_UEnum_ALSV4_CPP_EALSMantleType, METADATA_PARAMS(0, nullptr) }; // 1122269844
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UALSMantleComponent_GetMantleAsset_Statics::NewProp_CurrentOverlayState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UALSMantleComponent_GetMantleAsset_Statics::NewProp_CurrentOverlayState = { "CurrentOverlayState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSMantleComponent_eventGetMantleAsset_Parms, CurrentOverlayState), Z_Construct_UEnum_ALSV4_CPP_EALSOverlayState, METADATA_PARAMS(0, nullptr) }; // 3560812144
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UALSMantleComponent_GetMantleAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSMantleComponent_eventGetMantleAsset_Parms, ReturnValue), Z_Construct_UScriptStruct_FALSMantleAsset, METADATA_PARAMS(0, nullptr) }; // 3343763034
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSMantleComponent_GetMantleAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSMantleComponent_GetMantleAsset_Statics::NewProp_MantleType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSMantleComponent_GetMantleAsset_Statics::NewProp_MantleType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSMantleComponent_GetMantleAsset_Statics::NewProp_CurrentOverlayState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSMantleComponent_GetMantleAsset_Statics::NewProp_CurrentOverlayState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSMantleComponent_GetMantleAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSMantleComponent_GetMantleAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Mantle System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Implement on BP to get correct mantle parameter set according to character state */" },
#endif
		{ "ModuleRelativePath", "Public/Components/ALSMantleComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implement on BP to get correct mantle parameter set according to character state" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSMantleComponent_GetMantleAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSMantleComponent, nullptr, "GetMantleAsset", nullptr, nullptr, Z_Construct_UFunction_UALSMantleComponent_GetMantleAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSMantleComponent_GetMantleAsset_Statics::PropPointers), sizeof(ALSMantleComponent_eventGetMantleAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSMantleComponent_GetMantleAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSMantleComponent_GetMantleAsset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSMantleComponent_GetMantleAsset_Statics::PropPointers) < 2048);
	static_assert(sizeof(ALSMantleComponent_eventGetMantleAsset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UALSMantleComponent_GetMantleAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSMantleComponent_GetMantleAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSMantleComponent_MantleCheck_Statics
	{
		struct ALSMantleComponent_eventMantleCheck_Parms
		{
			FALSMantleTraceSettings TraceSettings;
			TEnumAsByte<EDrawDebugTrace::Type> DebugType;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TraceSettings;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DebugType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSMantleComponent_MantleCheck_Statics::NewProp_TraceSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UALSMantleComponent_MantleCheck_Statics::NewProp_TraceSettings = { "TraceSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSMantleComponent_eventMantleCheck_Parms, TraceSettings), Z_Construct_UScriptStruct_FALSMantleTraceSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSMantleComponent_MantleCheck_Statics::NewProp_TraceSettings_MetaData), Z_Construct_UFunction_UALSMantleComponent_MantleCheck_Statics::NewProp_TraceSettings_MetaData) }; // 2225761018
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UALSMantleComponent_MantleCheck_Statics::NewProp_DebugType = { "DebugType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSMantleComponent_eventMantleCheck_Parms, DebugType), Z_Construct_UEnum_Engine_EDrawDebugTrace, METADATA_PARAMS(0, nullptr) }; // 739760662
	void Z_Construct_UFunction_UALSMantleComponent_MantleCheck_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ALSMantleComponent_eventMantleCheck_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UALSMantleComponent_MantleCheck_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALSMantleComponent_eventMantleCheck_Parms), &Z_Construct_UFunction_UALSMantleComponent_MantleCheck_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSMantleComponent_MantleCheck_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSMantleComponent_MantleCheck_Statics::NewProp_TraceSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSMantleComponent_MantleCheck_Statics::NewProp_DebugType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSMantleComponent_MantleCheck_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSMantleComponent_MantleCheck_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Mantle System" },
		{ "ModuleRelativePath", "Public/Components/ALSMantleComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSMantleComponent_MantleCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSMantleComponent, nullptr, "MantleCheck", nullptr, nullptr, Z_Construct_UFunction_UALSMantleComponent_MantleCheck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSMantleComponent_MantleCheck_Statics::PropPointers), sizeof(Z_Construct_UFunction_UALSMantleComponent_MantleCheck_Statics::ALSMantleComponent_eventMantleCheck_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSMantleComponent_MantleCheck_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSMantleComponent_MantleCheck_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSMantleComponent_MantleCheck_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UALSMantleComponent_MantleCheck_Statics::ALSMantleComponent_eventMantleCheck_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UALSMantleComponent_MantleCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSMantleComponent_MantleCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSMantleComponent_MantleEnd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSMantleComponent_MantleEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Mantle System" },
		{ "ModuleRelativePath", "Public/Components/ALSMantleComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSMantleComponent_MantleEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSMantleComponent, nullptr, "MantleEnd", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSMantleComponent_MantleEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSMantleComponent_MantleEnd_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UALSMantleComponent_MantleEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSMantleComponent_MantleEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSMantleComponent_MantleStart_Statics
	{
		struct ALSMantleComponent_eventMantleStart_Parms
		{
			float MantleHeight;
			FALSComponentAndTransform MantleLedgeWS;
			EALSMantleType MantleType;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MantleHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MantleLedgeWS_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MantleLedgeWS;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MantleType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MantleType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UALSMantleComponent_MantleStart_Statics::NewProp_MantleHeight = { "MantleHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSMantleComponent_eventMantleStart_Parms, MantleHeight), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSMantleComponent_MantleStart_Statics::NewProp_MantleLedgeWS_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UALSMantleComponent_MantleStart_Statics::NewProp_MantleLedgeWS = { "MantleLedgeWS", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSMantleComponent_eventMantleStart_Parms, MantleLedgeWS), Z_Construct_UScriptStruct_FALSComponentAndTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSMantleComponent_MantleStart_Statics::NewProp_MantleLedgeWS_MetaData), Z_Construct_UFunction_UALSMantleComponent_MantleStart_Statics::NewProp_MantleLedgeWS_MetaData) }; // 2936654904
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UALSMantleComponent_MantleStart_Statics::NewProp_MantleType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UALSMantleComponent_MantleStart_Statics::NewProp_MantleType = { "MantleType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSMantleComponent_eventMantleStart_Parms, MantleType), Z_Construct_UEnum_ALSV4_CPP_EALSMantleType, METADATA_PARAMS(0, nullptr) }; // 1122269844
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSMantleComponent_MantleStart_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSMantleComponent_MantleStart_Statics::NewProp_MantleHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSMantleComponent_MantleStart_Statics::NewProp_MantleLedgeWS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSMantleComponent_MantleStart_Statics::NewProp_MantleType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSMantleComponent_MantleStart_Statics::NewProp_MantleType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSMantleComponent_MantleStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Mantle System" },
		{ "ModuleRelativePath", "Public/Components/ALSMantleComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSMantleComponent_MantleStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSMantleComponent, nullptr, "MantleStart", nullptr, nullptr, Z_Construct_UFunction_UALSMantleComponent_MantleStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSMantleComponent_MantleStart_Statics::PropPointers), sizeof(Z_Construct_UFunction_UALSMantleComponent_MantleStart_Statics::ALSMantleComponent_eventMantleStart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSMantleComponent_MantleStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSMantleComponent_MantleStart_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSMantleComponent_MantleStart_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UALSMantleComponent_MantleStart_Statics::ALSMantleComponent_eventMantleStart_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UALSMantleComponent_MantleStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSMantleComponent_MantleStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSMantleComponent_MantleUpdate_Statics
	{
		struct ALSMantleComponent_eventMantleUpdate_Parms
		{
			float BlendIn;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendIn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UALSMantleComponent_MantleUpdate_Statics::NewProp_BlendIn = { "BlendIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSMantleComponent_eventMantleUpdate_Parms, BlendIn), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSMantleComponent_MantleUpdate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSMantleComponent_MantleUpdate_Statics::NewProp_BlendIn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSMantleComponent_MantleUpdate_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Mantle System" },
		{ "ModuleRelativePath", "Public/Components/ALSMantleComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSMantleComponent_MantleUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSMantleComponent, nullptr, "MantleUpdate", nullptr, nullptr, Z_Construct_UFunction_UALSMantleComponent_MantleUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSMantleComponent_MantleUpdate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UALSMantleComponent_MantleUpdate_Statics::ALSMantleComponent_eventMantleUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSMantleComponent_MantleUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSMantleComponent_MantleUpdate_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSMantleComponent_MantleUpdate_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UALSMantleComponent_MantleUpdate_Statics::ALSMantleComponent_eventMantleUpdate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UALSMantleComponent_MantleUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSMantleComponent_MantleUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSMantleComponent_Multicast_MantleStart_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MantleHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MantleLedgeWS_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MantleLedgeWS;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MantleType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MantleType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UALSMantleComponent_Multicast_MantleStart_Statics::NewProp_MantleHeight = { "MantleHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSMantleComponent_eventMulticast_MantleStart_Parms, MantleHeight), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSMantleComponent_Multicast_MantleStart_Statics::NewProp_MantleLedgeWS_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UALSMantleComponent_Multicast_MantleStart_Statics::NewProp_MantleLedgeWS = { "MantleLedgeWS", nullptr, (EPropertyFlags)0x0010008008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSMantleComponent_eventMulticast_MantleStart_Parms, MantleLedgeWS), Z_Construct_UScriptStruct_FALSComponentAndTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSMantleComponent_Multicast_MantleStart_Statics::NewProp_MantleLedgeWS_MetaData), Z_Construct_UFunction_UALSMantleComponent_Multicast_MantleStart_Statics::NewProp_MantleLedgeWS_MetaData) }; // 2936654904
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UALSMantleComponent_Multicast_MantleStart_Statics::NewProp_MantleType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UALSMantleComponent_Multicast_MantleStart_Statics::NewProp_MantleType = { "MantleType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSMantleComponent_eventMulticast_MantleStart_Parms, MantleType), Z_Construct_UEnum_ALSV4_CPP_EALSMantleType, METADATA_PARAMS(0, nullptr) }; // 1122269844
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSMantleComponent_Multicast_MantleStart_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSMantleComponent_Multicast_MantleStart_Statics::NewProp_MantleHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSMantleComponent_Multicast_MantleStart_Statics::NewProp_MantleLedgeWS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSMantleComponent_Multicast_MantleStart_Statics::NewProp_MantleType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSMantleComponent_Multicast_MantleStart_Statics::NewProp_MantleType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSMantleComponent_Multicast_MantleStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Mantle System" },
		{ "ModuleRelativePath", "Public/Components/ALSMantleComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSMantleComponent_Multicast_MantleStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSMantleComponent, nullptr, "Multicast_MantleStart", nullptr, nullptr, Z_Construct_UFunction_UALSMantleComponent_Multicast_MantleStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSMantleComponent_Multicast_MantleStart_Statics::PropPointers), sizeof(ALSMantleComponent_eventMulticast_MantleStart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSMantleComponent_Multicast_MantleStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSMantleComponent_Multicast_MantleStart_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSMantleComponent_Multicast_MantleStart_Statics::PropPointers) < 2048);
	static_assert(sizeof(ALSMantleComponent_eventMulticast_MantleStart_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UALSMantleComponent_Multicast_MantleStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSMantleComponent_Multicast_MantleStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSMantleComponent_OnOwnerJumpInput_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSMantleComponent_OnOwnerJumpInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Mantle System" },
		{ "ModuleRelativePath", "Public/Components/ALSMantleComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSMantleComponent_OnOwnerJumpInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSMantleComponent, nullptr, "OnOwnerJumpInput", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSMantleComponent_OnOwnerJumpInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSMantleComponent_OnOwnerJumpInput_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UALSMantleComponent_OnOwnerJumpInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSMantleComponent_OnOwnerJumpInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSMantleComponent_OnOwnerRagdollStateChanged_Statics
	{
		struct ALSMantleComponent_eventOnOwnerRagdollStateChanged_Parms
		{
			bool bRagdollState;
		};
		static void NewProp_bRagdollState_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRagdollState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UALSMantleComponent_OnOwnerRagdollStateChanged_Statics::NewProp_bRagdollState_SetBit(void* Obj)
	{
		((ALSMantleComponent_eventOnOwnerRagdollStateChanged_Parms*)Obj)->bRagdollState = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UALSMantleComponent_OnOwnerRagdollStateChanged_Statics::NewProp_bRagdollState = { "bRagdollState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALSMantleComponent_eventOnOwnerRagdollStateChanged_Parms), &Z_Construct_UFunction_UALSMantleComponent_OnOwnerRagdollStateChanged_Statics::NewProp_bRagdollState_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSMantleComponent_OnOwnerRagdollStateChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSMantleComponent_OnOwnerRagdollStateChanged_Statics::NewProp_bRagdollState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSMantleComponent_OnOwnerRagdollStateChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Mantle System" },
		{ "ModuleRelativePath", "Public/Components/ALSMantleComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSMantleComponent_OnOwnerRagdollStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSMantleComponent, nullptr, "OnOwnerRagdollStateChanged", nullptr, nullptr, Z_Construct_UFunction_UALSMantleComponent_OnOwnerRagdollStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSMantleComponent_OnOwnerRagdollStateChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UALSMantleComponent_OnOwnerRagdollStateChanged_Statics::ALSMantleComponent_eventOnOwnerRagdollStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSMantleComponent_OnOwnerRagdollStateChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSMantleComponent_OnOwnerRagdollStateChanged_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSMantleComponent_OnOwnerRagdollStateChanged_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UALSMantleComponent_OnOwnerRagdollStateChanged_Statics::ALSMantleComponent_eventOnOwnerRagdollStateChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UALSMantleComponent_OnOwnerRagdollStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSMantleComponent_OnOwnerRagdollStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSMantleComponent_Server_MantleStart_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MantleHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MantleLedgeWS_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MantleLedgeWS;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MantleType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MantleType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UALSMantleComponent_Server_MantleStart_Statics::NewProp_MantleHeight = { "MantleHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSMantleComponent_eventServer_MantleStart_Parms, MantleHeight), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSMantleComponent_Server_MantleStart_Statics::NewProp_MantleLedgeWS_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UALSMantleComponent_Server_MantleStart_Statics::NewProp_MantleLedgeWS = { "MantleLedgeWS", nullptr, (EPropertyFlags)0x0010008008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSMantleComponent_eventServer_MantleStart_Parms, MantleLedgeWS), Z_Construct_UScriptStruct_FALSComponentAndTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSMantleComponent_Server_MantleStart_Statics::NewProp_MantleLedgeWS_MetaData), Z_Construct_UFunction_UALSMantleComponent_Server_MantleStart_Statics::NewProp_MantleLedgeWS_MetaData) }; // 2936654904
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UALSMantleComponent_Server_MantleStart_Statics::NewProp_MantleType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UALSMantleComponent_Server_MantleStart_Statics::NewProp_MantleType = { "MantleType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSMantleComponent_eventServer_MantleStart_Parms, MantleType), Z_Construct_UEnum_ALSV4_CPP_EALSMantleType, METADATA_PARAMS(0, nullptr) }; // 1122269844
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSMantleComponent_Server_MantleStart_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSMantleComponent_Server_MantleStart_Statics::NewProp_MantleHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSMantleComponent_Server_MantleStart_Statics::NewProp_MantleLedgeWS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSMantleComponent_Server_MantleStart_Statics::NewProp_MantleType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSMantleComponent_Server_MantleStart_Statics::NewProp_MantleType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSMantleComponent_Server_MantleStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Mantle System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Mantling*/" },
#endif
		{ "ModuleRelativePath", "Public/Components/ALSMantleComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mantling" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSMantleComponent_Server_MantleStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSMantleComponent, nullptr, "Server_MantleStart", nullptr, nullptr, Z_Construct_UFunction_UALSMantleComponent_Server_MantleStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSMantleComponent_Server_MantleStart_Statics::PropPointers), sizeof(ALSMantleComponent_eventServer_MantleStart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSMantleComponent_Server_MantleStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSMantleComponent_Server_MantleStart_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSMantleComponent_Server_MantleStart_Statics::PropPointers) < 2048);
	static_assert(sizeof(ALSMantleComponent_eventServer_MantleStart_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UALSMantleComponent_Server_MantleStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSMantleComponent_Server_MantleStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UALSMantleComponent);
	UClass* Z_Construct_UClass_UALSMantleComponent_NoRegister()
	{
		return UALSMantleComponent::StaticClass();
	}
	struct Z_Construct_UClass_UALSMantleComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MantleTimeline_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MantleTimeline;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundedTraceSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroundedTraceSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutomaticTraceSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AutomaticTraceSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FallingTraceSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FallingTraceSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MantleTimelineCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MantleTimelineCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MantleObjectDetectionProfile_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MantleObjectDetectionProfile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WalkableSurfaceDetectionChannel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_WalkableSurfaceDetectionChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MantleParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MantleParams;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MantleLedgeLS_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MantleLedgeLS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MantleTarget_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MantleTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MantleActualStartOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MantleActualStartOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MantleAnimatedStartOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MantleAnimatedStartOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AcceptableVelocityWhileMantling_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AcceptableVelocityWhileMantling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OwnerCharacter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ALSDebugComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ALSDebugComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UALSMantleComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ALSV4_CPP,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UALSMantleComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UALSMantleComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UALSMantleComponent_GetMantleAsset, "GetMantleAsset" }, // 463737189
		{ &Z_Construct_UFunction_UALSMantleComponent_MantleCheck, "MantleCheck" }, // 1230040180
		{ &Z_Construct_UFunction_UALSMantleComponent_MantleEnd, "MantleEnd" }, // 594890606
		{ &Z_Construct_UFunction_UALSMantleComponent_MantleStart, "MantleStart" }, // 2086640534
		{ &Z_Construct_UFunction_UALSMantleComponent_MantleUpdate, "MantleUpdate" }, // 994811076
		{ &Z_Construct_UFunction_UALSMantleComponent_Multicast_MantleStart, "Multicast_MantleStart" }, // 1194968826
		{ &Z_Construct_UFunction_UALSMantleComponent_OnOwnerJumpInput, "OnOwnerJumpInput" }, // 31624724
		{ &Z_Construct_UFunction_UALSMantleComponent_OnOwnerRagdollStateChanged, "OnOwnerRagdollStateChanged" }, // 803176829
		{ &Z_Construct_UFunction_UALSMantleComponent_Server_MantleStart, "Server_MantleStart" }, // 3129431096
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UALSMantleComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSMantleComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Components/ALSMantleComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/ALSMantleComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSMantleComponent_Statics::NewProp_MantleTimeline_MetaData[] = {
		{ "Category", "ALS|Mantle System" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/ALSMantleComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UALSMantleComponent_Statics::NewProp_MantleTimeline = { "MantleTimeline", nullptr, (EPropertyFlags)0x002408000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSMantleComponent, MantleTimeline), Z_Construct_UClass_UTimelineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSMantleComponent_Statics::NewProp_MantleTimeline_MetaData), Z_Construct_UClass_UALSMantleComponent_Statics::NewProp_MantleTimeline_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSMantleComponent_Statics::NewProp_GroundedTraceSettings_MetaData[] = {
		{ "Category", "ALS|Mantle System" },
		{ "ModuleRelativePath", "Public/Components/ALSMantleComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UALSMantleComponent_Statics::NewProp_GroundedTraceSettings = { "GroundedTraceSettings", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSMantleComponent, GroundedTraceSettings), Z_Construct_UScriptStruct_FALSMantleTraceSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSMantleComponent_Statics::NewProp_GroundedTraceSettings_MetaData), Z_Construct_UClass_UALSMantleComponent_Statics::NewProp_GroundedTraceSettings_MetaData) }; // 2225761018
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSMantleComponent_Statics::NewProp_AutomaticTraceSettings_MetaData[] = {
		{ "Category", "ALS|Mantle System" },
		{ "ModuleRelativePath", "Public/Components/ALSMantleComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UALSMantleComponent_Statics::NewProp_AutomaticTraceSettings = { "AutomaticTraceSettings", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSMantleComponent, AutomaticTraceSettings), Z_Construct_UScriptStruct_FALSMantleTraceSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSMantleComponent_Statics::NewProp_AutomaticTraceSettings_MetaData), Z_Construct_UClass_UALSMantleComponent_Statics::NewProp_AutomaticTraceSettings_MetaData) }; // 2225761018
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSMantleComponent_Statics::NewProp_FallingTraceSettings_MetaData[] = {
		{ "Category", "ALS|Mantle System" },
		{ "ModuleRelativePath", "Public/Components/ALSMantleComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UALSMantleComponent_Statics::NewProp_FallingTraceSettings = { "FallingTraceSettings", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSMantleComponent, FallingTraceSettings), Z_Construct_UScriptStruct_FALSMantleTraceSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSMantleComponent_Statics::NewProp_FallingTraceSettings_MetaData), Z_Construct_UClass_UALSMantleComponent_Statics::NewProp_FallingTraceSettings_MetaData) }; // 2225761018
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSMantleComponent_Statics::NewProp_MantleTimelineCurve_MetaData[] = {
		{ "Category", "ALS|Mantle System" },
		{ "ModuleRelativePath", "Public/Components/ALSMantleComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UALSMantleComponent_Statics::NewProp_MantleTimelineCurve = { "MantleTimelineCurve", nullptr, (EPropertyFlags)0x0024080000010005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSMantleComponent, MantleTimelineCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSMantleComponent_Statics::NewProp_MantleTimelineCurve_MetaData), Z_Construct_UClass_UALSMantleComponent_Statics::NewProp_MantleTimelineCurve_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSMantleComponent_Statics::NewProp_MantleObjectDetectionProfile_MetaData[] = {
		{ "Category", "ALS|Mantle System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Profile to use to detect objects we allow mantling */" },
#endif
		{ "ModuleRelativePath", "Public/Components/ALSMantleComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Profile to use to detect objects we allow mantling" },
#endif
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UALSMantleComponent_Statics::NewProp_MantleObjectDetectionProfile = { "MantleObjectDetectionProfile", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSMantleComponent, MantleObjectDetectionProfile), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSMantleComponent_Statics::NewProp_MantleObjectDetectionProfile_MetaData), Z_Construct_UClass_UALSMantleComponent_Statics::NewProp_MantleObjectDetectionProfile_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSMantleComponent_Statics::NewProp_WalkableSurfaceDetectionChannel_MetaData[] = {
		{ "Category", "ALS|Mantle System" },
		{ "ModuleRelativePath", "Public/Components/ALSMantleComponent.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UALSMantleComponent_Statics::NewProp_WalkableSurfaceDetectionChannel = { "WalkableSurfaceDetectionChannel", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSMantleComponent, WalkableSurfaceDetectionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSMantleComponent_Statics::NewProp_WalkableSurfaceDetectionChannel_MetaData), Z_Construct_UClass_UALSMantleComponent_Statics::NewProp_WalkableSurfaceDetectionChannel_MetaData) }; // 1822723181
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSMantleComponent_Statics::NewProp_MantleParams_MetaData[] = {
		{ "Category", "ALS|Mantle System" },
		{ "ModuleRelativePath", "Public/Components/ALSMantleComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UALSMantleComponent_Statics::NewProp_MantleParams = { "MantleParams", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSMantleComponent, MantleParams), Z_Construct_UScriptStruct_FALSMantleParams, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSMantleComponent_Statics::NewProp_MantleParams_MetaData), Z_Construct_UClass_UALSMantleComponent_Statics::NewProp_MantleParams_MetaData) }; // 2726004196
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSMantleComponent_Statics::NewProp_MantleLedgeLS_MetaData[] = {
		{ "Category", "ALS|Mantle System" },
		{ "ModuleRelativePath", "Public/Components/ALSMantleComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UALSMantleComponent_Statics::NewProp_MantleLedgeLS = { "MantleLedgeLS", nullptr, (EPropertyFlags)0x0020088000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSMantleComponent, MantleLedgeLS), Z_Construct_UScriptStruct_FALSComponentAndTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSMantleComponent_Statics::NewProp_MantleLedgeLS_MetaData), Z_Construct_UClass_UALSMantleComponent_Statics::NewProp_MantleLedgeLS_MetaData) }; // 2936654904
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSMantleComponent_Statics::NewProp_MantleTarget_MetaData[] = {
		{ "Category", "ALS|Mantle System" },
		{ "ModuleRelativePath", "Public/Components/ALSMantleComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UALSMantleComponent_Statics::NewProp_MantleTarget = { "MantleTarget", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSMantleComponent, MantleTarget), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSMantleComponent_Statics::NewProp_MantleTarget_MetaData), Z_Construct_UClass_UALSMantleComponent_Statics::NewProp_MantleTarget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSMantleComponent_Statics::NewProp_MantleActualStartOffset_MetaData[] = {
		{ "Category", "ALS|Mantle System" },
		{ "ModuleRelativePath", "Public/Components/ALSMantleComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UALSMantleComponent_Statics::NewProp_MantleActualStartOffset = { "MantleActualStartOffset", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSMantleComponent, MantleActualStartOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSMantleComponent_Statics::NewProp_MantleActualStartOffset_MetaData), Z_Construct_UClass_UALSMantleComponent_Statics::NewProp_MantleActualStartOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSMantleComponent_Statics::NewProp_MantleAnimatedStartOffset_MetaData[] = {
		{ "Category", "ALS|Mantle System" },
		{ "ModuleRelativePath", "Public/Components/ALSMantleComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UALSMantleComponent_Statics::NewProp_MantleAnimatedStartOffset = { "MantleAnimatedStartOffset", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSMantleComponent, MantleAnimatedStartOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSMantleComponent_Statics::NewProp_MantleAnimatedStartOffset_MetaData), Z_Construct_UClass_UALSMantleComponent_Statics::NewProp_MantleAnimatedStartOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSMantleComponent_Statics::NewProp_AcceptableVelocityWhileMantling_MetaData[] = {
		{ "Category", "ALS|Mantle System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If a dynamic object has a velocity bigger than this value, do not start mantle */" },
#endif
		{ "ModuleRelativePath", "Public/Components/ALSMantleComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If a dynamic object has a velocity bigger than this value, do not start mantle" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UALSMantleComponent_Statics::NewProp_AcceptableVelocityWhileMantling = { "AcceptableVelocityWhileMantling", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSMantleComponent, AcceptableVelocityWhileMantling), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSMantleComponent_Statics::NewProp_AcceptableVelocityWhileMantling_MetaData), Z_Construct_UClass_UALSMantleComponent_Statics::NewProp_AcceptableVelocityWhileMantling_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSMantleComponent_Statics::NewProp_OwnerCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/ALSMantleComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UALSMantleComponent_Statics::NewProp_OwnerCharacter = { "OwnerCharacter", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSMantleComponent, OwnerCharacter), Z_Construct_UClass_AALSBaseCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSMantleComponent_Statics::NewProp_OwnerCharacter_MetaData), Z_Construct_UClass_UALSMantleComponent_Statics::NewProp_OwnerCharacter_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSMantleComponent_Statics::NewProp_ALSDebugComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/ALSMantleComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UALSMantleComponent_Statics::NewProp_ALSDebugComponent = { "ALSDebugComponent", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSMantleComponent, ALSDebugComponent), Z_Construct_UClass_UALSDebugComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSMantleComponent_Statics::NewProp_ALSDebugComponent_MetaData), Z_Construct_UClass_UALSMantleComponent_Statics::NewProp_ALSDebugComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UALSMantleComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSMantleComponent_Statics::NewProp_MantleTimeline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSMantleComponent_Statics::NewProp_GroundedTraceSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSMantleComponent_Statics::NewProp_AutomaticTraceSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSMantleComponent_Statics::NewProp_FallingTraceSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSMantleComponent_Statics::NewProp_MantleTimelineCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSMantleComponent_Statics::NewProp_MantleObjectDetectionProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSMantleComponent_Statics::NewProp_WalkableSurfaceDetectionChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSMantleComponent_Statics::NewProp_MantleParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSMantleComponent_Statics::NewProp_MantleLedgeLS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSMantleComponent_Statics::NewProp_MantleTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSMantleComponent_Statics::NewProp_MantleActualStartOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSMantleComponent_Statics::NewProp_MantleAnimatedStartOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSMantleComponent_Statics::NewProp_AcceptableVelocityWhileMantling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSMantleComponent_Statics::NewProp_OwnerCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSMantleComponent_Statics::NewProp_ALSDebugComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UALSMantleComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UALSMantleComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UALSMantleComponent_Statics::ClassParams = {
		&UALSMantleComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UALSMantleComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UALSMantleComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSMantleComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UALSMantleComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UALSMantleComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UALSMantleComponent()
	{
		if (!Z_Registration_Info_UClass_UALSMantleComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UALSMantleComponent.OuterSingleton, Z_Construct_UClass_UALSMantleComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UALSMantleComponent.OuterSingleton;
	}
	template<> ALSV4_CPP_API UClass* StaticClass<UALSMantleComponent>()
	{
		return UALSMantleComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UALSMantleComponent);
	UALSMantleComponent::~UALSMantleComponent() {}
	struct Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_hitman_stealth_recreate_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Components_ALSMantleComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_hitman_stealth_recreate_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Components_ALSMantleComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UALSMantleComponent, UALSMantleComponent::StaticClass, TEXT("UALSMantleComponent"), &Z_Registration_Info_UClass_UALSMantleComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UALSMantleComponent), 1662668180U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_hitman_stealth_recreate_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Components_ALSMantleComponent_h_548781414(TEXT("/Script/ALSV4_CPP"),
		Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_hitman_stealth_recreate_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Components_ALSMantleComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_hitman_stealth_recreate_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Components_ALSMantleComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
