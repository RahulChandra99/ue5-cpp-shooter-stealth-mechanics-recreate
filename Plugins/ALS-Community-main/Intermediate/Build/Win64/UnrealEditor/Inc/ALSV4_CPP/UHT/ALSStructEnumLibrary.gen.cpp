// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALSV4_CPP/Public/Library/ALSStructEnumLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeALSStructEnumLibrary() {}
// Cross Module References
	ALSV4_CPP_API UEnum* Z_Construct_UEnum_ALSV4_CPP_EALSGait();
	ALSV4_CPP_API UEnum* Z_Construct_UEnum_ALSV4_CPP_EALSGroundedEntryState();
	ALSV4_CPP_API UEnum* Z_Construct_UEnum_ALSV4_CPP_EALSMovementAction();
	ALSV4_CPP_API UEnum* Z_Construct_UEnum_ALSV4_CPP_EALSMovementDirection();
	ALSV4_CPP_API UEnum* Z_Construct_UEnum_ALSV4_CPP_EALSMovementState();
	ALSV4_CPP_API UEnum* Z_Construct_UEnum_ALSV4_CPP_EALSOverlayState();
	ALSV4_CPP_API UEnum* Z_Construct_UEnum_ALSV4_CPP_EALSRotationMode();
	ALSV4_CPP_API UEnum* Z_Construct_UEnum_ALSV4_CPP_EALSStance();
	ALSV4_CPP_API UScriptStruct* Z_Construct_UScriptStruct_FALSGait();
	ALSV4_CPP_API UScriptStruct* Z_Construct_UScriptStruct_FALSGroundedEntryState();
	ALSV4_CPP_API UScriptStruct* Z_Construct_UScriptStruct_FALSMovementAction();
	ALSV4_CPP_API UScriptStruct* Z_Construct_UScriptStruct_FALSMovementDirection();
	ALSV4_CPP_API UScriptStruct* Z_Construct_UScriptStruct_FALSMovementState();
	ALSV4_CPP_API UScriptStruct* Z_Construct_UScriptStruct_FALSOverlayState();
	ALSV4_CPP_API UScriptStruct* Z_Construct_UScriptStruct_FALSRotationMode();
	ALSV4_CPP_API UScriptStruct* Z_Construct_UScriptStruct_FALSStance();
	UPackage* Z_Construct_UPackage__Script_ALSV4_CPP();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ALSMovementState;
