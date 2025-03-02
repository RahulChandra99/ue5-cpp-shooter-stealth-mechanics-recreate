// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALSV4_CPP/Public/Character/Animation/ALSCharacterAnimInstance.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "ALSV4_CPP/Public/Library/ALSAnimationStructLibrary.h"
#include "ALSV4_CPP/Public/Library/ALSStructEnumLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeALSCharacterAnimInstance() {}
// Cross Module References
	ALSV4_CPP_API UClass* Z_Construct_UClass_AALSBaseCharacter_NoRegister();
	ALSV4_CPP_API UClass* Z_Construct_UClass_UALSCharacterAnimInstance();
	ALSV4_CPP_API UClass* Z_Construct_UClass_UALSCharacterAnimInstance_NoRegister();
	ALSV4_CPP_API UClass* Z_Construct_UClass_UALSDebugComponent_NoRegister();
	ALSV4_CPP_API UEnum* Z_Construct_UEnum_ALSV4_CPP_EALSGroundedEntryState();
	ALSV4_CPP_API UEnum* Z_Construct_UEnum_ALSV4_CPP_EALSHipsDirection();
	ALSV4_CPP_API UScriptStruct* Z_Construct_UScriptStruct_FALSAnimCharacterInformation();
	ALSV4_CPP_API UScriptStruct* Z_Construct_UScriptStruct_FALSAnimConfiguration();
	ALSV4_CPP_API UScriptStruct* Z_Construct_UScriptStruct_FALSAnimGraphAimingValues();
	ALSV4_CPP_API UScriptStruct* Z_Construct_UScriptStruct_FALSAnimGraphFootIK();
	ALSV4_CPP_API UScriptStruct* Z_Construct_UScriptStruct_FALSAnimGraphGrounded();
	ALSV4_CPP_API UScriptStruct* Z_Construct_UScriptStruct_FALSAnimGraphInAir();
	ALSV4_CPP_API UScriptStruct* Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending();
	ALSV4_CPP_API UScriptStruct* Z_Construct_UScriptStruct_FALSAnimRotateInPlace();
	ALSV4_CPP_API UScriptStruct* Z_Construct_UScriptStruct_FALSAnimTurnInPlace();
	ALSV4_CPP_API UScriptStruct* Z_Construct_UScriptStruct_FALSDynamicMontageParams();
	ALSV4_CPP_API UScriptStruct* Z_Construct_UScriptStruct_FALSGait();
	ALSV4_CPP_API UScriptStruct* Z_Construct_UScriptStruct_FALSGroundedEntryState();
	ALSV4_CPP_API UScriptStruct* Z_Construct_UScriptStruct_FALSLeanAmount();
	ALSV4_CPP_API UScriptStruct* Z_Construct_UScriptStruct_FALSMovementAction();
	ALSV4_CPP_API UScriptStruct* Z_Construct_UScriptStruct_FALSMovementDirection();
	ALSV4_CPP_API UScriptStruct* Z_Construct_UScriptStruct_FALSMovementState();
	ALSV4_CPP_API UScriptStruct* Z_Construct_UScriptStruct_FALSOverlayState();
	ALSV4_CPP_API UScriptStruct* Z_Construct_UScriptStruct_FALSRotationMode();
	ALSV4_CPP_API UScriptStruct* Z_Construct_UScriptStruct_FALSStance();
	ALSV4_CPP_API UScriptStruct* Z_Construct_UScriptStruct_FALSVelocityBlend();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveVector_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ALSV4_CPP();
