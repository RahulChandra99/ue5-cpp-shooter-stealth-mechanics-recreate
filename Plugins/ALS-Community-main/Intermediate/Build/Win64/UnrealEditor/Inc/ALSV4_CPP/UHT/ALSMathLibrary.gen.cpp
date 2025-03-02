// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALSV4_CPP/Public/Library/ALSMathLibrary.h"
#include "ALSV4_CPP/Public/Library/ALSCharacterStructLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeALSMathLibrary() {}
// Cross Module References
	ALSV4_CPP_API UClass* Z_Construct_UClass_UALSMathLibrary();
	ALSV4_CPP_API UClass* Z_Construct_UClass_UALSMathLibrary_NoRegister();
	ALSV4_CPP_API UEnum* Z_Construct_UEnum_ALSV4_CPP_EALSMovementDirection();
	ALSV4_CPP_API UScriptStruct* Z_Construct_UScriptStruct_FALSComponentAndTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDrawDebugTrace();
	UPackage* Z_Construct_UPackage__Script_ALSV4_CPP();
// End Cross Module References
	DEFINE_FUNCTION(UALSMathLibrary::execCalculateQuadrant)
	{
		P_GET_ENUM(EALSMovementDirection,Z_Param_Current);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FRThreshold);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FLThreshold);
		P_GET_PROPERTY(FFloatProperty,Z_Param_BRThreshold);
		P_GET_PROPERTY(FFloatProperty,Z_Param_BLThreshold);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Buffer);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Angle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EALSMovementDirection*)Z_Param__Result=UALSMathLibrary::CalculateQuadrant(EALSMovementDirection(Z_Param_Current),Z_Param_FRThreshold,Z_Param_FLThreshold,Z_Param_BRThreshold,Z_Param_BLThreshold,Z_Param_Buffer,Z_Param_Angle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSMathLibrary::execAngleInRange)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Angle);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MinAngle);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxAngle);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Buffer);
		P_GET_UBOOL(Z_Param_IncreaseBuffer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UALSMathLibrary::AngleInRange(Z_Param_Angle,Z_Param_MinAngle,Z_Param_MaxAngle,Z_Param_Buffer,Z_Param_IncreaseBuffer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSMathLibrary::execCapsuleHasRoomCheck)
	{
		P_GET_OBJECT(UCapsuleComponent,Z_Param_Capsule);
		P_GET_STRUCT(FVector,Z_Param_TargetLocation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_HeightOffset);
		P_GET_PROPERTY(FFloatProperty,Z_Param_RadiusOffset);
		P_GET_PROPERTY(FByteProperty,Z_Param_DebugType);
		P_GET_UBOOL(Z_Param_DrawDebugTrace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UALSMathLibrary::CapsuleHasRoomCheck(Z_Param_Capsule,Z_Param_TargetLocation,Z_Param_HeightOffset,Z_Param_RadiusOffset,EDrawDebugTrace::Type(Z_Param_DebugType),Z_Param_DrawDebugTrace);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSMathLibrary::execGetCapsuleLocationFromBase)
	{
		P_GET_STRUCT(FVector,Z_Param_BaseLocation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ZOffset);
		P_GET_OBJECT(UCapsuleComponent,Z_Param_Capsule);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UALSMathLibrary::GetCapsuleLocationFromBase(Z_Param_BaseLocation,Z_Param_ZOffset,Z_Param_Capsule);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSMathLibrary::execGetCapsuleBaseLocation)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_ZOffset);
		P_GET_OBJECT(UCapsuleComponent,Z_Param_Capsule);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UALSMathLibrary::GetCapsuleBaseLocation(Z_Param_ZOffset,Z_Param_Capsule);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSMathLibrary::execTransformAdd)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_T1);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_T2);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=UALSMathLibrary::TransformAdd(Z_Param_Out_T1,Z_Param_Out_T2);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSMathLibrary::execTransformSub)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_T1);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_T2);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=UALSMathLibrary::TransformSub(Z_Param_Out_T1,Z_Param_Out_T2);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSMathLibrary::execMantleComponentLocalToWorld)
	{
		P_GET_STRUCT_REF(FALSComponentAndTransform,Z_Param_Out_CompAndTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=UALSMathLibrary::MantleComponentLocalToWorld(Z_Param_Out_CompAndTransform);
		P_NATIVE_END;
	}
	void UALSMathLibrary::StaticRegisterNativesUALSMathLibrary()
	{
		UClass* Class = UALSMathLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AngleInRange", &UALSMathLibrary::execAngleInRange },
			{ "CalculateQuadrant", &UALSMathLibrary::execCalculateQuadrant },
			{ "CapsuleHasRoomCheck", &UALSMathLibrary::execCapsuleHasRoomCheck },
			{ "GetCapsuleBaseLocation", &UALSMathLibrary::execGetCapsuleBaseLocation },
			{ "GetCapsuleLocationFromBase", &UALSMathLibrary::execGetCapsuleLocationFromBase },
			{ "MantleComponentLocalToWorld", &UALSMathLibrary::execMantleComponentLocalToWorld },
			{ "TransformAdd", &UALSMathLibrary::execTransformAdd },
			{ "TransformSub", &UALSMathLibrary::execTransformSub },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UALSMathLibrary_AngleInRange_Statics
	{
		struct ALSMathLibrary_eventAngleInRange_Parms
		{
			float Angle;
			float MinAngle;
			float MaxAngle;
			float Buffer;
			bool IncreaseBuffer;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Angle;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinAngle;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAngle;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Buffer;
		static void NewProp_IncreaseBuffer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IncreaseBuffer;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UALSMathLibrary_AngleInRange_Statics::NewProp_Angle = { "Angle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSMathLibrary_eventAngleInRange_Parms, Angle), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UALSMathLibrary_AngleInRange_Statics::NewProp_MinAngle = { "MinAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSMathLibrary_eventAngleInRange_Parms, MinAngle), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UALSMathLibrary_AngleInRange_Statics::NewProp_MaxAngle = { "MaxAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSMathLibrary_eventAngleInRange_Parms, MaxAngle), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UALSMathLibrary_AngleInRange_Statics::NewProp_Buffer = { "Buffer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSMathLibrary_eventAngleInRange_Parms, Buffer), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UALSMathLibrary_AngleInRange_Statics::NewProp_IncreaseBuffer_SetBit(void* Obj)
	{
		((ALSMathLibrary_eventAngleInRange_Parms*)Obj)->IncreaseBuffer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UALSMathLibrary_AngleInRange_Statics::NewProp_IncreaseBuffer = { "IncreaseBuffer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALSMathLibrary_eventAngleInRange_Parms), &Z_Construct_UFunction_UALSMathLibrary_AngleInRange_Statics::NewProp_IncreaseBuffer_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UALSMathLibrary_AngleInRange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ALSMathLibrary_eventAngleInRange_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UALSMathLibrary_AngleInRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALSMathLibrary_eventAngleInRange_Parms), &Z_Construct_UFunction_UALSMathLibrary_AngleInRange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSMathLibrary_AngleInRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSMathLibrary_AngleInRange_Statics::NewProp_Angle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSMathLibrary_AngleInRange_Statics::NewProp_MinAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSMathLibrary_AngleInRange_Statics::NewProp_MaxAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSMathLibrary_AngleInRange_Statics::NewProp_Buffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSMathLibrary_AngleInRange_Statics::NewProp_IncreaseBuffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSMathLibrary_AngleInRange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSMathLibrary_AngleInRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Math Utils" },
		{ "ModuleRelativePath", "Public/Library/ALSMathLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSMathLibrary_AngleInRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSMathLibrary, nullptr, "AngleInRange", nullptr, nullptr, Z_Construct_UFunction_UALSMathLibrary_AngleInRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSMathLibrary_AngleInRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UALSMathLibrary_AngleInRange_Statics::ALSMathLibrary_eventAngleInRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSMathLibrary_AngleInRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSMathLibrary_AngleInRange_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSMathLibrary_AngleInRange_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UALSMathLibrary_AngleInRange_Statics::ALSMathLibrary_eventAngleInRange_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UALSMathLibrary_AngleInRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSMathLibrary_AngleInRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSMathLibrary_CalculateQuadrant_Statics
	{
		struct ALSMathLibrary_eventCalculateQuadrant_Parms
		{
			EALSMovementDirection Current;
			float FRThreshold;
			float FLThreshold;
			float BRThreshold;
			float BLThreshold;
			float Buffer;
			float Angle;
			EALSMovementDirection ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Current_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Current;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FRThreshold;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FLThreshold;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BRThreshold;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BLThreshold;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Buffer;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Angle;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UALSMathLibrary_CalculateQuadrant_Statics::NewProp_Current_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UALSMathLibrary_CalculateQuadrant_Statics::NewProp_Current = { "Current", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSMathLibrary_eventCalculateQuadrant_Parms, Current), Z_Construct_UEnum_ALSV4_CPP_EALSMovementDirection, METADATA_PARAMS(0, nullptr) }; // 1495404216
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UALSMathLibrary_CalculateQuadrant_Statics::NewProp_FRThreshold = { "FRThreshold", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSMathLibrary_eventCalculateQuadrant_Parms, FRThreshold), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UALSMathLibrary_CalculateQuadrant_Statics::NewProp_FLThreshold = { "FLThreshold", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSMathLibrary_eventCalculateQuadrant_Parms, FLThreshold), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UALSMathLibrary_CalculateQuadrant_Statics::NewProp_BRThreshold = { "BRThreshold", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSMathLibrary_eventCalculateQuadrant_Parms, BRThreshold), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UALSMathLibrary_CalculateQuadrant_Statics::NewProp_BLThreshold = { "BLThreshold", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSMathLibrary_eventCalculateQuadrant_Parms, BLThreshold), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UALSMathLibrary_CalculateQuadrant_Statics::NewProp_Buffer = { "Buffer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSMathLibrary_eventCalculateQuadrant_Parms, Buffer), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UALSMathLibrary_CalculateQuadrant_Statics::NewProp_Angle = { "Angle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSMathLibrary_eventCalculateQuadrant_Parms, Angle), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UALSMathLibrary_CalculateQuadrant_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UALSMathLibrary_CalculateQuadrant_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSMathLibrary_eventCalculateQuadrant_Parms, ReturnValue), Z_Construct_UEnum_ALSV4_CPP_EALSMovementDirection, METADATA_PARAMS(0, nullptr) }; // 1495404216
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSMathLibrary_CalculateQuadrant_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSMathLibrary_CalculateQuadrant_Statics::NewProp_Current_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSMathLibrary_CalculateQuadrant_Statics::NewProp_Current,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSMathLibrary_CalculateQuadrant_Statics::NewProp_FRThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSMathLibrary_CalculateQuadrant_Statics::NewProp_FLThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSMathLibrary_CalculateQuadrant_Statics::NewProp_BRThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSMathLibrary_CalculateQuadrant_Statics::NewProp_BLThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSMathLibrary_CalculateQuadrant_Statics::NewProp_Buffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSMathLibrary_CalculateQuadrant_Statics::NewProp_Angle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSMathLibrary_CalculateQuadrant_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSMathLibrary_CalculateQuadrant_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSMathLibrary_CalculateQuadrant_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Math Utils" },
		{ "ModuleRelativePath", "Public/Library/ALSMathLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSMathLibrary_CalculateQuadrant_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSMathLibrary, nullptr, "CalculateQuadrant", nullptr, nullptr, Z_Construct_UFunction_UALSMathLibrary_CalculateQuadrant_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSMathLibrary_CalculateQuadrant_Statics::PropPointers), sizeof(Z_Construct_UFunction_UALSMathLibrary_CalculateQuadrant_Statics::ALSMathLibrary_eventCalculateQuadrant_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSMathLibrary_CalculateQuadrant_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSMathLibrary_CalculateQuadrant_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSMathLibrary_CalculateQuadrant_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UALSMathLibrary_CalculateQuadrant_Statics::ALSMathLibrary_eventCalculateQuadrant_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UALSMathLibrary_CalculateQuadrant()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSMathLibrary_CalculateQuadrant_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSMathLibrary_CapsuleHasRoomCheck_Statics
	{
		struct ALSMathLibrary_eventCapsuleHasRoomCheck_Parms
		{
			UCapsuleComponent* Capsule;
			FVector TargetLocation;
			float HeightOffset;
			float RadiusOffset;
			TEnumAsByte<EDrawDebugTrace::Type> DebugType;
			bool DrawDebugTrace;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Capsule_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Capsule;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HeightOffset;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RadiusOffset;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DebugType;
		static void NewProp_DrawDebugTrace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DrawDebugTrace;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSMathLibrary_CapsuleHasRoomCheck_Statics::NewProp_Capsule_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UALSMathLibrary_CapsuleHasRoomCheck_Statics::NewProp_Capsule = { "Capsule", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSMathLibrary_eventCapsuleHasRoomCheck_Parms, Capsule), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSMathLibrary_CapsuleHasRoomCheck_Statics::NewProp_Capsule_MetaData), Z_Construct_UFunction_UALSMathLibrary_CapsuleHasRoomCheck_Statics::NewProp_Capsule_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UALSMathLibrary_CapsuleHasRoomCheck_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSMathLibrary_eventCapsuleHasRoomCheck_Parms, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UALSMathLibrary_CapsuleHasRoomCheck_Statics::NewProp_HeightOffset = { "HeightOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSMathLibrary_eventCapsuleHasRoomCheck_Parms, HeightOffset), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UALSMathLibrary_CapsuleHasRoomCheck_Statics::NewProp_RadiusOffset = { "RadiusOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSMathLibrary_eventCapsuleHasRoomCheck_Parms, RadiusOffset), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UALSMathLibrary_CapsuleHasRoomCheck_Statics::NewProp_DebugType = { "DebugType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSMathLibrary_eventCapsuleHasRoomCheck_Parms, DebugType), Z_Construct_UEnum_Engine_EDrawDebugTrace, METADATA_PARAMS(0, nullptr) }; // 739760662
	void Z_Construct_UFunction_UALSMathLibrary_CapsuleHasRoomCheck_Statics::NewProp_DrawDebugTrace_SetBit(void* Obj)
	{
		((ALSMathLibrary_eventCapsuleHasRoomCheck_Parms*)Obj)->DrawDebugTrace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UALSMathLibrary_CapsuleHasRoomCheck_Statics::NewProp_DrawDebugTrace = { "DrawDebugTrace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALSMathLibrary_eventCapsuleHasRoomCheck_Parms), &Z_Construct_UFunction_UALSMathLibrary_CapsuleHasRoomCheck_Statics::NewProp_DrawDebugTrace_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UALSMathLibrary_CapsuleHasRoomCheck_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ALSMathLibrary_eventCapsuleHasRoomCheck_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UALSMathLibrary_CapsuleHasRoomCheck_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALSMathLibrary_eventCapsuleHasRoomCheck_Parms), &Z_Construct_UFunction_UALSMathLibrary_CapsuleHasRoomCheck_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSMathLibrary_CapsuleHasRoomCheck_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSMathLibrary_CapsuleHasRoomCheck_Statics::NewProp_Capsule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSMathLibrary_CapsuleHasRoomCheck_Statics::NewProp_TargetLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSMathLibrary_CapsuleHasRoomCheck_Statics::NewProp_HeightOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSMathLibrary_CapsuleHasRoomCheck_Statics::NewProp_RadiusOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSMathLibrary_CapsuleHasRoomCheck_Statics::NewProp_DebugType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSMathLibrary_CapsuleHasRoomCheck_Statics::NewProp_DrawDebugTrace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSMathLibrary_CapsuleHasRoomCheck_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSMathLibrary_CapsuleHasRoomCheck_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Math Utils" },
		{ "CPP_Default_DebugType", "Type::None" },
		{ "CPP_Default_DrawDebugTrace", "false" },
		{ "ModuleRelativePath", "Public/Library/ALSMathLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSMathLibrary_CapsuleHasRoomCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSMathLibrary, nullptr, "CapsuleHasRoomCheck", nullptr, nullptr, Z_Construct_UFunction_UALSMathLibrary_CapsuleHasRoomCheck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSMathLibrary_CapsuleHasRoomCheck_Statics::PropPointers), sizeof(Z_Construct_UFunction_UALSMathLibrary_CapsuleHasRoomCheck_Statics::ALSMathLibrary_eventCapsuleHasRoomCheck_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSMathLibrary_CapsuleHasRoomCheck_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSMathLibrary_CapsuleHasRoomCheck_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSMathLibrary_CapsuleHasRoomCheck_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UALSMathLibrary_CapsuleHasRoomCheck_Statics::ALSMathLibrary_eventCapsuleHasRoomCheck_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UALSMathLibrary_CapsuleHasRoomCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSMathLibrary_CapsuleHasRoomCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSMathLibrary_GetCapsuleBaseLocation_Statics
	{
		struct ALSMathLibrary_eventGetCapsuleBaseLocation_Parms
		{
			float ZOffset;
			UCapsuleComponent* Capsule;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ZOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Capsule_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Capsule;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UALSMathLibrary_GetCapsuleBaseLocation_Statics::NewProp_ZOffset = { "ZOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSMathLibrary_eventGetCapsuleBaseLocation_Parms, ZOffset), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSMathLibrary_GetCapsuleBaseLocation_Statics::NewProp_Capsule_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UALSMathLibrary_GetCapsuleBaseLocation_Statics::NewProp_Capsule = { "Capsule", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSMathLibrary_eventGetCapsuleBaseLocation_Parms, Capsule), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSMathLibrary_GetCapsuleBaseLocation_Statics::NewProp_Capsule_MetaData), Z_Construct_UFunction_UALSMathLibrary_GetCapsuleBaseLocation_Statics::NewProp_Capsule_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UALSMathLibrary_GetCapsuleBaseLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSMathLibrary_eventGetCapsuleBaseLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSMathLibrary_GetCapsuleBaseLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSMathLibrary_GetCapsuleBaseLocation_Statics::NewProp_ZOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSMathLibrary_GetCapsuleBaseLocation_Statics::NewProp_Capsule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSMathLibrary_GetCapsuleBaseLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSMathLibrary_GetCapsuleBaseLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Math Utils" },
		{ "ModuleRelativePath", "Public/Library/ALSMathLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSMathLibrary_GetCapsuleBaseLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSMathLibrary, nullptr, "GetCapsuleBaseLocation", nullptr, nullptr, Z_Construct_UFunction_UALSMathLibrary_GetCapsuleBaseLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSMathLibrary_GetCapsuleBaseLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UALSMathLibrary_GetCapsuleBaseLocation_Statics::ALSMathLibrary_eventGetCapsuleBaseLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSMathLibrary_GetCapsuleBaseLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSMathLibrary_GetCapsuleBaseLocation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSMathLibrary_GetCapsuleBaseLocation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UALSMathLibrary_GetCapsuleBaseLocation_Statics::ALSMathLibrary_eventGetCapsuleBaseLocation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UALSMathLibrary_GetCapsuleBaseLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSMathLibrary_GetCapsuleBaseLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSMathLibrary_GetCapsuleLocationFromBase_Statics
	{
		struct ALSMathLibrary_eventGetCapsuleLocationFromBase_Parms
		{
			FVector BaseLocation;
			float ZOffset;
			UCapsuleComponent* Capsule;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_BaseLocation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ZOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Capsule_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Capsule;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UALSMathLibrary_GetCapsuleLocationFromBase_Statics::NewProp_BaseLocation = { "BaseLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSMathLibrary_eventGetCapsuleLocationFromBase_Parms, BaseLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UALSMathLibrary_GetCapsuleLocationFromBase_Statics::NewProp_ZOffset = { "ZOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSMathLibrary_eventGetCapsuleLocationFromBase_Parms, ZOffset), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSMathLibrary_GetCapsuleLocationFromBase_Statics::NewProp_Capsule_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UALSMathLibrary_GetCapsuleLocationFromBase_Statics::NewProp_Capsule = { "Capsule", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSMathLibrary_eventGetCapsuleLocationFromBase_Parms, Capsule), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSMathLibrary_GetCapsuleLocationFromBase_Statics::NewProp_Capsule_MetaData), Z_Construct_UFunction_UALSMathLibrary_GetCapsuleLocationFromBase_Statics::NewProp_Capsule_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UALSMathLibrary_GetCapsuleLocationFromBase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSMathLibrary_eventGetCapsuleLocationFromBase_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSMathLibrary_GetCapsuleLocationFromBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSMathLibrary_GetCapsuleLocationFromBase_Statics::NewProp_BaseLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSMathLibrary_GetCapsuleLocationFromBase_Statics::NewProp_ZOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSMathLibrary_GetCapsuleLocationFromBase_Statics::NewProp_Capsule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSMathLibrary_GetCapsuleLocationFromBase_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSMathLibrary_GetCapsuleLocationFromBase_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Math Utils" },
		{ "ModuleRelativePath", "Public/Library/ALSMathLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSMathLibrary_GetCapsuleLocationFromBase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSMathLibrary, nullptr, "GetCapsuleLocationFromBase", nullptr, nullptr, Z_Construct_UFunction_UALSMathLibrary_GetCapsuleLocationFromBase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSMathLibrary_GetCapsuleLocationFromBase_Statics::PropPointers), sizeof(Z_Construct_UFunction_UALSMathLibrary_GetCapsuleLocationFromBase_Statics::ALSMathLibrary_eventGetCapsuleLocationFromBase_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSMathLibrary_GetCapsuleLocationFromBase_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSMathLibrary_GetCapsuleLocationFromBase_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSMathLibrary_GetCapsuleLocationFromBase_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UALSMathLibrary_GetCapsuleLocationFromBase_Statics::ALSMathLibrary_eventGetCapsuleLocationFromBase_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UALSMathLibrary_GetCapsuleLocationFromBase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSMathLibrary_GetCapsuleLocationFromBase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSMathLibrary_MantleComponentLocalToWorld_Statics
	{
		struct ALSMathLibrary_eventMantleComponentLocalToWorld_Parms
		{
			FALSComponentAndTransform CompAndTransform;
			FTransform ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompAndTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CompAndTransform;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSMathLibrary_MantleComponentLocalToWorld_Statics::NewProp_CompAndTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UALSMathLibrary_MantleComponentLocalToWorld_Statics::NewProp_CompAndTransform = { "CompAndTransform", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSMathLibrary_eventMantleComponentLocalToWorld_Parms, CompAndTransform), Z_Construct_UScriptStruct_FALSComponentAndTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSMathLibrary_MantleComponentLocalToWorld_Statics::NewProp_CompAndTransform_MetaData), Z_Construct_UFunction_UALSMathLibrary_MantleComponentLocalToWorld_Statics::NewProp_CompAndTransform_MetaData) }; // 2936654904
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UALSMathLibrary_MantleComponentLocalToWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSMathLibrary_eventMantleComponentLocalToWorld_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSMathLibrary_MantleComponentLocalToWorld_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSMathLibrary_MantleComponentLocalToWorld_Statics::NewProp_CompAndTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSMathLibrary_MantleComponentLocalToWorld_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSMathLibrary_MantleComponentLocalToWorld_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Math Utils" },
		{ "ModuleRelativePath", "Public/Library/ALSMathLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSMathLibrary_MantleComponentLocalToWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSMathLibrary, nullptr, "MantleComponentLocalToWorld", nullptr, nullptr, Z_Construct_UFunction_UALSMathLibrary_MantleComponentLocalToWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSMathLibrary_MantleComponentLocalToWorld_Statics::PropPointers), sizeof(Z_Construct_UFunction_UALSMathLibrary_MantleComponentLocalToWorld_Statics::ALSMathLibrary_eventMantleComponentLocalToWorld_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSMathLibrary_MantleComponentLocalToWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSMathLibrary_MantleComponentLocalToWorld_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSMathLibrary_MantleComponentLocalToWorld_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UALSMathLibrary_MantleComponentLocalToWorld_Statics::ALSMathLibrary_eventMantleComponentLocalToWorld_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UALSMathLibrary_MantleComponentLocalToWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSMathLibrary_MantleComponentLocalToWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSMathLibrary_TransformAdd_Statics
	{
		struct ALSMathLibrary_eventTransformAdd_Parms
		{
			FTransform T1;
			FTransform T2;
			FTransform ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_T1_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_T1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_T2_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_T2;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSMathLibrary_TransformAdd_Statics::NewProp_T1_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UALSMathLibrary_TransformAdd_Statics::NewProp_T1 = { "T1", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSMathLibrary_eventTransformAdd_Parms, T1), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSMathLibrary_TransformAdd_Statics::NewProp_T1_MetaData), Z_Construct_UFunction_UALSMathLibrary_TransformAdd_Statics::NewProp_T1_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSMathLibrary_TransformAdd_Statics::NewProp_T2_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UALSMathLibrary_TransformAdd_Statics::NewProp_T2 = { "T2", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSMathLibrary_eventTransformAdd_Parms, T2), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSMathLibrary_TransformAdd_Statics::NewProp_T2_MetaData), Z_Construct_UFunction_UALSMathLibrary_TransformAdd_Statics::NewProp_T2_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UALSMathLibrary_TransformAdd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSMathLibrary_eventTransformAdd_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSMathLibrary_TransformAdd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSMathLibrary_TransformAdd_Statics::NewProp_T1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSMathLibrary_TransformAdd_Statics::NewProp_T2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSMathLibrary_TransformAdd_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSMathLibrary_TransformAdd_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Math Utils" },
		{ "ModuleRelativePath", "Public/Library/ALSMathLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSMathLibrary_TransformAdd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSMathLibrary, nullptr, "TransformAdd", nullptr, nullptr, Z_Construct_UFunction_UALSMathLibrary_TransformAdd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSMathLibrary_TransformAdd_Statics::PropPointers), sizeof(Z_Construct_UFunction_UALSMathLibrary_TransformAdd_Statics::ALSMathLibrary_eventTransformAdd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSMathLibrary_TransformAdd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSMathLibrary_TransformAdd_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSMathLibrary_TransformAdd_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UALSMathLibrary_TransformAdd_Statics::ALSMathLibrary_eventTransformAdd_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UALSMathLibrary_TransformAdd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSMathLibrary_TransformAdd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSMathLibrary_TransformSub_Statics
	{
		struct ALSMathLibrary_eventTransformSub_Parms
		{
			FTransform T1;
			FTransform T2;
			FTransform ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_T1_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_T1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_T2_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_T2;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSMathLibrary_TransformSub_Statics::NewProp_T1_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UALSMathLibrary_TransformSub_Statics::NewProp_T1 = { "T1", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSMathLibrary_eventTransformSub_Parms, T1), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSMathLibrary_TransformSub_Statics::NewProp_T1_MetaData), Z_Construct_UFunction_UALSMathLibrary_TransformSub_Statics::NewProp_T1_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSMathLibrary_TransformSub_Statics::NewProp_T2_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UALSMathLibrary_TransformSub_Statics::NewProp_T2 = { "T2", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSMathLibrary_eventTransformSub_Parms, T2), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSMathLibrary_TransformSub_Statics::NewProp_T2_MetaData), Z_Construct_UFunction_UALSMathLibrary_TransformSub_Statics::NewProp_T2_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UALSMathLibrary_TransformSub_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSMathLibrary_eventTransformSub_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSMathLibrary_TransformSub_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSMathLibrary_TransformSub_Statics::NewProp_T1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSMathLibrary_TransformSub_Statics::NewProp_T2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSMathLibrary_TransformSub_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSMathLibrary_TransformSub_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Math Utils" },
		{ "ModuleRelativePath", "Public/Library/ALSMathLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSMathLibrary_TransformSub_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSMathLibrary, nullptr, "TransformSub", nullptr, nullptr, Z_Construct_UFunction_UALSMathLibrary_TransformSub_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSMathLibrary_TransformSub_Statics::PropPointers), sizeof(Z_Construct_UFunction_UALSMathLibrary_TransformSub_Statics::ALSMathLibrary_eventTransformSub_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSMathLibrary_TransformSub_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSMathLibrary_TransformSub_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSMathLibrary_TransformSub_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UALSMathLibrary_TransformSub_Statics::ALSMathLibrary_eventTransformSub_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UALSMathLibrary_TransformSub()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSMathLibrary_TransformSub_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UALSMathLibrary);
	UClass* Z_Construct_UClass_UALSMathLibrary_NoRegister()
	{
		return UALSMathLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UALSMathLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UALSMathLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ALSV4_CPP,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UALSMathLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UALSMathLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UALSMathLibrary_AngleInRange, "AngleInRange" }, // 3750553832
		{ &Z_Construct_UFunction_UALSMathLibrary_CalculateQuadrant, "CalculateQuadrant" }, // 609997723
		{ &Z_Construct_UFunction_UALSMathLibrary_CapsuleHasRoomCheck, "CapsuleHasRoomCheck" }, // 1985507893
		{ &Z_Construct_UFunction_UALSMathLibrary_GetCapsuleBaseLocation, "GetCapsuleBaseLocation" }, // 2898139106
		{ &Z_Construct_UFunction_UALSMathLibrary_GetCapsuleLocationFromBase, "GetCapsuleLocationFromBase" }, // 798335082
		{ &Z_Construct_UFunction_UALSMathLibrary_MantleComponentLocalToWorld, "MantleComponentLocalToWorld" }, // 274624495
		{ &Z_Construct_UFunction_UALSMathLibrary_TransformAdd, "TransformAdd" }, // 2719688954
		{ &Z_Construct_UFunction_UALSMathLibrary_TransformSub, "TransformSub" }, // 2513551276
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UALSMathLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSMathLibrary_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Math library functions for ALS\n */" },
#endif
		{ "IncludePath", "Library/ALSMathLibrary.h" },
		{ "ModuleRelativePath", "Public/Library/ALSMathLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Math library functions for ALS" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UALSMathLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UALSMathLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UALSMathLibrary_Statics::ClassParams = {
		&UALSMathLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSMathLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UALSMathLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UALSMathLibrary()
	{
		if (!Z_Registration_Info_UClass_UALSMathLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UALSMathLibrary.OuterSingleton, Z_Construct_UClass_UALSMathLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UALSMathLibrary.OuterSingleton;
	}
	template<> ALSV4_CPP_API UClass* StaticClass<UALSMathLibrary>()
	{
		return UALSMathLibrary::StaticClass();
	}
	UALSMathLibrary::UALSMathLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UALSMathLibrary);
	UALSMathLibrary::~UALSMathLibrary() {}
	struct Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_hitman_stealth_recreate_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Library_ALSMathLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_hitman_stealth_recreate_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Library_ALSMathLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UALSMathLibrary, UALSMathLibrary::StaticClass, TEXT("UALSMathLibrary"), &Z_Registration_Info_UClass_UALSMathLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UALSMathLibrary), 3179328524U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_hitman_stealth_recreate_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Library_ALSMathLibrary_h_2663504182(TEXT("/Script/ALSV4_CPP"),
		Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_hitman_stealth_recreate_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Library_ALSMathLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_hitman_stealth_recreate_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Library_ALSMathLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
