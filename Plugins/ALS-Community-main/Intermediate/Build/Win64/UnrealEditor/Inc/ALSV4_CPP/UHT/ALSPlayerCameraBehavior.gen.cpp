// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALSV4_CPP/Public/Character/Animation/ALSPlayerCameraBehavior.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeALSPlayerCameraBehavior() {}
// Cross Module References
	ALSV4_CPP_API UClass* Z_Construct_UClass_UALSPlayerCameraBehavior();
	ALSV4_CPP_API UClass* Z_Construct_UClass_UALSPlayerCameraBehavior_NoRegister();
	ALSV4_CPP_API UEnum* Z_Construct_UEnum_ALSV4_CPP_EALSGait();
	ALSV4_CPP_API UEnum* Z_Construct_UEnum_ALSV4_CPP_EALSMovementAction();
	ALSV4_CPP_API UEnum* Z_Construct_UEnum_ALSV4_CPP_EALSMovementState();
	ALSV4_CPP_API UEnum* Z_Construct_UEnum_ALSV4_CPP_EALSStance();
	ALSV4_CPP_API UEnum* Z_Construct_UEnum_ALSV4_CPP_EALSViewMode();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_ALSV4_CPP();
// End Cross Module References
	void UALSPlayerCameraBehavior::StaticRegisterNativesUALSPlayerCameraBehavior()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UALSPlayerCameraBehavior);
	UClass* Z_Construct_UClass_UALSPlayerCameraBehavior_NoRegister()
	{
		return UALSPlayerCameraBehavior::StaticClass();
	}
	struct Z_Construct_UClass_UALSPlayerCameraBehavior_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MovementState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MovementState;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MovementAction_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementAction_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MovementAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLookingDirection_MetaData[];
#endif
		static void NewProp_bLookingDirection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLookingDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVelocityDirection_MetaData[];
#endif
		static void NewProp_bVelocityDirection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVelocityDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAiming_MetaData[];
#endif
		static void NewProp_bAiming_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAiming;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRightShoulder_MetaData[];
#endif
		static void NewProp_bRightShoulder_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRightShoulder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDebugView_MetaData[];
#endif
		static void NewProp_bDebugView_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugView;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UALSPlayerCameraBehavior_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_ALSV4_CPP,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UALSPlayerCameraBehavior_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSPlayerCameraBehavior_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Main class for player camera movement behavior\n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Character/Animation/ALSPlayerCameraBehavior.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Character/Animation/ALSPlayerCameraBehavior.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Main class for player camera movement behavior" },