class UScriptStruct* FALSMovementState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ALSMovementState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ALSMovementState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FALSMovementState, (UObject*)Z_Construct_UPackage__Script_ALSV4_CPP(), TEXT("ALSMovementState"));
	}
	return Z_Registration_Info_UScriptStruct_ALSMovementState.OuterSingleton;
}
template<> ALSV4_CPP_API UScriptStruct* StaticStruct<FALSMovementState>()
{
	return FALSMovementState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FALSMovementState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_State;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_None__MetaData[];
#endif
		static void NewProp_None__SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_None_;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Grounded__MetaData[];
#endif
		static void NewProp_Grounded__SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Grounded_;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAir__MetaData[];
#endif
		static void NewProp_InAir__SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InAir_;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mantling__MetaData[];
#endif
		static void NewProp_Mantling__SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Mantling_;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ragdoll__MetaData[];
#endif
		static void NewProp_Ragdoll__SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Ragdoll_;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSMovementState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Library/ALSStructEnumLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FALSMovementState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FALSMovementState>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FALSMovementState_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSMovementState_Statics::NewProp_State_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ALS|Movement System" },
		{ "ModuleRelativePath", "Public/Library/ALSStructEnumLibrary.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FALSMovementState_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0040000000030015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSMovementState, State), Z_Construct_UEnum_ALSV4_CPP_EALSMovementState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSMovementState_Statics::NewProp_State_MetaData), Z_Construct_UScriptStruct_FALSMovementState_Statics::NewProp_State_MetaData) }; // 2855841202
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSMovementState_Statics::NewProp_None__MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ALS|Movement System" },
		{ "ModuleRelativePath", "Public/Library/ALSStructEnumLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FALSMovementState_Statics::NewProp_None__SetBit(void* Obj)
	{
		((FALSMovementState*)Obj)->None_ = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FALSMovementState_Statics::NewProp_None_ = { "None_", nullptr, (EPropertyFlags)0x0040000000030015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FALSMovementState), &Z_Construct_UScriptStruct_FALSMovementState_Statics::NewProp_None__SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSMovementState_Statics::NewProp_None__MetaData), Z_Construct_UScriptStruct_FALSMovementState_Statics::NewProp_None__MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSMovementState_Statics::NewProp_Grounded__MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ALS|Movement System" },
		{ "ModuleRelativePath", "Public/Library/ALSStructEnumLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FALSMovementState_Statics::NewProp_Grounded__SetBit(void* Obj)
	{
		((FALSMovementState*)Obj)->Grounded_ = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FALSMovementState_Statics::NewProp_Grounded_ = { "Grounded_", nullptr, (EPropertyFlags)0x0040000000030015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FALSMovementState), &Z_Construct_UScriptStruct_FALSMovementState_Statics::NewProp_Grounded__SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSMovementState_Statics::NewProp_Grounded__MetaData), Z_Construct_UScriptStruct_FALSMovementState_Statics::NewProp_Grounded__MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSMovementState_Statics::NewProp_InAir__MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ALS|Movement System" },
		{ "ModuleRelativePath", "Public/Library/ALSStructEnumLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FALSMovementState_Statics::NewProp_InAir__SetBit(void* Obj)
	{
		((FALSMovementState*)Obj)->InAir_ = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FALSMovementState_Statics::NewProp_InAir_ = { "InAir_", nullptr, (EPropertyFlags)0x0040000000030015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FALSMovementState), &Z_Construct_UScriptStruct_FALSMovementState_Statics::NewProp_InAir__SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSMovementState_Statics::NewProp_InAir__MetaData), Z_Construct_UScriptStruct_FALSMovementState_Statics::NewProp_InAir__MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSMovementState_Statics::NewProp_Mantling__MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ALS|Movement System" },
		{ "ModuleRelativePath", "Public/Library/ALSStructEnumLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FALSMovementState_Statics::NewProp_Mantling__SetBit(void* Obj)
	{
		((FALSMovementState*)Obj)->Mantling_ = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FALSMovementState_Statics::NewProp_Mantling_ = { "Mantling_", nullptr, (EPropertyFlags)0x0040000000030015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FALSMovementState), &Z_Construct_UScriptStruct_FALSMovementState_Statics::NewProp_Mantling__SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSMovementState_Statics::NewProp_Mantling__MetaData), Z_Construct_UScriptStruct_FALSMovementState_Statics::NewProp_Mantling__MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSMovementState_Statics::NewProp_Ragdoll__MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ALS|Movement System" },
		{ "ModuleRelativePath", "Public/Library/ALSStructEnumLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FALSMovementState_Statics::NewProp_Ragdoll__SetBit(void* Obj)
	{
		((FALSMovementState*)Obj)->Ragdoll_ = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FALSMovementState_Statics::NewProp_Ragdoll_ = { "Ragdoll_", nullptr, (EPropertyFlags)0x0040000000030015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FALSMovementState), &Z_Construct_UScriptStruct_FALSMovementState_Statics::NewProp_Ragdoll__SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSMovementState_Statics::NewProp_Ragdoll__MetaData), Z_Construct_UScriptStruct_FALSMovementState_Statics::NewProp_Ragdoll__MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FALSMovementState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSMovementState_Statics::NewProp_State_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSMovementState_Statics::NewProp_State,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSMovementState_Statics::NewProp_None_,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSMovementState_Statics::NewProp_Grounded_,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSMovementState_Statics::NewProp_InAir_,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSMovementState_Statics::NewProp_Mantling_,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSMovementState_Statics::NewProp_Ragdoll_,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FALSMovementState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALSV4_CPP,
		nullptr,
		&NewStructOps,
		"ALSMovementState",
		Z_Construct_UScriptStruct_FALSMovementState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSMovementState_Statics::PropPointers),
		sizeof(FALSMovementState),
		alignof(FALSMovementState),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSMovementState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FALSMovementState_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSMovementState_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FALSMovementState()
	{
		if (!Z_Registration_Info_UScriptStruct_ALSMovementState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ALSMovementState.InnerSingleton, Z_Construct_UScriptStruct_FALSMovementState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ALSMovementState.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ALSStance;
class UScriptStruct* FALSStance::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ALSStance.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ALSStance.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FALSStance, (UObject*)Z_Construct_UPackage__Script_ALSV4_CPP(), TEXT("ALSStance"));
	}
	return Z_Registration_Info_UScriptStruct_ALSStance.OuterSingleton;
}
template<> ALSV4_CPP_API UScriptStruct* StaticStruct<FALSStance>()
{
	return FALSStance::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FALSStance_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Stance_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Stance_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Stance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Standing__MetaData[];
#endif
		static void NewProp_Standing__SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Standing_;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Crouching__MetaData[];
#endif
		static void NewProp_Crouching__SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Crouching_;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSStance_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Library/ALSStructEnumLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FALSStance_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FALSStance>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FALSStance_Statics::NewProp_Stance_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSStance_Statics::NewProp_Stance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ALS|Character States" },
		{ "ModuleRelativePath", "Public/Library/ALSStructEnumLibrary.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FALSStance_Statics::NewProp_Stance = { "Stance", nullptr, (EPropertyFlags)0x0040000000030015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSStance, Stance), Z_Construct_UEnum_ALSV4_CPP_EALSStance, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSStance_Statics::NewProp_Stance_MetaData), Z_Construct_UScriptStruct_FALSStance_Statics::NewProp_Stance_MetaData) }; // 98898313
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSStance_Statics::NewProp_Standing__MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ALS|Character States" },
		{ "ModuleRelativePath", "Public/Library/ALSStructEnumLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FALSStance_Statics::NewProp_Standing__SetBit(void* Obj)
	{
		((FALSStance*)Obj)->Standing_ = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FALSStance_Statics::NewProp_Standing_ = { "Standing_", nullptr, (EPropertyFlags)0x0040000000030015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FALSStance), &Z_Construct_UScriptStruct_FALSStance_Statics::NewProp_Standing__SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSStance_Statics::NewProp_Standing__MetaData), Z_Construct_UScriptStruct_FALSStance_Statics::NewProp_Standing__MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSStance_Statics::NewProp_Crouching__MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ALS|Character States" },
		{ "ModuleRelativePath", "Public/Library/ALSStructEnumLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FALSStance_Statics::NewProp_Crouching__SetBit(void* Obj)
	{
		((FALSStance*)Obj)->Crouching_ = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FALSStance_Statics::NewProp_Crouching_ = { "Crouching_", nullptr, (EPropertyFlags)0x0040000000030015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FALSStance), &Z_Construct_UScriptStruct_FALSStance_Statics::NewProp_Crouching__SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSStance_Statics::NewProp_Crouching__MetaData), Z_Construct_UScriptStruct_FALSStance_Statics::NewProp_Crouching__MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FALSStance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSStance_Statics::NewProp_Stance_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSStance_Statics::NewProp_Stance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSStance_Statics::NewProp_Standing_,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSStance_Statics::NewProp_Crouching_,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FALSStance_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALSV4_CPP,
		nullptr,
		&NewStructOps,
		"ALSStance",
		Z_Construct_UScriptStruct_FALSStance_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSStance_Statics::PropPointers),
		sizeof(FALSStance),
		alignof(FALSStance),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSStance_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FALSStance_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSStance_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FALSStance()
	{
		if (!Z_Registration_Info_UScriptStruct_ALSStance.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ALSStance.InnerSingleton, Z_Construct_UScriptStruct_FALSStance_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ALSStance.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ALSRotationMode;
class UScriptStruct* FALSRotationMode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ALSRotationMode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ALSRotationMode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FALSRotationMode, (UObject*)Z_Construct_UPackage__Script_ALSV4_CPP(), TEXT("ALSRotationMode"));
	}
	return Z_Registration_Info_UScriptStruct_ALSRotationMode.OuterSingleton;
}
template<> ALSV4_CPP_API UScriptStruct* StaticStruct<FALSRotationMode>()
{
	return FALSRotationMode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FALSRotationMode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_RotationMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VelocityDirection__MetaData[];
#endif
		static void NewProp_VelocityDirection__SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_VelocityDirection_;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookingDirection__MetaData[];
#endif
		static void NewProp_LookingDirection__SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_LookingDirection_;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Aiming__MetaData[];
#endif
		static void NewProp_Aiming__SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Aiming_;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSRotationMode_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Library/ALSStructEnumLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FALSRotationMode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FALSRotationMode>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FALSRotationMode_Statics::NewProp_RotationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSRotationMode_Statics::NewProp_RotationMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ALS|Rotation System" },
		{ "ModuleRelativePath", "Public/Library/ALSStructEnumLibrary.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FALSRotationMode_Statics::NewProp_RotationMode = { "RotationMode", nullptr, (EPropertyFlags)0x0040000000030015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSRotationMode, RotationMode), Z_Construct_UEnum_ALSV4_CPP_EALSRotationMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSRotationMode_Statics::NewProp_RotationMode_MetaData), Z_Construct_UScriptStruct_FALSRotationMode_Statics::NewProp_RotationMode_MetaData) }; // 3543998324
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSRotationMode_Statics::NewProp_VelocityDirection__MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ALS|Rotation System" },
		{ "ModuleRelativePath", "Public/Library/ALSStructEnumLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FALSRotationMode_Statics::NewProp_VelocityDirection__SetBit(void* Obj)
	{
		((FALSRotationMode*)Obj)->VelocityDirection_ = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FALSRotationMode_Statics::NewProp_VelocityDirection_ = { "VelocityDirection_", nullptr, (EPropertyFlags)0x0040000000030015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FALSRotationMode), &Z_Construct_UScriptStruct_FALSRotationMode_Statics::NewProp_VelocityDirection__SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSRotationMode_Statics::NewProp_VelocityDirection__MetaData), Z_Construct_UScriptStruct_FALSRotationMode_Statics::NewProp_VelocityDirection__MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSRotationMode_Statics::NewProp_LookingDirection__MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ALS|Rotation System" },
		{ "ModuleRelativePath", "Public/Library/ALSStructEnumLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FALSRotationMode_Statics::NewProp_LookingDirection__SetBit(void* Obj)
	{
		((FALSRotationMode*)Obj)->LookingDirection_ = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FALSRotationMode_Statics::NewProp_LookingDirection_ = { "LookingDirection_", nullptr, (EPropertyFlags)0x0040000000030015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FALSRotationMode), &Z_Construct_UScriptStruct_FALSRotationMode_Statics::NewProp_LookingDirection__SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSRotationMode_Statics::NewProp_LookingDirection__MetaData), Z_Construct_UScriptStruct_FALSRotationMode_Statics::NewProp_LookingDirection__MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSRotationMode_Statics::NewProp_Aiming__MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ALS|Rotation System" },
		{ "ModuleRelativePath", "Public/Library/ALSStructEnumLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FALSRotationMode_Statics::NewProp_Aiming__SetBit(void* Obj)
	{
		((FALSRotationMode*)Obj)->Aiming_ = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FALSRotationMode_Statics::NewProp_Aiming_ = { "Aiming_", nullptr, (EPropertyFlags)0x0040000000030015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FALSRotationMode), &Z_Construct_UScriptStruct_FALSRotationMode_Statics::NewProp_Aiming__SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSRotationMode_Statics::NewProp_Aiming__MetaData), Z_Construct_UScriptStruct_FALSRotationMode_Statics::NewProp_Aiming__MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FALSRotationMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSRotationMode_Statics::NewProp_RotationMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSRotationMode_Statics::NewProp_RotationMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSRotationMode_Statics::NewProp_VelocityDirection_,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSRotationMode_Statics::NewProp_LookingDirection_,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSRotationMode_Statics::NewProp_Aiming_,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FALSRotationMode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALSV4_CPP,
		nullptr,
		&NewStructOps,
		"ALSRotationMode",
		Z_Construct_UScriptStruct_FALSRotationMode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSRotationMode_Statics::PropPointers),
		sizeof(FALSRotationMode),
		alignof(FALSRotationMode),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSRotationMode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FALSRotationMode_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSRotationMode_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FALSRotationMode()
	{
		if (!Z_Registration_Info_UScriptStruct_ALSRotationMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ALSRotationMode.InnerSingleton, Z_Construct_UScriptStruct_FALSRotationMode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ALSRotationMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ALSMovementDirection;
class UScriptStruct* FALSMovementDirection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ALSMovementDirection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ALSMovementDirection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FALSMovementDirection, (UObject*)Z_Construct_UPackage__Script_ALSV4_CPP(), TEXT("ALSMovementDirection"));
	}
	return Z_Registration_Info_UScriptStruct_ALSMovementDirection.OuterSingleton;
}
template<> ALSV4_CPP_API UScriptStruct* StaticStruct<FALSMovementDirection>()
{
	return FALSMovementDirection::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FALSMovementDirection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_MovementDirection_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementDirection_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MovementDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Forward__MetaData[];
#endif
		static void NewProp_Forward__SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Forward_;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Right__MetaData[];
#endif
		static void NewProp_Right__SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Right_;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Left__MetaData[];
#endif
		static void NewProp_Left__SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Left_;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Backward__MetaData[];
#endif
		static void NewProp_Backward__SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Backward_;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSMovementDirection_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Library/ALSStructEnumLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FALSMovementDirection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FALSMovementDirection>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FALSMovementDirection_Statics::NewProp_MovementDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSMovementDirection_Statics::NewProp_MovementDirection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ALS|Movement System" },
		{ "ModuleRelativePath", "Public/Library/ALSStructEnumLibrary.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FALSMovementDirection_Statics::NewProp_MovementDirection = { "MovementDirection", nullptr, (EPropertyFlags)0x0040000000030015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSMovementDirection, MovementDirection), Z_Construct_UEnum_ALSV4_CPP_EALSMovementDirection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSMovementDirection_Statics::NewProp_MovementDirection_MetaData), Z_Construct_UScriptStruct_FALSMovementDirection_Statics::NewProp_MovementDirection_MetaData) }; // 1495404216
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSMovementDirection_Statics::NewProp_Forward__MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ALS|Movement System" },
		{ "ModuleRelativePath", "Public/Library/ALSStructEnumLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FALSMovementDirection_Statics::NewProp_Forward__SetBit(void* Obj)
	{
		((FALSMovementDirection*)Obj)->Forward_ = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FALSMovementDirection_Statics::NewProp_Forward_ = { "Forward_", nullptr, (EPropertyFlags)0x0040000000030015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FALSMovementDirection), &Z_Construct_UScriptStruct_FALSMovementDirection_Statics::NewProp_Forward__SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSMovementDirection_Statics::NewProp_Forward__MetaData), Z_Construct_UScriptStruct_FALSMovementDirection_Statics::NewProp_Forward__MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSMovementDirection_Statics::NewProp_Right__MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ALS|Movement System" },
		{ "ModuleRelativePath", "Public/Library/ALSStructEnumLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FALSMovementDirection_Statics::NewProp_Right__SetBit(void* Obj)
	{
		((FALSMovementDirection*)Obj)->Right_ = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FALSMovementDirection_Statics::NewProp_Right_ = { "Right_", nullptr, (EPropertyFlags)0x0040000000030015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FALSMovementDirection), &Z_Construct_UScriptStruct_FALSMovementDirection_Statics::NewProp_Right__SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSMovementDirection_Statics::NewProp_Right__MetaData), Z_Construct_UScriptStruct_FALSMovementDirection_Statics::NewProp_Right__MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSMovementDirection_Statics::NewProp_Left__MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ALS|Movement System" },
		{ "ModuleRelativePath", "Public/Library/ALSStructEnumLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FALSMovementDirection_Statics::NewProp_Left__SetBit(void* Obj)
	{
		((FALSMovementDirection*)Obj)->Left_ = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FALSMovementDirection_Statics::NewProp_Left_ = { "Left_", nullptr, (EPropertyFlags)0x0040000000030015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FALSMovementDirection), &Z_Construct_UScriptStruct_FALSMovementDirection_Statics::NewProp_Left__SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSMovementDirection_Statics::NewProp_Left__MetaData), Z_Construct_UScriptStruct_FALSMovementDirection_Statics::NewProp_Left__MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSMovementDirection_Statics::NewProp_Backward__MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ALS|Movement System" },
		{ "ModuleRelativePath", "Public/Library/ALSStructEnumLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FALSMovementDirection_Statics::NewProp_Backward__SetBit(void* Obj)
	{
		((FALSMovementDirection*)Obj)->Backward_ = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FALSMovementDirection_Statics::NewProp_Backward_ = { "Backward_", nullptr, (EPropertyFlags)0x0040000000030015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FALSMovementDirection), &Z_Construct_UScriptStruct_FALSMovementDirection_Statics::NewProp_Backward__SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSMovementDirection_Statics::NewProp_Backward__MetaData), Z_Construct_UScriptStruct_FALSMovementDirection_Statics::NewProp_Backward__MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FALSMovementDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSMovementDirection_Statics::NewProp_MovementDirection_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSMovementDirection_Statics::NewProp_MovementDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSMovementDirection_Statics::NewProp_Forward_,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSMovementDirection_Statics::NewProp_Right_,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSMovementDirection_Statics::NewProp_Left_,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSMovementDirection_Statics::NewProp_Backward_,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FALSMovementDirection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALSV4_CPP,
		nullptr,
		&NewStructOps,
		"ALSMovementDirection",
		Z_Construct_UScriptStruct_FALSMovementDirection_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSMovementDirection_Statics::PropPointers),
		sizeof(FALSMovementDirection),
		alignof(FALSMovementDirection),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSMovementDirection_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FALSMovementDirection_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSMovementDirection_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FALSMovementDirection()
	{
		if (!Z_Registration_Info_UScriptStruct_ALSMovementDirection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ALSMovementDirection.InnerSingleton, Z_Construct_UScriptStruct_FALSMovementDirection_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ALSMovementDirection.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ALSMovementAction;
class UScriptStruct* FALSMovementAction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ALSMovementAction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ALSMovementAction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FALSMovementAction, (UObject*)Z_Construct_UPackage__Script_ALSV4_CPP(), TEXT("ALSMovementAction"));
	}
	return Z_Registration_Info_UScriptStruct_ALSMovementAction.OuterSingleton;
}
template<> ALSV4_CPP_API UScriptStruct* StaticStruct<FALSMovementAction>()
{
	return FALSMovementAction::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FALSMovementAction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Action_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Action;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_None__MetaData[];
#endif
		static void NewProp_None__SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_None_;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LowMantle__MetaData[];
#endif
		static void NewProp_LowMantle__SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_LowMantle_;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HighMantle__MetaData[];
#endif
		static void NewProp_HighMantle__SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_HighMantle_;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rolling__MetaData[];
#endif
		static void NewProp_Rolling__SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Rolling_;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GettingUp__MetaData[];
#endif
		static void NewProp_GettingUp__SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_GettingUp_;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSMovementAction_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Library/ALSStructEnumLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FALSMovementAction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FALSMovementAction>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FALSMovementAction_Statics::NewProp_Action_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSMovementAction_Statics::NewProp_Action_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ALS|Movement System" },
		{ "ModuleRelativePath", "Public/Library/ALSStructEnumLibrary.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FALSMovementAction_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0040000000030015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSMovementAction, Action), Z_Construct_UEnum_ALSV4_CPP_EALSMovementAction, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSMovementAction_Statics::NewProp_Action_MetaData), Z_Construct_UScriptStruct_FALSMovementAction_Statics::NewProp_Action_MetaData) }; // 1229765569
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSMovementAction_Statics::NewProp_None__MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ALS|Movement System" },
		{ "ModuleRelativePath", "Public/Library/ALSStructEnumLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FALSMovementAction_Statics::NewProp_None__SetBit(void* Obj)
	{
		((FALSMovementAction*)Obj)->None_ = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FALSMovementAction_Statics::NewProp_None_ = { "None_", nullptr, (EPropertyFlags)0x0040000000030015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FALSMovementAction), &Z_Construct_UScriptStruct_FALSMovementAction_Statics::NewProp_None__SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSMovementAction_Statics::NewProp_None__MetaData), Z_Construct_UScriptStruct_FALSMovementAction_Statics::NewProp_None__MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSMovementAction_Statics::NewProp_LowMantle__MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ALS|Movement System" },
		{ "ModuleRelativePath", "Public/Library/ALSStructEnumLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FALSMovementAction_Statics::NewProp_LowMantle__SetBit(void* Obj)
	{
		((FALSMovementAction*)Obj)->LowMantle_ = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FALSMovementAction_Statics::NewProp_LowMantle_ = { "LowMantle_", nullptr, (EPropertyFlags)0x0040000000030015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FALSMovementAction), &Z_Construct_UScriptStruct_FALSMovementAction_Statics::NewProp_LowMantle__SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSMovementAction_Statics::NewProp_LowMantle__MetaData), Z_Construct_UScriptStruct_FALSMovementAction_Statics::NewProp_LowMantle__MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSMovementAction_Statics::NewProp_HighMantle__MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ALS|Movement System" },
		{ "ModuleRelativePath", "Public/Library/ALSStructEnumLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FALSMovementAction_Statics::NewProp_HighMantle__SetBit(void* Obj)
	{
		((FALSMovementAction*)Obj)->HighMantle_ = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FALSMovementAction_Statics::NewProp_HighMantle_ = { "HighMantle_", nullptr, (EPropertyFlags)0x0040000000030015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FALSMovementAction), &Z_Construct_UScriptStruct_FALSMovementAction_Statics::NewProp_HighMantle__SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSMovementAction_Statics::NewProp_HighMantle__MetaData), Z_Construct_UScriptStruct_FALSMovementAction_Statics::NewProp_HighMantle__MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSMovementAction_Statics::NewProp_Rolling__MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ALS|Movement System" },
		{ "ModuleRelativePath", "Public/Library/ALSStructEnumLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FALSMovementAction_Statics::NewProp_Rolling__SetBit(void* Obj)
	{
		((FALSMovementAction*)Obj)->Rolling_ = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FALSMovementAction_Statics::NewProp_Rolling_ = { "Rolling_", nullptr, (EPropertyFlags)0x0040000000030015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FALSMovementAction), &Z_Construct_UScriptStruct_FALSMovementAction_Statics::NewProp_Rolling__SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSMovementAction_Statics::NewProp_Rolling__MetaData), Z_Construct_UScriptStruct_FALSMovementAction_Statics::NewProp_Rolling__MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSMovementAction_Statics::NewProp_GettingUp__MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ALS|Movement System" },
		{ "ModuleRelativePath", "Public/Library/ALSStructEnumLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FALSMovementAction_Statics::NewProp_GettingUp__SetBit(void* Obj)
	{
		((FALSMovementAction*)Obj)->GettingUp_ = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FALSMovementAction_Statics::NewProp_GettingUp_ = { "GettingUp_", nullptr, (EPropertyFlags)0x0040000000030015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FALSMovementAction), &Z_Construct_UScriptStruct_FALSMovementAction_Statics::NewProp_GettingUp__SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSMovementAction_Statics::NewProp_GettingUp__MetaData), Z_Construct_UScriptStruct_FALSMovementAction_Statics::NewProp_GettingUp__MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FALSMovementAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSMovementAction_Statics::NewProp_Action_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSMovementAction_Statics::NewProp_Action,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSMovementAction_Statics::NewProp_None_,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSMovementAction_Statics::NewProp_LowMantle_,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSMovementAction_Statics::NewProp_HighMantle_,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSMovementAction_Statics::NewProp_Rolling_,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSMovementAction_Statics::NewProp_GettingUp_,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FALSMovementAction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALSV4_CPP,
		nullptr,
		&NewStructOps,
		"ALSMovementAction",
		Z_Construct_UScriptStruct_FALSMovementAction_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSMovementAction_Statics::PropPointers),
		sizeof(FALSMovementAction),
		alignof(FALSMovementAction),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSMovementAction_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FALSMovementAction_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSMovementAction_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FALSMovementAction()
	{
		if (!Z_Registration_Info_UScriptStruct_ALSMovementAction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ALSMovementAction.InnerSingleton, Z_Construct_UScriptStruct_FALSMovementAction_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ALSMovementAction.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ALSGait;
class UScriptStruct* FALSGait::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ALSGait.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ALSGait.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FALSGait, (UObject*)Z_Construct_UPackage__Script_ALSV4_CPP(), TEXT("ALSGait"));
	}
	return Z_Registration_Info_UScriptStruct_ALSGait.OuterSingleton;
}
template<> ALSV4_CPP_API UScriptStruct* StaticStruct<FALSGait>()
{
	return FALSGait::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FALSGait_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Gait_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Gait_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Gait;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Walking__MetaData[];
#endif
		static void NewProp_Walking__SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Walking_;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Running__MetaData[];
#endif
		static void NewProp_Running__SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Running_;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sprinting__MetaData[];
#endif
		static void NewProp_Sprinting__SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Sprinting_;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSGait_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Library/ALSStructEnumLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FALSGait_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FALSGait>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FALSGait_Statics::NewProp_Gait_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSGait_Statics::NewProp_Gait_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ALS|Movement System" },
		{ "ModuleRelativePath", "Public/Library/ALSStructEnumLibrary.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FALSGait_Statics::NewProp_Gait = { "Gait", nullptr, (EPropertyFlags)0x0040000000030015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSGait, Gait), Z_Construct_UEnum_ALSV4_CPP_EALSGait, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSGait_Statics::NewProp_Gait_MetaData), Z_Construct_UScriptStruct_FALSGait_Statics::NewProp_Gait_MetaData) }; // 4204508735
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSGait_Statics::NewProp_Walking__MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ALS|Movement System" },
		{ "ModuleRelativePath", "Public/Library/ALSStructEnumLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FALSGait_Statics::NewProp_Walking__SetBit(void* Obj)
	{
		((FALSGait*)Obj)->Walking_ = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FALSGait_Statics::NewProp_Walking_ = { "Walking_", nullptr, (EPropertyFlags)0x0040000000030015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FALSGait), &Z_Construct_UScriptStruct_FALSGait_Statics::NewProp_Walking__SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSGait_Statics::NewProp_Walking__MetaData), Z_Construct_UScriptStruct_FALSGait_Statics::NewProp_Walking__MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSGait_Statics::NewProp_Running__MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ALS|Movement System" },
		{ "ModuleRelativePath", "Public/Library/ALSStructEnumLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FALSGait_Statics::NewProp_Running__SetBit(void* Obj)
	{
		((FALSGait*)Obj)->Running_ = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FALSGait_Statics::NewProp_Running_ = { "Running_", nullptr, (EPropertyFlags)0x0040000000030015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FALSGait), &Z_Construct_UScriptStruct_FALSGait_Statics::NewProp_Running__SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSGait_Statics::NewProp_Running__MetaData), Z_Construct_UScriptStruct_FALSGait_Statics::NewProp_Running__MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSGait_Statics::NewProp_Sprinting__MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ALS|Movement System" },
		{ "ModuleRelativePath", "Public/Library/ALSStructEnumLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FALSGait_Statics::NewProp_Sprinting__SetBit(void* Obj)
	{
		((FALSGait*)Obj)->Sprinting_ = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FALSGait_Statics::NewProp_Sprinting_ = { "Sprinting_", nullptr, (EPropertyFlags)0x0040000000030015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FALSGait), &Z_Construct_UScriptStruct_FALSGait_Statics::NewProp_Sprinting__SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSGait_Statics::NewProp_Sprinting__MetaData), Z_Construct_UScriptStruct_FALSGait_Statics::NewProp_Sprinting__MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FALSGait_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSGait_Statics::NewProp_Gait_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSGait_Statics::NewProp_Gait,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSGait_Statics::NewProp_Walking_,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSGait_Statics::NewProp_Running_,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSGait_Statics::NewProp_Sprinting_,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FALSGait_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALSV4_CPP,
		nullptr,
		&NewStructOps,
		"ALSGait",
		Z_Construct_UScriptStruct_FALSGait_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSGait_Statics::PropPointers),
		sizeof(FALSGait),
		alignof(FALSGait),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSGait_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FALSGait_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSGait_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FALSGait()
	{
		if (!Z_Registration_Info_UScriptStruct_ALSGait.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ALSGait.InnerSingleton, Z_Construct_UScriptStruct_FALSGait_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ALSGait.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ALSOverlayState;
class UScriptStruct* FALSOverlayState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ALSOverlayState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ALSOverlayState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FALSOverlayState, (UObject*)Z_Construct_UPackage__Script_ALSV4_CPP(), TEXT("ALSOverlayState"));
	}
	return Z_Registration_Info_UScriptStruct_ALSOverlayState.OuterSingleton;
}
template<> ALSV4_CPP_API UScriptStruct* StaticStruct<FALSOverlayState>()
{
	return FALSOverlayState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FALSOverlayState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_State;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Default__MetaData[];
#endif
		static void NewProp_Default__SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Default_;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Masculine__MetaData[];
#endif
		static void NewProp_Masculine__SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Masculine_;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Feminine__MetaData[];
#endif
		static void NewProp_Feminine__SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Feminine_;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Injured__MetaData[];
#endif
		static void NewProp_Injured__SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Injured_;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandsTied__MetaData[];
#endif
		static void NewProp_HandsTied__SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_HandsTied_;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rifle__MetaData[];
#endif
		static void NewProp_Rifle__SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Rifle_;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PistolOneHanded__MetaData[];
#endif
		static void NewProp_PistolOneHanded__SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_PistolOneHanded_;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PistolTwoHanded__MetaData[];
#endif
		static void NewProp_PistolTwoHanded__SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_PistolTwoHanded_;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bow__MetaData[];
#endif
		static void NewProp_Bow__SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Bow_;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Torch__MetaData[];
#endif
		static void NewProp_Torch__SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Torch_;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Binoculars__MetaData[];
#endif
		static void NewProp_Binoculars__SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Binoculars_;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Box__MetaData[];
#endif
		static void NewProp_Box__SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Box_;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Barrel__MetaData[];
#endif
		static void NewProp_Barrel__SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Barrel_;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSOverlayState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Library/ALSStructEnumLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FALSOverlayState>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_State_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ALS|Character States" },
		{ "ModuleRelativePath", "Public/Library/ALSStructEnumLibrary.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0040000000030015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSOverlayState, State), Z_Construct_UEnum_ALSV4_CPP_EALSOverlayState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_State_MetaData), Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_State_MetaData) }; // 3560812144
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_Default__MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ALS|Character States" },
		{ "ModuleRelativePath", "Public/Library/ALSStructEnumLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_Default__SetBit(void* Obj)
	{
		((FALSOverlayState*)Obj)->Default_ = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_Default_ = { "Default_", nullptr, (EPropertyFlags)0x0040000000030015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FALSOverlayState), &Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_Default__SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_Default__MetaData), Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_Default__MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_Masculine__MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ALS|Character States" },
		{ "ModuleRelativePath", "Public/Library/ALSStructEnumLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_Masculine__SetBit(void* Obj)
	{
		((FALSOverlayState*)Obj)->Masculine_ = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_Masculine_ = { "Masculine_", nullptr, (EPropertyFlags)0x0040000000030015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FALSOverlayState), &Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_Masculine__SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_Masculine__MetaData), Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_Masculine__MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_Feminine__MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ALS|Character States" },
		{ "ModuleRelativePath", "Public/Library/ALSStructEnumLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_Feminine__SetBit(void* Obj)
	{
		((FALSOverlayState*)Obj)->Feminine_ = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_Feminine_ = { "Feminine_", nullptr, (EPropertyFlags)0x0040000000030015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FALSOverlayState), &Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_Feminine__SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_Feminine__MetaData), Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_Feminine__MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_Injured__MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ALS|Character States" },
		{ "ModuleRelativePath", "Public/Library/ALSStructEnumLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_Injured__SetBit(void* Obj)
	{
		((FALSOverlayState*)Obj)->Injured_ = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_Injured_ = { "Injured_", nullptr, (EPropertyFlags)0x0040000000030015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FALSOverlayState), &Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_Injured__SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_Injured__MetaData), Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_Injured__MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_HandsTied__MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ALS|Character States" },
		{ "ModuleRelativePath", "Public/Library/ALSStructEnumLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_HandsTied__SetBit(void* Obj)
	{
		((FALSOverlayState*)Obj)->HandsTied_ = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_HandsTied_ = { "HandsTied_", nullptr, (EPropertyFlags)0x0040000000030015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FALSOverlayState), &Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_HandsTied__SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_HandsTied__MetaData), Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_HandsTied__MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_Rifle__MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ALS|Character States" },
		{ "ModuleRelativePath", "Public/Library/ALSStructEnumLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_Rifle__SetBit(void* Obj)
	{
		((FALSOverlayState*)Obj)->Rifle_ = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_Rifle_ = { "Rifle_", nullptr, (EPropertyFlags)0x0040000000030015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FALSOverlayState), &Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_Rifle__SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_Rifle__MetaData), Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_Rifle__MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_PistolOneHanded__MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ALS|Character States" },
		{ "ModuleRelativePath", "Public/Library/ALSStructEnumLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_PistolOneHanded__SetBit(void* Obj)
	{
		((FALSOverlayState*)Obj)->PistolOneHanded_ = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_PistolOneHanded_ = { "PistolOneHanded_", nullptr, (EPropertyFlags)0x0040000000030015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FALSOverlayState), &Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_PistolOneHanded__SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_PistolOneHanded__MetaData), Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_PistolOneHanded__MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_PistolTwoHanded__MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ALS|Character States" },
		{ "ModuleRelativePath", "Public/Library/ALSStructEnumLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_PistolTwoHanded__SetBit(void* Obj)
	{
		((FALSOverlayState*)Obj)->PistolTwoHanded_ = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_PistolTwoHanded_ = { "PistolTwoHanded_", nullptr, (EPropertyFlags)0x0040000000030015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FALSOverlayState), &Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_PistolTwoHanded__SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_PistolTwoHanded__MetaData), Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_PistolTwoHanded__MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_Bow__MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ALS|Character States" },
		{ "ModuleRelativePath", "Public/Library/ALSStructEnumLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_Bow__SetBit(void* Obj)
	{
		((FALSOverlayState*)Obj)->Bow_ = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_Bow_ = { "Bow_", nullptr, (EPropertyFlags)0x0040000000030015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FALSOverlayState), &Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_Bow__SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_Bow__MetaData), Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_Bow__MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_Torch__MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ALS|Character States" },
		{ "ModuleRelativePath", "Public/Library/ALSStructEnumLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_Torch__SetBit(void* Obj)
	{
		((FALSOverlayState*)Obj)->Torch_ = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_Torch_ = { "Torch_", nullptr, (EPropertyFlags)0x0040000000030015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FALSOverlayState), &Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_Torch__SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_Torch__MetaData), Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_Torch__MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_Binoculars__MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ALS|Character States" },
		{ "ModuleRelativePath", "Public/Library/ALSStructEnumLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_Binoculars__SetBit(void* Obj)
	{
		((FALSOverlayState*)Obj)->Binoculars_ = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_Binoculars_ = { "Binoculars_", nullptr, (EPropertyFlags)0x0040000000030015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FALSOverlayState), &Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_Binoculars__SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_Binoculars__MetaData), Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_Binoculars__MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_Box__MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ALS|Character States" },
		{ "ModuleRelativePath", "Public/Library/ALSStructEnumLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_Box__SetBit(void* Obj)
	{
		((FALSOverlayState*)Obj)->Box_ = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_Box_ = { "Box_", nullptr, (EPropertyFlags)0x0040000000030015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FALSOverlayState), &Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_Box__SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_Box__MetaData), Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_Box__MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_Barrel__MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ALS|Character States" },
		{ "ModuleRelativePath", "Public/Library/ALSStructEnumLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_Barrel__SetBit(void* Obj)
	{
		((FALSOverlayState*)Obj)->Barrel_ = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_Barrel_ = { "Barrel_", nullptr, (EPropertyFlags)0x0040000000030015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FALSOverlayState), &Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_Barrel__SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_Barrel__MetaData), Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_Barrel__MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FALSOverlayState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_State_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_State,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_Default_,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_Masculine_,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_Feminine_,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_Injured_,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_HandsTied_,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_Rifle_,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_PistolOneHanded_,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_PistolTwoHanded_,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_Bow_,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_Torch_,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_Binoculars_,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_Box_,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewProp_Barrel_,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FALSOverlayState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALSV4_CPP,
		nullptr,
		&NewStructOps,
		"ALSOverlayState",
		Z_Construct_UScriptStruct_FALSOverlayState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSOverlayState_Statics::PropPointers),
		sizeof(FALSOverlayState),
		alignof(FALSOverlayState),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSOverlayState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FALSOverlayState_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSOverlayState_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FALSOverlayState()
	{
		if (!Z_Registration_Info_UScriptStruct_ALSOverlayState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ALSOverlayState.InnerSingleton, Z_Construct_UScriptStruct_FALSOverlayState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ALSOverlayState.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ALSGroundedEntryState;
class UScriptStruct* FALSGroundedEntryState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ALSGroundedEntryState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ALSGroundedEntryState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FALSGroundedEntryState, (UObject*)Z_Construct_UPackage__Script_ALSV4_CPP(), TEXT("ALSGroundedEntryState"));
	}
	return Z_Registration_Info_UScriptStruct_ALSGroundedEntryState.OuterSingleton;
}
template<> ALSV4_CPP_API UScriptStruct* StaticStruct<FALSGroundedEntryState>()
{
	return FALSGroundedEntryState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FALSGroundedEntryState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_State;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_None__MetaData[];
#endif
		static void NewProp_None__SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_None_;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Roll__MetaData[];
#endif
		static void NewProp_Roll__SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Roll_;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSGroundedEntryState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Library/ALSStructEnumLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FALSGroundedEntryState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FALSGroundedEntryState>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FALSGroundedEntryState_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSGroundedEntryState_Statics::NewProp_State_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ALS|Breakfall System" },
		{ "ModuleRelativePath", "Public/Library/ALSStructEnumLibrary.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FALSGroundedEntryState_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0040000000030015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALSGroundedEntryState, State), Z_Construct_UEnum_ALSV4_CPP_EALSGroundedEntryState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSGroundedEntryState_Statics::NewProp_State_MetaData), Z_Construct_UScriptStruct_FALSGroundedEntryState_Statics::NewProp_State_MetaData) }; // 1781834569
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSGroundedEntryState_Statics::NewProp_None__MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ALS|Breakfall System" },
		{ "ModuleRelativePath", "Public/Library/ALSStructEnumLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FALSGroundedEntryState_Statics::NewProp_None__SetBit(void* Obj)
	{
		((FALSGroundedEntryState*)Obj)->None_ = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FALSGroundedEntryState_Statics::NewProp_None_ = { "None_", nullptr, (EPropertyFlags)0x0040000000030015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FALSGroundedEntryState), &Z_Construct_UScriptStruct_FALSGroundedEntryState_Statics::NewProp_None__SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSGroundedEntryState_Statics::NewProp_None__MetaData), Z_Construct_UScriptStruct_FALSGroundedEntryState_Statics::NewProp_None__MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALSGroundedEntryState_Statics::NewProp_Roll__MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ALS|Breakfall System" },
		{ "ModuleRelativePath", "Public/Library/ALSStructEnumLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FALSGroundedEntryState_Statics::NewProp_Roll__SetBit(void* Obj)
	{
		((FALSGroundedEntryState*)Obj)->Roll_ = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FALSGroundedEntryState_Statics::NewProp_Roll_ = { "Roll_", nullptr, (EPropertyFlags)0x0040000000030015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FALSGroundedEntryState), &Z_Construct_UScriptStruct_FALSGroundedEntryState_Statics::NewProp_Roll__SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSGroundedEntryState_Statics::NewProp_Roll__MetaData), Z_Construct_UScriptStruct_FALSGroundedEntryState_Statics::NewProp_Roll__MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FALSGroundedEntryState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSGroundedEntryState_Statics::NewProp_State_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSGroundedEntryState_Statics::NewProp_State,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSGroundedEntryState_Statics::NewProp_None_,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALSGroundedEntryState_Statics::NewProp_Roll_,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FALSGroundedEntryState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALSV4_CPP,
		nullptr,
		&NewStructOps,
		"ALSGroundedEntryState",
		Z_Construct_UScriptStruct_FALSGroundedEntryState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSGroundedEntryState_Statics::PropPointers),
		sizeof(FALSGroundedEntryState),
		alignof(FALSGroundedEntryState),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSGroundedEntryState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FALSGroundedEntryState_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALSGroundedEntryState_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FALSGroundedEntryState()
	{
		if (!Z_Registration_Info_UScriptStruct_ALSGroundedEntryState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ALSGroundedEntryState.InnerSingleton, Z_Construct_UScriptStruct_FALSGroundedEntryState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ALSGroundedEntryState.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_hitman_stealth_recreate_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Library_ALSStructEnumLibrary_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_hitman_stealth_recreate_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Library_ALSStructEnumLibrary_h_Statics::ScriptStructInfo[] = {
		{ FALSMovementState::StaticStruct, Z_Construct_UScriptStruct_FALSMovementState_Statics::NewStructOps, TEXT("ALSMovementState"), &Z_Registration_Info_UScriptStruct_ALSMovementState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FALSMovementState), 471157869U) },
		{ FALSStance::StaticStruct, Z_Construct_UScriptStruct_FALSStance_Statics::NewStructOps, TEXT("ALSStance"), &Z_Registration_Info_UScriptStruct_ALSStance, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FALSStance), 1643846171U) },
		{ FALSRotationMode::StaticStruct, Z_Construct_UScriptStruct_FALSRotationMode_Statics::NewStructOps, TEXT("ALSRotationMode"), &Z_Registration_Info_UScriptStruct_ALSRotationMode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FALSRotationMode), 626738666U) },
		{ FALSMovementDirection::StaticStruct, Z_Construct_UScriptStruct_FALSMovementDirection_Statics::NewStructOps, TEXT("ALSMovementDirection"), &Z_Registration_Info_UScriptStruct_ALSMovementDirection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FALSMovementDirection), 1977353456U) },
		{ FALSMovementAction::StaticStruct, Z_Construct_UScriptStruct_FALSMovementAction_Statics::NewStructOps, TEXT("ALSMovementAction"), &Z_Registration_Info_UScriptStruct_ALSMovementAction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FALSMovementAction), 1672789014U) },
		{ FALSGait::StaticStruct, Z_Construct_UScriptStruct_FALSGait_Statics::NewStructOps, TEXT("ALSGait"), &Z_Registration_Info_UScriptStruct_ALSGait, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FALSGait), 2798236200U) },
		{ FALSOverlayState::StaticStruct, Z_Construct_UScriptStruct_FALSOverlayState_Statics::NewStructOps, TEXT("ALSOverlayState"), &Z_Registration_Info_UScriptStruct_ALSOverlayState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FALSOverlayState), 408751610U) },
		{ FALSGroundedEntryState::StaticStruct, Z_Construct_UScriptStruct_FALSGroundedEntryState_Statics::NewStructOps, TEXT("ALSGroundedEntryState"), &Z_Registration_Info_UScriptStruct_ALSGroundedEntryState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FALSGroundedEntryState), 3596205702U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_hitman_stealth_recreate_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Library_ALSStructEnumLibrary_h_57405635(TEXT("/Script/ALSV4_CPP"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_hitman_stealth_recreate_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Library_ALSStructEnumLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_hitman_stealth_recreate_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Library_ALSStructEnumLibrary_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