// End Cross Module References
	DEFINE_FUNCTION(UALSCharacterAnimInstance::execCanDynamicTransition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanDynamicTransition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSCharacterAnimInstance::execCanTurnInPlace)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanTurnInPlace();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSCharacterAnimInstance::execCanRotateInPlace)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanRotateInPlace();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSCharacterAnimInstance::execShouldMoveCheck)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShouldMoveCheck();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSCharacterAnimInstance::execSetGroundedEntryState)
	{
		P_GET_ENUM(EALSGroundedEntryState,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGroundedEntryState(EALSGroundedEntryState(Z_Param_NewState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSCharacterAnimInstance::execSetTrackedHipsDirection)
	{
		P_GET_ENUM(EALSHipsDirection,Z_Param_HipsDirection);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTrackedHipsDirection(EALSHipsDirection(Z_Param_HipsDirection));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSCharacterAnimInstance::execOnPivot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPivot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSCharacterAnimInstance::execOnJumped)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnJumped();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSCharacterAnimInstance::execPlayDynamicTransition)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_ReTriggerDelay);
		P_GET_STRUCT(FALSDynamicMontageParams,Z_Param_Parameters);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayDynamicTransition(Z_Param_ReTriggerDelay,Z_Param_Parameters);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSCharacterAnimInstance::execPlayTransitionChecked)
	{
		P_GET_STRUCT_REF(FALSDynamicMontageParams,Z_Param_Out_Parameters);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayTransitionChecked(Z_Param_Out_Parameters);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSCharacterAnimInstance::execPlayTransition)
	{
		P_GET_STRUCT_REF(FALSDynamicMontageParams,Z_Param_Out_Parameters);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayTransition(Z_Param_Out_Parameters);
		P_NATIVE_END;
	}
	void UALSCharacterAnimInstance::StaticRegisterNativesUALSCharacterAnimInstance()
	{
		UClass* Class = UALSCharacterAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanDynamicTransition", &UALSCharacterAnimInstance::execCanDynamicTransition },
			{ "CanRotateInPlace", &UALSCharacterAnimInstance::execCanRotateInPlace },
			{ "CanTurnInPlace", &UALSCharacterAnimInstance::execCanTurnInPlace },
			{ "OnJumped", &UALSCharacterAnimInstance::execOnJumped },
			{ "OnPivot", &UALSCharacterAnimInstance::execOnPivot },
			{ "PlayDynamicTransition", &UALSCharacterAnimInstance::execPlayDynamicTransition },
			{ "PlayTransition", &UALSCharacterAnimInstance::execPlayTransition },
			{ "PlayTransitionChecked", &UALSCharacterAnimInstance::execPlayTransitionChecked },
			{ "SetGroundedEntryState", &UALSCharacterAnimInstance::execSetGroundedEntryState },
			{ "SetTrackedHipsDirection", &UALSCharacterAnimInstance::execSetTrackedHipsDirection },
			{ "ShouldMoveCheck", &UALSCharacterAnimInstance::execShouldMoveCheck },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UALSCharacterAnimInstance_CanDynamicTransition_Statics
	{
		struct ALSCharacterAnimInstance_eventCanDynamicTransition_Parms
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
	void Z_Construct_UFunction_UALSCharacterAnimInstance_CanDynamicTransition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ALSCharacterAnimInstance_eventCanDynamicTransition_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UALSCharacterAnimInstance_CanDynamicTransition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALSCharacterAnimInstance_eventCanDynamicTransition_Parms), &Z_Construct_UFunction_UALSCharacterAnimInstance_CanDynamicTransition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSCharacterAnimInstance_CanDynamicTransition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSCharacterAnimInstance_CanDynamicTransition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSCharacterAnimInstance_CanDynamicTransition_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Grounded" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Only perform a Dynamic Transition check if the \"Enable Transition\" curve is fully weighted.\n\x09 * The Enable_Transition curve is modified within certain states of the AnimBP so\n\x09 * that the character can only transition while in those states.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Character/Animation/ALSCharacterAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Only perform a Dynamic Transition check if the \"Enable Transition\" curve is fully weighted.\nThe Enable_Transition curve is modified within certain states of the AnimBP so\nthat the character can only transition while in those states." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSCharacterAnimInstance_CanDynamicTransition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSCharacterAnimInstance, nullptr, "CanDynamicTransition", nullptr, nullptr, Z_Construct_UFunction_UALSCharacterAnimInstance_CanDynamicTransition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSCharacterAnimInstance_CanDynamicTransition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UALSCharacterAnimInstance_CanDynamicTransition_Statics::ALSCharacterAnimInstance_eventCanDynamicTransition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSCharacterAnimInstance_CanDynamicTransition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSCharacterAnimInstance_CanDynamicTransition_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSCharacterAnimInstance_CanDynamicTransition_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UALSCharacterAnimInstance_CanDynamicTransition_Statics::ALSCharacterAnimInstance_eventCanDynamicTransition_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UALSCharacterAnimInstance_CanDynamicTransition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSCharacterAnimInstance_CanDynamicTransition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSCharacterAnimInstance_CanRotateInPlace_Statics
	{
		struct ALSCharacterAnimInstance_eventCanRotateInPlace_Parms
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
	void Z_Construct_UFunction_UALSCharacterAnimInstance_CanRotateInPlace_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ALSCharacterAnimInstance_eventCanRotateInPlace_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UALSCharacterAnimInstance_CanRotateInPlace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALSCharacterAnimInstance_eventCanRotateInPlace_Parms), &Z_Construct_UFunction_UALSCharacterAnimInstance_CanRotateInPlace_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSCharacterAnimInstance_CanRotateInPlace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSCharacterAnimInstance_CanRotateInPlace_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSCharacterAnimInstance_CanRotateInPlace_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Grounded" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Only perform a Rotate In Place Check if the character is Aiming or in First Person. */" },