#endif
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UALSPlayerCameraBehavior_Statics::NewProp_MovementState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSPlayerCameraBehavior_Statics::NewProp_MovementState_MetaData[] = {
		{ "Category", "Read Only Data|Character Information" },
		{ "ModuleRelativePath", "Public/Character/Animation/ALSPlayerCameraBehavior.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UALSPlayerCameraBehavior_Statics::NewProp_MovementState = { "MovementState", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSPlayerCameraBehavior, MovementState), Z_Construct_UEnum_ALSV4_CPP_EALSMovementState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSPlayerCameraBehavior_Statics::NewProp_MovementState_MetaData), Z_Construct_UClass_UALSPlayerCameraBehavior_Statics::NewProp_MovementState_MetaData) }; // 2855841202
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UALSPlayerCameraBehavior_Statics::NewProp_MovementAction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSPlayerCameraBehavior_Statics::NewProp_MovementAction_MetaData[] = {
		{ "Category", "Read Only Data|Character Information" },
		{ "ModuleRelativePath", "Public/Character/Animation/ALSPlayerCameraBehavior.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UALSPlayerCameraBehavior_Statics::NewProp_MovementAction = { "MovementAction", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSPlayerCameraBehavior, MovementAction), Z_Construct_UEnum_ALSV4_CPP_EALSMovementAction, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSPlayerCameraBehavior_Statics::NewProp_MovementAction_MetaData), Z_Construct_UClass_UALSPlayerCameraBehavior_Statics::NewProp_MovementAction_MetaData) }; // 1229765569
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSPlayerCameraBehavior_Statics::NewProp_bLookingDirection_MetaData[] = {
		{ "Category", "Read Only Data|Character Information" },
		{ "ModuleRelativePath", "Public/Character/Animation/ALSPlayerCameraBehavior.h" },
	};
#endif
	void Z_Construct_UClass_UALSPlayerCameraBehavior_Statics::NewProp_bLookingDirection_SetBit(void* Obj)
	{
		((UALSPlayerCameraBehavior*)Obj)->bLookingDirection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UALSPlayerCameraBehavior_Statics::NewProp_bLookingDirection = { "bLookingDirection", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UALSPlayerCameraBehavior), &Z_Construct_UClass_UALSPlayerCameraBehavior_Statics::NewProp_bLookingDirection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSPlayerCameraBehavior_Statics::NewProp_bLookingDirection_MetaData), Z_Construct_UClass_UALSPlayerCameraBehavior_Statics::NewProp_bLookingDirection_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSPlayerCameraBehavior_Statics::NewProp_bVelocityDirection_MetaData[] = {
		{ "Category", "Read Only Data|Character Information" },
		{ "ModuleRelativePath", "Public/Character/Animation/ALSPlayerCameraBehavior.h" },
	};
#endif
	void Z_Construct_UClass_UALSPlayerCameraBehavior_Statics::NewProp_bVelocityDirection_SetBit(void* Obj)
	{
		((UALSPlayerCameraBehavior*)Obj)->bVelocityDirection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UALSPlayerCameraBehavior_Statics::NewProp_bVelocityDirection = { "bVelocityDirection", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UALSPlayerCameraBehavior), &Z_Construct_UClass_UALSPlayerCameraBehavior_Statics::NewProp_bVelocityDirection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSPlayerCameraBehavior_Statics::NewProp_bVelocityDirection_MetaData), Z_Construct_UClass_UALSPlayerCameraBehavior_Statics::NewProp_bVelocityDirection_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSPlayerCameraBehavior_Statics::NewProp_bAiming_MetaData[] = {
		{ "Category", "Read Only Data|Character Information" },
		{ "ModuleRelativePath", "Public/Character/Animation/ALSPlayerCameraBehavior.h" },
	};
#endif
	void Z_Construct_UClass_UALSPlayerCameraBehavior_Statics::NewProp_bAiming_SetBit(void* Obj)
	{
		((UALSPlayerCameraBehavior*)Obj)->bAiming = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UALSPlayerCameraBehavior_Statics::NewProp_bAiming = { "bAiming", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UALSPlayerCameraBehavior), &Z_Construct_UClass_UALSPlayerCameraBehavior_Statics::NewProp_bAiming_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSPlayerCameraBehavior_Statics::NewProp_bAiming_MetaData), Z_Construct_UClass_UALSPlayerCameraBehavior_Statics::NewProp_bAiming_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UALSPlayerCameraBehavior_Statics::NewProp_Gait_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSPlayerCameraBehavior_Statics::NewProp_Gait_MetaData[] = {
		{ "Category", "Read Only Data|Character Information" },
		{ "ModuleRelativePath", "Public/Character/Animation/ALSPlayerCameraBehavior.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UALSPlayerCameraBehavior_Statics::NewProp_Gait = { "Gait", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSPlayerCameraBehavior, Gait), Z_Construct_UEnum_ALSV4_CPP_EALSGait, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSPlayerCameraBehavior_Statics::NewProp_Gait_MetaData), Z_Construct_UClass_UALSPlayerCameraBehavior_Statics::NewProp_Gait_MetaData) }; // 4204508735
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UALSPlayerCameraBehavior_Statics::NewProp_Stance_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSPlayerCameraBehavior_Statics::NewProp_Stance_MetaData[] = {
		{ "Category", "Read Only Data|Character Information" },
		{ "ModuleRelativePath", "Public/Character/Animation/ALSPlayerCameraBehavior.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UALSPlayerCameraBehavior_Statics::NewProp_Stance = { "Stance", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSPlayerCameraBehavior, Stance), Z_Construct_UEnum_ALSV4_CPP_EALSStance, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSPlayerCameraBehavior_Statics::NewProp_Stance_MetaData), Z_Construct_UClass_UALSPlayerCameraBehavior_Statics::NewProp_Stance_MetaData) }; // 98898313
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UALSPlayerCameraBehavior_Statics::NewProp_ViewMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSPlayerCameraBehavior_Statics::NewProp_ViewMode_MetaData[] = {
		{ "Category", "Read Only Data|Character Information" },
		{ "ModuleRelativePath", "Public/Character/Animation/ALSPlayerCameraBehavior.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UALSPlayerCameraBehavior_Statics::NewProp_ViewMode = { "ViewMode", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSPlayerCameraBehavior, ViewMode), Z_Construct_UEnum_ALSV4_CPP_EALSViewMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSPlayerCameraBehavior_Statics::NewProp_ViewMode_MetaData), Z_Construct_UClass_UALSPlayerCameraBehavior_Statics::NewProp_ViewMode_MetaData) }; // 98731475
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSPlayerCameraBehavior_Statics::NewProp_bRightShoulder_MetaData[] = {
		{ "Category", "Read Only Data|Character Information" },
		{ "ModuleRelativePath", "Public/Character/Animation/ALSPlayerCameraBehavior.h" },
	};
#endif
	void Z_Construct_UClass_UALSPlayerCameraBehavior_Statics::NewProp_bRightShoulder_SetBit(void* Obj)
	{
		((UALSPlayerCameraBehavior*)Obj)->bRightShoulder = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UALSPlayerCameraBehavior_Statics::NewProp_bRightShoulder = { "bRightShoulder", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UALSPlayerCameraBehavior), &Z_Construct_UClass_UALSPlayerCameraBehavior_Statics::NewProp_bRightShoulder_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSPlayerCameraBehavior_Statics::NewProp_bRightShoulder_MetaData), Z_Construct_UClass_UALSPlayerCameraBehavior_Statics::NewProp_bRightShoulder_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSPlayerCameraBehavior_Statics::NewProp_bDebugView_MetaData[] = {
		{ "Category", "Read Only Data|Character Information" },
		{ "ModuleRelativePath", "Public/Character/Animation/ALSPlayerCameraBehavior.h" },
	};
#endif
	void Z_Construct_UClass_UALSPlayerCameraBehavior_Statics::NewProp_bDebugView_SetBit(void* Obj)
	{
		((UALSPlayerCameraBehavior*)Obj)->bDebugView = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UALSPlayerCameraBehavior_Statics::NewProp_bDebugView = { "bDebugView", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UALSPlayerCameraBehavior), &Z_Construct_UClass_UALSPlayerCameraBehavior_Statics::NewProp_bDebugView_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSPlayerCameraBehavior_Statics::NewProp_bDebugView_MetaData), Z_Construct_UClass_UALSPlayerCameraBehavior_Statics::NewProp_bDebugView_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UALSPlayerCameraBehavior_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSPlayerCameraBehavior_Statics::NewProp_MovementState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSPlayerCameraBehavior_Statics::NewProp_MovementState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSPlayerCameraBehavior_Statics::NewProp_MovementAction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSPlayerCameraBehavior_Statics::NewProp_MovementAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSPlayerCameraBehavior_Statics::NewProp_bLookingDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSPlayerCameraBehavior_Statics::NewProp_bVelocityDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSPlayerCameraBehavior_Statics::NewProp_bAiming,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSPlayerCameraBehavior_Statics::NewProp_Gait_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSPlayerCameraBehavior_Statics::NewProp_Gait,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSPlayerCameraBehavior_Statics::NewProp_Stance_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSPlayerCameraBehavior_Statics::NewProp_Stance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSPlayerCameraBehavior_Statics::NewProp_ViewMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSPlayerCameraBehavior_Statics::NewProp_ViewMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSPlayerCameraBehavior_Statics::NewProp_bRightShoulder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSPlayerCameraBehavior_Statics::NewProp_bDebugView,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UALSPlayerCameraBehavior_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UALSPlayerCameraBehavior>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UALSPlayerCameraBehavior_Statics::ClassParams = {
		&UALSPlayerCameraBehavior::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UALSPlayerCameraBehavior_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UALSPlayerCameraBehavior_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSPlayerCameraBehavior_Statics::Class_MetaDataParams), Z_Construct_UClass_UALSPlayerCameraBehavior_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UALSPlayerCameraBehavior_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UALSPlayerCameraBehavior()
	{
		if (!Z_Registration_Info_UClass_UALSPlayerCameraBehavior.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UALSPlayerCameraBehavior.OuterSingleton, Z_Construct_UClass_UALSPlayerCameraBehavior_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UALSPlayerCameraBehavior.OuterSingleton;
	}
	template<> ALSV4_CPP_API UClass* StaticClass<UALSPlayerCameraBehavior>()
	{
		return UALSPlayerCameraBehavior::StaticClass();
	}
	UALSPlayerCameraBehavior::UALSPlayerCameraBehavior(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UALSPlayerCameraBehavior);
	UALSPlayerCameraBehavior::~UALSPlayerCameraBehavior() {}
	struct Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_hitman_stealth_recreate_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Character_Animation_ALSPlayerCameraBehavior_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_hitman_stealth_recreate_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Character_Animation_ALSPlayerCameraBehavior_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UALSPlayerCameraBehavior, UALSPlayerCameraBehavior::StaticClass, TEXT("UALSPlayerCameraBehavior"), &Z_Registration_Info_UClass_UALSPlayerCameraBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UALSPlayerCameraBehavior), 187114125U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_hitman_stealth_recreate_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Character_Animation_ALSPlayerCameraBehavior_h_1470210057(TEXT("/Script/ALSV4_CPP"),
		Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_hitman_stealth_recreate_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Character_Animation_ALSPlayerCameraBehavior_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_hitman_stealth_recreate_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Character_Animation_ALSPlayerCameraBehavior_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
