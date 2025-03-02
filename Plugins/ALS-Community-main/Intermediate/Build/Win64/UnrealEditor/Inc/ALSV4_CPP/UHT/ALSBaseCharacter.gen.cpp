// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALSV4_CPP/Public/Character/ALSBaseCharacter.h"
#include "../../Source/Runtime/Engine/Classes/Engine/DataTable.h"
#include "ALSV4_CPP/Public/Library/ALSCharacterStructLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeALSBaseCharacter() {}
// Cross Module References
	ALSV4_CPP_API UClass* Z_Construct_UClass_AALSBaseCharacter();
	ALSV4_CPP_API UClass* Z_Construct_UClass_AALSBaseCharacter_NoRegister();
	ALSV4_CPP_API UClass* Z_Construct_UClass_UALSCharacterMovementComponent_NoRegister();
	ALSV4_CPP_API UClass* Z_Construct_UClass_UALSDebugComponent_NoRegister();
	ALSV4_CPP_API UClass* Z_Construct_UClass_UALSPlayerCameraBehavior_NoRegister();
	ALSV4_CPP_API UEnum* Z_Construct_UEnum_ALSV4_CPP_EALSGait();
	ALSV4_CPP_API UEnum* Z_Construct_UEnum_ALSV4_CPP_EALSGroundedEntryState();
	ALSV4_CPP_API UEnum* Z_Construct_UEnum_ALSV4_CPP_EALSMovementAction();
	ALSV4_CPP_API UEnum* Z_Construct_UEnum_ALSV4_CPP_EALSMovementState();
	ALSV4_CPP_API UEnum* Z_Construct_UEnum_ALSV4_CPP_EALSOverlayState();
	ALSV4_CPP_API UEnum* Z_Construct_UEnum_ALSV4_CPP_EALSRotationMode();
	ALSV4_CPP_API UEnum* Z_Construct_UEnum_ALSV4_CPP_EALSStance();
	ALSV4_CPP_API UEnum* Z_Construct_UEnum_ALSV4_CPP_EALSViewMode();
	ALSV4_CPP_API UFunction* Z_Construct_UDelegateFunction_ALSV4_CPP_JumpPressedSignature__DelegateSignature();
	ALSV4_CPP_API UFunction* Z_Construct_UDelegateFunction_ALSV4_CPP_OnJumpedSignature__DelegateSignature();
	ALSV4_CPP_API UFunction* Z_Construct_UDelegateFunction_ALSV4_CPP_RagdollStateChangedSignature__DelegateSignature();
	ALSV4_CPP_API UScriptStruct* Z_Construct_UScriptStruct_FALSMovementSettings();
	ALSV4_CPP_API UScriptStruct* Z_Construct_UScriptStruct_FALSMovementStateSettings();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
	UPackage* Z_Construct_UPackage__Script_ALSV4_CPP();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ALSV4_CPP_JumpPressedSignature__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ALSV4_CPP_JumpPressedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ALSV4_CPP_JumpPressedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ALSV4_CPP, nullptr, "JumpPressedSignature__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ALSV4_CPP_JumpPressedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ALSV4_CPP_JumpPressedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_ALSV4_CPP_JumpPressedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ALSV4_CPP_JumpPressedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FJumpPressedSignature_DelegateWrapper(const FMulticastScriptDelegate& JumpPressedSignature)
{
	JumpPressedSignature.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_ALSV4_CPP_OnJumpedSignature__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ALSV4_CPP_OnJumpedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ALSV4_CPP_OnJumpedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ALSV4_CPP, nullptr, "OnJumpedSignature__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ALSV4_CPP_OnJumpedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ALSV4_CPP_OnJumpedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_ALSV4_CPP_OnJumpedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ALSV4_CPP_OnJumpedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnJumpedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnJumpedSignature)
{
	OnJumpedSignature.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_ALSV4_CPP_RagdollStateChangedSignature__DelegateSignature_Statics
	{
		struct _Script_ALSV4_CPP_eventRagdollStateChangedSignature_Parms
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
	void Z_Construct_UDelegateFunction_ALSV4_CPP_RagdollStateChangedSignature__DelegateSignature_Statics::NewProp_bRagdollState_SetBit(void* Obj)
	{
		((_Script_ALSV4_CPP_eventRagdollStateChangedSignature_Parms*)Obj)->bRagdollState = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_ALSV4_CPP_RagdollStateChangedSignature__DelegateSignature_Statics::NewProp_bRagdollState = { "bRagdollState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_ALSV4_CPP_eventRagdollStateChangedSignature_Parms), &Z_Construct_UDelegateFunction_ALSV4_CPP_RagdollStateChangedSignature__DelegateSignature_Statics::NewProp_bRagdollState_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ALSV4_CPP_RagdollStateChangedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ALSV4_CPP_RagdollStateChangedSignature__DelegateSignature_Statics::NewProp_bRagdollState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ALSV4_CPP_RagdollStateChangedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ALSV4_CPP_RagdollStateChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ALSV4_CPP, nullptr, "RagdollStateChangedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ALSV4_CPP_RagdollStateChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ALSV4_CPP_RagdollStateChangedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ALSV4_CPP_RagdollStateChangedSignature__DelegateSignature_Statics::_Script_ALSV4_CPP_eventRagdollStateChangedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ALSV4_CPP_RagdollStateChangedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ALSV4_CPP_RagdollStateChangedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ALSV4_CPP_RagdollStateChangedSignature__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_ALSV4_CPP_RagdollStateChangedSignature__DelegateSignature_Statics::_Script_ALSV4_CPP_eventRagdollStateChangedSignature_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_ALSV4_CPP_RagdollStateChangedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ALSV4_CPP_RagdollStateChangedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FRagdollStateChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& RagdollStateChangedSignature, bool bRagdollState)
{
	struct _Script_ALSV4_CPP_eventRagdollStateChangedSignature_Parms
	{
		bool bRagdollState;
	};
	_Script_ALSV4_CPP_eventRagdollStateChangedSignature_Parms Parms;
	Parms.bRagdollState=bRagdollState ? true : false;
	RagdollStateChangedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(AALSBaseCharacter::execOnRep_VisibleMesh)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_PreviousSkeletalMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_VisibleMesh(Z_Param_PreviousSkeletalMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execOnRep_OverlayState)
	{
		P_GET_ENUM(EALSOverlayState,Z_Param_PrevOverlayState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_OverlayState(EALSOverlayState(Z_Param_PrevOverlayState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execOnRep_ViewMode)
	{
		P_GET_ENUM(EALSViewMode,Z_Param_PrevViewMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ViewMode(EALSViewMode(Z_Param_PrevViewMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execOnRep_RotationMode)
	{
		P_GET_ENUM(EALSRotationMode,Z_Param_PrevRotMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_RotationMode(EALSRotationMode(Z_Param_PrevRotMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execLookingDirectionAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LookingDirectionAction_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execVelocityDirectionAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->VelocityDirectionAction_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execRagdollAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RagdollAction_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execWalkAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WalkAction_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execStanceAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StanceAction_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execCameraHeldAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CameraHeldAction_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execCameraTapAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CameraTapAction_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execAimAction)
	{
		P_GET_UBOOL(Z_Param_bValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AimAction_Implementation(Z_Param_bValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execSprintAction)
	{
		P_GET_UBOOL(Z_Param_bValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SprintAction_Implementation(Z_Param_bValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execJumpAction)
	{
		P_GET_UBOOL(Z_Param_bValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->JumpAction_Implementation(Z_Param_bValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execCameraRightAction)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CameraRightAction_Implementation(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execCameraUpAction)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CameraUpAction_Implementation(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execRightMovementAction)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RightMovementAction_Implementation(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execForwardMovementAction)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ForwardMovementAction_Implementation(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execGetAimYawRate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAimYawRate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execGetAimingRotation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->GetAimingRotation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execGetSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execGetMovementInputAmount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMovementInputAmount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execGetMovementInput)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetMovementInput();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execIsMoving)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsMoving();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execGetAcceleration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetAcceleration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execSetCameraBehavior)
	{
		P_GET_OBJECT(UALSPlayerCameraBehavior,Z_Param_CamBeh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCameraBehavior(Z_Param_CamBeh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execGetCameraParameters)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_TPFOVOut);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_FPFOVOut);
		P_GET_UBOOL_REF(Z_Param_Out_bRightShoulderOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetCameraParameters(Z_Param_Out_TPFOVOut,Z_Param_Out_FPFOVOut,Z_Param_Out_bRightShoulderOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execGetFirstPersonCameraTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetFirstPersonCameraTarget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execGetThirdPersonPivotTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetThirdPersonPivotTarget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execGetThirdPersonTraceParams)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TraceOrigin);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_TraceRadius);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<ECollisionChannel>*)Z_Param__Result=P_THIS->GetThirdPersonTraceParams(Z_Param_Out_TraceOrigin,Z_Param_Out_TraceRadius);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execSetRightShoulder)
	{
		P_GET_UBOOL(Z_Param_bNewRightShoulder);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRightShoulder(Z_Param_bNewRightShoulder);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execIsRightShoulder)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRightShoulder();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execServer_SetVisibleMesh)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_NewSkeletalMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_SetVisibleMesh_Implementation(Z_Param_NewSkeletalMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execSetVisibleMesh)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_NewSkeletalMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVisibleMesh(Z_Param_NewSkeletalMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execGetAnimCurveValue)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_CurveName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAnimCurveValue(Z_Param_CurveName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execReplicated_PlayMontage)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PlayRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Replicated_PlayMontage_Implementation(Z_Param_Montage,Z_Param_PlayRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execOnBreakfall)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBreakfall_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execCanSprint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanSprint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execGetActualGait)
	{
		P_GET_ENUM(EALSGait,Z_Param_AllowedGait);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EALSGait*)Z_Param__Result=P_THIS->GetActualGait(EALSGait(Z_Param_AllowedGait));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execGetAllowedGait)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EALSGait*)Z_Param__Result=P_THIS->GetAllowedGait();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execGetTargetMovementSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FALSMovementSettings*)Z_Param__Result=P_THIS->GetTargetMovementSettings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execHasMovementInput)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasMovementInput();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execSetActorLocationAndTargetRotation)
	{
		P_GET_STRUCT(FVector,Z_Param_NewLocation);
		P_GET_STRUCT(FRotator,Z_Param_NewRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActorLocationAndTargetRotation(Z_Param_NewLocation,Z_Param_NewRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execServer_SetDesiredRotationMode)
	{
		P_GET_ENUM(EALSRotationMode,Z_Param_NewRotMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_SetDesiredRotationMode_Implementation(EALSRotationMode(Z_Param_NewRotMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execSetDesiredRotationMode)
	{
		P_GET_ENUM(EALSRotationMode,Z_Param_NewRotMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDesiredRotationMode(EALSRotationMode(Z_Param_NewRotMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execGetDesiredRotationMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EALSRotationMode*)Z_Param__Result=P_THIS->GetDesiredRotationMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execServer_SetDesiredGait)
	{
		P_GET_ENUM(EALSGait,Z_Param_NewGait);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_SetDesiredGait_Implementation(EALSGait(Z_Param_NewGait));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execSetDesiredGait)
	{
		P_GET_ENUM(EALSGait,Z_Param_NewGait);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDesiredGait(EALSGait(Z_Param_NewGait));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execServer_SetDesiredStance)
	{
		P_GET_ENUM(EALSStance,Z_Param_NewStance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_SetDesiredStance_Implementation(EALSStance(Z_Param_NewStance));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execSetDesiredStance)
	{
		P_GET_ENUM(EALSStance,Z_Param_NewStance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDesiredStance(EALSStance(Z_Param_NewStance));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execGetDesiredStance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EALSStance*)Z_Param__Result=P_THIS->GetDesiredStance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execMulticast_RagdollEnd)
	{
		P_GET_STRUCT(FVector,Z_Param_CharacterLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_RagdollEnd_Implementation(Z_Param_CharacterLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execServer_RagdollEnd)
	{
		P_GET_STRUCT(FVector,Z_Param_CharacterLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_RagdollEnd_Implementation(Z_Param_CharacterLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execReplicatedRagdollEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReplicatedRagdollEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execMulticast_RagdollStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_RagdollStart_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execServer_RagdollStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_RagdollStart_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execReplicatedRagdollStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReplicatedRagdollStart();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execMulticast_PlayMontage)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PlayRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_PlayMontage_Implementation(Z_Param_Montage,Z_Param_PlayRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execServer_PlayMontage)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PlayRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_PlayMontage_Implementation(Z_Param_Montage,Z_Param_PlayRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execMulticast_OnJumped)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_OnJumped_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execEventOnJumped)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EventOnJumped();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execMulticast_OnLanded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_OnLanded_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execEventOnLanded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EventOnLanded();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execGetGroundedEntryState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EALSGroundedEntryState*)Z_Param__Result=P_THIS->GetGroundedEntryState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execGetOverlayState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EALSOverlayState*)Z_Param__Result=P_THIS->GetOverlayState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execServer_SetOverlayState)
	{
		P_GET_ENUM(EALSOverlayState,Z_Param_NewState);
		P_GET_UBOOL(Z_Param_bForce);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_SetOverlayState_Implementation(EALSOverlayState(Z_Param_NewState),Z_Param_bForce);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execSetGroundedEntryState)
	{
		P_GET_ENUM(EALSGroundedEntryState,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGroundedEntryState(EALSGroundedEntryState(Z_Param_NewState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execSetOverlayState)
	{
		P_GET_ENUM(EALSOverlayState,Z_Param_NewState);
		P_GET_UBOOL(Z_Param_bForce);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOverlayState(EALSOverlayState(Z_Param_NewState),Z_Param_bForce);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execGetViewMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EALSViewMode*)Z_Param__Result=P_THIS->GetViewMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execServer_SetViewMode)
	{
		P_GET_ENUM(EALSViewMode,Z_Param_NewViewMode);
		P_GET_UBOOL(Z_Param_bForce);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_SetViewMode_Implementation(EALSViewMode(Z_Param_NewViewMode),Z_Param_bForce);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execSetViewMode)
	{
		P_GET_ENUM(EALSViewMode,Z_Param_NewViewMode);
		P_GET_UBOOL(Z_Param_bForce);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetViewMode(EALSViewMode(Z_Param_NewViewMode),Z_Param_bForce);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execGetRotationMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EALSRotationMode*)Z_Param__Result=P_THIS->GetRotationMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execServer_SetRotationMode)
	{
		P_GET_ENUM(EALSRotationMode,Z_Param_NewRotationMode);
		P_GET_UBOOL(Z_Param_bForce);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_SetRotationMode_Implementation(EALSRotationMode(Z_Param_NewRotationMode),Z_Param_bForce);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execSetRotationMode)
	{
		P_GET_ENUM(EALSRotationMode,Z_Param_NewRotationMode);
		P_GET_UBOOL(Z_Param_bForce);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRotationMode(EALSRotationMode(Z_Param_NewRotationMode),Z_Param_bForce);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execGetDesiredGait)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EALSGait*)Z_Param__Result=P_THIS->GetDesiredGait();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execGetGait)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EALSGait*)Z_Param__Result=P_THIS->GetGait();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execSetGait)
	{
		P_GET_ENUM(EALSGait,Z_Param_NewGait);
		P_GET_UBOOL(Z_Param_bForce);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGait(EALSGait(Z_Param_NewGait),Z_Param_bForce);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execGetOverlayOverrideState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetOverlayOverrideState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execSetOverlayOverrideState)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOverlayOverrideState(Z_Param_NewState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execGetStance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EALSStance*)Z_Param__Result=P_THIS->GetStance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execSetStance)
	{
		P_GET_ENUM(EALSStance,Z_Param_NewStance);
		P_GET_UBOOL(Z_Param_bForce);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStance(EALSStance(Z_Param_NewStance),Z_Param_bForce);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execGetMovementAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EALSMovementAction*)Z_Param__Result=P_THIS->GetMovementAction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execSetMovementAction)
	{
		P_GET_ENUM(EALSMovementAction,Z_Param_NewAction);
		P_GET_UBOOL(Z_Param_bForce);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMovementAction(EALSMovementAction(Z_Param_NewAction),Z_Param_bForce);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execGetPrevMovementState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EALSMovementState*)Z_Param__Result=P_THIS->GetPrevMovementState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execGetMovementState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EALSMovementState*)Z_Param__Result=P_THIS->GetMovementState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execSetMovementState)
	{
		P_GET_ENUM(EALSMovementState,Z_Param_NewState);
		P_GET_UBOOL(Z_Param_bForce);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMovementState(EALSMovementState(Z_Param_NewState),Z_Param_bForce);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execServer_SetMeshLocationDuringRagdoll)
	{
		P_GET_STRUCT(FVector,Z_Param_MeshLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_SetMeshLocationDuringRagdoll_Implementation(Z_Param_MeshLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execRagdollEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RagdollEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execRagdollStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RagdollStart();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSBaseCharacter::execGetMyMovementComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UALSCharacterMovementComponent**)Z_Param__Result=P_THIS->GetMyMovementComponent();
		P_NATIVE_END;
	}
	struct ALSBaseCharacter_eventAimAction_Parms
	{
		bool bValue;
	};
	struct ALSBaseCharacter_eventCameraRightAction_Parms
	{
		float Value;
	};
	struct ALSBaseCharacter_eventCameraUpAction_Parms
	{
		float Value;
	};
	struct ALSBaseCharacter_eventForwardMovementAction_Parms
	{
		float Value;
	};
	struct ALSBaseCharacter_eventGetGetUpAnimation_Parms
	{
		bool bRagdollFaceUpState;
		UAnimMontage* ReturnValue;

		/** Constructor, initializes return property only **/
		ALSBaseCharacter_eventGetGetUpAnimation_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	struct ALSBaseCharacter_eventGetRollAnimation_Parms
	{
		UAnimMontage* ReturnValue;

		/** Constructor, initializes return property only **/
		ALSBaseCharacter_eventGetRollAnimation_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	struct ALSBaseCharacter_eventJumpAction_Parms
	{
		bool bValue;
	};
	struct ALSBaseCharacter_eventMulticast_PlayMontage_Parms
	{
		UAnimMontage* Montage;
		float PlayRate;
	};
	struct ALSBaseCharacter_eventMulticast_RagdollEnd_Parms
	{
		FVector CharacterLocation;
	};
	struct ALSBaseCharacter_eventReplicated_PlayMontage_Parms
	{
		UAnimMontage* Montage;
		float PlayRate;
	};
	struct ALSBaseCharacter_eventRightMovementAction_Parms
	{
		float Value;
	};
	struct ALSBaseCharacter_eventServer_PlayMontage_Parms
	{
		UAnimMontage* Montage;
		float PlayRate;
	};
	struct ALSBaseCharacter_eventServer_RagdollEnd_Parms
	{
		FVector CharacterLocation;
	};
	struct ALSBaseCharacter_eventServer_SetDesiredGait_Parms
	{
		EALSGait NewGait;
	};
	struct ALSBaseCharacter_eventServer_SetDesiredRotationMode_Parms
	{
		EALSRotationMode NewRotMode;
	};
	struct ALSBaseCharacter_eventServer_SetDesiredStance_Parms
	{
		EALSStance NewStance;
	};
	struct ALSBaseCharacter_eventServer_SetMeshLocationDuringRagdoll_Parms
	{
		FVector MeshLocation;
	};
	struct ALSBaseCharacter_eventServer_SetOverlayState_Parms
	{
		EALSOverlayState NewState;
		bool bForce;
	};
	struct ALSBaseCharacter_eventServer_SetRotationMode_Parms
	{
		EALSRotationMode NewRotationMode;
		bool bForce;
	};
	struct ALSBaseCharacter_eventServer_SetViewMode_Parms
	{
		EALSViewMode NewViewMode;
		bool bForce;
	};
	struct ALSBaseCharacter_eventServer_SetVisibleMesh_Parms
	{
		USkeletalMesh* NewSkeletalMesh;
	};
	struct ALSBaseCharacter_eventSprintAction_Parms
	{
		bool bValue;
	};
	static FName NAME_AALSBaseCharacter_AimAction = FName(TEXT("AimAction"));
	void AALSBaseCharacter::AimAction(bool bValue)
	{
		ALSBaseCharacter_eventAimAction_Parms Parms;
		Parms.bValue=bValue ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AALSBaseCharacter_AimAction),&Parms);
	}
	static FName NAME_AALSBaseCharacter_CameraHeldAction = FName(TEXT("CameraHeldAction"));
	void AALSBaseCharacter::CameraHeldAction()
	{
		ProcessEvent(FindFunctionChecked(NAME_AALSBaseCharacter_CameraHeldAction),NULL);
	}
	static FName NAME_AALSBaseCharacter_CameraRightAction = FName(TEXT("CameraRightAction"));
	void AALSBaseCharacter::CameraRightAction(float Value)
	{
		ALSBaseCharacter_eventCameraRightAction_Parms Parms;
		Parms.Value=Value;
		ProcessEvent(FindFunctionChecked(NAME_AALSBaseCharacter_CameraRightAction),&Parms);
	}
	static FName NAME_AALSBaseCharacter_CameraTapAction = FName(TEXT("CameraTapAction"));
	void AALSBaseCharacter::CameraTapAction()
	{
		ProcessEvent(FindFunctionChecked(NAME_AALSBaseCharacter_CameraTapAction),NULL);
	}
	static FName NAME_AALSBaseCharacter_CameraUpAction = FName(TEXT("CameraUpAction"));
	void AALSBaseCharacter::CameraUpAction(float Value)
	{
		ALSBaseCharacter_eventCameraUpAction_Parms Parms;
		Parms.Value=Value;
		ProcessEvent(FindFunctionChecked(NAME_AALSBaseCharacter_CameraUpAction),&Parms);
	}
	static FName NAME_AALSBaseCharacter_ForwardMovementAction = FName(TEXT("ForwardMovementAction"));
	void AALSBaseCharacter::ForwardMovementAction(float Value)
	{
		ALSBaseCharacter_eventForwardMovementAction_Parms Parms;
		Parms.Value=Value;
		ProcessEvent(FindFunctionChecked(NAME_AALSBaseCharacter_ForwardMovementAction),&Parms);
	}
	static FName NAME_AALSBaseCharacter_GetGetUpAnimation = FName(TEXT("GetGetUpAnimation"));
	UAnimMontage* AALSBaseCharacter::GetGetUpAnimation(bool bRagdollFaceUpState)
	{
		ALSBaseCharacter_eventGetGetUpAnimation_Parms Parms;
		Parms.bRagdollFaceUpState=bRagdollFaceUpState ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AALSBaseCharacter_GetGetUpAnimation),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AALSBaseCharacter_GetRollAnimation = FName(TEXT("GetRollAnimation"));
	UAnimMontage* AALSBaseCharacter::GetRollAnimation()
	{
		ALSBaseCharacter_eventGetRollAnimation_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AALSBaseCharacter_GetRollAnimation),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AALSBaseCharacter_JumpAction = FName(TEXT("JumpAction"));
	void AALSBaseCharacter::JumpAction(bool bValue)
	{
		ALSBaseCharacter_eventJumpAction_Parms Parms;
		Parms.bValue=bValue ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AALSBaseCharacter_JumpAction),&Parms);
	}
	static FName NAME_AALSBaseCharacter_LookingDirectionAction = FName(TEXT("LookingDirectionAction"));
	void AALSBaseCharacter::LookingDirectionAction()
	{
		ProcessEvent(FindFunctionChecked(NAME_AALSBaseCharacter_LookingDirectionAction),NULL);
	}
	static FName NAME_AALSBaseCharacter_Multicast_OnJumped = FName(TEXT("Multicast_OnJumped"));
	void AALSBaseCharacter::Multicast_OnJumped()
	{
		ProcessEvent(FindFunctionChecked(NAME_AALSBaseCharacter_Multicast_OnJumped),NULL);
	}
	static FName NAME_AALSBaseCharacter_Multicast_OnLanded = FName(TEXT("Multicast_OnLanded"));
	void AALSBaseCharacter::Multicast_OnLanded()
	{
		ProcessEvent(FindFunctionChecked(NAME_AALSBaseCharacter_Multicast_OnLanded),NULL);
	}
	static FName NAME_AALSBaseCharacter_Multicast_PlayMontage = FName(TEXT("Multicast_PlayMontage"));
	void AALSBaseCharacter::Multicast_PlayMontage(UAnimMontage* Montage, float PlayRate)
	{
		ALSBaseCharacter_eventMulticast_PlayMontage_Parms Parms;
		Parms.Montage=Montage;
		Parms.PlayRate=PlayRate;
		ProcessEvent(FindFunctionChecked(NAME_AALSBaseCharacter_Multicast_PlayMontage),&Parms);
	}
	static FName NAME_AALSBaseCharacter_Multicast_RagdollEnd = FName(TEXT("Multicast_RagdollEnd"));
	void AALSBaseCharacter::Multicast_RagdollEnd(FVector CharacterLocation)
	{
		ALSBaseCharacter_eventMulticast_RagdollEnd_Parms Parms;
		Parms.CharacterLocation=CharacterLocation;
		ProcessEvent(FindFunctionChecked(NAME_AALSBaseCharacter_Multicast_RagdollEnd),&Parms);
	}
	static FName NAME_AALSBaseCharacter_Multicast_RagdollStart = FName(TEXT("Multicast_RagdollStart"));
	void AALSBaseCharacter::Multicast_RagdollStart()
	{
		ProcessEvent(FindFunctionChecked(NAME_AALSBaseCharacter_Multicast_RagdollStart),NULL);
	}
	static FName NAME_AALSBaseCharacter_OnBreakfall = FName(TEXT("OnBreakfall"));
	void AALSBaseCharacter::OnBreakfall()
	{
		ProcessEvent(FindFunctionChecked(NAME_AALSBaseCharacter_OnBreakfall),NULL);
	}
	static FName NAME_AALSBaseCharacter_RagdollAction = FName(TEXT("RagdollAction"));
	void AALSBaseCharacter::RagdollAction()
	{
		ProcessEvent(FindFunctionChecked(NAME_AALSBaseCharacter_RagdollAction),NULL);
	}
	static FName NAME_AALSBaseCharacter_Replicated_PlayMontage = FName(TEXT("Replicated_PlayMontage"));
	void AALSBaseCharacter::Replicated_PlayMontage(UAnimMontage* Montage, float PlayRate)
	{
		ALSBaseCharacter_eventReplicated_PlayMontage_Parms Parms;
		Parms.Montage=Montage;
		Parms.PlayRate=PlayRate;
		ProcessEvent(FindFunctionChecked(NAME_AALSBaseCharacter_Replicated_PlayMontage),&Parms);
	}
	static FName NAME_AALSBaseCharacter_RightMovementAction = FName(TEXT("RightMovementAction"));
	void AALSBaseCharacter::RightMovementAction(float Value)
	{
		ALSBaseCharacter_eventRightMovementAction_Parms Parms;
		Parms.Value=Value;
		ProcessEvent(FindFunctionChecked(NAME_AALSBaseCharacter_RightMovementAction),&Parms);
	}
	static FName NAME_AALSBaseCharacter_Server_PlayMontage = FName(TEXT("Server_PlayMontage"));
	void AALSBaseCharacter::Server_PlayMontage(UAnimMontage* Montage, float PlayRate)
	{
		ALSBaseCharacter_eventServer_PlayMontage_Parms Parms;
		Parms.Montage=Montage;
		Parms.PlayRate=PlayRate;
		ProcessEvent(FindFunctionChecked(NAME_AALSBaseCharacter_Server_PlayMontage),&Parms);
	}
	static FName NAME_AALSBaseCharacter_Server_RagdollEnd = FName(TEXT("Server_RagdollEnd"));
	void AALSBaseCharacter::Server_RagdollEnd(FVector CharacterLocation)
	{
		ALSBaseCharacter_eventServer_RagdollEnd_Parms Parms;
		Parms.CharacterLocation=CharacterLocation;
		ProcessEvent(FindFunctionChecked(NAME_AALSBaseCharacter_Server_RagdollEnd),&Parms);
	}
	static FName NAME_AALSBaseCharacter_Server_RagdollStart = FName(TEXT("Server_RagdollStart"));
	void AALSBaseCharacter::Server_RagdollStart()
	{
		ProcessEvent(FindFunctionChecked(NAME_AALSBaseCharacter_Server_RagdollStart),NULL);
	}
	static FName NAME_AALSBaseCharacter_Server_SetDesiredGait = FName(TEXT("Server_SetDesiredGait"));
	void AALSBaseCharacter::Server_SetDesiredGait(EALSGait NewGait)
	{
		ALSBaseCharacter_eventServer_SetDesiredGait_Parms Parms;
		Parms.NewGait=NewGait;
		ProcessEvent(FindFunctionChecked(NAME_AALSBaseCharacter_Server_SetDesiredGait),&Parms);
	}
	static FName NAME_AALSBaseCharacter_Server_SetDesiredRotationMode = FName(TEXT("Server_SetDesiredRotationMode"));
	void AALSBaseCharacter::Server_SetDesiredRotationMode(EALSRotationMode NewRotMode)
	{
		ALSBaseCharacter_eventServer_SetDesiredRotationMode_Parms Parms;
		Parms.NewRotMode=NewRotMode;
		ProcessEvent(FindFunctionChecked(NAME_AALSBaseCharacter_Server_SetDesiredRotationMode),&Parms);
	}
	static FName NAME_AALSBaseCharacter_Server_SetDesiredStance = FName(TEXT("Server_SetDesiredStance"));
	void AALSBaseCharacter::Server_SetDesiredStance(EALSStance NewStance)
	{
		ALSBaseCharacter_eventServer_SetDesiredStance_Parms Parms;
		Parms.NewStance=NewStance;
		ProcessEvent(FindFunctionChecked(NAME_AALSBaseCharacter_Server_SetDesiredStance),&Parms);
	}
	static FName NAME_AALSBaseCharacter_Server_SetMeshLocationDuringRagdoll = FName(TEXT("Server_SetMeshLocationDuringRagdoll"));
	void AALSBaseCharacter::Server_SetMeshLocationDuringRagdoll(FVector MeshLocation)
	{
		ALSBaseCharacter_eventServer_SetMeshLocationDuringRagdoll_Parms Parms;
		Parms.MeshLocation=MeshLocation;
		ProcessEvent(FindFunctionChecked(NAME_AALSBaseCharacter_Server_SetMeshLocationDuringRagdoll),&Parms);
	}
	static FName NAME_AALSBaseCharacter_Server_SetOverlayState = FName(TEXT("Server_SetOverlayState"));
	void AALSBaseCharacter::Server_SetOverlayState(EALSOverlayState NewState, bool bForce)
	{
		ALSBaseCharacter_eventServer_SetOverlayState_Parms Parms;
		Parms.NewState=NewState;
		Parms.bForce=bForce ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AALSBaseCharacter_Server_SetOverlayState),&Parms);
	}
	static FName NAME_AALSBaseCharacter_Server_SetRotationMode = FName(TEXT("Server_SetRotationMode"));
	void AALSBaseCharacter::Server_SetRotationMode(EALSRotationMode NewRotationMode, bool bForce)
	{
		ALSBaseCharacter_eventServer_SetRotationMode_Parms Parms;
		Parms.NewRotationMode=NewRotationMode;
		Parms.bForce=bForce ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AALSBaseCharacter_Server_SetRotationMode),&Parms);
	}
	static FName NAME_AALSBaseCharacter_Server_SetViewMode = FName(TEXT("Server_SetViewMode"));
	void AALSBaseCharacter::Server_SetViewMode(EALSViewMode NewViewMode, bool bForce)
	{
		ALSBaseCharacter_eventServer_SetViewMode_Parms Parms;
		Parms.NewViewMode=NewViewMode;
		Parms.bForce=bForce ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AALSBaseCharacter_Server_SetViewMode),&Parms);
	}
	static FName NAME_AALSBaseCharacter_Server_SetVisibleMesh = FName(TEXT("Server_SetVisibleMesh"));
	void AALSBaseCharacter::Server_SetVisibleMesh(USkeletalMesh* NewSkeletalMesh)
	{
		ALSBaseCharacter_eventServer_SetVisibleMesh_Parms Parms;
		Parms.NewSkeletalMesh=NewSkeletalMesh;
		ProcessEvent(FindFunctionChecked(NAME_AALSBaseCharacter_Server_SetVisibleMesh),&Parms);
	}
	static FName NAME_AALSBaseCharacter_SprintAction = FName(TEXT("SprintAction"));
	void AALSBaseCharacter::SprintAction(bool bValue)
	{
		ALSBaseCharacter_eventSprintAction_Parms Parms;
		Parms.bValue=bValue ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AALSBaseCharacter_SprintAction),&Parms);
	}
	static FName NAME_AALSBaseCharacter_StanceAction = FName(TEXT("StanceAction"));
	void AALSBaseCharacter::StanceAction()
	{
		ProcessEvent(FindFunctionChecked(NAME_AALSBaseCharacter_StanceAction),NULL);
	}
	static FName NAME_AALSBaseCharacter_VelocityDirectionAction = FName(TEXT("VelocityDirectionAction"));
	void AALSBaseCharacter::VelocityDirectionAction()
	{
		ProcessEvent(FindFunctionChecked(NAME_AALSBaseCharacter_VelocityDirectionAction),NULL);
	}
	static FName NAME_AALSBaseCharacter_WalkAction = FName(TEXT("WalkAction"));
	void AALSBaseCharacter::WalkAction()
	{
		ProcessEvent(FindFunctionChecked(NAME_AALSBaseCharacter_WalkAction),NULL);
	}
	void AALSBaseCharacter::StaticRegisterNativesAALSBaseCharacter()
	{
		UClass* Class = AALSBaseCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AimAction", &AALSBaseCharacter::execAimAction },
			{ "CameraHeldAction", &AALSBaseCharacter::execCameraHeldAction },
			{ "CameraRightAction", &AALSBaseCharacter::execCameraRightAction },
			{ "CameraTapAction", &AALSBaseCharacter::execCameraTapAction },
			{ "CameraUpAction", &AALSBaseCharacter::execCameraUpAction },
			{ "CanSprint", &AALSBaseCharacter::execCanSprint },
			{ "EventOnJumped", &AALSBaseCharacter::execEventOnJumped },
			{ "EventOnLanded", &AALSBaseCharacter::execEventOnLanded },
			{ "ForwardMovementAction", &AALSBaseCharacter::execForwardMovementAction },
			{ "GetAcceleration", &AALSBaseCharacter::execGetAcceleration },
			{ "GetActualGait", &AALSBaseCharacter::execGetActualGait },
			{ "GetAimingRotation", &AALSBaseCharacter::execGetAimingRotation },
			{ "GetAimYawRate", &AALSBaseCharacter::execGetAimYawRate },
			{ "GetAllowedGait", &AALSBaseCharacter::execGetAllowedGait },
			{ "GetAnimCurveValue", &AALSBaseCharacter::execGetAnimCurveValue },
			{ "GetCameraParameters", &AALSBaseCharacter::execGetCameraParameters },
			{ "GetDesiredGait", &AALSBaseCharacter::execGetDesiredGait },
			{ "GetDesiredRotationMode", &AALSBaseCharacter::execGetDesiredRotationMode },
			{ "GetDesiredStance", &AALSBaseCharacter::execGetDesiredStance },
			{ "GetFirstPersonCameraTarget", &AALSBaseCharacter::execGetFirstPersonCameraTarget },
			{ "GetGait", &AALSBaseCharacter::execGetGait },
			{ "GetGroundedEntryState", &AALSBaseCharacter::execGetGroundedEntryState },
			{ "GetMovementAction", &AALSBaseCharacter::execGetMovementAction },
			{ "GetMovementInput", &AALSBaseCharacter::execGetMovementInput },
			{ "GetMovementInputAmount", &AALSBaseCharacter::execGetMovementInputAmount },
			{ "GetMovementState", &AALSBaseCharacter::execGetMovementState },
			{ "GetMyMovementComponent", &AALSBaseCharacter::execGetMyMovementComponent },
			{ "GetOverlayOverrideState", &AALSBaseCharacter::execGetOverlayOverrideState },
			{ "GetOverlayState", &AALSBaseCharacter::execGetOverlayState },
			{ "GetPrevMovementState", &AALSBaseCharacter::execGetPrevMovementState },
			{ "GetRotationMode", &AALSBaseCharacter::execGetRotationMode },
			{ "GetSpeed", &AALSBaseCharacter::execGetSpeed },
			{ "GetStance", &AALSBaseCharacter::execGetStance },
			{ "GetTargetMovementSettings", &AALSBaseCharacter::execGetTargetMovementSettings },
			{ "GetThirdPersonPivotTarget", &AALSBaseCharacter::execGetThirdPersonPivotTarget },
			{ "GetThirdPersonTraceParams", &AALSBaseCharacter::execGetThirdPersonTraceParams },
			{ "GetViewMode", &AALSBaseCharacter::execGetViewMode },
			{ "HasMovementInput", &AALSBaseCharacter::execHasMovementInput },
			{ "IsMoving", &AALSBaseCharacter::execIsMoving },
			{ "IsRightShoulder", &AALSBaseCharacter::execIsRightShoulder },
			{ "JumpAction", &AALSBaseCharacter::execJumpAction },
			{ "LookingDirectionAction", &AALSBaseCharacter::execLookingDirectionAction },
			{ "Multicast_OnJumped", &AALSBaseCharacter::execMulticast_OnJumped },
			{ "Multicast_OnLanded", &AALSBaseCharacter::execMulticast_OnLanded },
			{ "Multicast_PlayMontage", &AALSBaseCharacter::execMulticast_PlayMontage },
			{ "Multicast_RagdollEnd", &AALSBaseCharacter::execMulticast_RagdollEnd },
			{ "Multicast_RagdollStart", &AALSBaseCharacter::execMulticast_RagdollStart },
			{ "OnBreakfall", &AALSBaseCharacter::execOnBreakfall },
			{ "OnRep_OverlayState", &AALSBaseCharacter::execOnRep_OverlayState },
			{ "OnRep_RotationMode", &AALSBaseCharacter::execOnRep_RotationMode },
			{ "OnRep_ViewMode", &AALSBaseCharacter::execOnRep_ViewMode },
			{ "OnRep_VisibleMesh", &AALSBaseCharacter::execOnRep_VisibleMesh },
			{ "RagdollAction", &AALSBaseCharacter::execRagdollAction },
			{ "RagdollEnd", &AALSBaseCharacter::execRagdollEnd },
			{ "RagdollStart", &AALSBaseCharacter::execRagdollStart },
			{ "Replicated_PlayMontage", &AALSBaseCharacter::execReplicated_PlayMontage },
			{ "ReplicatedRagdollEnd", &AALSBaseCharacter::execReplicatedRagdollEnd },
			{ "ReplicatedRagdollStart", &AALSBaseCharacter::execReplicatedRagdollStart },
			{ "RightMovementAction", &AALSBaseCharacter::execRightMovementAction },
			{ "Server_PlayMontage", &AALSBaseCharacter::execServer_PlayMontage },
			{ "Server_RagdollEnd", &AALSBaseCharacter::execServer_RagdollEnd },
			{ "Server_RagdollStart", &AALSBaseCharacter::execServer_RagdollStart },
			{ "Server_SetDesiredGait", &AALSBaseCharacter::execServer_SetDesiredGait },
			{ "Server_SetDesiredRotationMode", &AALSBaseCharacter::execServer_SetDesiredRotationMode },
			{ "Server_SetDesiredStance", &AALSBaseCharacter::execServer_SetDesiredStance },
			{ "Server_SetMeshLocationDuringRagdoll", &AALSBaseCharacter::execServer_SetMeshLocationDuringRagdoll },
			{ "Server_SetOverlayState", &AALSBaseCharacter::execServer_SetOverlayState },
			{ "Server_SetRotationMode", &AALSBaseCharacter::execServer_SetRotationMode },
			{ "Server_SetViewMode", &AALSBaseCharacter::execServer_SetViewMode },
			{ "Server_SetVisibleMesh", &AALSBaseCharacter::execServer_SetVisibleMesh },
			{ "SetActorLocationAndTargetRotation", &AALSBaseCharacter::execSetActorLocationAndTargetRotation },
			{ "SetCameraBehavior", &AALSBaseCharacter::execSetCameraBehavior },
			{ "SetDesiredGait", &AALSBaseCharacter::execSetDesiredGait },
			{ "SetDesiredRotationMode", &AALSBaseCharacter::execSetDesiredRotationMode },
			{ "SetDesiredStance", &AALSBaseCharacter::execSetDesiredStance },
			{ "SetGait", &AALSBaseCharacter::execSetGait },
			{ "SetGroundedEntryState", &AALSBaseCharacter::execSetGroundedEntryState },
			{ "SetMovementAction", &AALSBaseCharacter::execSetMovementAction },
			{ "SetMovementState", &AALSBaseCharacter::execSetMovementState },
			{ "SetOverlayOverrideState", &AALSBaseCharacter::execSetOverlayOverrideState },
			{ "SetOverlayState", &AALSBaseCharacter::execSetOverlayState },
			{ "SetRightShoulder", &AALSBaseCharacter::execSetRightShoulder },
			{ "SetRotationMode", &AALSBaseCharacter::execSetRotationMode },
			{ "SetStance", &AALSBaseCharacter::execSetStance },
			{ "SetViewMode", &AALSBaseCharacter::execSetViewMode },
			{ "SetVisibleMesh", &AALSBaseCharacter::execSetVisibleMesh },
			{ "SprintAction", &AALSBaseCharacter::execSprintAction },
			{ "StanceAction", &AALSBaseCharacter::execStanceAction },
			{ "VelocityDirectionAction", &AALSBaseCharacter::execVelocityDirectionAction },
			{ "WalkAction", &AALSBaseCharacter::execWalkAction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_AimAction_Statics
	{
		static void NewProp_bValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AALSBaseCharacter_AimAction_Statics::NewProp_bValue_SetBit(void* Obj)
	{
		((ALSBaseCharacter_eventAimAction_Parms*)Obj)->bValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AALSBaseCharacter_AimAction_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALSBaseCharacter_eventAimAction_Parms), &Z_Construct_UFunction_AALSBaseCharacter_AimAction_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALSBaseCharacter_AimAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_AimAction_Statics::NewProp_bValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_AimAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Input" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_AimAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "AimAction", nullptr, nullptr, Z_Construct_UFunction_AALSBaseCharacter_AimAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_AimAction_Statics::PropPointers), sizeof(ALSBaseCharacter_eventAimAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_AimAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_AimAction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_AimAction_Statics::PropPointers) < 2048);
	static_assert(sizeof(ALSBaseCharacter_eventAimAction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_AimAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_AimAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_CameraHeldAction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_CameraHeldAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Input" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_CameraHeldAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "CameraHeldAction", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_CameraHeldAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_CameraHeldAction_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_CameraHeldAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_CameraHeldAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_CameraRightAction_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AALSBaseCharacter_CameraRightAction_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSBaseCharacter_eventCameraRightAction_Parms, Value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALSBaseCharacter_CameraRightAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_CameraRightAction_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_CameraRightAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Input" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_CameraRightAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "CameraRightAction", nullptr, nullptr, Z_Construct_UFunction_AALSBaseCharacter_CameraRightAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_CameraRightAction_Statics::PropPointers), sizeof(ALSBaseCharacter_eventCameraRightAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_CameraRightAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_CameraRightAction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_CameraRightAction_Statics::PropPointers) < 2048);
	static_assert(sizeof(ALSBaseCharacter_eventCameraRightAction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_CameraRightAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_CameraRightAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_CameraTapAction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_CameraTapAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Input" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_CameraTapAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "CameraTapAction", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_CameraTapAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_CameraTapAction_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_CameraTapAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_CameraTapAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_CameraUpAction_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AALSBaseCharacter_CameraUpAction_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSBaseCharacter_eventCameraUpAction_Parms, Value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALSBaseCharacter_CameraUpAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_CameraUpAction_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_CameraUpAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Input" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_CameraUpAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "CameraUpAction", nullptr, nullptr, Z_Construct_UFunction_AALSBaseCharacter_CameraUpAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_CameraUpAction_Statics::PropPointers), sizeof(ALSBaseCharacter_eventCameraUpAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_CameraUpAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_CameraUpAction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_CameraUpAction_Statics::PropPointers) < 2048);
	static_assert(sizeof(ALSBaseCharacter_eventCameraUpAction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_CameraUpAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_CameraUpAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_CanSprint_Statics
	{
		struct ALSBaseCharacter_eventCanSprint_Parms
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
	void Z_Construct_UFunction_AALSBaseCharacter_CanSprint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ALSBaseCharacter_eventCanSprint_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AALSBaseCharacter_CanSprint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALSBaseCharacter_eventCanSprint_Parms), &Z_Construct_UFunction_AALSBaseCharacter_CanSprint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALSBaseCharacter_CanSprint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_CanSprint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_CanSprint_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Movement System" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_CanSprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "CanSprint", nullptr, nullptr, Z_Construct_UFunction_AALSBaseCharacter_CanSprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_CanSprint_Statics::PropPointers), sizeof(Z_Construct_UFunction_AALSBaseCharacter_CanSprint_Statics::ALSBaseCharacter_eventCanSprint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_CanSprint_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_CanSprint_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_CanSprint_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AALSBaseCharacter_CanSprint_Statics::ALSBaseCharacter_eventCanSprint_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_CanSprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_CanSprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_EventOnJumped_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_EventOnJumped_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Character States" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** On Jumped*/" },
#endif
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "On Jumped" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_EventOnJumped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "EventOnJumped", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_EventOnJumped_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_EventOnJumped_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_EventOnJumped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_EventOnJumped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_EventOnLanded_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_EventOnLanded_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Character States" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** On Landed*/" },
#endif
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "On Landed" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_EventOnLanded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "EventOnLanded", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_EventOnLanded_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_EventOnLanded_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_EventOnLanded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_EventOnLanded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_ForwardMovementAction_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AALSBaseCharacter_ForwardMovementAction_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSBaseCharacter_eventForwardMovementAction_Parms, Value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALSBaseCharacter_ForwardMovementAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_ForwardMovementAction_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_ForwardMovementAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input */" },
#endif
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_ForwardMovementAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "ForwardMovementAction", nullptr, nullptr, Z_Construct_UFunction_AALSBaseCharacter_ForwardMovementAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_ForwardMovementAction_Statics::PropPointers), sizeof(ALSBaseCharacter_eventForwardMovementAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_ForwardMovementAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_ForwardMovementAction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_ForwardMovementAction_Statics::PropPointers) < 2048);
	static_assert(sizeof(ALSBaseCharacter_eventForwardMovementAction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_ForwardMovementAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_ForwardMovementAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_GetAcceleration_Statics
	{
		struct ALSBaseCharacter_eventGetAcceleration_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AALSBaseCharacter_GetAcceleration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSBaseCharacter_eventGetAcceleration_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALSBaseCharacter_GetAcceleration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_GetAcceleration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_GetAcceleration_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "ALS|Essential Information" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Essential Information Getters/Setters */" },
#endif
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Essential Information Getters/Setters" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_GetAcceleration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "GetAcceleration", nullptr, nullptr, Z_Construct_UFunction_AALSBaseCharacter_GetAcceleration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetAcceleration_Statics::PropPointers), sizeof(Z_Construct_UFunction_AALSBaseCharacter_GetAcceleration_Statics::ALSBaseCharacter_eventGetAcceleration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetAcceleration_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_GetAcceleration_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetAcceleration_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AALSBaseCharacter_GetAcceleration_Statics::ALSBaseCharacter_eventGetAcceleration_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_GetAcceleration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_GetAcceleration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_GetActualGait_Statics
	{
		struct ALSBaseCharacter_eventGetActualGait_Parms
		{
			EALSGait AllowedGait;
			EALSGait ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_AllowedGait_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AllowedGait;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AALSBaseCharacter_GetActualGait_Statics::NewProp_AllowedGait_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AALSBaseCharacter_GetActualGait_Statics::NewProp_AllowedGait = { "AllowedGait", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSBaseCharacter_eventGetActualGait_Parms, AllowedGait), Z_Construct_UEnum_ALSV4_CPP_EALSGait, METADATA_PARAMS(0, nullptr) }; // 4204508735
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AALSBaseCharacter_GetActualGait_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AALSBaseCharacter_GetActualGait_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSBaseCharacter_eventGetActualGait_Parms, ReturnValue), Z_Construct_UEnum_ALSV4_CPP_EALSGait, METADATA_PARAMS(0, nullptr) }; // 4204508735
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALSBaseCharacter_GetActualGait_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_GetActualGait_Statics::NewProp_AllowedGait_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_GetActualGait_Statics::NewProp_AllowedGait,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_GetActualGait_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_GetActualGait_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_GetActualGait_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Movement System" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_GetActualGait_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "GetActualGait", nullptr, nullptr, Z_Construct_UFunction_AALSBaseCharacter_GetActualGait_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetActualGait_Statics::PropPointers), sizeof(Z_Construct_UFunction_AALSBaseCharacter_GetActualGait_Statics::ALSBaseCharacter_eventGetActualGait_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetActualGait_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_GetActualGait_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetActualGait_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AALSBaseCharacter_GetActualGait_Statics::ALSBaseCharacter_eventGetActualGait_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_GetActualGait()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_GetActualGait_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_GetAimingRotation_Statics
	{
		struct ALSBaseCharacter_eventGetAimingRotation_Parms
		{
			FRotator ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AALSBaseCharacter_GetAimingRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSBaseCharacter_eventGetAimingRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALSBaseCharacter_GetAimingRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_GetAimingRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_GetAimingRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Essential Information" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_GetAimingRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "GetAimingRotation", nullptr, nullptr, Z_Construct_UFunction_AALSBaseCharacter_GetAimingRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetAimingRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AALSBaseCharacter_GetAimingRotation_Statics::ALSBaseCharacter_eventGetAimingRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetAimingRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_GetAimingRotation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetAimingRotation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AALSBaseCharacter_GetAimingRotation_Statics::ALSBaseCharacter_eventGetAimingRotation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_GetAimingRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_GetAimingRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_GetAimYawRate_Statics
	{
		struct ALSBaseCharacter_eventGetAimYawRate_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AALSBaseCharacter_GetAimYawRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSBaseCharacter_eventGetAimYawRate_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALSBaseCharacter_GetAimYawRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_GetAimYawRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_GetAimYawRate_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "ALS|Essential Information" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_GetAimYawRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "GetAimYawRate", nullptr, nullptr, Z_Construct_UFunction_AALSBaseCharacter_GetAimYawRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetAimYawRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_AALSBaseCharacter_GetAimYawRate_Statics::ALSBaseCharacter_eventGetAimYawRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetAimYawRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_GetAimYawRate_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetAimYawRate_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AALSBaseCharacter_GetAimYawRate_Statics::ALSBaseCharacter_eventGetAimYawRate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_GetAimYawRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_GetAimYawRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_GetAllowedGait_Statics
	{
		struct ALSBaseCharacter_eventGetAllowedGait_Parms
		{
			EALSGait ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AALSBaseCharacter_GetAllowedGait_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AALSBaseCharacter_GetAllowedGait_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSBaseCharacter_eventGetAllowedGait_Parms, ReturnValue), Z_Construct_UEnum_ALSV4_CPP_EALSGait, METADATA_PARAMS(0, nullptr) }; // 4204508735
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALSBaseCharacter_GetAllowedGait_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_GetAllowedGait_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_GetAllowedGait_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_GetAllowedGait_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Movement System" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_GetAllowedGait_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "GetAllowedGait", nullptr, nullptr, Z_Construct_UFunction_AALSBaseCharacter_GetAllowedGait_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetAllowedGait_Statics::PropPointers), sizeof(Z_Construct_UFunction_AALSBaseCharacter_GetAllowedGait_Statics::ALSBaseCharacter_eventGetAllowedGait_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetAllowedGait_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_GetAllowedGait_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetAllowedGait_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AALSBaseCharacter_GetAllowedGait_Statics::ALSBaseCharacter_eventGetAllowedGait_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_GetAllowedGait()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_GetAllowedGait_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_GetAnimCurveValue_Statics
	{
		struct ALSBaseCharacter_eventGetAnimCurveValue_Parms
		{
			FName CurveName;
			float ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_CurveName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AALSBaseCharacter_GetAnimCurveValue_Statics::NewProp_CurveName = { "CurveName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSBaseCharacter_eventGetAnimCurveValue_Parms, CurveName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AALSBaseCharacter_GetAnimCurveValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSBaseCharacter_eventGetAnimCurveValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALSBaseCharacter_GetAnimCurveValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_GetAnimCurveValue_Statics::NewProp_CurveName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_GetAnimCurveValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_GetAnimCurveValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Utility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Utility */" },
#endif
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Utility" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_GetAnimCurveValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "GetAnimCurveValue", nullptr, nullptr, Z_Construct_UFunction_AALSBaseCharacter_GetAnimCurveValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetAnimCurveValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_AALSBaseCharacter_GetAnimCurveValue_Statics::ALSBaseCharacter_eventGetAnimCurveValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetAnimCurveValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_GetAnimCurveValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetAnimCurveValue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AALSBaseCharacter_GetAnimCurveValue_Statics::ALSBaseCharacter_eventGetAnimCurveValue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_GetAnimCurveValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_GetAnimCurveValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_GetCameraParameters_Statics
	{
		struct ALSBaseCharacter_eventGetCameraParameters_Parms
		{
			float TPFOVOut;
			float FPFOVOut;
			bool bRightShoulderOut;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TPFOVOut;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FPFOVOut;
		static void NewProp_bRightShoulderOut_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRightShoulderOut;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AALSBaseCharacter_GetCameraParameters_Statics::NewProp_TPFOVOut = { "TPFOVOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSBaseCharacter_eventGetCameraParameters_Parms, TPFOVOut), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AALSBaseCharacter_GetCameraParameters_Statics::NewProp_FPFOVOut = { "FPFOVOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSBaseCharacter_eventGetCameraParameters_Parms, FPFOVOut), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AALSBaseCharacter_GetCameraParameters_Statics::NewProp_bRightShoulderOut_SetBit(void* Obj)
	{
		((ALSBaseCharacter_eventGetCameraParameters_Parms*)Obj)->bRightShoulderOut = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AALSBaseCharacter_GetCameraParameters_Statics::NewProp_bRightShoulderOut = { "bRightShoulderOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALSBaseCharacter_eventGetCameraParameters_Parms), &Z_Construct_UFunction_AALSBaseCharacter_GetCameraParameters_Statics::NewProp_bRightShoulderOut_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALSBaseCharacter_GetCameraParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_GetCameraParameters_Statics::NewProp_TPFOVOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_GetCameraParameters_Statics::NewProp_FPFOVOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_GetCameraParameters_Statics::NewProp_bRightShoulderOut,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_GetCameraParameters_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Camera System" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_GetCameraParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "GetCameraParameters", nullptr, nullptr, Z_Construct_UFunction_AALSBaseCharacter_GetCameraParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetCameraParameters_Statics::PropPointers), sizeof(Z_Construct_UFunction_AALSBaseCharacter_GetCameraParameters_Statics::ALSBaseCharacter_eventGetCameraParameters_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetCameraParameters_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_GetCameraParameters_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetCameraParameters_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AALSBaseCharacter_GetCameraParameters_Statics::ALSBaseCharacter_eventGetCameraParameters_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_GetCameraParameters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_GetCameraParameters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_GetDesiredGait_Statics
	{
		struct ALSBaseCharacter_eventGetDesiredGait_Parms
		{
			EALSGait ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AALSBaseCharacter_GetDesiredGait_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AALSBaseCharacter_GetDesiredGait_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSBaseCharacter_eventGetDesiredGait_Parms, ReturnValue), Z_Construct_UEnum_ALSV4_CPP_EALSGait, METADATA_PARAMS(0, nullptr) }; // 4204508735
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALSBaseCharacter_GetDesiredGait_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_GetDesiredGait_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_GetDesiredGait_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_GetDesiredGait_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "ALS|CharacterStates" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_GetDesiredGait_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "GetDesiredGait", nullptr, nullptr, Z_Construct_UFunction_AALSBaseCharacter_GetDesiredGait_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetDesiredGait_Statics::PropPointers), sizeof(Z_Construct_UFunction_AALSBaseCharacter_GetDesiredGait_Statics::ALSBaseCharacter_eventGetDesiredGait_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetDesiredGait_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_GetDesiredGait_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetDesiredGait_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AALSBaseCharacter_GetDesiredGait_Statics::ALSBaseCharacter_eventGetDesiredGait_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_GetDesiredGait()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_GetDesiredGait_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_GetDesiredRotationMode_Statics
	{
		struct ALSBaseCharacter_eventGetDesiredRotationMode_Parms
		{
			EALSRotationMode ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AALSBaseCharacter_GetDesiredRotationMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AALSBaseCharacter_GetDesiredRotationMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSBaseCharacter_eventGetDesiredRotationMode_Parms, ReturnValue), Z_Construct_UEnum_ALSV4_CPP_EALSRotationMode, METADATA_PARAMS(0, nullptr) }; // 3543998324
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALSBaseCharacter_GetDesiredRotationMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_GetDesiredRotationMode_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_GetDesiredRotationMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_GetDesiredRotationMode_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "ALS|Input" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_GetDesiredRotationMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "GetDesiredRotationMode", nullptr, nullptr, Z_Construct_UFunction_AALSBaseCharacter_GetDesiredRotationMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetDesiredRotationMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_AALSBaseCharacter_GetDesiredRotationMode_Statics::ALSBaseCharacter_eventGetDesiredRotationMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetDesiredRotationMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_GetDesiredRotationMode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetDesiredRotationMode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AALSBaseCharacter_GetDesiredRotationMode_Statics::ALSBaseCharacter_eventGetDesiredRotationMode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_GetDesiredRotationMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_GetDesiredRotationMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_GetDesiredStance_Statics
	{
		struct ALSBaseCharacter_eventGetDesiredStance_Parms
		{
			EALSStance ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AALSBaseCharacter_GetDesiredStance_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AALSBaseCharacter_GetDesiredStance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSBaseCharacter_eventGetDesiredStance_Parms, ReturnValue), Z_Construct_UEnum_ALSV4_CPP_EALSStance, METADATA_PARAMS(0, nullptr) }; // 98898313
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALSBaseCharacter_GetDesiredStance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_GetDesiredStance_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_GetDesiredStance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_GetDesiredStance_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "ALS|Input" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_GetDesiredStance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "GetDesiredStance", nullptr, nullptr, Z_Construct_UFunction_AALSBaseCharacter_GetDesiredStance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetDesiredStance_Statics::PropPointers), sizeof(Z_Construct_UFunction_AALSBaseCharacter_GetDesiredStance_Statics::ALSBaseCharacter_eventGetDesiredStance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetDesiredStance_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_GetDesiredStance_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetDesiredStance_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AALSBaseCharacter_GetDesiredStance_Statics::ALSBaseCharacter_eventGetDesiredStance_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_GetDesiredStance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_GetDesiredStance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_GetFirstPersonCameraTarget_Statics
	{
		struct ALSBaseCharacter_eventGetFirstPersonCameraTarget_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AALSBaseCharacter_GetFirstPersonCameraTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSBaseCharacter_eventGetFirstPersonCameraTarget_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALSBaseCharacter_GetFirstPersonCameraTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_GetFirstPersonCameraTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_GetFirstPersonCameraTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Camera System" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_GetFirstPersonCameraTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "GetFirstPersonCameraTarget", nullptr, nullptr, Z_Construct_UFunction_AALSBaseCharacter_GetFirstPersonCameraTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetFirstPersonCameraTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_AALSBaseCharacter_GetFirstPersonCameraTarget_Statics::ALSBaseCharacter_eventGetFirstPersonCameraTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetFirstPersonCameraTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_GetFirstPersonCameraTarget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetFirstPersonCameraTarget_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AALSBaseCharacter_GetFirstPersonCameraTarget_Statics::ALSBaseCharacter_eventGetFirstPersonCameraTarget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_GetFirstPersonCameraTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_GetFirstPersonCameraTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_GetGait_Statics
	{
		struct ALSBaseCharacter_eventGetGait_Parms
		{
			EALSGait ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AALSBaseCharacter_GetGait_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AALSBaseCharacter_GetGait_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSBaseCharacter_eventGetGait_Parms, ReturnValue), Z_Construct_UEnum_ALSV4_CPP_EALSGait, METADATA_PARAMS(0, nullptr) }; // 4204508735
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALSBaseCharacter_GetGait_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_GetGait_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_GetGait_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_GetGait_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "ALS|Character States" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_GetGait_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "GetGait", nullptr, nullptr, Z_Construct_UFunction_AALSBaseCharacter_GetGait_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetGait_Statics::PropPointers), sizeof(Z_Construct_UFunction_AALSBaseCharacter_GetGait_Statics::ALSBaseCharacter_eventGetGait_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetGait_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_GetGait_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetGait_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AALSBaseCharacter_GetGait_Statics::ALSBaseCharacter_eventGetGait_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_GetGait()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_GetGait_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_GetGetUpAnimation_Statics
	{
		static void NewProp_bRagdollFaceUpState_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRagdollFaceUpState;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AALSBaseCharacter_GetGetUpAnimation_Statics::NewProp_bRagdollFaceUpState_SetBit(void* Obj)
	{
		((ALSBaseCharacter_eventGetGetUpAnimation_Parms*)Obj)->bRagdollFaceUpState = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AALSBaseCharacter_GetGetUpAnimation_Statics::NewProp_bRagdollFaceUpState = { "bRagdollFaceUpState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALSBaseCharacter_eventGetGetUpAnimation_Parms), &Z_Construct_UFunction_AALSBaseCharacter_GetGetUpAnimation_Statics::NewProp_bRagdollFaceUpState_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AALSBaseCharacter_GetGetUpAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSBaseCharacter_eventGetGetUpAnimation_Parms, ReturnValue), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALSBaseCharacter_GetGetUpAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_GetGetUpAnimation_Statics::NewProp_bRagdollFaceUpState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_GetGetUpAnimation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_GetGetUpAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Ragdoll System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Implement on BP to get required get up animation according to character's state */" },
#endif
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implement on BP to get required get up animation according to character's state" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_GetGetUpAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "GetGetUpAnimation", nullptr, nullptr, Z_Construct_UFunction_AALSBaseCharacter_GetGetUpAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetGetUpAnimation_Statics::PropPointers), sizeof(ALSBaseCharacter_eventGetGetUpAnimation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetGetUpAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_GetGetUpAnimation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetGetUpAnimation_Statics::PropPointers) < 2048);
	static_assert(sizeof(ALSBaseCharacter_eventGetGetUpAnimation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_GetGetUpAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_GetGetUpAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_GetGroundedEntryState_Statics
	{
		struct ALSBaseCharacter_eventGetGroundedEntryState_Parms
		{
			EALSGroundedEntryState ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AALSBaseCharacter_GetGroundedEntryState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AALSBaseCharacter_GetGroundedEntryState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSBaseCharacter_eventGetGroundedEntryState_Parms, ReturnValue), Z_Construct_UEnum_ALSV4_CPP_EALSGroundedEntryState, METADATA_PARAMS(0, nullptr) }; // 1781834569
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALSBaseCharacter_GetGroundedEntryState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_GetGroundedEntryState_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_GetGroundedEntryState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_GetGroundedEntryState_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "ALS|Character States" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_GetGroundedEntryState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "GetGroundedEntryState", nullptr, nullptr, Z_Construct_UFunction_AALSBaseCharacter_GetGroundedEntryState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetGroundedEntryState_Statics::PropPointers), sizeof(Z_Construct_UFunction_AALSBaseCharacter_GetGroundedEntryState_Statics::ALSBaseCharacter_eventGetGroundedEntryState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetGroundedEntryState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_GetGroundedEntryState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetGroundedEntryState_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AALSBaseCharacter_GetGroundedEntryState_Statics::ALSBaseCharacter_eventGetGroundedEntryState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_GetGroundedEntryState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_GetGroundedEntryState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_GetMovementAction_Statics
	{
		struct ALSBaseCharacter_eventGetMovementAction_Parms
		{
			EALSMovementAction ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AALSBaseCharacter_GetMovementAction_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AALSBaseCharacter_GetMovementAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSBaseCharacter_eventGetMovementAction_Parms, ReturnValue), Z_Construct_UEnum_ALSV4_CPP_EALSMovementAction, METADATA_PARAMS(0, nullptr) }; // 1229765569
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALSBaseCharacter_GetMovementAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_GetMovementAction_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_GetMovementAction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_GetMovementAction_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "ALS|Character States" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_GetMovementAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "GetMovementAction", nullptr, nullptr, Z_Construct_UFunction_AALSBaseCharacter_GetMovementAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetMovementAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_AALSBaseCharacter_GetMovementAction_Statics::ALSBaseCharacter_eventGetMovementAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetMovementAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_GetMovementAction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetMovementAction_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AALSBaseCharacter_GetMovementAction_Statics::ALSBaseCharacter_eventGetMovementAction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_GetMovementAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_GetMovementAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_GetMovementInput_Statics
	{
		struct ALSBaseCharacter_eventGetMovementInput_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AALSBaseCharacter_GetMovementInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSBaseCharacter_eventGetMovementInput_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALSBaseCharacter_GetMovementInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_GetMovementInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_GetMovementInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Essential Information" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_GetMovementInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "GetMovementInput", nullptr, nullptr, Z_Construct_UFunction_AALSBaseCharacter_GetMovementInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetMovementInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_AALSBaseCharacter_GetMovementInput_Statics::ALSBaseCharacter_eventGetMovementInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetMovementInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_GetMovementInput_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetMovementInput_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AALSBaseCharacter_GetMovementInput_Statics::ALSBaseCharacter_eventGetMovementInput_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_GetMovementInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_GetMovementInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_GetMovementInputAmount_Statics
	{
		struct ALSBaseCharacter_eventGetMovementInputAmount_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AALSBaseCharacter_GetMovementInputAmount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSBaseCharacter_eventGetMovementInputAmount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALSBaseCharacter_GetMovementInputAmount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_GetMovementInputAmount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_GetMovementInputAmount_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "ALS|Essential Information" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_GetMovementInputAmount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "GetMovementInputAmount", nullptr, nullptr, Z_Construct_UFunction_AALSBaseCharacter_GetMovementInputAmount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetMovementInputAmount_Statics::PropPointers), sizeof(Z_Construct_UFunction_AALSBaseCharacter_GetMovementInputAmount_Statics::ALSBaseCharacter_eventGetMovementInputAmount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetMovementInputAmount_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_GetMovementInputAmount_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetMovementInputAmount_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AALSBaseCharacter_GetMovementInputAmount_Statics::ALSBaseCharacter_eventGetMovementInputAmount_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_GetMovementInputAmount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_GetMovementInputAmount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_GetMovementState_Statics
	{
		struct ALSBaseCharacter_eventGetMovementState_Parms
		{
			EALSMovementState ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AALSBaseCharacter_GetMovementState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AALSBaseCharacter_GetMovementState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSBaseCharacter_eventGetMovementState_Parms, ReturnValue), Z_Construct_UEnum_ALSV4_CPP_EALSMovementState, METADATA_PARAMS(0, nullptr) }; // 2855841202
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALSBaseCharacter_GetMovementState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_GetMovementState_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_GetMovementState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_GetMovementState_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "ALS|Character States" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_GetMovementState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "GetMovementState", nullptr, nullptr, Z_Construct_UFunction_AALSBaseCharacter_GetMovementState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetMovementState_Statics::PropPointers), sizeof(Z_Construct_UFunction_AALSBaseCharacter_GetMovementState_Statics::ALSBaseCharacter_eventGetMovementState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetMovementState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_GetMovementState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetMovementState_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AALSBaseCharacter_GetMovementState_Statics::ALSBaseCharacter_eventGetMovementState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_GetMovementState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_GetMovementState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_GetMyMovementComponent_Statics
	{
		struct ALSBaseCharacter_eventGetMyMovementComponent_Parms
		{
			UALSCharacterMovementComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_GetMyMovementComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AALSBaseCharacter_GetMyMovementComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSBaseCharacter_eventGetMyMovementComponent_Parms, ReturnValue), Z_Construct_UClass_UALSCharacterMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetMyMovementComponent_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_AALSBaseCharacter_GetMyMovementComponent_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALSBaseCharacter_GetMyMovementComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_GetMyMovementComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_GetMyMovementComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Movement" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_GetMyMovementComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "GetMyMovementComponent", nullptr, nullptr, Z_Construct_UFunction_AALSBaseCharacter_GetMyMovementComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetMyMovementComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AALSBaseCharacter_GetMyMovementComponent_Statics::ALSBaseCharacter_eventGetMyMovementComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetMyMovementComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_GetMyMovementComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetMyMovementComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AALSBaseCharacter_GetMyMovementComponent_Statics::ALSBaseCharacter_eventGetMyMovementComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_GetMyMovementComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_GetMyMovementComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_GetOverlayOverrideState_Statics
	{
		struct ALSBaseCharacter_eventGetOverlayOverrideState_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AALSBaseCharacter_GetOverlayOverrideState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSBaseCharacter_eventGetOverlayOverrideState_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALSBaseCharacter_GetOverlayOverrideState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_GetOverlayOverrideState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_GetOverlayOverrideState_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "ALS|Character States" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_GetOverlayOverrideState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "GetOverlayOverrideState", nullptr, nullptr, Z_Construct_UFunction_AALSBaseCharacter_GetOverlayOverrideState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetOverlayOverrideState_Statics::PropPointers), sizeof(Z_Construct_UFunction_AALSBaseCharacter_GetOverlayOverrideState_Statics::ALSBaseCharacter_eventGetOverlayOverrideState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetOverlayOverrideState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_GetOverlayOverrideState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetOverlayOverrideState_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AALSBaseCharacter_GetOverlayOverrideState_Statics::ALSBaseCharacter_eventGetOverlayOverrideState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_GetOverlayOverrideState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_GetOverlayOverrideState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_GetOverlayState_Statics
	{
		struct ALSBaseCharacter_eventGetOverlayState_Parms
		{
			EALSOverlayState ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AALSBaseCharacter_GetOverlayState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AALSBaseCharacter_GetOverlayState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSBaseCharacter_eventGetOverlayState_Parms, ReturnValue), Z_Construct_UEnum_ALSV4_CPP_EALSOverlayState, METADATA_PARAMS(0, nullptr) }; // 3560812144
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALSBaseCharacter_GetOverlayState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_GetOverlayState_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_GetOverlayState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_GetOverlayState_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "ALS|Character States" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_GetOverlayState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "GetOverlayState", nullptr, nullptr, Z_Construct_UFunction_AALSBaseCharacter_GetOverlayState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetOverlayState_Statics::PropPointers), sizeof(Z_Construct_UFunction_AALSBaseCharacter_GetOverlayState_Statics::ALSBaseCharacter_eventGetOverlayState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetOverlayState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_GetOverlayState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetOverlayState_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AALSBaseCharacter_GetOverlayState_Statics::ALSBaseCharacter_eventGetOverlayState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_GetOverlayState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_GetOverlayState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_GetPrevMovementState_Statics
	{
		struct ALSBaseCharacter_eventGetPrevMovementState_Parms
		{
			EALSMovementState ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AALSBaseCharacter_GetPrevMovementState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AALSBaseCharacter_GetPrevMovementState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSBaseCharacter_eventGetPrevMovementState_Parms, ReturnValue), Z_Construct_UEnum_ALSV4_CPP_EALSMovementState, METADATA_PARAMS(0, nullptr) }; // 2855841202
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALSBaseCharacter_GetPrevMovementState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_GetPrevMovementState_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_GetPrevMovementState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_GetPrevMovementState_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "ALS|Character States" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_GetPrevMovementState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "GetPrevMovementState", nullptr, nullptr, Z_Construct_UFunction_AALSBaseCharacter_GetPrevMovementState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetPrevMovementState_Statics::PropPointers), sizeof(Z_Construct_UFunction_AALSBaseCharacter_GetPrevMovementState_Statics::ALSBaseCharacter_eventGetPrevMovementState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetPrevMovementState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_GetPrevMovementState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetPrevMovementState_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AALSBaseCharacter_GetPrevMovementState_Statics::ALSBaseCharacter_eventGetPrevMovementState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_GetPrevMovementState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_GetPrevMovementState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_GetRollAnimation_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AALSBaseCharacter_GetRollAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSBaseCharacter_eventGetRollAnimation_Parms, ReturnValue), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALSBaseCharacter_GetRollAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_GetRollAnimation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_GetRollAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Movement System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Implement on BP to get required roll animation according to character's state */" },
#endif
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implement on BP to get required roll animation according to character's state" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_GetRollAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "GetRollAnimation", nullptr, nullptr, Z_Construct_UFunction_AALSBaseCharacter_GetRollAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetRollAnimation_Statics::PropPointers), sizeof(ALSBaseCharacter_eventGetRollAnimation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetRollAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_GetRollAnimation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetRollAnimation_Statics::PropPointers) < 2048);
	static_assert(sizeof(ALSBaseCharacter_eventGetRollAnimation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_GetRollAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_GetRollAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_GetRotationMode_Statics
	{
		struct ALSBaseCharacter_eventGetRotationMode_Parms
		{
			EALSRotationMode ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AALSBaseCharacter_GetRotationMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AALSBaseCharacter_GetRotationMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSBaseCharacter_eventGetRotationMode_Parms, ReturnValue), Z_Construct_UEnum_ALSV4_CPP_EALSRotationMode, METADATA_PARAMS(0, nullptr) }; // 3543998324
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALSBaseCharacter_GetRotationMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_GetRotationMode_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_GetRotationMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_GetRotationMode_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "ALS|Character States" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_GetRotationMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "GetRotationMode", nullptr, nullptr, Z_Construct_UFunction_AALSBaseCharacter_GetRotationMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetRotationMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_AALSBaseCharacter_GetRotationMode_Statics::ALSBaseCharacter_eventGetRotationMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetRotationMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_GetRotationMode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetRotationMode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AALSBaseCharacter_GetRotationMode_Statics::ALSBaseCharacter_eventGetRotationMode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_GetRotationMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_GetRotationMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_GetSpeed_Statics
	{
		struct ALSBaseCharacter_eventGetSpeed_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AALSBaseCharacter_GetSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSBaseCharacter_eventGetSpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALSBaseCharacter_GetSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_GetSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_GetSpeed_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "ALS|Essential Information" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_GetSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "GetSpeed", nullptr, nullptr, Z_Construct_UFunction_AALSBaseCharacter_GetSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_AALSBaseCharacter_GetSpeed_Statics::ALSBaseCharacter_eventGetSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_GetSpeed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetSpeed_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AALSBaseCharacter_GetSpeed_Statics::ALSBaseCharacter_eventGetSpeed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_GetSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_GetSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_GetStance_Statics
	{
		struct ALSBaseCharacter_eventGetStance_Parms
		{
			EALSStance ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AALSBaseCharacter_GetStance_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AALSBaseCharacter_GetStance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSBaseCharacter_eventGetStance_Parms, ReturnValue), Z_Construct_UEnum_ALSV4_CPP_EALSStance, METADATA_PARAMS(0, nullptr) }; // 98898313
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALSBaseCharacter_GetStance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_GetStance_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_GetStance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_GetStance_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "ALS|Character States" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_GetStance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "GetStance", nullptr, nullptr, Z_Construct_UFunction_AALSBaseCharacter_GetStance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetStance_Statics::PropPointers), sizeof(Z_Construct_UFunction_AALSBaseCharacter_GetStance_Statics::ALSBaseCharacter_eventGetStance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetStance_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_GetStance_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetStance_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AALSBaseCharacter_GetStance_Statics::ALSBaseCharacter_eventGetStance_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_GetStance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_GetStance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_GetTargetMovementSettings_Statics
	{
		struct ALSBaseCharacter_eventGetTargetMovementSettings_Parms
		{
			FALSMovementSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AALSBaseCharacter_GetTargetMovementSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSBaseCharacter_eventGetTargetMovementSettings_Parms, ReturnValue), Z_Construct_UScriptStruct_FALSMovementSettings, METADATA_PARAMS(0, nullptr) }; // 3190297434
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALSBaseCharacter_GetTargetMovementSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_GetTargetMovementSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_GetTargetMovementSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Movement System" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_GetTargetMovementSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "GetTargetMovementSettings", nullptr, nullptr, Z_Construct_UFunction_AALSBaseCharacter_GetTargetMovementSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetTargetMovementSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_AALSBaseCharacter_GetTargetMovementSettings_Statics::ALSBaseCharacter_eventGetTargetMovementSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetTargetMovementSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_GetTargetMovementSettings_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetTargetMovementSettings_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AALSBaseCharacter_GetTargetMovementSettings_Statics::ALSBaseCharacter_eventGetTargetMovementSettings_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_GetTargetMovementSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_GetTargetMovementSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_GetThirdPersonPivotTarget_Statics
	{
		struct ALSBaseCharacter_eventGetThirdPersonPivotTarget_Parms
		{
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AALSBaseCharacter_GetThirdPersonPivotTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSBaseCharacter_eventGetThirdPersonPivotTarget_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALSBaseCharacter_GetThirdPersonPivotTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_GetThirdPersonPivotTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_GetThirdPersonPivotTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Camera System" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_GetThirdPersonPivotTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "GetThirdPersonPivotTarget", nullptr, nullptr, Z_Construct_UFunction_AALSBaseCharacter_GetThirdPersonPivotTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetThirdPersonPivotTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_AALSBaseCharacter_GetThirdPersonPivotTarget_Statics::ALSBaseCharacter_eventGetThirdPersonPivotTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetThirdPersonPivotTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_GetThirdPersonPivotTarget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetThirdPersonPivotTarget_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AALSBaseCharacter_GetThirdPersonPivotTarget_Statics::ALSBaseCharacter_eventGetThirdPersonPivotTarget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_GetThirdPersonPivotTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_GetThirdPersonPivotTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_GetThirdPersonTraceParams_Statics
	{
		struct ALSBaseCharacter_eventGetThirdPersonTraceParams_Parms
		{
			FVector TraceOrigin;
			float TraceRadius;
			TEnumAsByte<ECollisionChannel> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_TraceOrigin;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceRadius;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AALSBaseCharacter_GetThirdPersonTraceParams_Statics::NewProp_TraceOrigin = { "TraceOrigin", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSBaseCharacter_eventGetThirdPersonTraceParams_Parms, TraceOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AALSBaseCharacter_GetThirdPersonTraceParams_Statics::NewProp_TraceRadius = { "TraceRadius", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSBaseCharacter_eventGetThirdPersonTraceParams_Parms, TraceRadius), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AALSBaseCharacter_GetThirdPersonTraceParams_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSBaseCharacter_eventGetThirdPersonTraceParams_Parms, ReturnValue), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(0, nullptr) }; // 1822723181
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALSBaseCharacter_GetThirdPersonTraceParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_GetThirdPersonTraceParams_Statics::NewProp_TraceOrigin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_GetThirdPersonTraceParams_Statics::NewProp_TraceRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_GetThirdPersonTraceParams_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_GetThirdPersonTraceParams_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Camera System" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_GetThirdPersonTraceParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "GetThirdPersonTraceParams", nullptr, nullptr, Z_Construct_UFunction_AALSBaseCharacter_GetThirdPersonTraceParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetThirdPersonTraceParams_Statics::PropPointers), sizeof(Z_Construct_UFunction_AALSBaseCharacter_GetThirdPersonTraceParams_Statics::ALSBaseCharacter_eventGetThirdPersonTraceParams_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetThirdPersonTraceParams_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_GetThirdPersonTraceParams_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetThirdPersonTraceParams_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AALSBaseCharacter_GetThirdPersonTraceParams_Statics::ALSBaseCharacter_eventGetThirdPersonTraceParams_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_GetThirdPersonTraceParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_GetThirdPersonTraceParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_GetViewMode_Statics
	{
		struct ALSBaseCharacter_eventGetViewMode_Parms
		{
			EALSViewMode ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AALSBaseCharacter_GetViewMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AALSBaseCharacter_GetViewMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSBaseCharacter_eventGetViewMode_Parms, ReturnValue), Z_Construct_UEnum_ALSV4_CPP_EALSViewMode, METADATA_PARAMS(0, nullptr) }; // 98731475
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALSBaseCharacter_GetViewMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_GetViewMode_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_GetViewMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_GetViewMode_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "ALS|Character States" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_GetViewMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "GetViewMode", nullptr, nullptr, Z_Construct_UFunction_AALSBaseCharacter_GetViewMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetViewMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_AALSBaseCharacter_GetViewMode_Statics::ALSBaseCharacter_eventGetViewMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetViewMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_GetViewMode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_GetViewMode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AALSBaseCharacter_GetViewMode_Statics::ALSBaseCharacter_eventGetViewMode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_GetViewMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_GetViewMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_HasMovementInput_Statics
	{
		struct ALSBaseCharacter_eventHasMovementInput_Parms
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
	void Z_Construct_UFunction_AALSBaseCharacter_HasMovementInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ALSBaseCharacter_eventHasMovementInput_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AALSBaseCharacter_HasMovementInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALSBaseCharacter_eventHasMovementInput_Parms), &Z_Construct_UFunction_AALSBaseCharacter_HasMovementInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALSBaseCharacter_HasMovementInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_HasMovementInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_HasMovementInput_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "ALS|Movement System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Movement System */" },
#endif
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Movement System" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_HasMovementInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "HasMovementInput", nullptr, nullptr, Z_Construct_UFunction_AALSBaseCharacter_HasMovementInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_HasMovementInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_AALSBaseCharacter_HasMovementInput_Statics::ALSBaseCharacter_eventHasMovementInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_HasMovementInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_HasMovementInput_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_HasMovementInput_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AALSBaseCharacter_HasMovementInput_Statics::ALSBaseCharacter_eventHasMovementInput_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_HasMovementInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_HasMovementInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_IsMoving_Statics
	{
		struct ALSBaseCharacter_eventIsMoving_Parms
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
	void Z_Construct_UFunction_AALSBaseCharacter_IsMoving_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ALSBaseCharacter_eventIsMoving_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AALSBaseCharacter_IsMoving_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALSBaseCharacter_eventIsMoving_Parms), &Z_Construct_UFunction_AALSBaseCharacter_IsMoving_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALSBaseCharacter_IsMoving_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_IsMoving_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_IsMoving_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "ALS|Essential Information" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_IsMoving_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "IsMoving", nullptr, nullptr, Z_Construct_UFunction_AALSBaseCharacter_IsMoving_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_IsMoving_Statics::PropPointers), sizeof(Z_Construct_UFunction_AALSBaseCharacter_IsMoving_Statics::ALSBaseCharacter_eventIsMoving_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_IsMoving_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_IsMoving_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_IsMoving_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AALSBaseCharacter_IsMoving_Statics::ALSBaseCharacter_eventIsMoving_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_IsMoving()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_IsMoving_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_IsRightShoulder_Statics
	{
		struct ALSBaseCharacter_eventIsRightShoulder_Parms
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
	void Z_Construct_UFunction_AALSBaseCharacter_IsRightShoulder_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ALSBaseCharacter_eventIsRightShoulder_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AALSBaseCharacter_IsRightShoulder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALSBaseCharacter_eventIsRightShoulder_Parms), &Z_Construct_UFunction_AALSBaseCharacter_IsRightShoulder_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALSBaseCharacter_IsRightShoulder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_IsRightShoulder_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_IsRightShoulder_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "ALS|Camera System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera System */" },
#endif
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera System" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_IsRightShoulder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "IsRightShoulder", nullptr, nullptr, Z_Construct_UFunction_AALSBaseCharacter_IsRightShoulder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_IsRightShoulder_Statics::PropPointers), sizeof(Z_Construct_UFunction_AALSBaseCharacter_IsRightShoulder_Statics::ALSBaseCharacter_eventIsRightShoulder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_IsRightShoulder_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_IsRightShoulder_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_IsRightShoulder_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AALSBaseCharacter_IsRightShoulder_Statics::ALSBaseCharacter_eventIsRightShoulder_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_IsRightShoulder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_IsRightShoulder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_JumpAction_Statics
	{
		static void NewProp_bValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AALSBaseCharacter_JumpAction_Statics::NewProp_bValue_SetBit(void* Obj)
	{
		((ALSBaseCharacter_eventJumpAction_Parms*)Obj)->bValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AALSBaseCharacter_JumpAction_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALSBaseCharacter_eventJumpAction_Parms), &Z_Construct_UFunction_AALSBaseCharacter_JumpAction_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALSBaseCharacter_JumpAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_JumpAction_Statics::NewProp_bValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_JumpAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Input" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_JumpAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "JumpAction", nullptr, nullptr, Z_Construct_UFunction_AALSBaseCharacter_JumpAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_JumpAction_Statics::PropPointers), sizeof(ALSBaseCharacter_eventJumpAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_JumpAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_JumpAction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_JumpAction_Statics::PropPointers) < 2048);
	static_assert(sizeof(ALSBaseCharacter_eventJumpAction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_JumpAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_JumpAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_LookingDirectionAction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_LookingDirectionAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Input" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_LookingDirectionAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "LookingDirectionAction", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_LookingDirectionAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_LookingDirectionAction_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_LookingDirectionAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_LookingDirectionAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_Multicast_OnJumped_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_Multicast_OnJumped_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Character States" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_Multicast_OnJumped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "Multicast_OnJumped", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_Multicast_OnJumped_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_Multicast_OnJumped_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_Multicast_OnJumped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_Multicast_OnJumped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_Multicast_OnLanded_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_Multicast_OnLanded_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Character States" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_Multicast_OnLanded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "Multicast_OnLanded", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_Multicast_OnLanded_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_Multicast_OnLanded_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_Multicast_OnLanded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_Multicast_OnLanded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_Multicast_PlayMontage_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AALSBaseCharacter_Multicast_PlayMontage_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSBaseCharacter_eventMulticast_PlayMontage_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AALSBaseCharacter_Multicast_PlayMontage_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSBaseCharacter_eventMulticast_PlayMontage_Parms, PlayRate), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALSBaseCharacter_Multicast_PlayMontage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_Multicast_PlayMontage_Statics::NewProp_Montage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_Multicast_PlayMontage_Statics::NewProp_PlayRate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_Multicast_PlayMontage_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Character States" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_Multicast_PlayMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "Multicast_PlayMontage", nullptr, nullptr, Z_Construct_UFunction_AALSBaseCharacter_Multicast_PlayMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_Multicast_PlayMontage_Statics::PropPointers), sizeof(ALSBaseCharacter_eventMulticast_PlayMontage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_Multicast_PlayMontage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_Multicast_PlayMontage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_Multicast_PlayMontage_Statics::PropPointers) < 2048);
	static_assert(sizeof(ALSBaseCharacter_eventMulticast_PlayMontage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_Multicast_PlayMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_Multicast_PlayMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_Multicast_RagdollEnd_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AALSBaseCharacter_Multicast_RagdollEnd_Statics::NewProp_CharacterLocation = { "CharacterLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSBaseCharacter_eventMulticast_RagdollEnd_Parms, CharacterLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALSBaseCharacter_Multicast_RagdollEnd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_Multicast_RagdollEnd_Statics::NewProp_CharacterLocation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_Multicast_RagdollEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Character States" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_Multicast_RagdollEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "Multicast_RagdollEnd", nullptr, nullptr, Z_Construct_UFunction_AALSBaseCharacter_Multicast_RagdollEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_Multicast_RagdollEnd_Statics::PropPointers), sizeof(ALSBaseCharacter_eventMulticast_RagdollEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04824CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_Multicast_RagdollEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_Multicast_RagdollEnd_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_Multicast_RagdollEnd_Statics::PropPointers) < 2048);
	static_assert(sizeof(ALSBaseCharacter_eventMulticast_RagdollEnd_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_Multicast_RagdollEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_Multicast_RagdollEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_Multicast_RagdollStart_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_Multicast_RagdollStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Character States" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_Multicast_RagdollStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "Multicast_RagdollStart", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_Multicast_RagdollStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_Multicast_RagdollStart_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_Multicast_RagdollStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_Multicast_RagdollStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_OnBreakfall_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_OnBreakfall_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Movement System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** BP implementable function that called when Breakfall starts */" },
#endif
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BP implementable function that called when Breakfall starts" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_OnBreakfall_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "OnBreakfall", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_OnBreakfall_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_OnBreakfall_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_OnBreakfall()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_OnBreakfall_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_OnRep_OverlayState_Statics
	{
		struct ALSBaseCharacter_eventOnRep_OverlayState_Parms
		{
			EALSOverlayState PrevOverlayState;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_PrevOverlayState_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PrevOverlayState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AALSBaseCharacter_OnRep_OverlayState_Statics::NewProp_PrevOverlayState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AALSBaseCharacter_OnRep_OverlayState_Statics::NewProp_PrevOverlayState = { "PrevOverlayState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSBaseCharacter_eventOnRep_OverlayState_Parms, PrevOverlayState), Z_Construct_UEnum_ALSV4_CPP_EALSOverlayState, METADATA_PARAMS(0, nullptr) }; // 3560812144
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALSBaseCharacter_OnRep_OverlayState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_OnRep_OverlayState_Statics::NewProp_PrevOverlayState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_OnRep_OverlayState_Statics::NewProp_PrevOverlayState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_OnRep_OverlayState_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Replication" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_OnRep_OverlayState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "OnRep_OverlayState", nullptr, nullptr, Z_Construct_UFunction_AALSBaseCharacter_OnRep_OverlayState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_OnRep_OverlayState_Statics::PropPointers), sizeof(Z_Construct_UFunction_AALSBaseCharacter_OnRep_OverlayState_Statics::ALSBaseCharacter_eventOnRep_OverlayState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_OnRep_OverlayState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_OnRep_OverlayState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_OnRep_OverlayState_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AALSBaseCharacter_OnRep_OverlayState_Statics::ALSBaseCharacter_eventOnRep_OverlayState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_OnRep_OverlayState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_OnRep_OverlayState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_OnRep_RotationMode_Statics
	{
		struct ALSBaseCharacter_eventOnRep_RotationMode_Parms
		{
			EALSRotationMode PrevRotMode;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_PrevRotMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PrevRotMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AALSBaseCharacter_OnRep_RotationMode_Statics::NewProp_PrevRotMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AALSBaseCharacter_OnRep_RotationMode_Statics::NewProp_PrevRotMode = { "PrevRotMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSBaseCharacter_eventOnRep_RotationMode_Parms, PrevRotMode), Z_Construct_UEnum_ALSV4_CPP_EALSRotationMode, METADATA_PARAMS(0, nullptr) }; // 3543998324
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALSBaseCharacter_OnRep_RotationMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_OnRep_RotationMode_Statics::NewProp_PrevRotMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_OnRep_RotationMode_Statics::NewProp_PrevRotMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_OnRep_RotationMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Replication" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Replication */" },
#endif
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Replication" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_OnRep_RotationMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "OnRep_RotationMode", nullptr, nullptr, Z_Construct_UFunction_AALSBaseCharacter_OnRep_RotationMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_OnRep_RotationMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_AALSBaseCharacter_OnRep_RotationMode_Statics::ALSBaseCharacter_eventOnRep_RotationMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_OnRep_RotationMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_OnRep_RotationMode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_OnRep_RotationMode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AALSBaseCharacter_OnRep_RotationMode_Statics::ALSBaseCharacter_eventOnRep_RotationMode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_OnRep_RotationMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_OnRep_RotationMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_OnRep_ViewMode_Statics
	{
		struct ALSBaseCharacter_eventOnRep_ViewMode_Parms
		{
			EALSViewMode PrevViewMode;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_PrevViewMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PrevViewMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AALSBaseCharacter_OnRep_ViewMode_Statics::NewProp_PrevViewMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AALSBaseCharacter_OnRep_ViewMode_Statics::NewProp_PrevViewMode = { "PrevViewMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSBaseCharacter_eventOnRep_ViewMode_Parms, PrevViewMode), Z_Construct_UEnum_ALSV4_CPP_EALSViewMode, METADATA_PARAMS(0, nullptr) }; // 98731475
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALSBaseCharacter_OnRep_ViewMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_OnRep_ViewMode_Statics::NewProp_PrevViewMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_OnRep_ViewMode_Statics::NewProp_PrevViewMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_OnRep_ViewMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Replication" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_OnRep_ViewMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "OnRep_ViewMode", nullptr, nullptr, Z_Construct_UFunction_AALSBaseCharacter_OnRep_ViewMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_OnRep_ViewMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_AALSBaseCharacter_OnRep_ViewMode_Statics::ALSBaseCharacter_eventOnRep_ViewMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_OnRep_ViewMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_OnRep_ViewMode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_OnRep_ViewMode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AALSBaseCharacter_OnRep_ViewMode_Statics::ALSBaseCharacter_eventOnRep_ViewMode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_OnRep_ViewMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_OnRep_ViewMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_OnRep_VisibleMesh_Statics
	{
		struct ALSBaseCharacter_eventOnRep_VisibleMesh_Parms
		{
			const USkeletalMesh* PreviousSkeletalMesh;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousSkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviousSkeletalMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_OnRep_VisibleMesh_Statics::NewProp_PreviousSkeletalMesh_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AALSBaseCharacter_OnRep_VisibleMesh_Statics::NewProp_PreviousSkeletalMesh = { "PreviousSkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSBaseCharacter_eventOnRep_VisibleMesh_Parms, PreviousSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_OnRep_VisibleMesh_Statics::NewProp_PreviousSkeletalMesh_MetaData), Z_Construct_UFunction_AALSBaseCharacter_OnRep_VisibleMesh_Statics::NewProp_PreviousSkeletalMesh_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALSBaseCharacter_OnRep_VisibleMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_OnRep_VisibleMesh_Statics::NewProp_PreviousSkeletalMesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_OnRep_VisibleMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Replication" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_OnRep_VisibleMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "OnRep_VisibleMesh", nullptr, nullptr, Z_Construct_UFunction_AALSBaseCharacter_OnRep_VisibleMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_OnRep_VisibleMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_AALSBaseCharacter_OnRep_VisibleMesh_Statics::ALSBaseCharacter_eventOnRep_VisibleMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_OnRep_VisibleMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_OnRep_VisibleMesh_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_OnRep_VisibleMesh_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AALSBaseCharacter_OnRep_VisibleMesh_Statics::ALSBaseCharacter_eventOnRep_VisibleMesh_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_OnRep_VisibleMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_OnRep_VisibleMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_RagdollAction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_RagdollAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Input" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_RagdollAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "RagdollAction", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_RagdollAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_RagdollAction_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_RagdollAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_RagdollAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_RagdollEnd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_RagdollEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Ragdoll System" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_RagdollEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "RagdollEnd", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_RagdollEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_RagdollEnd_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_RagdollEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_RagdollEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_RagdollStart_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_RagdollStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Ragdoll System" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_RagdollStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "RagdollStart", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_RagdollStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_RagdollStart_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_RagdollStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_RagdollStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_Replicated_PlayMontage_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AALSBaseCharacter_Replicated_PlayMontage_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSBaseCharacter_eventReplicated_PlayMontage_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AALSBaseCharacter_Replicated_PlayMontage_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSBaseCharacter_eventReplicated_PlayMontage_Parms, PlayRate), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALSBaseCharacter_Replicated_PlayMontage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_Replicated_PlayMontage_Statics::NewProp_Montage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_Replicated_PlayMontage_Statics::NewProp_PlayRate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_Replicated_PlayMontage_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Movement System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** BP implementable function that called when A Montage starts, e.g. during rolling */" },
#endif
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BP implementable function that called when A Montage starts, e.g. during rolling" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_Replicated_PlayMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "Replicated_PlayMontage", nullptr, nullptr, Z_Construct_UFunction_AALSBaseCharacter_Replicated_PlayMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_Replicated_PlayMontage_Statics::PropPointers), sizeof(ALSBaseCharacter_eventReplicated_PlayMontage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_Replicated_PlayMontage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_Replicated_PlayMontage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_Replicated_PlayMontage_Statics::PropPointers) < 2048);
	static_assert(sizeof(ALSBaseCharacter_eventReplicated_PlayMontage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_Replicated_PlayMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_Replicated_PlayMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_ReplicatedRagdollEnd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_ReplicatedRagdollEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Character States" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_ReplicatedRagdollEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "ReplicatedRagdollEnd", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_ReplicatedRagdollEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_ReplicatedRagdollEnd_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_ReplicatedRagdollEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_ReplicatedRagdollEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_ReplicatedRagdollStart_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_ReplicatedRagdollStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Character States" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Ragdolling*/" },
#endif
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ragdolling" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_ReplicatedRagdollStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "ReplicatedRagdollStart", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_ReplicatedRagdollStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_ReplicatedRagdollStart_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_ReplicatedRagdollStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_ReplicatedRagdollStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_RightMovementAction_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AALSBaseCharacter_RightMovementAction_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSBaseCharacter_eventRightMovementAction_Parms, Value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALSBaseCharacter_RightMovementAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_RightMovementAction_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_RightMovementAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Input" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_RightMovementAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "RightMovementAction", nullptr, nullptr, Z_Construct_UFunction_AALSBaseCharacter_RightMovementAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_RightMovementAction_Statics::PropPointers), sizeof(ALSBaseCharacter_eventRightMovementAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_RightMovementAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_RightMovementAction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_RightMovementAction_Statics::PropPointers) < 2048);
	static_assert(sizeof(ALSBaseCharacter_eventRightMovementAction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_RightMovementAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_RightMovementAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_Server_PlayMontage_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AALSBaseCharacter_Server_PlayMontage_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSBaseCharacter_eventServer_PlayMontage_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AALSBaseCharacter_Server_PlayMontage_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSBaseCharacter_eventServer_PlayMontage_Parms, PlayRate), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALSBaseCharacter_Server_PlayMontage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_Server_PlayMontage_Statics::NewProp_Montage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_Server_PlayMontage_Statics::NewProp_PlayRate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_Server_PlayMontage_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Character States" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Rolling Montage Play Replication*/" },
#endif
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rolling Montage Play Replication" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_Server_PlayMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "Server_PlayMontage", nullptr, nullptr, Z_Construct_UFunction_AALSBaseCharacter_Server_PlayMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_Server_PlayMontage_Statics::PropPointers), sizeof(ALSBaseCharacter_eventServer_PlayMontage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_Server_PlayMontage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_Server_PlayMontage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_Server_PlayMontage_Statics::PropPointers) < 2048);
	static_assert(sizeof(ALSBaseCharacter_eventServer_PlayMontage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_Server_PlayMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_Server_PlayMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_Server_RagdollEnd_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AALSBaseCharacter_Server_RagdollEnd_Statics::NewProp_CharacterLocation = { "CharacterLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSBaseCharacter_eventServer_RagdollEnd_Parms, CharacterLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALSBaseCharacter_Server_RagdollEnd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_Server_RagdollEnd_Statics::NewProp_CharacterLocation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_Server_RagdollEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Character States" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_Server_RagdollEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "Server_RagdollEnd", nullptr, nullptr, Z_Construct_UFunction_AALSBaseCharacter_Server_RagdollEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_Server_RagdollEnd_Statics::PropPointers), sizeof(ALSBaseCharacter_eventServer_RagdollEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04A20CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_Server_RagdollEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_Server_RagdollEnd_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_Server_RagdollEnd_Statics::PropPointers) < 2048);
	static_assert(sizeof(ALSBaseCharacter_eventServer_RagdollEnd_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_Server_RagdollEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_Server_RagdollEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_Server_RagdollStart_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_Server_RagdollStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Character States" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_Server_RagdollStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "Server_RagdollStart", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_Server_RagdollStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_Server_RagdollStart_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_Server_RagdollStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_Server_RagdollStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_Server_SetDesiredGait_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewGait_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewGait;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AALSBaseCharacter_Server_SetDesiredGait_Statics::NewProp_NewGait_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AALSBaseCharacter_Server_SetDesiredGait_Statics::NewProp_NewGait = { "NewGait", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSBaseCharacter_eventServer_SetDesiredGait_Parms, NewGait), Z_Construct_UEnum_ALSV4_CPP_EALSGait, METADATA_PARAMS(0, nullptr) }; // 4204508735
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALSBaseCharacter_Server_SetDesiredGait_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_Server_SetDesiredGait_Statics::NewProp_NewGait_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_Server_SetDesiredGait_Statics::NewProp_NewGait,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_Server_SetDesiredGait_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Character States" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_Server_SetDesiredGait_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "Server_SetDesiredGait", nullptr, nullptr, Z_Construct_UFunction_AALSBaseCharacter_Server_SetDesiredGait_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_Server_SetDesiredGait_Statics::PropPointers), sizeof(ALSBaseCharacter_eventServer_SetDesiredGait_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_Server_SetDesiredGait_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_Server_SetDesiredGait_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_Server_SetDesiredGait_Statics::PropPointers) < 2048);
	static_assert(sizeof(ALSBaseCharacter_eventServer_SetDesiredGait_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_Server_SetDesiredGait()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_Server_SetDesiredGait_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_Server_SetDesiredRotationMode_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewRotMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewRotMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AALSBaseCharacter_Server_SetDesiredRotationMode_Statics::NewProp_NewRotMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AALSBaseCharacter_Server_SetDesiredRotationMode_Statics::NewProp_NewRotMode = { "NewRotMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSBaseCharacter_eventServer_SetDesiredRotationMode_Parms, NewRotMode), Z_Construct_UEnum_ALSV4_CPP_EALSRotationMode, METADATA_PARAMS(0, nullptr) }; // 3543998324
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALSBaseCharacter_Server_SetDesiredRotationMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_Server_SetDesiredRotationMode_Statics::NewProp_NewRotMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_Server_SetDesiredRotationMode_Statics::NewProp_NewRotMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_Server_SetDesiredRotationMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Character States" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_Server_SetDesiredRotationMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "Server_SetDesiredRotationMode", nullptr, nullptr, Z_Construct_UFunction_AALSBaseCharacter_Server_SetDesiredRotationMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_Server_SetDesiredRotationMode_Statics::PropPointers), sizeof(ALSBaseCharacter_eventServer_SetDesiredRotationMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_Server_SetDesiredRotationMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_Server_SetDesiredRotationMode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_Server_SetDesiredRotationMode_Statics::PropPointers) < 2048);
	static_assert(sizeof(ALSBaseCharacter_eventServer_SetDesiredRotationMode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_Server_SetDesiredRotationMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_Server_SetDesiredRotationMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_Server_SetDesiredStance_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewStance_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewStance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AALSBaseCharacter_Server_SetDesiredStance_Statics::NewProp_NewStance_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AALSBaseCharacter_Server_SetDesiredStance_Statics::NewProp_NewStance = { "NewStance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSBaseCharacter_eventServer_SetDesiredStance_Parms, NewStance), Z_Construct_UEnum_ALSV4_CPP_EALSStance, METADATA_PARAMS(0, nullptr) }; // 98898313
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALSBaseCharacter_Server_SetDesiredStance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_Server_SetDesiredStance_Statics::NewProp_NewStance_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_Server_SetDesiredStance_Statics::NewProp_NewStance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_Server_SetDesiredStance_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Input" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_Server_SetDesiredStance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "Server_SetDesiredStance", nullptr, nullptr, Z_Construct_UFunction_AALSBaseCharacter_Server_SetDesiredStance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_Server_SetDesiredStance_Statics::PropPointers), sizeof(ALSBaseCharacter_eventServer_SetDesiredStance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_Server_SetDesiredStance_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_Server_SetDesiredStance_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_Server_SetDesiredStance_Statics::PropPointers) < 2048);
	static_assert(sizeof(ALSBaseCharacter_eventServer_SetDesiredStance_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_Server_SetDesiredStance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_Server_SetDesiredStance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_Server_SetMeshLocationDuringRagdoll_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeshLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AALSBaseCharacter_Server_SetMeshLocationDuringRagdoll_Statics::NewProp_MeshLocation = { "MeshLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSBaseCharacter_eventServer_SetMeshLocationDuringRagdoll_Parms, MeshLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALSBaseCharacter_Server_SetMeshLocationDuringRagdoll_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_Server_SetMeshLocationDuringRagdoll_Statics::NewProp_MeshLocation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_Server_SetMeshLocationDuringRagdoll_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Ragdoll System" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_Server_SetMeshLocationDuringRagdoll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "Server_SetMeshLocationDuringRagdoll", nullptr, nullptr, Z_Construct_UFunction_AALSBaseCharacter_Server_SetMeshLocationDuringRagdoll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_Server_SetMeshLocationDuringRagdoll_Statics::PropPointers), sizeof(ALSBaseCharacter_eventServer_SetMeshLocationDuringRagdoll_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04A20C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_Server_SetMeshLocationDuringRagdoll_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_Server_SetMeshLocationDuringRagdoll_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_Server_SetMeshLocationDuringRagdoll_Statics::PropPointers) < 2048);
	static_assert(sizeof(ALSBaseCharacter_eventServer_SetMeshLocationDuringRagdoll_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_Server_SetMeshLocationDuringRagdoll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_Server_SetMeshLocationDuringRagdoll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_Server_SetOverlayState_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static void NewProp_bForce_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForce;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AALSBaseCharacter_Server_SetOverlayState_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AALSBaseCharacter_Server_SetOverlayState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSBaseCharacter_eventServer_SetOverlayState_Parms, NewState), Z_Construct_UEnum_ALSV4_CPP_EALSOverlayState, METADATA_PARAMS(0, nullptr) }; // 3560812144
	void Z_Construct_UFunction_AALSBaseCharacter_Server_SetOverlayState_Statics::NewProp_bForce_SetBit(void* Obj)
	{
		((ALSBaseCharacter_eventServer_SetOverlayState_Parms*)Obj)->bForce = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AALSBaseCharacter_Server_SetOverlayState_Statics::NewProp_bForce = { "bForce", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALSBaseCharacter_eventServer_SetOverlayState_Parms), &Z_Construct_UFunction_AALSBaseCharacter_Server_SetOverlayState_Statics::NewProp_bForce_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALSBaseCharacter_Server_SetOverlayState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_Server_SetOverlayState_Statics::NewProp_NewState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_Server_SetOverlayState_Statics::NewProp_NewState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_Server_SetOverlayState_Statics::NewProp_bForce,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_Server_SetOverlayState_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Character States" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_Server_SetOverlayState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "Server_SetOverlayState", nullptr, nullptr, Z_Construct_UFunction_AALSBaseCharacter_Server_SetOverlayState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_Server_SetOverlayState_Statics::PropPointers), sizeof(ALSBaseCharacter_eventServer_SetOverlayState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_Server_SetOverlayState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_Server_SetOverlayState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_Server_SetOverlayState_Statics::PropPointers) < 2048);
	static_assert(sizeof(ALSBaseCharacter_eventServer_SetOverlayState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_Server_SetOverlayState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_Server_SetOverlayState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_Server_SetRotationMode_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewRotationMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewRotationMode;
		static void NewProp_bForce_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForce;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AALSBaseCharacter_Server_SetRotationMode_Statics::NewProp_NewRotationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AALSBaseCharacter_Server_SetRotationMode_Statics::NewProp_NewRotationMode = { "NewRotationMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSBaseCharacter_eventServer_SetRotationMode_Parms, NewRotationMode), Z_Construct_UEnum_ALSV4_CPP_EALSRotationMode, METADATA_PARAMS(0, nullptr) }; // 3543998324
	void Z_Construct_UFunction_AALSBaseCharacter_Server_SetRotationMode_Statics::NewProp_bForce_SetBit(void* Obj)
	{
		((ALSBaseCharacter_eventServer_SetRotationMode_Parms*)Obj)->bForce = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AALSBaseCharacter_Server_SetRotationMode_Statics::NewProp_bForce = { "bForce", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALSBaseCharacter_eventServer_SetRotationMode_Parms), &Z_Construct_UFunction_AALSBaseCharacter_Server_SetRotationMode_Statics::NewProp_bForce_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALSBaseCharacter_Server_SetRotationMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_Server_SetRotationMode_Statics::NewProp_NewRotationMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_Server_SetRotationMode_Statics::NewProp_NewRotationMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_Server_SetRotationMode_Statics::NewProp_bForce,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_Server_SetRotationMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Character States" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_Server_SetRotationMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "Server_SetRotationMode", nullptr, nullptr, Z_Construct_UFunction_AALSBaseCharacter_Server_SetRotationMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_Server_SetRotationMode_Statics::PropPointers), sizeof(ALSBaseCharacter_eventServer_SetRotationMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_Server_SetRotationMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_Server_SetRotationMode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_Server_SetRotationMode_Statics::PropPointers) < 2048);
	static_assert(sizeof(ALSBaseCharacter_eventServer_SetRotationMode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_Server_SetRotationMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_Server_SetRotationMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_Server_SetViewMode_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewViewMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewViewMode;
		static void NewProp_bForce_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForce;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AALSBaseCharacter_Server_SetViewMode_Statics::NewProp_NewViewMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AALSBaseCharacter_Server_SetViewMode_Statics::NewProp_NewViewMode = { "NewViewMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSBaseCharacter_eventServer_SetViewMode_Parms, NewViewMode), Z_Construct_UEnum_ALSV4_CPP_EALSViewMode, METADATA_PARAMS(0, nullptr) }; // 98731475
	void Z_Construct_UFunction_AALSBaseCharacter_Server_SetViewMode_Statics::NewProp_bForce_SetBit(void* Obj)
	{
		((ALSBaseCharacter_eventServer_SetViewMode_Parms*)Obj)->bForce = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AALSBaseCharacter_Server_SetViewMode_Statics::NewProp_bForce = { "bForce", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALSBaseCharacter_eventServer_SetViewMode_Parms), &Z_Construct_UFunction_AALSBaseCharacter_Server_SetViewMode_Statics::NewProp_bForce_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALSBaseCharacter_Server_SetViewMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_Server_SetViewMode_Statics::NewProp_NewViewMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_Server_SetViewMode_Statics::NewProp_NewViewMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_Server_SetViewMode_Statics::NewProp_bForce,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_Server_SetViewMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Character States" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_Server_SetViewMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "Server_SetViewMode", nullptr, nullptr, Z_Construct_UFunction_AALSBaseCharacter_Server_SetViewMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_Server_SetViewMode_Statics::PropPointers), sizeof(ALSBaseCharacter_eventServer_SetViewMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_Server_SetViewMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_Server_SetViewMode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_Server_SetViewMode_Statics::PropPointers) < 2048);
	static_assert(sizeof(ALSBaseCharacter_eventServer_SetViewMode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_Server_SetViewMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_Server_SetViewMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_Server_SetVisibleMesh_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewSkeletalMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AALSBaseCharacter_Server_SetVisibleMesh_Statics::NewProp_NewSkeletalMesh = { "NewSkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSBaseCharacter_eventServer_SetVisibleMesh_Parms, NewSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALSBaseCharacter_Server_SetVisibleMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_Server_SetVisibleMesh_Statics::NewProp_NewSkeletalMesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_Server_SetVisibleMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Utility" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_Server_SetVisibleMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "Server_SetVisibleMesh", nullptr, nullptr, Z_Construct_UFunction_AALSBaseCharacter_Server_SetVisibleMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_Server_SetVisibleMesh_Statics::PropPointers), sizeof(ALSBaseCharacter_eventServer_SetVisibleMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_Server_SetVisibleMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_Server_SetVisibleMesh_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_Server_SetVisibleMesh_Statics::PropPointers) < 2048);
	static_assert(sizeof(ALSBaseCharacter_eventServer_SetVisibleMesh_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_Server_SetVisibleMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_Server_SetVisibleMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_SetActorLocationAndTargetRotation_Statics
	{
		struct ALSBaseCharacter_eventSetActorLocationAndTargetRotation_Parms
		{
			FVector NewLocation;
			FRotator NewRotation;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AALSBaseCharacter_SetActorLocationAndTargetRotation_Statics::NewProp_NewLocation = { "NewLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSBaseCharacter_eventSetActorLocationAndTargetRotation_Parms, NewLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AALSBaseCharacter_SetActorLocationAndTargetRotation_Statics::NewProp_NewRotation = { "NewRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSBaseCharacter_eventSetActorLocationAndTargetRotation_Parms, NewRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALSBaseCharacter_SetActorLocationAndTargetRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_SetActorLocationAndTargetRotation_Statics::NewProp_NewLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_SetActorLocationAndTargetRotation_Statics::NewProp_NewRotation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_SetActorLocationAndTargetRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Rotation System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Rotation System */" },
#endif
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rotation System" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_SetActorLocationAndTargetRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "SetActorLocationAndTargetRotation", nullptr, nullptr, Z_Construct_UFunction_AALSBaseCharacter_SetActorLocationAndTargetRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_SetActorLocationAndTargetRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AALSBaseCharacter_SetActorLocationAndTargetRotation_Statics::ALSBaseCharacter_eventSetActorLocationAndTargetRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_SetActorLocationAndTargetRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_SetActorLocationAndTargetRotation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_SetActorLocationAndTargetRotation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AALSBaseCharacter_SetActorLocationAndTargetRotation_Statics::ALSBaseCharacter_eventSetActorLocationAndTargetRotation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_SetActorLocationAndTargetRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_SetActorLocationAndTargetRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_SetCameraBehavior_Statics
	{
		struct ALSBaseCharacter_eventSetCameraBehavior_Parms
		{
			UALSPlayerCameraBehavior* CamBeh;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CamBeh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AALSBaseCharacter_SetCameraBehavior_Statics::NewProp_CamBeh = { "CamBeh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSBaseCharacter_eventSetCameraBehavior_Parms, CamBeh), Z_Construct_UClass_UALSPlayerCameraBehavior_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALSBaseCharacter_SetCameraBehavior_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_SetCameraBehavior_Statics::NewProp_CamBeh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_SetCameraBehavior_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Camera System" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_SetCameraBehavior_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "SetCameraBehavior", nullptr, nullptr, Z_Construct_UFunction_AALSBaseCharacter_SetCameraBehavior_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_SetCameraBehavior_Statics::PropPointers), sizeof(Z_Construct_UFunction_AALSBaseCharacter_SetCameraBehavior_Statics::ALSBaseCharacter_eventSetCameraBehavior_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_SetCameraBehavior_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_SetCameraBehavior_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_SetCameraBehavior_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AALSBaseCharacter_SetCameraBehavior_Statics::ALSBaseCharacter_eventSetCameraBehavior_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_SetCameraBehavior()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_SetCameraBehavior_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_SetDesiredGait_Statics
	{
		struct ALSBaseCharacter_eventSetDesiredGait_Parms
		{
			EALSGait NewGait;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewGait_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewGait;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AALSBaseCharacter_SetDesiredGait_Statics::NewProp_NewGait_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AALSBaseCharacter_SetDesiredGait_Statics::NewProp_NewGait = { "NewGait", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSBaseCharacter_eventSetDesiredGait_Parms, NewGait), Z_Construct_UEnum_ALSV4_CPP_EALSGait, METADATA_PARAMS(0, nullptr) }; // 4204508735
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALSBaseCharacter_SetDesiredGait_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_SetDesiredGait_Statics::NewProp_NewGait_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_SetDesiredGait_Statics::NewProp_NewGait,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_SetDesiredGait_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Character States" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_SetDesiredGait_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "SetDesiredGait", nullptr, nullptr, Z_Construct_UFunction_AALSBaseCharacter_SetDesiredGait_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_SetDesiredGait_Statics::PropPointers), sizeof(Z_Construct_UFunction_AALSBaseCharacter_SetDesiredGait_Statics::ALSBaseCharacter_eventSetDesiredGait_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_SetDesiredGait_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_SetDesiredGait_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_SetDesiredGait_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AALSBaseCharacter_SetDesiredGait_Statics::ALSBaseCharacter_eventSetDesiredGait_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_SetDesiredGait()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_SetDesiredGait_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_SetDesiredRotationMode_Statics
	{
		struct ALSBaseCharacter_eventSetDesiredRotationMode_Parms
		{
			EALSRotationMode NewRotMode;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewRotMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewRotMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AALSBaseCharacter_SetDesiredRotationMode_Statics::NewProp_NewRotMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AALSBaseCharacter_SetDesiredRotationMode_Statics::NewProp_NewRotMode = { "NewRotMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSBaseCharacter_eventSetDesiredRotationMode_Parms, NewRotMode), Z_Construct_UEnum_ALSV4_CPP_EALSRotationMode, METADATA_PARAMS(0, nullptr) }; // 3543998324
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALSBaseCharacter_SetDesiredRotationMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_SetDesiredRotationMode_Statics::NewProp_NewRotMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_SetDesiredRotationMode_Statics::NewProp_NewRotMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_SetDesiredRotationMode_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "ALS|Input" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_SetDesiredRotationMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "SetDesiredRotationMode", nullptr, nullptr, Z_Construct_UFunction_AALSBaseCharacter_SetDesiredRotationMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_SetDesiredRotationMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_AALSBaseCharacter_SetDesiredRotationMode_Statics::ALSBaseCharacter_eventSetDesiredRotationMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_SetDesiredRotationMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_SetDesiredRotationMode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_SetDesiredRotationMode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AALSBaseCharacter_SetDesiredRotationMode_Statics::ALSBaseCharacter_eventSetDesiredRotationMode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_SetDesiredRotationMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_SetDesiredRotationMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_SetDesiredStance_Statics
	{
		struct ALSBaseCharacter_eventSetDesiredStance_Parms
		{
			EALSStance NewStance;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewStance_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewStance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AALSBaseCharacter_SetDesiredStance_Statics::NewProp_NewStance_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AALSBaseCharacter_SetDesiredStance_Statics::NewProp_NewStance = { "NewStance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSBaseCharacter_eventSetDesiredStance_Parms, NewStance), Z_Construct_UEnum_ALSV4_CPP_EALSStance, METADATA_PARAMS(0, nullptr) }; // 98898313
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALSBaseCharacter_SetDesiredStance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_SetDesiredStance_Statics::NewProp_NewStance_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_SetDesiredStance_Statics::NewProp_NewStance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_SetDesiredStance_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "ALS|Input" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_SetDesiredStance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "SetDesiredStance", nullptr, nullptr, Z_Construct_UFunction_AALSBaseCharacter_SetDesiredStance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_SetDesiredStance_Statics::PropPointers), sizeof(Z_Construct_UFunction_AALSBaseCharacter_SetDesiredStance_Statics::ALSBaseCharacter_eventSetDesiredStance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_SetDesiredStance_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_SetDesiredStance_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_SetDesiredStance_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AALSBaseCharacter_SetDesiredStance_Statics::ALSBaseCharacter_eventSetDesiredStance_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_SetDesiredStance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_SetDesiredStance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_SetGait_Statics
	{
		struct ALSBaseCharacter_eventSetGait_Parms
		{
			EALSGait NewGait;
			bool bForce;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewGait_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewGait;
		static void NewProp_bForce_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForce;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AALSBaseCharacter_SetGait_Statics::NewProp_NewGait_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AALSBaseCharacter_SetGait_Statics::NewProp_NewGait = { "NewGait", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSBaseCharacter_eventSetGait_Parms, NewGait), Z_Construct_UEnum_ALSV4_CPP_EALSGait, METADATA_PARAMS(0, nullptr) }; // 4204508735
	void Z_Construct_UFunction_AALSBaseCharacter_SetGait_Statics::NewProp_bForce_SetBit(void* Obj)
	{
		((ALSBaseCharacter_eventSetGait_Parms*)Obj)->bForce = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AALSBaseCharacter_SetGait_Statics::NewProp_bForce = { "bForce", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALSBaseCharacter_eventSetGait_Parms), &Z_Construct_UFunction_AALSBaseCharacter_SetGait_Statics::NewProp_bForce_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALSBaseCharacter_SetGait_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_SetGait_Statics::NewProp_NewGait_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_SetGait_Statics::NewProp_NewGait,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_SetGait_Statics::NewProp_bForce,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_SetGait_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Character States" },
		{ "CPP_Default_bForce", "false" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_SetGait_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "SetGait", nullptr, nullptr, Z_Construct_UFunction_AALSBaseCharacter_SetGait_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_SetGait_Statics::PropPointers), sizeof(Z_Construct_UFunction_AALSBaseCharacter_SetGait_Statics::ALSBaseCharacter_eventSetGait_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_SetGait_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_SetGait_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_SetGait_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AALSBaseCharacter_SetGait_Statics::ALSBaseCharacter_eventSetGait_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_SetGait()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_SetGait_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_SetGroundedEntryState_Statics
	{
		struct ALSBaseCharacter_eventSetGroundedEntryState_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AALSBaseCharacter_SetGroundedEntryState_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AALSBaseCharacter_SetGroundedEntryState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSBaseCharacter_eventSetGroundedEntryState_Parms, NewState), Z_Construct_UEnum_ALSV4_CPP_EALSGroundedEntryState, METADATA_PARAMS(0, nullptr) }; // 1781834569
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALSBaseCharacter_SetGroundedEntryState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_SetGroundedEntryState_Statics::NewProp_NewState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_SetGroundedEntryState_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_SetGroundedEntryState_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Character States" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_SetGroundedEntryState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "SetGroundedEntryState", nullptr, nullptr, Z_Construct_UFunction_AALSBaseCharacter_SetGroundedEntryState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_SetGroundedEntryState_Statics::PropPointers), sizeof(Z_Construct_UFunction_AALSBaseCharacter_SetGroundedEntryState_Statics::ALSBaseCharacter_eventSetGroundedEntryState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_SetGroundedEntryState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_SetGroundedEntryState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_SetGroundedEntryState_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AALSBaseCharacter_SetGroundedEntryState_Statics::ALSBaseCharacter_eventSetGroundedEntryState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_SetGroundedEntryState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_SetGroundedEntryState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_SetMovementAction_Statics
	{
		struct ALSBaseCharacter_eventSetMovementAction_Parms
		{
			EALSMovementAction NewAction;
			bool bForce;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewAction_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewAction;
		static void NewProp_bForce_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForce;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AALSBaseCharacter_SetMovementAction_Statics::NewProp_NewAction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AALSBaseCharacter_SetMovementAction_Statics::NewProp_NewAction = { "NewAction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSBaseCharacter_eventSetMovementAction_Parms, NewAction), Z_Construct_UEnum_ALSV4_CPP_EALSMovementAction, METADATA_PARAMS(0, nullptr) }; // 1229765569
	void Z_Construct_UFunction_AALSBaseCharacter_SetMovementAction_Statics::NewProp_bForce_SetBit(void* Obj)
	{
		((ALSBaseCharacter_eventSetMovementAction_Parms*)Obj)->bForce = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AALSBaseCharacter_SetMovementAction_Statics::NewProp_bForce = { "bForce", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALSBaseCharacter_eventSetMovementAction_Parms), &Z_Construct_UFunction_AALSBaseCharacter_SetMovementAction_Statics::NewProp_bForce_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALSBaseCharacter_SetMovementAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_SetMovementAction_Statics::NewProp_NewAction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_SetMovementAction_Statics::NewProp_NewAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_SetMovementAction_Statics::NewProp_bForce,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_SetMovementAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Character States" },
		{ "CPP_Default_bForce", "false" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_SetMovementAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "SetMovementAction", nullptr, nullptr, Z_Construct_UFunction_AALSBaseCharacter_SetMovementAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_SetMovementAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_AALSBaseCharacter_SetMovementAction_Statics::ALSBaseCharacter_eventSetMovementAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_SetMovementAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_SetMovementAction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_SetMovementAction_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AALSBaseCharacter_SetMovementAction_Statics::ALSBaseCharacter_eventSetMovementAction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_SetMovementAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_SetMovementAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_SetMovementState_Statics
	{
		struct ALSBaseCharacter_eventSetMovementState_Parms
		{
			EALSMovementState NewState;
			bool bForce;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static void NewProp_bForce_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForce;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AALSBaseCharacter_SetMovementState_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AALSBaseCharacter_SetMovementState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSBaseCharacter_eventSetMovementState_Parms, NewState), Z_Construct_UEnum_ALSV4_CPP_EALSMovementState, METADATA_PARAMS(0, nullptr) }; // 2855841202
	void Z_Construct_UFunction_AALSBaseCharacter_SetMovementState_Statics::NewProp_bForce_SetBit(void* Obj)
	{
		((ALSBaseCharacter_eventSetMovementState_Parms*)Obj)->bForce = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AALSBaseCharacter_SetMovementState_Statics::NewProp_bForce = { "bForce", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALSBaseCharacter_eventSetMovementState_Parms), &Z_Construct_UFunction_AALSBaseCharacter_SetMovementState_Statics::NewProp_bForce_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALSBaseCharacter_SetMovementState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_SetMovementState_Statics::NewProp_NewState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_SetMovementState_Statics::NewProp_NewState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_SetMovementState_Statics::NewProp_bForce,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_SetMovementState_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Character States" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Character States */" },
#endif
		{ "CPP_Default_bForce", "false" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Character States" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_SetMovementState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "SetMovementState", nullptr, nullptr, Z_Construct_UFunction_AALSBaseCharacter_SetMovementState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_SetMovementState_Statics::PropPointers), sizeof(Z_Construct_UFunction_AALSBaseCharacter_SetMovementState_Statics::ALSBaseCharacter_eventSetMovementState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_SetMovementState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_SetMovementState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_SetMovementState_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AALSBaseCharacter_SetMovementState_Statics::ALSBaseCharacter_eventSetMovementState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_SetMovementState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_SetMovementState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_SetOverlayOverrideState_Statics
	{
		struct ALSBaseCharacter_eventSetOverlayOverrideState_Parms
		{
			int32 NewState;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AALSBaseCharacter_SetOverlayOverrideState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSBaseCharacter_eventSetOverlayOverrideState_Parms, NewState), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALSBaseCharacter_SetOverlayOverrideState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_SetOverlayOverrideState_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_SetOverlayOverrideState_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Character States" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_SetOverlayOverrideState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "SetOverlayOverrideState", nullptr, nullptr, Z_Construct_UFunction_AALSBaseCharacter_SetOverlayOverrideState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_SetOverlayOverrideState_Statics::PropPointers), sizeof(Z_Construct_UFunction_AALSBaseCharacter_SetOverlayOverrideState_Statics::ALSBaseCharacter_eventSetOverlayOverrideState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_SetOverlayOverrideState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_SetOverlayOverrideState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_SetOverlayOverrideState_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AALSBaseCharacter_SetOverlayOverrideState_Statics::ALSBaseCharacter_eventSetOverlayOverrideState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_SetOverlayOverrideState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_SetOverlayOverrideState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_SetOverlayState_Statics
	{
		struct ALSBaseCharacter_eventSetOverlayState_Parms
		{
			EALSOverlayState NewState;
			bool bForce;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static void NewProp_bForce_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForce;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AALSBaseCharacter_SetOverlayState_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AALSBaseCharacter_SetOverlayState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSBaseCharacter_eventSetOverlayState_Parms, NewState), Z_Construct_UEnum_ALSV4_CPP_EALSOverlayState, METADATA_PARAMS(0, nullptr) }; // 3560812144
	void Z_Construct_UFunction_AALSBaseCharacter_SetOverlayState_Statics::NewProp_bForce_SetBit(void* Obj)
	{
		((ALSBaseCharacter_eventSetOverlayState_Parms*)Obj)->bForce = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AALSBaseCharacter_SetOverlayState_Statics::NewProp_bForce = { "bForce", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALSBaseCharacter_eventSetOverlayState_Parms), &Z_Construct_UFunction_AALSBaseCharacter_SetOverlayState_Statics::NewProp_bForce_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALSBaseCharacter_SetOverlayState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_SetOverlayState_Statics::NewProp_NewState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_SetOverlayState_Statics::NewProp_NewState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_SetOverlayState_Statics::NewProp_bForce,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_SetOverlayState_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Character States" },
		{ "CPP_Default_bForce", "false" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_SetOverlayState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "SetOverlayState", nullptr, nullptr, Z_Construct_UFunction_AALSBaseCharacter_SetOverlayState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_SetOverlayState_Statics::PropPointers), sizeof(Z_Construct_UFunction_AALSBaseCharacter_SetOverlayState_Statics::ALSBaseCharacter_eventSetOverlayState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_SetOverlayState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_SetOverlayState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_SetOverlayState_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AALSBaseCharacter_SetOverlayState_Statics::ALSBaseCharacter_eventSetOverlayState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_SetOverlayState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_SetOverlayState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_SetRightShoulder_Statics
	{
		struct ALSBaseCharacter_eventSetRightShoulder_Parms
		{
			bool bNewRightShoulder;
		};
		static void NewProp_bNewRightShoulder_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewRightShoulder;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AALSBaseCharacter_SetRightShoulder_Statics::NewProp_bNewRightShoulder_SetBit(void* Obj)
	{
		((ALSBaseCharacter_eventSetRightShoulder_Parms*)Obj)->bNewRightShoulder = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AALSBaseCharacter_SetRightShoulder_Statics::NewProp_bNewRightShoulder = { "bNewRightShoulder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALSBaseCharacter_eventSetRightShoulder_Parms), &Z_Construct_UFunction_AALSBaseCharacter_SetRightShoulder_Statics::NewProp_bNewRightShoulder_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALSBaseCharacter_SetRightShoulder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_SetRightShoulder_Statics::NewProp_bNewRightShoulder,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_SetRightShoulder_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Camera System" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_SetRightShoulder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "SetRightShoulder", nullptr, nullptr, Z_Construct_UFunction_AALSBaseCharacter_SetRightShoulder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_SetRightShoulder_Statics::PropPointers), sizeof(Z_Construct_UFunction_AALSBaseCharacter_SetRightShoulder_Statics::ALSBaseCharacter_eventSetRightShoulder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_SetRightShoulder_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_SetRightShoulder_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_SetRightShoulder_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AALSBaseCharacter_SetRightShoulder_Statics::ALSBaseCharacter_eventSetRightShoulder_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_SetRightShoulder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_SetRightShoulder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_SetRotationMode_Statics
	{
		struct ALSBaseCharacter_eventSetRotationMode_Parms
		{
			EALSRotationMode NewRotationMode;
			bool bForce;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewRotationMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewRotationMode;
		static void NewProp_bForce_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForce;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AALSBaseCharacter_SetRotationMode_Statics::NewProp_NewRotationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AALSBaseCharacter_SetRotationMode_Statics::NewProp_NewRotationMode = { "NewRotationMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSBaseCharacter_eventSetRotationMode_Parms, NewRotationMode), Z_Construct_UEnum_ALSV4_CPP_EALSRotationMode, METADATA_PARAMS(0, nullptr) }; // 3543998324
	void Z_Construct_UFunction_AALSBaseCharacter_SetRotationMode_Statics::NewProp_bForce_SetBit(void* Obj)
	{
		((ALSBaseCharacter_eventSetRotationMode_Parms*)Obj)->bForce = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AALSBaseCharacter_SetRotationMode_Statics::NewProp_bForce = { "bForce", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALSBaseCharacter_eventSetRotationMode_Parms), &Z_Construct_UFunction_AALSBaseCharacter_SetRotationMode_Statics::NewProp_bForce_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALSBaseCharacter_SetRotationMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_SetRotationMode_Statics::NewProp_NewRotationMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_SetRotationMode_Statics::NewProp_NewRotationMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_SetRotationMode_Statics::NewProp_bForce,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_SetRotationMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Character States" },
		{ "CPP_Default_bForce", "false" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_SetRotationMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "SetRotationMode", nullptr, nullptr, Z_Construct_UFunction_AALSBaseCharacter_SetRotationMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_SetRotationMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_AALSBaseCharacter_SetRotationMode_Statics::ALSBaseCharacter_eventSetRotationMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_SetRotationMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_SetRotationMode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_SetRotationMode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AALSBaseCharacter_SetRotationMode_Statics::ALSBaseCharacter_eventSetRotationMode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_SetRotationMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_SetRotationMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_SetStance_Statics
	{
		struct ALSBaseCharacter_eventSetStance_Parms
		{
			EALSStance NewStance;
			bool bForce;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewStance_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewStance;
		static void NewProp_bForce_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForce;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AALSBaseCharacter_SetStance_Statics::NewProp_NewStance_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AALSBaseCharacter_SetStance_Statics::NewProp_NewStance = { "NewStance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSBaseCharacter_eventSetStance_Parms, NewStance), Z_Construct_UEnum_ALSV4_CPP_EALSStance, METADATA_PARAMS(0, nullptr) }; // 98898313
	void Z_Construct_UFunction_AALSBaseCharacter_SetStance_Statics::NewProp_bForce_SetBit(void* Obj)
	{
		((ALSBaseCharacter_eventSetStance_Parms*)Obj)->bForce = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AALSBaseCharacter_SetStance_Statics::NewProp_bForce = { "bForce", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALSBaseCharacter_eventSetStance_Parms), &Z_Construct_UFunction_AALSBaseCharacter_SetStance_Statics::NewProp_bForce_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALSBaseCharacter_SetStance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_SetStance_Statics::NewProp_NewStance_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_SetStance_Statics::NewProp_NewStance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_SetStance_Statics::NewProp_bForce,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_SetStance_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Character States" },
		{ "CPP_Default_bForce", "false" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_SetStance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "SetStance", nullptr, nullptr, Z_Construct_UFunction_AALSBaseCharacter_SetStance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_SetStance_Statics::PropPointers), sizeof(Z_Construct_UFunction_AALSBaseCharacter_SetStance_Statics::ALSBaseCharacter_eventSetStance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_SetStance_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_SetStance_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_SetStance_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AALSBaseCharacter_SetStance_Statics::ALSBaseCharacter_eventSetStance_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_SetStance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_SetStance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_SetViewMode_Statics
	{
		struct ALSBaseCharacter_eventSetViewMode_Parms
		{
			EALSViewMode NewViewMode;
			bool bForce;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewViewMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewViewMode;
		static void NewProp_bForce_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForce;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AALSBaseCharacter_SetViewMode_Statics::NewProp_NewViewMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AALSBaseCharacter_SetViewMode_Statics::NewProp_NewViewMode = { "NewViewMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSBaseCharacter_eventSetViewMode_Parms, NewViewMode), Z_Construct_UEnum_ALSV4_CPP_EALSViewMode, METADATA_PARAMS(0, nullptr) }; // 98731475
	void Z_Construct_UFunction_AALSBaseCharacter_SetViewMode_Statics::NewProp_bForce_SetBit(void* Obj)
	{
		((ALSBaseCharacter_eventSetViewMode_Parms*)Obj)->bForce = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AALSBaseCharacter_SetViewMode_Statics::NewProp_bForce = { "bForce", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALSBaseCharacter_eventSetViewMode_Parms), &Z_Construct_UFunction_AALSBaseCharacter_SetViewMode_Statics::NewProp_bForce_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALSBaseCharacter_SetViewMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_SetViewMode_Statics::NewProp_NewViewMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_SetViewMode_Statics::NewProp_NewViewMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_SetViewMode_Statics::NewProp_bForce,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_SetViewMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Character States" },
		{ "CPP_Default_bForce", "false" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_SetViewMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "SetViewMode", nullptr, nullptr, Z_Construct_UFunction_AALSBaseCharacter_SetViewMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_SetViewMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_AALSBaseCharacter_SetViewMode_Statics::ALSBaseCharacter_eventSetViewMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_SetViewMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_SetViewMode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_SetViewMode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AALSBaseCharacter_SetViewMode_Statics::ALSBaseCharacter_eventSetViewMode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_SetViewMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_SetViewMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_SetVisibleMesh_Statics
	{
		struct ALSBaseCharacter_eventSetVisibleMesh_Parms
		{
			USkeletalMesh* NewSkeletalMesh;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewSkeletalMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AALSBaseCharacter_SetVisibleMesh_Statics::NewProp_NewSkeletalMesh = { "NewSkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSBaseCharacter_eventSetVisibleMesh_Parms, NewSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALSBaseCharacter_SetVisibleMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_SetVisibleMesh_Statics::NewProp_NewSkeletalMesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_SetVisibleMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Utility" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_SetVisibleMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "SetVisibleMesh", nullptr, nullptr, Z_Construct_UFunction_AALSBaseCharacter_SetVisibleMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_SetVisibleMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_AALSBaseCharacter_SetVisibleMesh_Statics::ALSBaseCharacter_eventSetVisibleMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_SetVisibleMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_SetVisibleMesh_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_SetVisibleMesh_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AALSBaseCharacter_SetVisibleMesh_Statics::ALSBaseCharacter_eventSetVisibleMesh_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_SetVisibleMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_SetVisibleMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_SprintAction_Statics
	{
		static void NewProp_bValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AALSBaseCharacter_SprintAction_Statics::NewProp_bValue_SetBit(void* Obj)
	{
		((ALSBaseCharacter_eventSprintAction_Parms*)Obj)->bValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AALSBaseCharacter_SprintAction_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALSBaseCharacter_eventSprintAction_Parms), &Z_Construct_UFunction_AALSBaseCharacter_SprintAction_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALSBaseCharacter_SprintAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSBaseCharacter_SprintAction_Statics::NewProp_bValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_SprintAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Input" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_SprintAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "SprintAction", nullptr, nullptr, Z_Construct_UFunction_AALSBaseCharacter_SprintAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_SprintAction_Statics::PropPointers), sizeof(ALSBaseCharacter_eventSprintAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_SprintAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_SprintAction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_SprintAction_Statics::PropPointers) < 2048);
	static_assert(sizeof(ALSBaseCharacter_eventSprintAction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_SprintAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_SprintAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_StanceAction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_StanceAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Input" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_StanceAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "StanceAction", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_StanceAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_StanceAction_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_StanceAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_StanceAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_VelocityDirectionAction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_VelocityDirectionAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Input" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_VelocityDirectionAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "VelocityDirectionAction", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_VelocityDirectionAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_VelocityDirectionAction_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_VelocityDirectionAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_VelocityDirectionAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSBaseCharacter_WalkAction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSBaseCharacter_WalkAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Input" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSBaseCharacter_WalkAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSBaseCharacter, nullptr, "WalkAction", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSBaseCharacter_WalkAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSBaseCharacter_WalkAction_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AALSBaseCharacter_WalkAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSBaseCharacter_WalkAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AALSBaseCharacter);
	UClass* Z_Construct_UClass_AALSBaseCharacter_NoRegister()
	{
		return AALSBaseCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AALSBaseCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpPressedDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_JumpPressedDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnJumpedDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnJumpedDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RagdollStateChangedDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_RagdollStateChangedDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyCharacterMovementComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MyCharacterMovementComponent;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DesiredRotationMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DesiredRotationMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DesiredRotationMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DesiredGait_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DesiredGait_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DesiredGait;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DesiredStance_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DesiredStance_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DesiredStance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookUpDownRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LookUpDownRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookLeftRightRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LookLeftRightRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RollDoubleTapTimeout_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RollDoubleTapTimeout;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBreakFall_MetaData[];
#endif
		static void NewProp_bBreakFall_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBreakFall;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSprintHeld_MetaData[];
#endif
		static void NewProp_bSprintHeld_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSprintHeld;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonFOV_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ThirdPersonFOV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonFOV_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FirstPersonFOV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRightShoulder_MetaData[];
#endif
		static void NewProp_bRightShoulder_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRightShoulder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementModel_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MovementModel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Acceleration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Acceleration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsMoving_MetaData[];
#endif
		static void NewProp_bIsMoving_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMoving;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasMovementInput_MetaData[];
#endif
		static void NewProp_bHasMovementInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasMovementInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastVelocityRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LastVelocityRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastMovementInputRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LastMovementInputRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementInputAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementInputAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimYawRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AimYawRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EasedMaxAcceleration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EasedMaxAcceleration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplicatedCurrentAcceleration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReplicatedCurrentAcceleration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplicatedControlRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReplicatedControlRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisibleMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VisibleMesh;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OverlayState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlayState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OverlayState;
		static const UECodeGen_Private::FBytePropertyParams NewProp_GroundedEntryState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundedEntryState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_GroundedEntryState;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MovementState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MovementState;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PrevMovementState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrevMovementState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PrevMovementState;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MovementAction_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementAction_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MovementAction;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RotationMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Gait_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Gait_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Gait;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Stance_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Stance_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Stance;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ViewMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ViewMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlayOverrideState_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_OverlayOverrideState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MovementData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAirRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InAirRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YawOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_YawOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBreakfallOnLand_MetaData[];
#endif
		static void NewProp_bBreakfallOnLand_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBreakfallOnLand;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BreakfallOnLandVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BreakfallOnLandVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReversedPelvis_MetaData[];
#endif
		static void NewProp_bReversedPelvis_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReversedPelvis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRagdollOnLand_MetaData[];
#endif
		static void NewProp_bRagdollOnLand_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRagdollOnLand;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RagdollOnLandVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RagdollOnLandVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRagdollOnGround_MetaData[];
#endif
		static void NewProp_bRagdollOnGround_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRagdollOnGround;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRagdollFaceUp_MetaData[];
#endif
		static void NewProp_bRagdollFaceUp_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRagdollFaceUp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastRagdollVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LastRagdollVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetRagdollLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetRagdollLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBehavior_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CameraBehavior;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ALSDebugComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ALSDebugComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AALSBaseCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ALSV4_CPP,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AALSBaseCharacter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AALSBaseCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AALSBaseCharacter_AimAction, "AimAction" }, // 2492641400
		{ &Z_Construct_UFunction_AALSBaseCharacter_CameraHeldAction, "CameraHeldAction" }, // 2714551524
		{ &Z_Construct_UFunction_AALSBaseCharacter_CameraRightAction, "CameraRightAction" }, // 17860957
		{ &Z_Construct_UFunction_AALSBaseCharacter_CameraTapAction, "CameraTapAction" }, // 1006494770
		{ &Z_Construct_UFunction_AALSBaseCharacter_CameraUpAction, "CameraUpAction" }, // 1312097642
		{ &Z_Construct_UFunction_AALSBaseCharacter_CanSprint, "CanSprint" }, // 3675261718
		{ &Z_Construct_UFunction_AALSBaseCharacter_EventOnJumped, "EventOnJumped" }, // 2461771441
		{ &Z_Construct_UFunction_AALSBaseCharacter_EventOnLanded, "EventOnLanded" }, // 3789240367
		{ &Z_Construct_UFunction_AALSBaseCharacter_ForwardMovementAction, "ForwardMovementAction" }, // 3835892620
		{ &Z_Construct_UFunction_AALSBaseCharacter_GetAcceleration, "GetAcceleration" }, // 289722684
		{ &Z_Construct_UFunction_AALSBaseCharacter_GetActualGait, "GetActualGait" }, // 1078628245
		{ &Z_Construct_UFunction_AALSBaseCharacter_GetAimingRotation, "GetAimingRotation" }, // 2121089730
		{ &Z_Construct_UFunction_AALSBaseCharacter_GetAimYawRate, "GetAimYawRate" }, // 2405426168
		{ &Z_Construct_UFunction_AALSBaseCharacter_GetAllowedGait, "GetAllowedGait" }, // 3361252108
		{ &Z_Construct_UFunction_AALSBaseCharacter_GetAnimCurveValue, "GetAnimCurveValue" }, // 4234302996
		{ &Z_Construct_UFunction_AALSBaseCharacter_GetCameraParameters, "GetCameraParameters" }, // 3045510915
		{ &Z_Construct_UFunction_AALSBaseCharacter_GetDesiredGait, "GetDesiredGait" }, // 550155693
		{ &Z_Construct_UFunction_AALSBaseCharacter_GetDesiredRotationMode, "GetDesiredRotationMode" }, // 2472869987
		{ &Z_Construct_UFunction_AALSBaseCharacter_GetDesiredStance, "GetDesiredStance" }, // 1536930948
		{ &Z_Construct_UFunction_AALSBaseCharacter_GetFirstPersonCameraTarget, "GetFirstPersonCameraTarget" }, // 979188087
		{ &Z_Construct_UFunction_AALSBaseCharacter_GetGait, "GetGait" }, // 3288068529
		{ &Z_Construct_UFunction_AALSBaseCharacter_GetGetUpAnimation, "GetGetUpAnimation" }, // 4225047249
		{ &Z_Construct_UFunction_AALSBaseCharacter_GetGroundedEntryState, "GetGroundedEntryState" }, // 3427277575
		{ &Z_Construct_UFunction_AALSBaseCharacter_GetMovementAction, "GetMovementAction" }, // 3663426796
		{ &Z_Construct_UFunction_AALSBaseCharacter_GetMovementInput, "GetMovementInput" }, // 3525042572
		{ &Z_Construct_UFunction_AALSBaseCharacter_GetMovementInputAmount, "GetMovementInputAmount" }, // 1175146956
		{ &Z_Construct_UFunction_AALSBaseCharacter_GetMovementState, "GetMovementState" }, // 927812867
		{ &Z_Construct_UFunction_AALSBaseCharacter_GetMyMovementComponent, "GetMyMovementComponent" }, // 2441097199
		{ &Z_Construct_UFunction_AALSBaseCharacter_GetOverlayOverrideState, "GetOverlayOverrideState" }, // 3688685004
		{ &Z_Construct_UFunction_AALSBaseCharacter_GetOverlayState, "GetOverlayState" }, // 877350928
		{ &Z_Construct_UFunction_AALSBaseCharacter_GetPrevMovementState, "GetPrevMovementState" }, // 4294353593
		{ &Z_Construct_UFunction_AALSBaseCharacter_GetRollAnimation, "GetRollAnimation" }, // 2446411959
		{ &Z_Construct_UFunction_AALSBaseCharacter_GetRotationMode, "GetRotationMode" }, // 1631106713
		{ &Z_Construct_UFunction_AALSBaseCharacter_GetSpeed, "GetSpeed" }, // 3966319472
		{ &Z_Construct_UFunction_AALSBaseCharacter_GetStance, "GetStance" }, // 3653492270
		{ &Z_Construct_UFunction_AALSBaseCharacter_GetTargetMovementSettings, "GetTargetMovementSettings" }, // 901910922
		{ &Z_Construct_UFunction_AALSBaseCharacter_GetThirdPersonPivotTarget, "GetThirdPersonPivotTarget" }, // 1781529145
		{ &Z_Construct_UFunction_AALSBaseCharacter_GetThirdPersonTraceParams, "GetThirdPersonTraceParams" }, // 896531994
		{ &Z_Construct_UFunction_AALSBaseCharacter_GetViewMode, "GetViewMode" }, // 3963763276
		{ &Z_Construct_UFunction_AALSBaseCharacter_HasMovementInput, "HasMovementInput" }, // 2326967958
		{ &Z_Construct_UFunction_AALSBaseCharacter_IsMoving, "IsMoving" }, // 2135317600
		{ &Z_Construct_UFunction_AALSBaseCharacter_IsRightShoulder, "IsRightShoulder" }, // 1705243792
		{ &Z_Construct_UFunction_AALSBaseCharacter_JumpAction, "JumpAction" }, // 3198778693
		{ &Z_Construct_UFunction_AALSBaseCharacter_LookingDirectionAction, "LookingDirectionAction" }, // 3334496912
		{ &Z_Construct_UFunction_AALSBaseCharacter_Multicast_OnJumped, "Multicast_OnJumped" }, // 481874438
		{ &Z_Construct_UFunction_AALSBaseCharacter_Multicast_OnLanded, "Multicast_OnLanded" }, // 2580158438
		{ &Z_Construct_UFunction_AALSBaseCharacter_Multicast_PlayMontage, "Multicast_PlayMontage" }, // 1067421983
		{ &Z_Construct_UFunction_AALSBaseCharacter_Multicast_RagdollEnd, "Multicast_RagdollEnd" }, // 119131026
		{ &Z_Construct_UFunction_AALSBaseCharacter_Multicast_RagdollStart, "Multicast_RagdollStart" }, // 2309260821
		{ &Z_Construct_UFunction_AALSBaseCharacter_OnBreakfall, "OnBreakfall" }, // 284851562
		{ &Z_Construct_UFunction_AALSBaseCharacter_OnRep_OverlayState, "OnRep_OverlayState" }, // 1277727166
		{ &Z_Construct_UFunction_AALSBaseCharacter_OnRep_RotationMode, "OnRep_RotationMode" }, // 1281394511
		{ &Z_Construct_UFunction_AALSBaseCharacter_OnRep_ViewMode, "OnRep_ViewMode" }, // 4052003057
		{ &Z_Construct_UFunction_AALSBaseCharacter_OnRep_VisibleMesh, "OnRep_VisibleMesh" }, // 1349356908
		{ &Z_Construct_UFunction_AALSBaseCharacter_RagdollAction, "RagdollAction" }, // 3364794537
		{ &Z_Construct_UFunction_AALSBaseCharacter_RagdollEnd, "RagdollEnd" }, // 4294126171
		{ &Z_Construct_UFunction_AALSBaseCharacter_RagdollStart, "RagdollStart" }, // 703628757
		{ &Z_Construct_UFunction_AALSBaseCharacter_Replicated_PlayMontage, "Replicated_PlayMontage" }, // 3792723333
		{ &Z_Construct_UFunction_AALSBaseCharacter_ReplicatedRagdollEnd, "ReplicatedRagdollEnd" }, // 1811209300
		{ &Z_Construct_UFunction_AALSBaseCharacter_ReplicatedRagdollStart, "ReplicatedRagdollStart" }, // 1322748027
		{ &Z_Construct_UFunction_AALSBaseCharacter_RightMovementAction, "RightMovementAction" }, // 2745625357
		{ &Z_Construct_UFunction_AALSBaseCharacter_Server_PlayMontage, "Server_PlayMontage" }, // 809147283
		{ &Z_Construct_UFunction_AALSBaseCharacter_Server_RagdollEnd, "Server_RagdollEnd" }, // 2444050619
		{ &Z_Construct_UFunction_AALSBaseCharacter_Server_RagdollStart, "Server_RagdollStart" }, // 3461010142
		{ &Z_Construct_UFunction_AALSBaseCharacter_Server_SetDesiredGait, "Server_SetDesiredGait" }, // 2740433661
		{ &Z_Construct_UFunction_AALSBaseCharacter_Server_SetDesiredRotationMode, "Server_SetDesiredRotationMode" }, // 48579735
		{ &Z_Construct_UFunction_AALSBaseCharacter_Server_SetDesiredStance, "Server_SetDesiredStance" }, // 2918731105
		{ &Z_Construct_UFunction_AALSBaseCharacter_Server_SetMeshLocationDuringRagdoll, "Server_SetMeshLocationDuringRagdoll" }, // 3869488389
		{ &Z_Construct_UFunction_AALSBaseCharacter_Server_SetOverlayState, "Server_SetOverlayState" }, // 3045190675
		{ &Z_Construct_UFunction_AALSBaseCharacter_Server_SetRotationMode, "Server_SetRotationMode" }, // 3564387602
		{ &Z_Construct_UFunction_AALSBaseCharacter_Server_SetViewMode, "Server_SetViewMode" }, // 3241541413
		{ &Z_Construct_UFunction_AALSBaseCharacter_Server_SetVisibleMesh, "Server_SetVisibleMesh" }, // 3435751986
		{ &Z_Construct_UFunction_AALSBaseCharacter_SetActorLocationAndTargetRotation, "SetActorLocationAndTargetRotation" }, // 289020369
		{ &Z_Construct_UFunction_AALSBaseCharacter_SetCameraBehavior, "SetCameraBehavior" }, // 1786949895
		{ &Z_Construct_UFunction_AALSBaseCharacter_SetDesiredGait, "SetDesiredGait" }, // 525231000
		{ &Z_Construct_UFunction_AALSBaseCharacter_SetDesiredRotationMode, "SetDesiredRotationMode" }, // 2724134153
		{ &Z_Construct_UFunction_AALSBaseCharacter_SetDesiredStance, "SetDesiredStance" }, // 32352938
		{ &Z_Construct_UFunction_AALSBaseCharacter_SetGait, "SetGait" }, // 851788490
		{ &Z_Construct_UFunction_AALSBaseCharacter_SetGroundedEntryState, "SetGroundedEntryState" }, // 1998181841
		{ &Z_Construct_UFunction_AALSBaseCharacter_SetMovementAction, "SetMovementAction" }, // 300259588
		{ &Z_Construct_UFunction_AALSBaseCharacter_SetMovementState, "SetMovementState" }, // 1331345252
		{ &Z_Construct_UFunction_AALSBaseCharacter_SetOverlayOverrideState, "SetOverlayOverrideState" }, // 1477404376
		{ &Z_Construct_UFunction_AALSBaseCharacter_SetOverlayState, "SetOverlayState" }, // 4079629556
		{ &Z_Construct_UFunction_AALSBaseCharacter_SetRightShoulder, "SetRightShoulder" }, // 3539339056
		{ &Z_Construct_UFunction_AALSBaseCharacter_SetRotationMode, "SetRotationMode" }, // 1720977196
		{ &Z_Construct_UFunction_AALSBaseCharacter_SetStance, "SetStance" }, // 99197393
		{ &Z_Construct_UFunction_AALSBaseCharacter_SetViewMode, "SetViewMode" }, // 3356433202
		{ &Z_Construct_UFunction_AALSBaseCharacter_SetVisibleMesh, "SetVisibleMesh" }, // 3407183326
		{ &Z_Construct_UFunction_AALSBaseCharacter_SprintAction, "SprintAction" }, // 3495780104
		{ &Z_Construct_UFunction_AALSBaseCharacter_StanceAction, "StanceAction" }, // 719306633
		{ &Z_Construct_UFunction_AALSBaseCharacter_VelocityDirectionAction, "VelocityDirectionAction" }, // 407416459
		{ &Z_Construct_UFunction_AALSBaseCharacter_WalkAction, "WalkAction" }, // 803682498
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AALSBaseCharacter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALSBaseCharacter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n * Base character class\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/ALSBaseCharacter.h" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Base character class" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_JumpPressedDelegate_MetaData[] = {
		{ "Category", "ALS|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input */" },
#endif
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_JumpPressedDelegate = { "JumpPressedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AALSBaseCharacter, JumpPressedDelegate), Z_Construct_UDelegateFunction_ALSV4_CPP_JumpPressedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_JumpPressedDelegate_MetaData), Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_JumpPressedDelegate_MetaData) }; // 2805215664
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_OnJumpedDelegate_MetaData[] = {
		{ "Category", "ALS|Input" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_OnJumpedDelegate = { "OnJumpedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AALSBaseCharacter, OnJumpedDelegate), Z_Construct_UDelegateFunction_ALSV4_CPP_OnJumpedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_OnJumpedDelegate_MetaData), Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_OnJumpedDelegate_MetaData) }; // 682367692
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_RagdollStateChangedDelegate_MetaData[] = {
		{ "Category", "ALS|Input" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_RagdollStateChangedDelegate = { "RagdollStateChangedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AALSBaseCharacter, RagdollStateChangedDelegate), Z_Construct_UDelegateFunction_ALSV4_CPP_RagdollStateChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_RagdollStateChangedDelegate_MetaData), Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_RagdollStateChangedDelegate_MetaData) }; // 2702063382
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_MyCharacterMovementComponent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Custom movement component*/" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Custom movement component" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_MyCharacterMovementComponent = { "MyCharacterMovementComponent", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AALSBaseCharacter, MyCharacterMovementComponent), Z_Construct_UClass_UALSCharacterMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_MyCharacterMovementComponent_MetaData), Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_MyCharacterMovementComponent_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_DesiredRotationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_DesiredRotationMode_MetaData[] = {
		{ "Category", "ALS|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input */" },
#endif
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_DesiredRotationMode = { "DesiredRotationMode", nullptr, (EPropertyFlags)0x0020080000000025, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AALSBaseCharacter, DesiredRotationMode), Z_Construct_UEnum_ALSV4_CPP_EALSRotationMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_DesiredRotationMode_MetaData), Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_DesiredRotationMode_MetaData) }; // 3543998324
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_DesiredGait_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_DesiredGait_MetaData[] = {
		{ "Category", "ALS|Input" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_DesiredGait = { "DesiredGait", nullptr, (EPropertyFlags)0x0020080000000025, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AALSBaseCharacter, DesiredGait), Z_Construct_UEnum_ALSV4_CPP_EALSGait, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_DesiredGait_MetaData), Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_DesiredGait_MetaData) }; // 4204508735
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_DesiredStance_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_DesiredStance_MetaData[] = {
		{ "Category", "ALS|Input" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_DesiredStance = { "DesiredStance", nullptr, (EPropertyFlags)0x0020080000000025, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AALSBaseCharacter, DesiredStance), Z_Construct_UEnum_ALSV4_CPP_EALSStance, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_DesiredStance_MetaData), Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_DesiredStance_MetaData) }; // 98898313
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_LookUpDownRate_MetaData[] = {
		{ "Category", "ALS|Input" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_LookUpDownRate = { "LookUpDownRate", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AALSBaseCharacter, LookUpDownRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_LookUpDownRate_MetaData), Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_LookUpDownRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_LookLeftRightRate_MetaData[] = {
		{ "Category", "ALS|Input" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_LookLeftRightRate = { "LookLeftRightRate", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AALSBaseCharacter, LookLeftRightRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_LookLeftRightRate_MetaData), Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_LookLeftRightRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_RollDoubleTapTimeout_MetaData[] = {
		{ "Category", "ALS|Input" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_RollDoubleTapTimeout = { "RollDoubleTapTimeout", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AALSBaseCharacter, RollDoubleTapTimeout), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_RollDoubleTapTimeout_MetaData), Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_RollDoubleTapTimeout_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_bBreakFall_MetaData[] = {
		{ "Category", "ALS|Input" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_bBreakFall_SetBit(void* Obj)
	{
		((AALSBaseCharacter*)Obj)->bBreakFall = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_bBreakFall = { "bBreakFall", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AALSBaseCharacter), &Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_bBreakFall_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_bBreakFall_MetaData), Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_bBreakFall_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_bSprintHeld_MetaData[] = {
		{ "Category", "ALS|Input" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_bSprintHeld_SetBit(void* Obj)
	{
		((AALSBaseCharacter*)Obj)->bSprintHeld = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_bSprintHeld = { "bSprintHeld", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AALSBaseCharacter), &Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_bSprintHeld_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_bSprintHeld_MetaData), Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_bSprintHeld_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_ThirdPersonFOV_MetaData[] = {
		{ "Category", "ALS|Camera System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera System */" },
#endif
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera System" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_ThirdPersonFOV = { "ThirdPersonFOV", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AALSBaseCharacter, ThirdPersonFOV), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_ThirdPersonFOV_MetaData), Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_ThirdPersonFOV_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_FirstPersonFOV_MetaData[] = {
		{ "Category", "ALS|Camera System" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_FirstPersonFOV = { "FirstPersonFOV", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AALSBaseCharacter, FirstPersonFOV), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_FirstPersonFOV_MetaData), Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_FirstPersonFOV_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_bRightShoulder_MetaData[] = {
		{ "Category", "ALS|Camera System" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_bRightShoulder_SetBit(void* Obj)
	{
		((AALSBaseCharacter*)Obj)->bRightShoulder = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_bRightShoulder = { "bRightShoulder", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AALSBaseCharacter), &Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_bRightShoulder_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_bRightShoulder_MetaData), Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_bRightShoulder_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_MovementModel_MetaData[] = {
		{ "Category", "ALS|Movement System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Movement System */" },
#endif
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Movement System" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_MovementModel = { "MovementModel", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AALSBaseCharacter, MovementModel), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_MovementModel_MetaData), Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_MovementModel_MetaData) }; // 1575649708
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_Acceleration_MetaData[] = {
		{ "Category", "ALS|Essential Information" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Essential Information */" },
#endif
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Essential Information" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_Acceleration = { "Acceleration", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AALSBaseCharacter, Acceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_Acceleration_MetaData), Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_Acceleration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_bIsMoving_MetaData[] = {
		{ "Category", "ALS|Essential Information" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_bIsMoving_SetBit(void* Obj)
	{
		((AALSBaseCharacter*)Obj)->bIsMoving = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_bIsMoving = { "bIsMoving", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AALSBaseCharacter), &Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_bIsMoving_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_bIsMoving_MetaData), Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_bIsMoving_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_bHasMovementInput_MetaData[] = {
		{ "Category", "ALS|Essential Information" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_bHasMovementInput_SetBit(void* Obj)
	{
		((AALSBaseCharacter*)Obj)->bHasMovementInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_bHasMovementInput = { "bHasMovementInput", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AALSBaseCharacter), &Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_bHasMovementInput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_bHasMovementInput_MetaData), Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_bHasMovementInput_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_LastVelocityRotation_MetaData[] = {
		{ "Category", "ALS|Essential Information" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_LastVelocityRotation = { "LastVelocityRotation", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AALSBaseCharacter, LastVelocityRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_LastVelocityRotation_MetaData), Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_LastVelocityRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_LastMovementInputRotation_MetaData[] = {
		{ "Category", "ALS|Essential Information" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_LastMovementInputRotation = { "LastMovementInputRotation", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AALSBaseCharacter, LastMovementInputRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_LastMovementInputRotation_MetaData), Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_LastMovementInputRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "ALS|Essential Information" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AALSBaseCharacter, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_Speed_MetaData), Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_Speed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_MovementInputAmount_MetaData[] = {
		{ "Category", "ALS|Essential Information" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_MovementInputAmount = { "MovementInputAmount", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AALSBaseCharacter, MovementInputAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_MovementInputAmount_MetaData), Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_MovementInputAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_AimYawRate_MetaData[] = {
		{ "Category", "ALS|Essential Information" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_AimYawRate = { "AimYawRate", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AALSBaseCharacter, AimYawRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_AimYawRate_MetaData), Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_AimYawRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_EasedMaxAcceleration_MetaData[] = {
		{ "Category", "ALS|Essential Information" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Replicated Essential Information*/" },
#endif
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Replicated Essential Information" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_EasedMaxAcceleration = { "EasedMaxAcceleration", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AALSBaseCharacter, EasedMaxAcceleration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_EasedMaxAcceleration_MetaData), Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_EasedMaxAcceleration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_ReplicatedCurrentAcceleration_MetaData[] = {
		{ "Category", "ALS|Essential Information" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_ReplicatedCurrentAcceleration = { "ReplicatedCurrentAcceleration", nullptr, (EPropertyFlags)0x0020080000000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AALSBaseCharacter, ReplicatedCurrentAcceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_ReplicatedCurrentAcceleration_MetaData), Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_ReplicatedCurrentAcceleration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_ReplicatedControlRotation_MetaData[] = {
		{ "Category", "ALS|Essential Information" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_ReplicatedControlRotation = { "ReplicatedControlRotation", nullptr, (EPropertyFlags)0x0020080000000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AALSBaseCharacter, ReplicatedControlRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_ReplicatedControlRotation_MetaData), Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_ReplicatedControlRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_VisibleMesh_MetaData[] = {
		{ "Category", "ALS|Skeletal Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Replicated Skeletal Mesh Information*/" },
#endif
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Replicated Skeletal Mesh Information" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_VisibleMesh = { "VisibleMesh", "OnRep_VisibleMesh", (EPropertyFlags)0x0024080100000035, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AALSBaseCharacter, VisibleMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_VisibleMesh_MetaData), Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_VisibleMesh_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_OverlayState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_OverlayState_MetaData[] = {
		{ "Category", "ALS|State Values" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** State Values */" },
#endif
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "State Values" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_OverlayState = { "OverlayState", "OnRep_OverlayState", (EPropertyFlags)0x0020080100000035, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AALSBaseCharacter, OverlayState), Z_Construct_UEnum_ALSV4_CPP_EALSOverlayState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_OverlayState_MetaData), Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_OverlayState_MetaData) }; // 3560812144
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_GroundedEntryState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_GroundedEntryState_MetaData[] = {
		{ "Category", "ALS|State Values" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_GroundedEntryState = { "GroundedEntryState", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AALSBaseCharacter, GroundedEntryState), Z_Construct_UEnum_ALSV4_CPP_EALSGroundedEntryState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_GroundedEntryState_MetaData), Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_GroundedEntryState_MetaData) }; // 1781834569
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_MovementState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_MovementState_MetaData[] = {
		{ "Category", "ALS|State Values" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_MovementState = { "MovementState", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AALSBaseCharacter, MovementState), Z_Construct_UEnum_ALSV4_CPP_EALSMovementState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_MovementState_MetaData), Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_MovementState_MetaData) }; // 2855841202
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_PrevMovementState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_PrevMovementState_MetaData[] = {
		{ "Category", "ALS|State Values" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_PrevMovementState = { "PrevMovementState", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AALSBaseCharacter, PrevMovementState), Z_Construct_UEnum_ALSV4_CPP_EALSMovementState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_PrevMovementState_MetaData), Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_PrevMovementState_MetaData) }; // 2855841202
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_MovementAction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_MovementAction_MetaData[] = {
		{ "Category", "ALS|State Values" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_MovementAction = { "MovementAction", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AALSBaseCharacter, MovementAction), Z_Construct_UEnum_ALSV4_CPP_EALSMovementAction, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_MovementAction_MetaData), Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_MovementAction_MetaData) }; // 1229765569
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_RotationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_RotationMode_MetaData[] = {
		{ "Category", "ALS|State Values" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_RotationMode = { "RotationMode", "OnRep_RotationMode", (EPropertyFlags)0x0020080100000034, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AALSBaseCharacter, RotationMode), Z_Construct_UEnum_ALSV4_CPP_EALSRotationMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_RotationMode_MetaData), Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_RotationMode_MetaData) }; // 3543998324
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_Gait_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_Gait_MetaData[] = {
		{ "Category", "ALS|State Values" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_Gait = { "Gait", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AALSBaseCharacter, Gait), Z_Construct_UEnum_ALSV4_CPP_EALSGait, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_Gait_MetaData), Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_Gait_MetaData) }; // 4204508735
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_Stance_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_Stance_MetaData[] = {
		{ "Category", "ALS|State Values" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_Stance = { "Stance", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AALSBaseCharacter, Stance), Z_Construct_UEnum_ALSV4_CPP_EALSStance, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_Stance_MetaData), Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_Stance_MetaData) }; // 98898313
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_ViewMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_ViewMode_MetaData[] = {
		{ "Category", "ALS|State Values" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_ViewMode = { "ViewMode", "OnRep_ViewMode", (EPropertyFlags)0x0020080100010035, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AALSBaseCharacter, ViewMode), Z_Construct_UEnum_ALSV4_CPP_EALSViewMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_ViewMode_MetaData), Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_ViewMode_MetaData) }; // 98731475
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_OverlayOverrideState_MetaData[] = {
		{ "Category", "ALS|State Values" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_OverlayOverrideState = { "OverlayOverrideState", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AALSBaseCharacter, OverlayOverrideState), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_OverlayOverrideState_MetaData), Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_OverlayOverrideState_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_MovementData_MetaData[] = {
		{ "Category", "ALS|Movement System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Movement System */" },
#endif
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Movement System" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_MovementData = { "MovementData", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AALSBaseCharacter, MovementData), Z_Construct_UScriptStruct_FALSMovementStateSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_MovementData_MetaData), Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_MovementData_MetaData) }; // 4128740719
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_TargetRotation_MetaData[] = {
		{ "Category", "ALS|Rotation System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Rotation System */" },
#endif
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rotation System" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_TargetRotation = { "TargetRotation", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AALSBaseCharacter, TargetRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_TargetRotation_MetaData), Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_TargetRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_InAirRotation_MetaData[] = {
		{ "Category", "ALS|Rotation System" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_InAirRotation = { "InAirRotation", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AALSBaseCharacter, InAirRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_InAirRotation_MetaData), Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_InAirRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_YawOffset_MetaData[] = {
		{ "Category", "ALS|Rotation System" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_YawOffset = { "YawOffset", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AALSBaseCharacter, YawOffset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_YawOffset_MetaData), Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_YawOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_bBreakfallOnLand_MetaData[] = {
		{ "Category", "ALS|Breakfall System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If player hits to the ground with a specified amount of velocity, switch to breakfall state */" },
#endif
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If player hits to the ground with a specified amount of velocity, switch to breakfall state" },
#endif
	};
#endif
	void Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_bBreakfallOnLand_SetBit(void* Obj)
	{
		((AALSBaseCharacter*)Obj)->bBreakfallOnLand = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_bBreakfallOnLand = { "bBreakfallOnLand", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AALSBaseCharacter), &Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_bBreakfallOnLand_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_bBreakfallOnLand_MetaData), Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_bBreakfallOnLand_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_BreakfallOnLandVelocity_MetaData[] = {
		{ "Category", "ALS|Breakfall System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If player hits to the ground with an amount of velocity greater than specified value, switch to breakfall state */" },
#endif
		{ "EditCondition", "bBreakfallOnLand" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If player hits to the ground with an amount of velocity greater than specified value, switch to breakfall state" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_BreakfallOnLandVelocity = { "BreakfallOnLandVelocity", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AALSBaseCharacter, BreakfallOnLandVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_BreakfallOnLandVelocity_MetaData), Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_BreakfallOnLandVelocity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_bReversedPelvis_MetaData[] = {
		{ "Category", "ALS|Ragdoll System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If the skeleton uses a reversed pelvis bone, flip the calculation operator */" },
#endif
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If the skeleton uses a reversed pelvis bone, flip the calculation operator" },
#endif
	};
#endif
	void Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_bReversedPelvis_SetBit(void* Obj)
	{
		((AALSBaseCharacter*)Obj)->bReversedPelvis = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_bReversedPelvis = { "bReversedPelvis", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AALSBaseCharacter), &Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_bReversedPelvis_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_bReversedPelvis_MetaData), Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_bReversedPelvis_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_bRagdollOnLand_MetaData[] = {
		{ "Category", "ALS|Ragdoll System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If player hits to the ground with a specified amount of velocity, switch to ragdoll state */" },
#endif
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If player hits to the ground with a specified amount of velocity, switch to ragdoll state" },
#endif
	};
#endif
	void Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_bRagdollOnLand_SetBit(void* Obj)
	{
		((AALSBaseCharacter*)Obj)->bRagdollOnLand = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_bRagdollOnLand = { "bRagdollOnLand", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AALSBaseCharacter), &Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_bRagdollOnLand_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_bRagdollOnLand_MetaData), Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_bRagdollOnLand_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_RagdollOnLandVelocity_MetaData[] = {
		{ "Category", "ALS|Ragdoll System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If player hits to the ground with an amount of velocity greater than specified value, switch to ragdoll state */" },
#endif
		{ "EditCondition", "bRagdollOnLand" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If player hits to the ground with an amount of velocity greater than specified value, switch to ragdoll state" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_RagdollOnLandVelocity = { "RagdollOnLandVelocity", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AALSBaseCharacter, RagdollOnLandVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_RagdollOnLandVelocity_MetaData), Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_RagdollOnLandVelocity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_bRagdollOnGround_MetaData[] = {
		{ "Category", "ALS|Ragdoll System" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_bRagdollOnGround_SetBit(void* Obj)
	{
		((AALSBaseCharacter*)Obj)->bRagdollOnGround = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_bRagdollOnGround = { "bRagdollOnGround", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AALSBaseCharacter), &Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_bRagdollOnGround_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_bRagdollOnGround_MetaData), Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_bRagdollOnGround_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_bRagdollFaceUp_MetaData[] = {
		{ "Category", "ALS|Ragdoll System" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_bRagdollFaceUp_SetBit(void* Obj)
	{
		((AALSBaseCharacter*)Obj)->bRagdollFaceUp = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_bRagdollFaceUp = { "bRagdollFaceUp", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AALSBaseCharacter), &Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_bRagdollFaceUp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_bRagdollFaceUp_MetaData), Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_bRagdollFaceUp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_LastRagdollVelocity_MetaData[] = {
		{ "Category", "ALS|Ragdoll System" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_LastRagdollVelocity = { "LastRagdollVelocity", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AALSBaseCharacter, LastRagdollVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_LastRagdollVelocity_MetaData), Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_LastRagdollVelocity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_TargetRagdollLocation_MetaData[] = {
		{ "Category", "ALS|Ragdoll System" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_TargetRagdollLocation = { "TargetRagdollLocation", nullptr, (EPropertyFlags)0x0020080000000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AALSBaseCharacter, TargetRagdollLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_TargetRagdollLocation_MetaData), Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_TargetRagdollLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_CameraBehavior_MetaData[] = {
		{ "Category", "ALS|Camera" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_CameraBehavior = { "CameraBehavior", nullptr, (EPropertyFlags)0x0024080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AALSBaseCharacter, CameraBehavior), Z_Construct_UClass_UALSPlayerCameraBehavior_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_CameraBehavior_MetaData), Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_CameraBehavior_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_ALSDebugComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_ALSDebugComponent = { "ALSDebugComponent", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AALSBaseCharacter, ALSDebugComponent), Z_Construct_UClass_UALSDebugComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_ALSDebugComponent_MetaData), Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_ALSDebugComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AALSBaseCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_JumpPressedDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_OnJumpedDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_RagdollStateChangedDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_MyCharacterMovementComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_DesiredRotationMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_DesiredRotationMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_DesiredGait_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_DesiredGait,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_DesiredStance_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_DesiredStance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_LookUpDownRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_LookLeftRightRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_RollDoubleTapTimeout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_bBreakFall,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_bSprintHeld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_ThirdPersonFOV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_FirstPersonFOV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_bRightShoulder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_MovementModel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_Acceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_bIsMoving,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_bHasMovementInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_LastVelocityRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_LastMovementInputRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_MovementInputAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_AimYawRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_EasedMaxAcceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_ReplicatedCurrentAcceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_ReplicatedControlRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_VisibleMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_OverlayState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_OverlayState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_GroundedEntryState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_GroundedEntryState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_MovementState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_MovementState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_PrevMovementState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_PrevMovementState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_MovementAction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_MovementAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_RotationMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_RotationMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_Gait_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_Gait,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_Stance_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_Stance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_ViewMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_ViewMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_OverlayOverrideState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_MovementData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_TargetRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_InAirRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_YawOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_bBreakfallOnLand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_BreakfallOnLandVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_bReversedPelvis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_bRagdollOnLand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_RagdollOnLandVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_bRagdollOnGround,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_bRagdollFaceUp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_LastRagdollVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_TargetRagdollLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_CameraBehavior,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_ALSDebugComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AALSBaseCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AALSBaseCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AALSBaseCharacter_Statics::ClassParams = {
		&AALSBaseCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AALSBaseCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AALSBaseCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AALSBaseCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AALSBaseCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AALSBaseCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AALSBaseCharacter()
	{
		if (!Z_Registration_Info_UClass_AALSBaseCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AALSBaseCharacter.OuterSingleton, Z_Construct_UClass_AALSBaseCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AALSBaseCharacter.OuterSingleton;
	}
	template<> ALSV4_CPP_API UClass* StaticClass<AALSBaseCharacter>()
	{
		return AALSBaseCharacter::StaticClass();
	}

	void AALSBaseCharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_DesiredRotationMode(TEXT("DesiredRotationMode"));
		static const FName Name_DesiredGait(TEXT("DesiredGait"));
		static const FName Name_DesiredStance(TEXT("DesiredStance"));
		static const FName Name_ReplicatedCurrentAcceleration(TEXT("ReplicatedCurrentAcceleration"));
		static const FName Name_ReplicatedControlRotation(TEXT("ReplicatedControlRotation"));
		static const FName Name_VisibleMesh(TEXT("VisibleMesh"));
		static const FName Name_OverlayState(TEXT("OverlayState"));
		static const FName Name_RotationMode(TEXT("RotationMode"));
		static const FName Name_ViewMode(TEXT("ViewMode"));
		static const FName Name_TargetRagdollLocation(TEXT("TargetRagdollLocation"));

		const bool bIsValid = true
			&& Name_DesiredRotationMode == ClassReps[(int32)ENetFields_Private::DesiredRotationMode].Property->GetFName()
			&& Name_DesiredGait == ClassReps[(int32)ENetFields_Private::DesiredGait].Property->GetFName()
			&& Name_DesiredStance == ClassReps[(int32)ENetFields_Private::DesiredStance].Property->GetFName()
			&& Name_ReplicatedCurrentAcceleration == ClassReps[(int32)ENetFields_Private::ReplicatedCurrentAcceleration].Property->GetFName()
			&& Name_ReplicatedControlRotation == ClassReps[(int32)ENetFields_Private::ReplicatedControlRotation].Property->GetFName()
			&& Name_VisibleMesh == ClassReps[(int32)ENetFields_Private::VisibleMesh].Property->GetFName()
			&& Name_OverlayState == ClassReps[(int32)ENetFields_Private::OverlayState].Property->GetFName()
			&& Name_RotationMode == ClassReps[(int32)ENetFields_Private::RotationMode].Property->GetFName()
			&& Name_ViewMode == ClassReps[(int32)ENetFields_Private::ViewMode].Property->GetFName()
			&& Name_TargetRagdollLocation == ClassReps[(int32)ENetFields_Private::TargetRagdollLocation].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AALSBaseCharacter"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AALSBaseCharacter);
	AALSBaseCharacter::~AALSBaseCharacter() {}
	struct Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_hitman_stealth_recreate_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Character_ALSBaseCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_hitman_stealth_recreate_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Character_ALSBaseCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AALSBaseCharacter, AALSBaseCharacter::StaticClass, TEXT("AALSBaseCharacter"), &Z_Registration_Info_UClass_AALSBaseCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AALSBaseCharacter), 1546159256U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_hitman_stealth_recreate_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Character_ALSBaseCharacter_h_1831313130(TEXT("/Script/ALSV4_CPP"),
		Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_hitman_stealth_recreate_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Character_ALSBaseCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_hitman_stealth_recreate_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Character_ALSBaseCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