#endif
		{ "ModuleRelativePath", "Public/Character/Animation/ALSCharacterAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Only perform a Rotate In Place Check if the character is Aiming or in First Person." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSCharacterAnimInstance_CanRotateInPlace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSCharacterAnimInstance, nullptr, "CanRotateInPlace", nullptr, nullptr, Z_Construct_UFunction_UALSCharacterAnimInstance_CanRotateInPlace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSCharacterAnimInstance_CanRotateInPlace_Statics::PropPointers), sizeof(Z_Construct_UFunction_UALSCharacterAnimInstance_CanRotateInPlace_Statics::ALSCharacterAnimInstance_eventCanRotateInPlace_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSCharacterAnimInstance_CanRotateInPlace_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSCharacterAnimInstance_CanRotateInPlace_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSCharacterAnimInstance_CanRotateInPlace_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UALSCharacterAnimInstance_CanRotateInPlace_Statics::ALSCharacterAnimInstance_eventCanRotateInPlace_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UALSCharacterAnimInstance_CanRotateInPlace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSCharacterAnimInstance_CanRotateInPlace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSCharacterAnimInstance_CanTurnInPlace_Statics
	{
		struct ALSCharacterAnimInstance_eventCanTurnInPlace_Parms
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
	void Z_Construct_UFunction_UALSCharacterAnimInstance_CanTurnInPlace_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ALSCharacterAnimInstance_eventCanTurnInPlace_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UALSCharacterAnimInstance_CanTurnInPlace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALSCharacterAnimInstance_eventCanTurnInPlace_Parms), &Z_Construct_UFunction_UALSCharacterAnimInstance_CanTurnInPlace_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSCharacterAnimInstance_CanTurnInPlace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSCharacterAnimInstance_CanTurnInPlace_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSCharacterAnimInstance_CanTurnInPlace_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Grounded" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Only perform a Turn In Place check if the character is looking toward the camera in Third Person,\n\x09 * and if the \"Enable Transition\" curve is fully weighted. The Enable_Transition curve is modified within certain\n\x09 * states of the AnimBP so that the character can only turn while in those states..\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Character/Animation/ALSCharacterAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Only perform a Turn In Place check if the character is looking toward the camera in Third Person,\nand if the \"Enable Transition\" curve is fully weighted. The Enable_Transition curve is modified within certain\nstates of the AnimBP so that the character can only turn while in those states.." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSCharacterAnimInstance_CanTurnInPlace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSCharacterAnimInstance, nullptr, "CanTurnInPlace", nullptr, nullptr, Z_Construct_UFunction_UALSCharacterAnimInstance_CanTurnInPlace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSCharacterAnimInstance_CanTurnInPlace_Statics::PropPointers), sizeof(Z_Construct_UFunction_UALSCharacterAnimInstance_CanTurnInPlace_Statics::ALSCharacterAnimInstance_eventCanTurnInPlace_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSCharacterAnimInstance_CanTurnInPlace_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSCharacterAnimInstance_CanTurnInPlace_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSCharacterAnimInstance_CanTurnInPlace_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UALSCharacterAnimInstance_CanTurnInPlace_Statics::ALSCharacterAnimInstance_eventCanTurnInPlace_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UALSCharacterAnimInstance_CanTurnInPlace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSCharacterAnimInstance_CanTurnInPlace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSCharacterAnimInstance_OnJumped_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSCharacterAnimInstance_OnJumped_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Event" },
		{ "ModuleRelativePath", "Public/Character/Animation/ALSCharacterAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSCharacterAnimInstance_OnJumped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSCharacterAnimInstance, nullptr, "OnJumped", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSCharacterAnimInstance_OnJumped_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSCharacterAnimInstance_OnJumped_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UALSCharacterAnimInstance_OnJumped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSCharacterAnimInstance_OnJumped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSCharacterAnimInstance_OnPivot_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSCharacterAnimInstance_OnPivot_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Event" },
		{ "ModuleRelativePath", "Public/Character/Animation/ALSCharacterAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSCharacterAnimInstance_OnPivot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSCharacterAnimInstance, nullptr, "OnPivot", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSCharacterAnimInstance_OnPivot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSCharacterAnimInstance_OnPivot_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UALSCharacterAnimInstance_OnPivot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSCharacterAnimInstance_OnPivot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSCharacterAnimInstance_PlayDynamicTransition_Statics
	{
		struct ALSCharacterAnimInstance_eventPlayDynamicTransition_Parms
		{
			float ReTriggerDelay;
			FALSDynamicMontageParams Parameters;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReTriggerDelay;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UALSCharacterAnimInstance_PlayDynamicTransition_Statics::NewProp_ReTriggerDelay = { "ReTriggerDelay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSCharacterAnimInstance_eventPlayDynamicTransition_Parms, ReTriggerDelay), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UALSCharacterAnimInstance_PlayDynamicTransition_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSCharacterAnimInstance_eventPlayDynamicTransition_Parms, Parameters), Z_Construct_UScriptStruct_FALSDynamicMontageParams, METADATA_PARAMS(0, nullptr) }; // 2192810112
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSCharacterAnimInstance_PlayDynamicTransition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSCharacterAnimInstance_PlayDynamicTransition_Statics::NewProp_ReTriggerDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSCharacterAnimInstance_PlayDynamicTransition_Statics::NewProp_Parameters,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSCharacterAnimInstance_PlayDynamicTransition_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Animation" },
		{ "ModuleRelativePath", "Public/Character/Animation/ALSCharacterAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSCharacterAnimInstance_PlayDynamicTransition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSCharacterAnimInstance, nullptr, "PlayDynamicTransition", nullptr, nullptr, Z_Construct_UFunction_UALSCharacterAnimInstance_PlayDynamicTransition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSCharacterAnimInstance_PlayDynamicTransition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UALSCharacterAnimInstance_PlayDynamicTransition_Statics::ALSCharacterAnimInstance_eventPlayDynamicTransition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSCharacterAnimInstance_PlayDynamicTransition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSCharacterAnimInstance_PlayDynamicTransition_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSCharacterAnimInstance_PlayDynamicTransition_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UALSCharacterAnimInstance_PlayDynamicTransition_Statics::ALSCharacterAnimInstance_eventPlayDynamicTransition_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UALSCharacterAnimInstance_PlayDynamicTransition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSCharacterAnimInstance_PlayDynamicTransition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSCharacterAnimInstance_PlayTransition_Statics
	{
		struct ALSCharacterAnimInstance_eventPlayTransition_Parms
		{
			FALSDynamicMontageParams Parameters;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSCharacterAnimInstance_PlayTransition_Statics::NewProp_Parameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UALSCharacterAnimInstance_PlayTransition_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSCharacterAnimInstance_eventPlayTransition_Parms, Parameters), Z_Construct_UScriptStruct_FALSDynamicMontageParams, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSCharacterAnimInstance_PlayTransition_Statics::NewProp_Parameters_MetaData), Z_Construct_UFunction_UALSCharacterAnimInstance_PlayTransition_Statics::NewProp_Parameters_MetaData) }; // 2192810112
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSCharacterAnimInstance_PlayTransition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSCharacterAnimInstance_PlayTransition_Statics::NewProp_Parameters,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSCharacterAnimInstance_PlayTransition_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Animation" },
		{ "ModuleRelativePath", "Public/Character/Animation/ALSCharacterAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSCharacterAnimInstance_PlayTransition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSCharacterAnimInstance, nullptr, "PlayTransition", nullptr, nullptr, Z_Construct_UFunction_UALSCharacterAnimInstance_PlayTransition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSCharacterAnimInstance_PlayTransition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UALSCharacterAnimInstance_PlayTransition_Statics::ALSCharacterAnimInstance_eventPlayTransition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSCharacterAnimInstance_PlayTransition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSCharacterAnimInstance_PlayTransition_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSCharacterAnimInstance_PlayTransition_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UALSCharacterAnimInstance_PlayTransition_Statics::ALSCharacterAnimInstance_eventPlayTransition_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UALSCharacterAnimInstance_PlayTransition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSCharacterAnimInstance_PlayTransition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSCharacterAnimInstance_PlayTransitionChecked_Statics
	{
		struct ALSCharacterAnimInstance_eventPlayTransitionChecked_Parms
		{
			FALSDynamicMontageParams Parameters;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSCharacterAnimInstance_PlayTransitionChecked_Statics::NewProp_Parameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UALSCharacterAnimInstance_PlayTransitionChecked_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSCharacterAnimInstance_eventPlayTransitionChecked_Parms, Parameters), Z_Construct_UScriptStruct_FALSDynamicMontageParams, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSCharacterAnimInstance_PlayTransitionChecked_Statics::NewProp_Parameters_MetaData), Z_Construct_UFunction_UALSCharacterAnimInstance_PlayTransitionChecked_Statics::NewProp_Parameters_MetaData) }; // 2192810112
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSCharacterAnimInstance_PlayTransitionChecked_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSCharacterAnimInstance_PlayTransitionChecked_Statics::NewProp_Parameters,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSCharacterAnimInstance_PlayTransitionChecked_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Animation" },
		{ "ModuleRelativePath", "Public/Character/Animation/ALSCharacterAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSCharacterAnimInstance_PlayTransitionChecked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSCharacterAnimInstance, nullptr, "PlayTransitionChecked", nullptr, nullptr, Z_Construct_UFunction_UALSCharacterAnimInstance_PlayTransitionChecked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSCharacterAnimInstance_PlayTransitionChecked_Statics::PropPointers), sizeof(Z_Construct_UFunction_UALSCharacterAnimInstance_PlayTransitionChecked_Statics::ALSCharacterAnimInstance_eventPlayTransitionChecked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSCharacterAnimInstance_PlayTransitionChecked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSCharacterAnimInstance_PlayTransitionChecked_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSCharacterAnimInstance_PlayTransitionChecked_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UALSCharacterAnimInstance_PlayTransitionChecked_Statics::ALSCharacterAnimInstance_eventPlayTransitionChecked_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UALSCharacterAnimInstance_PlayTransitionChecked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSCharacterAnimInstance_PlayTransitionChecked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSCharacterAnimInstance_SetGroundedEntryState_Statics
	{
		struct ALSCharacterAnimInstance_eventSetGroundedEntryState_Parms
		{
			EALSGroundedEntryState NewState;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UALSCharacterAnimInstance_SetGroundedEntryState_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UALSCharacterAnimInstance_SetGroundedEntryState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSCharacterAnimInstance_eventSetGroundedEntryState_Parms, NewState), Z_Construct_UEnum_ALSV4_CPP_EALSGroundedEntryState, METADATA_PARAMS(0, nullptr) }; // 1781834569
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSCharacterAnimInstance_SetGroundedEntryState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSCharacterAnimInstance_SetGroundedEntryState_Statics::NewProp_NewState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSCharacterAnimInstance_SetGroundedEntryState_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSCharacterAnimInstance_SetGroundedEntryState_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Grounded" },
		{ "ModuleRelativePath", "Public/Character/Animation/ALSCharacterAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSCharacterAnimInstance_SetGroundedEntryState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSCharacterAnimInstance, nullptr, "SetGroundedEntryState", nullptr, nullptr, Z_Construct_UFunction_UALSCharacterAnimInstance_SetGroundedEntryState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSCharacterAnimInstance_SetGroundedEntryState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UALSCharacterAnimInstance_SetGroundedEntryState_Statics::ALSCharacterAnimInstance_eventSetGroundedEntryState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSCharacterAnimInstance_SetGroundedEntryState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSCharacterAnimInstance_SetGroundedEntryState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSCharacterAnimInstance_SetGroundedEntryState_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UALSCharacterAnimInstance_SetGroundedEntryState_Statics::ALSCharacterAnimInstance_eventSetGroundedEntryState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UALSCharacterAnimInstance_SetGroundedEntryState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSCharacterAnimInstance_SetGroundedEntryState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSCharacterAnimInstance_SetTrackedHipsDirection_Statics
	{
		struct ALSCharacterAnimInstance_eventSetTrackedHipsDirection_Parms
		{
			EALSHipsDirection HipsDirection;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_HipsDirection_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_HipsDirection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UALSCharacterAnimInstance_SetTrackedHipsDirection_Statics::NewProp_HipsDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UALSCharacterAnimInstance_SetTrackedHipsDirection_Statics::NewProp_HipsDirection = { "HipsDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSCharacterAnimInstance_eventSetTrackedHipsDirection_Parms, HipsDirection), Z_Construct_UEnum_ALSV4_CPP_EALSHipsDirection, METADATA_PARAMS(0, nullptr) }; // 1711658086
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSCharacterAnimInstance_SetTrackedHipsDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSCharacterAnimInstance_SetTrackedHipsDirection_Statics::NewProp_HipsDirection_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSCharacterAnimInstance_SetTrackedHipsDirection_Statics::NewProp_HipsDirection,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSCharacterAnimInstance_SetTrackedHipsDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Grounded" },
		{ "ModuleRelativePath", "Public/Character/Animation/ALSCharacterAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSCharacterAnimInstance_SetTrackedHipsDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSCharacterAnimInstance, nullptr, "SetTrackedHipsDirection", nullptr, nullptr, Z_Construct_UFunction_UALSCharacterAnimInstance_SetTrackedHipsDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSCharacterAnimInstance_SetTrackedHipsDirection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UALSCharacterAnimInstance_SetTrackedHipsDirection_Statics::ALSCharacterAnimInstance_eventSetTrackedHipsDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSCharacterAnimInstance_SetTrackedHipsDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSCharacterAnimInstance_SetTrackedHipsDirection_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSCharacterAnimInstance_SetTrackedHipsDirection_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UALSCharacterAnimInstance_SetTrackedHipsDirection_Statics::ALSCharacterAnimInstance_eventSetTrackedHipsDirection_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UALSCharacterAnimInstance_SetTrackedHipsDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSCharacterAnimInstance_SetTrackedHipsDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSCharacterAnimInstance_ShouldMoveCheck_Statics
	{
		struct ALSCharacterAnimInstance_eventShouldMoveCheck_Parms
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
	void Z_Construct_UFunction_UALSCharacterAnimInstance_ShouldMoveCheck_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ALSCharacterAnimInstance_eventShouldMoveCheck_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UALSCharacterAnimInstance_ShouldMoveCheck_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALSCharacterAnimInstance_eventShouldMoveCheck_Parms), &Z_Construct_UFunction_UALSCharacterAnimInstance_ShouldMoveCheck_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSCharacterAnimInstance_ShouldMoveCheck_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSCharacterAnimInstance_ShouldMoveCheck_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSCharacterAnimInstance_ShouldMoveCheck_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Grounded" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enable Movement Animations if IsMoving and HasMovementInput, or if the Speed is greater than 150. */" },
#endif
		{ "ModuleRelativePath", "Public/Character/Animation/ALSCharacterAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable Movement Animations if IsMoving and HasMovementInput, or if the Speed is greater than 150." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSCharacterAnimInstance_ShouldMoveCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSCharacterAnimInstance, nullptr, "ShouldMoveCheck", nullptr, nullptr, Z_Construct_UFunction_UALSCharacterAnimInstance_ShouldMoveCheck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSCharacterAnimInstance_ShouldMoveCheck_Statics::PropPointers), sizeof(Z_Construct_UFunction_UALSCharacterAnimInstance_ShouldMoveCheck_Statics::ALSCharacterAnimInstance_eventShouldMoveCheck_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSCharacterAnimInstance_ShouldMoveCheck_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSCharacterAnimInstance_ShouldMoveCheck_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSCharacterAnimInstance_ShouldMoveCheck_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UALSCharacterAnimInstance_ShouldMoveCheck_Statics::ALSCharacterAnimInstance_eventShouldMoveCheck_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UALSCharacterAnimInstance_ShouldMoveCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSCharacterAnimInstance_ShouldMoveCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UALSCharacterAnimInstance);
	UClass* Z_Construct_UClass_UALSCharacterAnimInstance_NoRegister()
	{
		return UALSCharacterAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UALSCharacterAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Character;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterInformation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterInformation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MovementState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementAction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MovementAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationMode_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotationMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Gait_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Gait;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Stance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlayState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OverlayState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Grounded_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Grounded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VelocityBlend_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VelocityBlend;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeanAmount_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LeanAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelativeAccelerationAmount_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeAccelerationAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundedEntryState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroundedEntryState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MovementDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAir_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InAir;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimingValues_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AimingValues;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmoothedAimingAngle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SmoothedAimingAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlailRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FlailRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerBlendingValues_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LayerBlendingValues;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootIKValues_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FootIKValues;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurnInPlaceValues_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TurnInPlaceValues;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotateInPlace_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotateInPlace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DiagonalScaleAmountCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DiagonalScaleAmountCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StrideBlend_N_Walk_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StrideBlend_N_Walk;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StrideBlend_N_Run_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StrideBlend_N_Run;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StrideBlend_C_Walk_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StrideBlend_C_Walk;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LandPredictionCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LandPredictionCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeanInAirCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LeanInAirCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YawOffset_FB_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_YawOffset_FB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YawOffset_LR_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_YawOffset_LR;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransitionAnim_R_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TransitionAnim_R;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransitionAnim_L_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TransitionAnim_L;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IkFootL_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_IkFootL_BoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IkFootR_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_IkFootR_BoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ALSDebugComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ALSDebugComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UALSCharacterAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_ALSV4_CPP,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UALSCharacterAnimInstance_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UALSCharacterAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UALSCharacterAnimInstance_CanDynamicTransition, "CanDynamicTransition" }, // 4023230183
		{ &Z_Construct_UFunction_UALSCharacterAnimInstance_CanRotateInPlace, "CanRotateInPlace" }, // 2688057249
		{ &Z_Construct_UFunction_UALSCharacterAnimInstance_CanTurnInPlace, "CanTurnInPlace" }, // 3887368823
		{ &Z_Construct_UFunction_UALSCharacterAnimInstance_OnJumped, "OnJumped" }, // 1723131088
		{ &Z_Construct_UFunction_UALSCharacterAnimInstance_OnPivot, "OnPivot" }, // 2468036783
		{ &Z_Construct_UFunction_UALSCharacterAnimInstance_PlayDynamicTransition, "PlayDynamicTransition" }, // 3475674417
		{ &Z_Construct_UFunction_UALSCharacterAnimInstance_PlayTransition, "PlayTransition" }, // 444699843
		{ &Z_Construct_UFunction_UALSCharacterAnimInstance_PlayTransitionChecked, "PlayTransitionChecked" }, // 1200933257
		{ &Z_Construct_UFunction_UALSCharacterAnimInstance_SetGroundedEntryState, "SetGroundedEntryState" }, // 1856780758
		{ &Z_Construct_UFunction_UALSCharacterAnimInstance_SetTrackedHipsDirection, "SetTrackedHipsDirection" }, // 1810063078
		{ &Z_Construct_UFunction_UALSCharacterAnimInstance_ShouldMoveCheck, "ShouldMoveCheck" }, // 3068326757
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UALSCharacterAnimInstance_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSCharacterAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Main anim instance class for character\n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Character/Animation/ALSCharacterAnimInstance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Character/Animation/ALSCharacterAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Main anim instance class for character" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_Character_MetaData[] = {
		{ "Category", "Read Only Data|Character Information" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** References */" },
#endif
		{ "ModuleRelativePath", "Public/Character/Animation/ALSCharacterAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "References" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSCharacterAnimInstance, Character), Z_Construct_UClass_AALSBaseCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_Character_MetaData), Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_Character_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_CharacterInformation_MetaData[] = {
		{ "Category", "Read Only Data|Character Information" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Character Information */" },
#endif
		{ "ModuleRelativePath", "Public/Character/Animation/ALSCharacterAnimInstance.h" },
		{ "ShowOnlyInnerProperties", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Character Information" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_CharacterInformation = { "CharacterInformation", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSCharacterAnimInstance, CharacterInformation), Z_Construct_UScriptStruct_FALSAnimCharacterInformation, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_CharacterInformation_MetaData), Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_CharacterInformation_MetaData) }; // 3194795416
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_MovementState_MetaData[] = {
		{ "Category", "Read Only Data|Character Information" },
		{ "ModuleRelativePath", "Public/Character/Animation/ALSCharacterAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_MovementState = { "MovementState", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSCharacterAnimInstance, MovementState), Z_Construct_UScriptStruct_FALSMovementState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_MovementState_MetaData), Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_MovementState_MetaData) }; // 471157869
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_MovementAction_MetaData[] = {
		{ "Category", "Read Only Data|Character Information" },
		{ "ModuleRelativePath", "Public/Character/Animation/ALSCharacterAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_MovementAction = { "MovementAction", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSCharacterAnimInstance, MovementAction), Z_Construct_UScriptStruct_FALSMovementAction, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_MovementAction_MetaData), Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_MovementAction_MetaData) }; // 1672789014
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_RotationMode_MetaData[] = {
		{ "Category", "Read Only Data|Character Information" },
		{ "ModuleRelativePath", "Public/Character/Animation/ALSCharacterAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_RotationMode = { "RotationMode", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSCharacterAnimInstance, RotationMode), Z_Construct_UScriptStruct_FALSRotationMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_RotationMode_MetaData), Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_RotationMode_MetaData) }; // 626738666
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_Gait_MetaData[] = {
		{ "Category", "Read Only Data|Character Information" },
		{ "ModuleRelativePath", "Public/Character/Animation/ALSCharacterAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_Gait = { "Gait", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSCharacterAnimInstance, Gait), Z_Construct_UScriptStruct_FALSGait, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_Gait_MetaData), Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_Gait_MetaData) }; // 2798236200
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_Stance_MetaData[] = {
		{ "Category", "Read Only Data|Character Information" },
		{ "ModuleRelativePath", "Public/Character/Animation/ALSCharacterAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_Stance = { "Stance", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSCharacterAnimInstance, Stance), Z_Construct_UScriptStruct_FALSStance, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_Stance_MetaData), Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_Stance_MetaData) }; // 1643846171
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_OverlayState_MetaData[] = {
		{ "Category", "Read Only Data|Character Information" },
		{ "ModuleRelativePath", "Public/Character/Animation/ALSCharacterAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_OverlayState = { "OverlayState", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSCharacterAnimInstance, OverlayState), Z_Construct_UScriptStruct_FALSOverlayState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_OverlayState_MetaData), Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_OverlayState_MetaData) }; // 408751610
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_Grounded_MetaData[] = {
		{ "Category", "Read Only Data|Anim Graph - Grounded" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Anim Graph - Grounded */" },
#endif
		{ "ModuleRelativePath", "Public/Character/Animation/ALSCharacterAnimInstance.h" },
		{ "ShowOnlyInnerProperties", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Anim Graph - Grounded" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_Grounded = { "Grounded", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSCharacterAnimInstance, Grounded), Z_Construct_UScriptStruct_FALSAnimGraphGrounded, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_Grounded_MetaData), Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_Grounded_MetaData) }; // 2273608184
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_VelocityBlend_MetaData[] = {
		{ "Category", "Read Only Data|Anim Graph - Grounded" },
		{ "ModuleRelativePath", "Public/Character/Animation/ALSCharacterAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_VelocityBlend = { "VelocityBlend", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSCharacterAnimInstance, VelocityBlend), Z_Construct_UScriptStruct_FALSVelocityBlend, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_VelocityBlend_MetaData), Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_VelocityBlend_MetaData) }; // 2009730132
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_LeanAmount_MetaData[] = {
		{ "Category", "Read Only Data|Anim Graph - Grounded" },
		{ "ModuleRelativePath", "Public/Character/Animation/ALSCharacterAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_LeanAmount = { "LeanAmount", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSCharacterAnimInstance, LeanAmount), Z_Construct_UScriptStruct_FALSLeanAmount, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_LeanAmount_MetaData), Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_LeanAmount_MetaData) }; // 2278959983
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_RelativeAccelerationAmount_MetaData[] = {
		{ "Category", "Read Only Data|Anim Graph - Grounded" },
		{ "ModuleRelativePath", "Public/Character/Animation/ALSCharacterAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_RelativeAccelerationAmount = { "RelativeAccelerationAmount", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSCharacterAnimInstance, RelativeAccelerationAmount), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_RelativeAccelerationAmount_MetaData), Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_RelativeAccelerationAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_GroundedEntryState_MetaData[] = {
		{ "Category", "Read Only Data|Anim Graph - Grounded" },
		{ "ModuleRelativePath", "Public/Character/Animation/ALSCharacterAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_GroundedEntryState = { "GroundedEntryState", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSCharacterAnimInstance, GroundedEntryState), Z_Construct_UScriptStruct_FALSGroundedEntryState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_GroundedEntryState_MetaData), Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_GroundedEntryState_MetaData) }; // 3596205702
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_MovementDirection_MetaData[] = {
		{ "Category", "Read Only Data|Anim Graph - Grounded" },
		{ "ModuleRelativePath", "Public/Character/Animation/ALSCharacterAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_MovementDirection = { "MovementDirection", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSCharacterAnimInstance, MovementDirection), Z_Construct_UScriptStruct_FALSMovementDirection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_MovementDirection_MetaData), Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_MovementDirection_MetaData) }; // 1977353456
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_InAir_MetaData[] = {
		{ "Category", "Read Only Data|Anim Graph - In Air" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Anim Graph - In Air */" },
#endif
		{ "ModuleRelativePath", "Public/Character/Animation/ALSCharacterAnimInstance.h" },
		{ "ShowOnlyInnerProperties", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Anim Graph - In Air" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_InAir = { "InAir", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSCharacterAnimInstance, InAir), Z_Construct_UScriptStruct_FALSAnimGraphInAir, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_InAir_MetaData), Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_InAir_MetaData) }; // 1251373788
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_AimingValues_MetaData[] = {
		{ "Category", "Read Only Data|Anim Graph - Aiming Values" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Anim Graph - Aiming Values */" },
#endif
		{ "ModuleRelativePath", "Public/Character/Animation/ALSCharacterAnimInstance.h" },
		{ "ShowOnlyInnerProperties", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Anim Graph - Aiming Values" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_AimingValues = { "AimingValues", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSCharacterAnimInstance, AimingValues), Z_Construct_UScriptStruct_FALSAnimGraphAimingValues, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_AimingValues_MetaData), Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_AimingValues_MetaData) }; // 3395056830
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_SmoothedAimingAngle_MetaData[] = {
		{ "Category", "Read Only Data|Anim Graph - Aiming Values" },
		{ "ModuleRelativePath", "Public/Character/Animation/ALSCharacterAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_SmoothedAimingAngle = { "SmoothedAimingAngle", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSCharacterAnimInstance, SmoothedAimingAngle), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_SmoothedAimingAngle_MetaData), Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_SmoothedAimingAngle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_FlailRate_MetaData[] = {
		{ "Category", "Read Only Data|Anim Graph - Ragdoll" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Anim Graph - Ragdoll */" },
#endif
		{ "ModuleRelativePath", "Public/Character/Animation/ALSCharacterAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Anim Graph - Ragdoll" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_FlailRate = { "FlailRate", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSCharacterAnimInstance, FlailRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_FlailRate_MetaData), Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_FlailRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_LayerBlendingValues_MetaData[] = {
		{ "Category", "Read Only Data|Anim Graph - Layer Blending" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Anim Graph - Layer Blending */" },
#endif
		{ "ModuleRelativePath", "Public/Character/Animation/ALSCharacterAnimInstance.h" },
		{ "ShowOnlyInnerProperties", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Anim Graph - Layer Blending" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_LayerBlendingValues = { "LayerBlendingValues", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSCharacterAnimInstance, LayerBlendingValues), Z_Construct_UScriptStruct_FALSAnimGraphLayerBlending, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_LayerBlendingValues_MetaData), Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_LayerBlendingValues_MetaData) }; // 1854436681
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_FootIKValues_MetaData[] = {
		{ "Category", "Read Only Data|Anim Graph - Foot IK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Anim Graph - Foot IK */" },
#endif
		{ "ModuleRelativePath", "Public/Character/Animation/ALSCharacterAnimInstance.h" },
		{ "ShowOnlyInnerProperties", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Anim Graph - Foot IK" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_FootIKValues = { "FootIKValues", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSCharacterAnimInstance, FootIKValues), Z_Construct_UScriptStruct_FALSAnimGraphFootIK, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_FootIKValues_MetaData), Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_FootIKValues_MetaData) }; // 2622995893
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_TurnInPlaceValues_MetaData[] = {
		{ "Category", "Configuration|Turn In Place" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Turn In Place */" },
#endif
		{ "ModuleRelativePath", "Public/Character/Animation/ALSCharacterAnimInstance.h" },
		{ "ShowOnlyInnerProperties", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Turn In Place" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_TurnInPlaceValues = { "TurnInPlaceValues", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSCharacterAnimInstance, TurnInPlaceValues), Z_Construct_UScriptStruct_FALSAnimTurnInPlace, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_TurnInPlaceValues_MetaData), Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_TurnInPlaceValues_MetaData) }; // 2851734283
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_RotateInPlace_MetaData[] = {
		{ "Category", "Configuration|Rotate In Place" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Rotate In Place */" },
#endif
		{ "ModuleRelativePath", "Public/Character/Animation/ALSCharacterAnimInstance.h" },
		{ "ShowOnlyInnerProperties", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rotate In Place" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_RotateInPlace = { "RotateInPlace", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSCharacterAnimInstance, RotateInPlace), Z_Construct_UScriptStruct_FALSAnimRotateInPlace, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_RotateInPlace_MetaData), Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_RotateInPlace_MetaData) }; // 3621750084
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_Config_MetaData[] = {
		{ "Category", "Configuration|Main Configuration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Configuration */" },
#endif
		{ "ModuleRelativePath", "Public/Character/Animation/ALSCharacterAnimInstance.h" },
		{ "ShowOnlyInnerProperties", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Configuration" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSCharacterAnimInstance, Config), Z_Construct_UScriptStruct_FALSAnimConfiguration, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_Config_MetaData), Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_Config_MetaData) }; // 376508629
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_DiagonalScaleAmountCurve_MetaData[] = {
		{ "Category", "Configuration|Blend Curves" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Blend Curves */" },
#endif
		{ "ModuleRelativePath", "Public/Character/Animation/ALSCharacterAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blend Curves" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_DiagonalScaleAmountCurve = { "DiagonalScaleAmountCurve", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSCharacterAnimInstance, DiagonalScaleAmountCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_DiagonalScaleAmountCurve_MetaData), Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_DiagonalScaleAmountCurve_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_StrideBlend_N_Walk_MetaData[] = {
		{ "Category", "Configuration|Blend Curves" },
		{ "ModuleRelativePath", "Public/Character/Animation/ALSCharacterAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_StrideBlend_N_Walk = { "StrideBlend_N_Walk", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSCharacterAnimInstance, StrideBlend_N_Walk), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_StrideBlend_N_Walk_MetaData), Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_StrideBlend_N_Walk_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_StrideBlend_N_Run_MetaData[] = {
		{ "Category", "Configuration|Blend Curves" },
		{ "ModuleRelativePath", "Public/Character/Animation/ALSCharacterAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_StrideBlend_N_Run = { "StrideBlend_N_Run", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSCharacterAnimInstance, StrideBlend_N_Run), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_StrideBlend_N_Run_MetaData), Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_StrideBlend_N_Run_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_StrideBlend_C_Walk_MetaData[] = {
		{ "Category", "Configuration|Blend Curves" },
		{ "ModuleRelativePath", "Public/Character/Animation/ALSCharacterAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_StrideBlend_C_Walk = { "StrideBlend_C_Walk", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSCharacterAnimInstance, StrideBlend_C_Walk), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_StrideBlend_C_Walk_MetaData), Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_StrideBlend_C_Walk_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_LandPredictionCurve_MetaData[] = {
		{ "Category", "Configuration|Blend Curves" },
		{ "ModuleRelativePath", "Public/Character/Animation/ALSCharacterAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_LandPredictionCurve = { "LandPredictionCurve", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSCharacterAnimInstance, LandPredictionCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_LandPredictionCurve_MetaData), Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_LandPredictionCurve_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_LeanInAirCurve_MetaData[] = {
		{ "Category", "Configuration|Blend Curves" },
		{ "ModuleRelativePath", "Public/Character/Animation/ALSCharacterAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_LeanInAirCurve = { "LeanInAirCurve", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSCharacterAnimInstance, LeanInAirCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_LeanInAirCurve_MetaData), Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_LeanInAirCurve_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_YawOffset_FB_MetaData[] = {
		{ "Category", "Configuration|Blend Curves" },
		{ "ModuleRelativePath", "Public/Character/Animation/ALSCharacterAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_YawOffset_FB = { "YawOffset_FB", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSCharacterAnimInstance, YawOffset_FB), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_YawOffset_FB_MetaData), Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_YawOffset_FB_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_YawOffset_LR_MetaData[] = {
		{ "Category", "Configuration|Blend Curves" },
		{ "ModuleRelativePath", "Public/Character/Animation/ALSCharacterAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_YawOffset_LR = { "YawOffset_LR", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSCharacterAnimInstance, YawOffset_LR), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_YawOffset_LR_MetaData), Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_YawOffset_LR_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_TransitionAnim_R_MetaData[] = {
		{ "Category", "Configuration|Dynamic Transition" },
		{ "ModuleRelativePath", "Public/Character/Animation/ALSCharacterAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_TransitionAnim_R = { "TransitionAnim_R", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSCharacterAnimInstance, TransitionAnim_R), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_TransitionAnim_R_MetaData), Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_TransitionAnim_R_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_TransitionAnim_L_MetaData[] = {
		{ "Category", "Configuration|Dynamic Transition" },
		{ "ModuleRelativePath", "Public/Character/Animation/ALSCharacterAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_TransitionAnim_L = { "TransitionAnim_L", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSCharacterAnimInstance, TransitionAnim_L), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_TransitionAnim_L_MetaData), Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_TransitionAnim_L_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_IkFootL_BoneName_MetaData[] = {
		{ "Category", "Configuration|Anim Graph - Foot IK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** IK Bone Names */" },
#endif
		{ "ModuleRelativePath", "Public/Character/Animation/ALSCharacterAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "IK Bone Names" },
#endif
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_IkFootL_BoneName = { "IkFootL_BoneName", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSCharacterAnimInstance, IkFootL_BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_IkFootL_BoneName_MetaData), Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_IkFootL_BoneName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_IkFootR_BoneName_MetaData[] = {
		{ "Category", "Configuration|Anim Graph - Foot IK" },
		{ "ModuleRelativePath", "Public/Character/Animation/ALSCharacterAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_IkFootR_BoneName = { "IkFootR_BoneName", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSCharacterAnimInstance, IkFootR_BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_IkFootR_BoneName_MetaData), Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_IkFootR_BoneName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_ALSDebugComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/Animation/ALSCharacterAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_ALSDebugComponent = { "ALSDebugComponent", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSCharacterAnimInstance, ALSDebugComponent), Z_Construct_UClass_UALSDebugComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_ALSDebugComponent_MetaData), Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_ALSDebugComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UALSCharacterAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_Character,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_CharacterInformation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_MovementState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_MovementAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_RotationMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_Gait,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_Stance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_OverlayState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_Grounded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_VelocityBlend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_LeanAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_RelativeAccelerationAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_GroundedEntryState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_MovementDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_InAir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_AimingValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_SmoothedAimingAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_FlailRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_LayerBlendingValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_FootIKValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_TurnInPlaceValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_RotateInPlace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_Config,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_DiagonalScaleAmountCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_StrideBlend_N_Walk,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_StrideBlend_N_Run,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_StrideBlend_C_Walk,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_LandPredictionCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_LeanInAirCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_YawOffset_FB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_YawOffset_LR,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_TransitionAnim_R,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_TransitionAnim_L,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_IkFootL_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_IkFootR_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSCharacterAnimInstance_Statics::NewProp_ALSDebugComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UALSCharacterAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UALSCharacterAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UALSCharacterAnimInstance_Statics::ClassParams = {
		&UALSCharacterAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UALSCharacterAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UALSCharacterAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSCharacterAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UALSCharacterAnimInstance_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UALSCharacterAnimInstance_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UALSCharacterAnimInstance()
	{
		if (!Z_Registration_Info_UClass_UALSCharacterAnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UALSCharacterAnimInstance.OuterSingleton, Z_Construct_UClass_UALSCharacterAnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UALSCharacterAnimInstance.OuterSingleton;
	}
	template<> ALSV4_CPP_API UClass* StaticClass<UALSCharacterAnimInstance>()
	{
		return UALSCharacterAnimInstance::StaticClass();
	}
	UALSCharacterAnimInstance::UALSCharacterAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UALSCharacterAnimInstance);
	UALSCharacterAnimInstance::~UALSCharacterAnimInstance() {}
	struct Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Character_Animation_ALSCharacterAnimInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Character_Animation_ALSCharacterAnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UALSCharacterAnimInstance, UALSCharacterAnimInstance::StaticClass, TEXT("UALSCharacterAnimInstance"), &Z_Registration_Info_UClass_UALSCharacterAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UALSCharacterAnimInstance), 4265726897U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Character_Animation_ALSCharacterAnimInstance_h_3915810477(TEXT("/Script/ALSV4_CPP"),
		Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Character_Animation_ALSCharacterAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Character_Animation_ALSCharacterAnimInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
