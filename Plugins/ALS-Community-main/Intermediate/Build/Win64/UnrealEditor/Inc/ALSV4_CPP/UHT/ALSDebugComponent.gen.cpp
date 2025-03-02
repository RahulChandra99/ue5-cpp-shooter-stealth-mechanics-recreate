// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALSV4_CPP/Public/Components/ALSDebugComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeALSDebugComponent() {}
// Cross Module References
	ALSV4_CPP_API UClass* Z_Construct_UClass_AALSBaseCharacter_NoRegister();
	ALSV4_CPP_API UClass* Z_Construct_UClass_UALSDebugComponent();
	ALSV4_CPP_API UClass* Z_Construct_UClass_UALSDebugComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ALSV4_CPP();
// End Cross Module References
	DEFINE_FUNCTION(UALSDebugComponent::execFocusedDebugCharacterCycle)
	{
		P_GET_UBOOL(Z_Param_bValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FocusedDebugCharacterCycle(Z_Param_bValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSDebugComponent::execGetShowLayerColors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetShowLayerColors();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSDebugComponent::execGetShowDebugShapes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetShowDebugShapes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSDebugComponent::execGetShowTraces)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetShowTraces();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSDebugComponent::execGetDebugView)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetDebugView();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSDebugComponent::execToggleCharacterInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleCharacterInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSDebugComponent::execToggleLayerColors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleLayerColors();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSDebugComponent::execToggleDebugShapes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleDebugShapes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSDebugComponent::execToggleTraces)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleTraces();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSDebugComponent::execToggleDebugMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleDebugMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSDebugComponent::execOverlayMenuCycle)
	{
		P_GET_UBOOL(Z_Param_bValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OverlayMenuCycle_Implementation(Z_Param_bValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSDebugComponent::execOpenOverlayMenu)
	{
		P_GET_UBOOL(Z_Param_bValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OpenOverlayMenu_Implementation(Z_Param_bValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSDebugComponent::execToggleDebugView)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleDebugView();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSDebugComponent::execToggleHud)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleHud();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSDebugComponent::execToggleSlomo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleSlomo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSDebugComponent::execToggleGlobalTimeDilationLocal)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeDilation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleGlobalTimeDilationLocal(Z_Param_TimeDilation);
		P_NATIVE_END;
	}
	struct ALSDebugComponent_eventOnPlayerControllerInitialized_Parms
	{
		APlayerController* Controller;
	};
	struct ALSDebugComponent_eventOpenOverlayMenu_Parms
	{
		bool bValue;
	};
	struct ALSDebugComponent_eventOverlayMenuCycle_Parms
	{
		bool bValue;
	};
	static FName NAME_UALSDebugComponent_DrawDebugSpheres = FName(TEXT("DrawDebugSpheres"));
	void UALSDebugComponent::DrawDebugSpheres()
	{
		ProcessEvent(FindFunctionChecked(NAME_UALSDebugComponent_DrawDebugSpheres),NULL);
	}
	static FName NAME_UALSDebugComponent_OnPlayerControllerInitialized = FName(TEXT("OnPlayerControllerInitialized"));
	void UALSDebugComponent::OnPlayerControllerInitialized(APlayerController* Controller)
	{
		ALSDebugComponent_eventOnPlayerControllerInitialized_Parms Parms;
		Parms.Controller=Controller;
		ProcessEvent(FindFunctionChecked(NAME_UALSDebugComponent_OnPlayerControllerInitialized),&Parms);
	}
	static FName NAME_UALSDebugComponent_OpenOverlayMenu = FName(TEXT("OpenOverlayMenu"));
	void UALSDebugComponent::OpenOverlayMenu(bool bValue)
	{
		ALSDebugComponent_eventOpenOverlayMenu_Parms Parms;
		Parms.bValue=bValue ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UALSDebugComponent_OpenOverlayMenu),&Parms);
	}
	static FName NAME_UALSDebugComponent_OverlayMenuCycle = FName(TEXT("OverlayMenuCycle"));
	void UALSDebugComponent::OverlayMenuCycle(bool bValue)
	{
		ALSDebugComponent_eventOverlayMenuCycle_Parms Parms;
		Parms.bValue=bValue ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UALSDebugComponent_OverlayMenuCycle),&Parms);
	}
	static FName NAME_UALSDebugComponent_SetDynamicMaterials = FName(TEXT("SetDynamicMaterials"));
	void UALSDebugComponent::SetDynamicMaterials()
	{
		ProcessEvent(FindFunctionChecked(NAME_UALSDebugComponent_SetDynamicMaterials),NULL);
	}
	static FName NAME_UALSDebugComponent_SetResetColors = FName(TEXT("SetResetColors"));
	void UALSDebugComponent::SetResetColors()
	{
		ProcessEvent(FindFunctionChecked(NAME_UALSDebugComponent_SetResetColors),NULL);
	}
	static FName NAME_UALSDebugComponent_UpdateColoringSystem = FName(TEXT("UpdateColoringSystem"));
	void UALSDebugComponent::UpdateColoringSystem()
	{
		ProcessEvent(FindFunctionChecked(NAME_UALSDebugComponent_UpdateColoringSystem),NULL);
	}
	void UALSDebugComponent::StaticRegisterNativesUALSDebugComponent()
	{
		UClass* Class = UALSDebugComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FocusedDebugCharacterCycle", &UALSDebugComponent::execFocusedDebugCharacterCycle },
			{ "GetDebugView", &UALSDebugComponent::execGetDebugView },
			{ "GetShowDebugShapes", &UALSDebugComponent::execGetShowDebugShapes },
			{ "GetShowLayerColors", &UALSDebugComponent::execGetShowLayerColors },
			{ "GetShowTraces", &UALSDebugComponent::execGetShowTraces },
			{ "OpenOverlayMenu", &UALSDebugComponent::execOpenOverlayMenu },
			{ "OverlayMenuCycle", &UALSDebugComponent::execOverlayMenuCycle },
			{ "ToggleCharacterInfo", &UALSDebugComponent::execToggleCharacterInfo },
			{ "ToggleDebugMesh", &UALSDebugComponent::execToggleDebugMesh },
			{ "ToggleDebugShapes", &UALSDebugComponent::execToggleDebugShapes },
			{ "ToggleDebugView", &UALSDebugComponent::execToggleDebugView },
			{ "ToggleGlobalTimeDilationLocal", &UALSDebugComponent::execToggleGlobalTimeDilationLocal },
			{ "ToggleHud", &UALSDebugComponent::execToggleHud },
			{ "ToggleLayerColors", &UALSDebugComponent::execToggleLayerColors },
			{ "ToggleSlomo", &UALSDebugComponent::execToggleSlomo },
			{ "ToggleTraces", &UALSDebugComponent::execToggleTraces },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UALSDebugComponent_DrawDebugSpheres_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSDebugComponent_DrawDebugSpheres_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Implement on BP to draw debug spheres */" },
#endif
		{ "ModuleRelativePath", "Public/Components/ALSDebugComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implement on BP to draw debug spheres" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSDebugComponent_DrawDebugSpheres_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSDebugComponent, nullptr, "DrawDebugSpheres", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSDebugComponent_DrawDebugSpheres_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSDebugComponent_DrawDebugSpheres_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UALSDebugComponent_DrawDebugSpheres()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSDebugComponent_DrawDebugSpheres_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSDebugComponent_FocusedDebugCharacterCycle_Statics
	{
		struct ALSDebugComponent_eventFocusedDebugCharacterCycle_Parms
		{
			bool bValue;
		};
		static void NewProp_bValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UALSDebugComponent_FocusedDebugCharacterCycle_Statics::NewProp_bValue_SetBit(void* Obj)
	{
		((ALSDebugComponent_eventFocusedDebugCharacterCycle_Parms*)Obj)->bValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UALSDebugComponent_FocusedDebugCharacterCycle_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALSDebugComponent_eventFocusedDebugCharacterCycle_Parms), &Z_Construct_UFunction_UALSDebugComponent_FocusedDebugCharacterCycle_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSDebugComponent_FocusedDebugCharacterCycle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSDebugComponent_FocusedDebugCharacterCycle_Statics::NewProp_bValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSDebugComponent_FocusedDebugCharacterCycle_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Debug" },
		{ "ModuleRelativePath", "Public/Components/ALSDebugComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSDebugComponent_FocusedDebugCharacterCycle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSDebugComponent, nullptr, "FocusedDebugCharacterCycle", nullptr, nullptr, Z_Construct_UFunction_UALSDebugComponent_FocusedDebugCharacterCycle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSDebugComponent_FocusedDebugCharacterCycle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UALSDebugComponent_FocusedDebugCharacterCycle_Statics::ALSDebugComponent_eventFocusedDebugCharacterCycle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSDebugComponent_FocusedDebugCharacterCycle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSDebugComponent_FocusedDebugCharacterCycle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSDebugComponent_FocusedDebugCharacterCycle_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UALSDebugComponent_FocusedDebugCharacterCycle_Statics::ALSDebugComponent_eventFocusedDebugCharacterCycle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UALSDebugComponent_FocusedDebugCharacterCycle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSDebugComponent_FocusedDebugCharacterCycle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSDebugComponent_GetDebugView_Statics
	{
		struct ALSDebugComponent_eventGetDebugView_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UALSDebugComponent_GetDebugView_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ALSDebugComponent_eventGetDebugView_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UALSDebugComponent_GetDebugView_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALSDebugComponent_eventGetDebugView_Parms), &Z_Construct_UFunction_UALSDebugComponent_GetDebugView_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSDebugComponent_GetDebugView_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSDebugComponent_GetDebugView_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSDebugComponent_GetDebugView_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Debug" },
		{ "ModuleRelativePath", "Public/Components/ALSDebugComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSDebugComponent_GetDebugView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSDebugComponent, nullptr, "GetDebugView", nullptr, nullptr, Z_Construct_UFunction_UALSDebugComponent_GetDebugView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSDebugComponent_GetDebugView_Statics::PropPointers), sizeof(Z_Construct_UFunction_UALSDebugComponent_GetDebugView_Statics::ALSDebugComponent_eventGetDebugView_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSDebugComponent_GetDebugView_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSDebugComponent_GetDebugView_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSDebugComponent_GetDebugView_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UALSDebugComponent_GetDebugView_Statics::ALSDebugComponent_eventGetDebugView_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UALSDebugComponent_GetDebugView()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSDebugComponent_GetDebugView_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSDebugComponent_GetShowDebugShapes_Statics
	{
		struct ALSDebugComponent_eventGetShowDebugShapes_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UALSDebugComponent_GetShowDebugShapes_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ALSDebugComponent_eventGetShowDebugShapes_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UALSDebugComponent_GetShowDebugShapes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALSDebugComponent_eventGetShowDebugShapes_Parms), &Z_Construct_UFunction_UALSDebugComponent_GetShowDebugShapes_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSDebugComponent_GetShowDebugShapes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSDebugComponent_GetShowDebugShapes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSDebugComponent_GetShowDebugShapes_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Debug" },
		{ "ModuleRelativePath", "Public/Components/ALSDebugComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSDebugComponent_GetShowDebugShapes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSDebugComponent, nullptr, "GetShowDebugShapes", nullptr, nullptr, Z_Construct_UFunction_UALSDebugComponent_GetShowDebugShapes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSDebugComponent_GetShowDebugShapes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UALSDebugComponent_GetShowDebugShapes_Statics::ALSDebugComponent_eventGetShowDebugShapes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSDebugComponent_GetShowDebugShapes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSDebugComponent_GetShowDebugShapes_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSDebugComponent_GetShowDebugShapes_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UALSDebugComponent_GetShowDebugShapes_Statics::ALSDebugComponent_eventGetShowDebugShapes_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UALSDebugComponent_GetShowDebugShapes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSDebugComponent_GetShowDebugShapes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSDebugComponent_GetShowLayerColors_Statics
	{
		struct ALSDebugComponent_eventGetShowLayerColors_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UALSDebugComponent_GetShowLayerColors_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ALSDebugComponent_eventGetShowLayerColors_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UALSDebugComponent_GetShowLayerColors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALSDebugComponent_eventGetShowLayerColors_Parms), &Z_Construct_UFunction_UALSDebugComponent_GetShowLayerColors_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSDebugComponent_GetShowLayerColors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSDebugComponent_GetShowLayerColors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSDebugComponent_GetShowLayerColors_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Debug" },
		{ "ModuleRelativePath", "Public/Components/ALSDebugComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSDebugComponent_GetShowLayerColors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSDebugComponent, nullptr, "GetShowLayerColors", nullptr, nullptr, Z_Construct_UFunction_UALSDebugComponent_GetShowLayerColors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSDebugComponent_GetShowLayerColors_Statics::PropPointers), sizeof(Z_Construct_UFunction_UALSDebugComponent_GetShowLayerColors_Statics::ALSDebugComponent_eventGetShowLayerColors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSDebugComponent_GetShowLayerColors_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSDebugComponent_GetShowLayerColors_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSDebugComponent_GetShowLayerColors_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UALSDebugComponent_GetShowLayerColors_Statics::ALSDebugComponent_eventGetShowLayerColors_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UALSDebugComponent_GetShowLayerColors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSDebugComponent_GetShowLayerColors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSDebugComponent_GetShowTraces_Statics
	{
		struct ALSDebugComponent_eventGetShowTraces_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UALSDebugComponent_GetShowTraces_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ALSDebugComponent_eventGetShowTraces_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UALSDebugComponent_GetShowTraces_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALSDebugComponent_eventGetShowTraces_Parms), &Z_Construct_UFunction_UALSDebugComponent_GetShowTraces_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSDebugComponent_GetShowTraces_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSDebugComponent_GetShowTraces_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSDebugComponent_GetShowTraces_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Debug" },
		{ "ModuleRelativePath", "Public/Components/ALSDebugComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSDebugComponent_GetShowTraces_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSDebugComponent, nullptr, "GetShowTraces", nullptr, nullptr, Z_Construct_UFunction_UALSDebugComponent_GetShowTraces_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSDebugComponent_GetShowTraces_Statics::PropPointers), sizeof(Z_Construct_UFunction_UALSDebugComponent_GetShowTraces_Statics::ALSDebugComponent_eventGetShowTraces_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSDebugComponent_GetShowTraces_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSDebugComponent_GetShowTraces_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSDebugComponent_GetShowTraces_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UALSDebugComponent_GetShowTraces_Statics::ALSDebugComponent_eventGetShowTraces_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UALSDebugComponent_GetShowTraces()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSDebugComponent_GetShowTraces_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSDebugComponent_OnPlayerControllerInitialized_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UALSDebugComponent_OnPlayerControllerInitialized_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSDebugComponent_eventOnPlayerControllerInitialized_Parms, Controller), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSDebugComponent_OnPlayerControllerInitialized_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSDebugComponent_OnPlayerControllerInitialized_Statics::NewProp_Controller,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSDebugComponent_OnPlayerControllerInitialized_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Debug" },
		{ "ModuleRelativePath", "Public/Components/ALSDebugComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSDebugComponent_OnPlayerControllerInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSDebugComponent, nullptr, "OnPlayerControllerInitialized", nullptr, nullptr, Z_Construct_UFunction_UALSDebugComponent_OnPlayerControllerInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSDebugComponent_OnPlayerControllerInitialized_Statics::PropPointers), sizeof(ALSDebugComponent_eventOnPlayerControllerInitialized_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSDebugComponent_OnPlayerControllerInitialized_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSDebugComponent_OnPlayerControllerInitialized_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSDebugComponent_OnPlayerControllerInitialized_Statics::PropPointers) < 2048);
	static_assert(sizeof(ALSDebugComponent_eventOnPlayerControllerInitialized_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UALSDebugComponent_OnPlayerControllerInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSDebugComponent_OnPlayerControllerInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSDebugComponent_OpenOverlayMenu_Statics
	{
		static void NewProp_bValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UALSDebugComponent_OpenOverlayMenu_Statics::NewProp_bValue_SetBit(void* Obj)
	{
		((ALSDebugComponent_eventOpenOverlayMenu_Parms*)Obj)->bValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UALSDebugComponent_OpenOverlayMenu_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALSDebugComponent_eventOpenOverlayMenu_Parms), &Z_Construct_UFunction_UALSDebugComponent_OpenOverlayMenu_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSDebugComponent_OpenOverlayMenu_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSDebugComponent_OpenOverlayMenu_Statics::NewProp_bValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSDebugComponent_OpenOverlayMenu_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Debug" },
		{ "ModuleRelativePath", "Public/Components/ALSDebugComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSDebugComponent_OpenOverlayMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSDebugComponent, nullptr, "OpenOverlayMenu", nullptr, nullptr, Z_Construct_UFunction_UALSDebugComponent_OpenOverlayMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSDebugComponent_OpenOverlayMenu_Statics::PropPointers), sizeof(ALSDebugComponent_eventOpenOverlayMenu_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSDebugComponent_OpenOverlayMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSDebugComponent_OpenOverlayMenu_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSDebugComponent_OpenOverlayMenu_Statics::PropPointers) < 2048);
	static_assert(sizeof(ALSDebugComponent_eventOpenOverlayMenu_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UALSDebugComponent_OpenOverlayMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSDebugComponent_OpenOverlayMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSDebugComponent_OverlayMenuCycle_Statics
	{
		static void NewProp_bValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UALSDebugComponent_OverlayMenuCycle_Statics::NewProp_bValue_SetBit(void* Obj)
	{
		((ALSDebugComponent_eventOverlayMenuCycle_Parms*)Obj)->bValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UALSDebugComponent_OverlayMenuCycle_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALSDebugComponent_eventOverlayMenuCycle_Parms), &Z_Construct_UFunction_UALSDebugComponent_OverlayMenuCycle_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSDebugComponent_OverlayMenuCycle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSDebugComponent_OverlayMenuCycle_Statics::NewProp_bValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSDebugComponent_OverlayMenuCycle_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Debug" },
		{ "ModuleRelativePath", "Public/Components/ALSDebugComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSDebugComponent_OverlayMenuCycle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSDebugComponent, nullptr, "OverlayMenuCycle", nullptr, nullptr, Z_Construct_UFunction_UALSDebugComponent_OverlayMenuCycle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSDebugComponent_OverlayMenuCycle_Statics::PropPointers), sizeof(ALSDebugComponent_eventOverlayMenuCycle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSDebugComponent_OverlayMenuCycle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSDebugComponent_OverlayMenuCycle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSDebugComponent_OverlayMenuCycle_Statics::PropPointers) < 2048);
	static_assert(sizeof(ALSDebugComponent_eventOverlayMenuCycle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UALSDebugComponent_OverlayMenuCycle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSDebugComponent_OverlayMenuCycle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSDebugComponent_SetDynamicMaterials_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSDebugComponent_SetDynamicMaterials_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Implemented on BP to set dynamic color materials for debugging */" },
#endif
		{ "ModuleRelativePath", "Public/Components/ALSDebugComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implemented on BP to set dynamic color materials for debugging" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSDebugComponent_SetDynamicMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSDebugComponent, nullptr, "SetDynamicMaterials", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSDebugComponent_SetDynamicMaterials_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSDebugComponent_SetDynamicMaterials_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UALSDebugComponent_SetDynamicMaterials()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSDebugComponent_SetDynamicMaterials_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSDebugComponent_SetResetColors_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSDebugComponent_SetResetColors_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Implemented on BP to set/reset layering colors */" },
#endif
		{ "ModuleRelativePath", "Public/Components/ALSDebugComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implemented on BP to set/reset layering colors" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSDebugComponent_SetResetColors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSDebugComponent, nullptr, "SetResetColors", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSDebugComponent_SetResetColors_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSDebugComponent_SetResetColors_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UALSDebugComponent_SetResetColors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSDebugComponent_SetResetColors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSDebugComponent_ToggleCharacterInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSDebugComponent_ToggleCharacterInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Debug" },
		{ "ModuleRelativePath", "Public/Components/ALSDebugComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSDebugComponent_ToggleCharacterInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSDebugComponent, nullptr, "ToggleCharacterInfo", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSDebugComponent_ToggleCharacterInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSDebugComponent_ToggleCharacterInfo_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UALSDebugComponent_ToggleCharacterInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSDebugComponent_ToggleCharacterInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSDebugComponent_ToggleDebugMesh_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSDebugComponent_ToggleDebugMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Debug" },
		{ "ModuleRelativePath", "Public/Components/ALSDebugComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSDebugComponent_ToggleDebugMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSDebugComponent, nullptr, "ToggleDebugMesh", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSDebugComponent_ToggleDebugMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSDebugComponent_ToggleDebugMesh_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UALSDebugComponent_ToggleDebugMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSDebugComponent_ToggleDebugMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSDebugComponent_ToggleDebugShapes_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSDebugComponent_ToggleDebugShapes_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Debug" },
		{ "ModuleRelativePath", "Public/Components/ALSDebugComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSDebugComponent_ToggleDebugShapes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSDebugComponent, nullptr, "ToggleDebugShapes", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSDebugComponent_ToggleDebugShapes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSDebugComponent_ToggleDebugShapes_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UALSDebugComponent_ToggleDebugShapes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSDebugComponent_ToggleDebugShapes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSDebugComponent_ToggleDebugView_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSDebugComponent_ToggleDebugView_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Debug" },
		{ "ModuleRelativePath", "Public/Components/ALSDebugComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSDebugComponent_ToggleDebugView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSDebugComponent, nullptr, "ToggleDebugView", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSDebugComponent_ToggleDebugView_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSDebugComponent_ToggleDebugView_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UALSDebugComponent_ToggleDebugView()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSDebugComponent_ToggleDebugView_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSDebugComponent_ToggleGlobalTimeDilationLocal_Statics
	{
		struct ALSDebugComponent_eventToggleGlobalTimeDilationLocal_Parms
		{
			float TimeDilation;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeDilation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UALSDebugComponent_ToggleGlobalTimeDilationLocal_Statics::NewProp_TimeDilation = { "TimeDilation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSDebugComponent_eventToggleGlobalTimeDilationLocal_Parms, TimeDilation), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSDebugComponent_ToggleGlobalTimeDilationLocal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSDebugComponent_ToggleGlobalTimeDilationLocal_Statics::NewProp_TimeDilation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSDebugComponent_ToggleGlobalTimeDilationLocal_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Debug" },
		{ "ModuleRelativePath", "Public/Components/ALSDebugComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSDebugComponent_ToggleGlobalTimeDilationLocal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSDebugComponent, nullptr, "ToggleGlobalTimeDilationLocal", nullptr, nullptr, Z_Construct_UFunction_UALSDebugComponent_ToggleGlobalTimeDilationLocal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSDebugComponent_ToggleGlobalTimeDilationLocal_Statics::PropPointers), sizeof(Z_Construct_UFunction_UALSDebugComponent_ToggleGlobalTimeDilationLocal_Statics::ALSDebugComponent_eventToggleGlobalTimeDilationLocal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSDebugComponent_ToggleGlobalTimeDilationLocal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSDebugComponent_ToggleGlobalTimeDilationLocal_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSDebugComponent_ToggleGlobalTimeDilationLocal_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UALSDebugComponent_ToggleGlobalTimeDilationLocal_Statics::ALSDebugComponent_eventToggleGlobalTimeDilationLocal_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UALSDebugComponent_ToggleGlobalTimeDilationLocal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSDebugComponent_ToggleGlobalTimeDilationLocal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSDebugComponent_ToggleHud_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSDebugComponent_ToggleHud_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Debug" },
		{ "ModuleRelativePath", "Public/Components/ALSDebugComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSDebugComponent_ToggleHud_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSDebugComponent, nullptr, "ToggleHud", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSDebugComponent_ToggleHud_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSDebugComponent_ToggleHud_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UALSDebugComponent_ToggleHud()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSDebugComponent_ToggleHud_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSDebugComponent_ToggleLayerColors_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSDebugComponent_ToggleLayerColors_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Debug" },
		{ "ModuleRelativePath", "Public/Components/ALSDebugComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSDebugComponent_ToggleLayerColors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSDebugComponent, nullptr, "ToggleLayerColors", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSDebugComponent_ToggleLayerColors_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSDebugComponent_ToggleLayerColors_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UALSDebugComponent_ToggleLayerColors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSDebugComponent_ToggleLayerColors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSDebugComponent_ToggleSlomo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSDebugComponent_ToggleSlomo_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Debug" },
		{ "ModuleRelativePath", "Public/Components/ALSDebugComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSDebugComponent_ToggleSlomo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSDebugComponent, nullptr, "ToggleSlomo", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSDebugComponent_ToggleSlomo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSDebugComponent_ToggleSlomo_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UALSDebugComponent_ToggleSlomo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSDebugComponent_ToggleSlomo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSDebugComponent_ToggleTraces_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSDebugComponent_ToggleTraces_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Debug" },
		{ "ModuleRelativePath", "Public/Components/ALSDebugComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSDebugComponent_ToggleTraces_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSDebugComponent, nullptr, "ToggleTraces", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSDebugComponent_ToggleTraces_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSDebugComponent_ToggleTraces_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UALSDebugComponent_ToggleTraces()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSDebugComponent_ToggleTraces_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSDebugComponent_UpdateColoringSystem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSDebugComponent_UpdateColoringSystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Implemented on BP to update layering colors */" },
#endif
		{ "ModuleRelativePath", "Public/Components/ALSDebugComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implemented on BP to update layering colors" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSDebugComponent_UpdateColoringSystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSDebugComponent, nullptr, "UpdateColoringSystem", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSDebugComponent_UpdateColoringSystem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSDebugComponent_UpdateColoringSystem_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UALSDebugComponent_UpdateColoringSystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSDebugComponent_UpdateColoringSystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UALSDebugComponent);
	UClass* Z_Construct_UClass_UALSDebugComponent_NoRegister()
	{
		return UALSDebugComponent::StaticClass();
	}
	struct Z_Construct_UClass_UALSDebugComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OwnerCharacter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSlomo_MetaData[];
#endif
		static void NewProp_bSlomo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSlomo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowHud_MetaData[];
#endif
		static void NewProp_bShowHud_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowHud;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowCharacterInfo_MetaData[];
#endif
		static void NewProp_bShowCharacterInfo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowCharacterInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugSkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DebugSkeletalMesh;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AvailableDebugCharacters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvailableDebugCharacters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AvailableDebugCharacters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugFocusCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DebugFocusCharacter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DefaultSkeletalMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UALSDebugComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ALSV4_CPP,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UALSDebugComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UALSDebugComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UALSDebugComponent_DrawDebugSpheres, "DrawDebugSpheres" }, // 1846394513
		{ &Z_Construct_UFunction_UALSDebugComponent_FocusedDebugCharacterCycle, "FocusedDebugCharacterCycle" }, // 931981083
		{ &Z_Construct_UFunction_UALSDebugComponent_GetDebugView, "GetDebugView" }, // 1910175928
		{ &Z_Construct_UFunction_UALSDebugComponent_GetShowDebugShapes, "GetShowDebugShapes" }, // 3234600408
		{ &Z_Construct_UFunction_UALSDebugComponent_GetShowLayerColors, "GetShowLayerColors" }, // 2209123037
		{ &Z_Construct_UFunction_UALSDebugComponent_GetShowTraces, "GetShowTraces" }, // 1487198893
		{ &Z_Construct_UFunction_UALSDebugComponent_OnPlayerControllerInitialized, "OnPlayerControllerInitialized" }, // 1313611381
		{ &Z_Construct_UFunction_UALSDebugComponent_OpenOverlayMenu, "OpenOverlayMenu" }, // 3828216947
		{ &Z_Construct_UFunction_UALSDebugComponent_OverlayMenuCycle, "OverlayMenuCycle" }, // 19294541
		{ &Z_Construct_UFunction_UALSDebugComponent_SetDynamicMaterials, "SetDynamicMaterials" }, // 1726968386
		{ &Z_Construct_UFunction_UALSDebugComponent_SetResetColors, "SetResetColors" }, // 2601780288
		{ &Z_Construct_UFunction_UALSDebugComponent_ToggleCharacterInfo, "ToggleCharacterInfo" }, // 4060273449
		{ &Z_Construct_UFunction_UALSDebugComponent_ToggleDebugMesh, "ToggleDebugMesh" }, // 2294223675
		{ &Z_Construct_UFunction_UALSDebugComponent_ToggleDebugShapes, "ToggleDebugShapes" }, // 2696438488
		{ &Z_Construct_UFunction_UALSDebugComponent_ToggleDebugView, "ToggleDebugView" }, // 938103523
		{ &Z_Construct_UFunction_UALSDebugComponent_ToggleGlobalTimeDilationLocal, "ToggleGlobalTimeDilationLocal" }, // 2629784801
		{ &Z_Construct_UFunction_UALSDebugComponent_ToggleHud, "ToggleHud" }, // 1439204921
		{ &Z_Construct_UFunction_UALSDebugComponent_ToggleLayerColors, "ToggleLayerColors" }, // 806194288
		{ &Z_Construct_UFunction_UALSDebugComponent_ToggleSlomo, "ToggleSlomo" }, // 3820531134
		{ &Z_Construct_UFunction_UALSDebugComponent_ToggleTraces, "ToggleTraces" }, // 2063244749
		{ &Z_Construct_UFunction_UALSDebugComponent_UpdateColoringSystem, "UpdateColoringSystem" }, // 3082806317
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UALSDebugComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSDebugComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Components/ALSDebugComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/ALSDebugComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSDebugComponent_Statics::NewProp_OwnerCharacter_MetaData[] = {
		{ "Category", "ALS|Debug" },
		{ "ModuleRelativePath", "Public/Components/ALSDebugComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UALSDebugComponent_Statics::NewProp_OwnerCharacter = { "OwnerCharacter", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSDebugComponent, OwnerCharacter), Z_Construct_UClass_AALSBaseCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSDebugComponent_Statics::NewProp_OwnerCharacter_MetaData), Z_Construct_UClass_UALSDebugComponent_Statics::NewProp_OwnerCharacter_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSDebugComponent_Statics::NewProp_bSlomo_MetaData[] = {
		{ "Category", "ALS|Debug" },
		{ "ModuleRelativePath", "Public/Components/ALSDebugComponent.h" },
	};
#endif
	void Z_Construct_UClass_UALSDebugComponent_Statics::NewProp_bSlomo_SetBit(void* Obj)
	{
		((UALSDebugComponent*)Obj)->bSlomo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UALSDebugComponent_Statics::NewProp_bSlomo = { "bSlomo", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UALSDebugComponent), &Z_Construct_UClass_UALSDebugComponent_Statics::NewProp_bSlomo_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSDebugComponent_Statics::NewProp_bSlomo_MetaData), Z_Construct_UClass_UALSDebugComponent_Statics::NewProp_bSlomo_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSDebugComponent_Statics::NewProp_bShowHud_MetaData[] = {
		{ "Category", "ALS|Debug" },
		{ "ModuleRelativePath", "Public/Components/ALSDebugComponent.h" },
	};
#endif
	void Z_Construct_UClass_UALSDebugComponent_Statics::NewProp_bShowHud_SetBit(void* Obj)
	{
		((UALSDebugComponent*)Obj)->bShowHud = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UALSDebugComponent_Statics::NewProp_bShowHud = { "bShowHud", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UALSDebugComponent), &Z_Construct_UClass_UALSDebugComponent_Statics::NewProp_bShowHud_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSDebugComponent_Statics::NewProp_bShowHud_MetaData), Z_Construct_UClass_UALSDebugComponent_Statics::NewProp_bShowHud_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSDebugComponent_Statics::NewProp_bShowCharacterInfo_MetaData[] = {
		{ "Category", "ALS|Debug" },
		{ "ModuleRelativePath", "Public/Components/ALSDebugComponent.h" },
	};
#endif
	void Z_Construct_UClass_UALSDebugComponent_Statics::NewProp_bShowCharacterInfo_SetBit(void* Obj)
	{
		((UALSDebugComponent*)Obj)->bShowCharacterInfo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UALSDebugComponent_Statics::NewProp_bShowCharacterInfo = { "bShowCharacterInfo", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UALSDebugComponent), &Z_Construct_UClass_UALSDebugComponent_Statics::NewProp_bShowCharacterInfo_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSDebugComponent_Statics::NewProp_bShowCharacterInfo_MetaData), Z_Construct_UClass_UALSDebugComponent_Statics::NewProp_bShowCharacterInfo_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSDebugComponent_Statics::NewProp_DebugSkeletalMesh_MetaData[] = {
		{ "Category", "ALS|Debug" },
		{ "ModuleRelativePath", "Public/Components/ALSDebugComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UALSDebugComponent_Statics::NewProp_DebugSkeletalMesh = { "DebugSkeletalMesh", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSDebugComponent, DebugSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSDebugComponent_Statics::NewProp_DebugSkeletalMesh_MetaData), Z_Construct_UClass_UALSDebugComponent_Statics::NewProp_DebugSkeletalMesh_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UALSDebugComponent_Statics::NewProp_AvailableDebugCharacters_Inner = { "AvailableDebugCharacters", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AALSBaseCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSDebugComponent_Statics::NewProp_AvailableDebugCharacters_MetaData[] = {
		{ "Category", "ALS|Debug" },
		{ "ModuleRelativePath", "Public/Components/ALSDebugComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UALSDebugComponent_Statics::NewProp_AvailableDebugCharacters = { "AvailableDebugCharacters", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSDebugComponent, AvailableDebugCharacters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSDebugComponent_Statics::NewProp_AvailableDebugCharacters_MetaData), Z_Construct_UClass_UALSDebugComponent_Statics::NewProp_AvailableDebugCharacters_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSDebugComponent_Statics::NewProp_DebugFocusCharacter_MetaData[] = {
		{ "Category", "ALS|Debug" },
		{ "ModuleRelativePath", "Public/Components/ALSDebugComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UALSDebugComponent_Statics::NewProp_DebugFocusCharacter = { "DebugFocusCharacter", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSDebugComponent, DebugFocusCharacter), Z_Construct_UClass_AALSBaseCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSDebugComponent_Statics::NewProp_DebugFocusCharacter_MetaData), Z_Construct_UClass_UALSDebugComponent_Statics::NewProp_DebugFocusCharacter_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSDebugComponent_Statics::NewProp_DefaultSkeletalMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/ALSDebugComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UALSDebugComponent_Statics::NewProp_DefaultSkeletalMesh = { "DefaultSkeletalMesh", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSDebugComponent, DefaultSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSDebugComponent_Statics::NewProp_DefaultSkeletalMesh_MetaData), Z_Construct_UClass_UALSDebugComponent_Statics::NewProp_DefaultSkeletalMesh_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UALSDebugComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSDebugComponent_Statics::NewProp_OwnerCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSDebugComponent_Statics::NewProp_bSlomo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSDebugComponent_Statics::NewProp_bShowHud,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSDebugComponent_Statics::NewProp_bShowCharacterInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSDebugComponent_Statics::NewProp_DebugSkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSDebugComponent_Statics::NewProp_AvailableDebugCharacters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSDebugComponent_Statics::NewProp_AvailableDebugCharacters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSDebugComponent_Statics::NewProp_DebugFocusCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSDebugComponent_Statics::NewProp_DefaultSkeletalMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UALSDebugComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UALSDebugComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UALSDebugComponent_Statics::ClassParams = {
		&UALSDebugComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UALSDebugComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UALSDebugComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSDebugComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UALSDebugComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UALSDebugComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UALSDebugComponent()
	{
		if (!Z_Registration_Info_UClass_UALSDebugComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UALSDebugComponent.OuterSingleton, Z_Construct_UClass_UALSDebugComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UALSDebugComponent.OuterSingleton;
	}
	template<> ALSV4_CPP_API UClass* StaticClass<UALSDebugComponent>()
	{
		return UALSDebugComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UALSDebugComponent);
	UALSDebugComponent::~UALSDebugComponent() {}
	struct Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Components_ALSDebugComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Components_ALSDebugComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UALSDebugComponent, UALSDebugComponent::StaticClass, TEXT("UALSDebugComponent"), &Z_Registration_Info_UClass_UALSDebugComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UALSDebugComponent), 3673558457U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Components_ALSDebugComponent_h_3770625030(TEXT("/Script/ALSV4_CPP"),
		Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Components_ALSDebugComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Components_ALSDebugComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
