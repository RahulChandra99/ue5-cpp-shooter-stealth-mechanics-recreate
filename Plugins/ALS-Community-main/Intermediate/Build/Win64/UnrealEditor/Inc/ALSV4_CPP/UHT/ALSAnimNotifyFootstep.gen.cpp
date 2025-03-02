// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALSV4_CPP/Public/Character/Animation/Notify/ALSAnimNotifyFootstep.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeALSAnimNotifyFootstep() {}
// Cross Module References
	ALSV4_CPP_API UClass* Z_Construct_UClass_UALSAnimNotifyFootstep();
	ALSV4_CPP_API UClass* Z_Construct_UClass_UALSAnimNotifyFootstep_NoRegister();
	ALSV4_CPP_API UEnum* Z_Construct_UEnum_ALSV4_CPP_EALSFootstepType();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDrawDebugTrace();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETraceTypeQuery();
	UPackage* Z_Construct_UPackage__Script_ALSV4_CPP();
// End Cross Module References
	void UALSAnimNotifyFootstep::StaticRegisterNativesUALSAnimNotifyFootstep()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UALSAnimNotifyFootstep);
	UClass* Z_Construct_UClass_UALSAnimNotifyFootstep_NoRegister()
	{
		return UALSAnimNotifyFootstep::StaticClass();
	}
	struct Z_Construct_UClass_UALSAnimNotifyFootstep_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitDataTable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_HitDataTable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootSocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_FootSocketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceChannel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrawDebugType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DrawDebugType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSpawnDecal_MetaData[];
#endif
		static void NewProp_bSpawnDecal_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSpawnDecal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMirrorDecalX_MetaData[];
#endif
		static void NewProp_bMirrorDecalX_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMirrorDecalX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMirrorDecalY_MetaData[];
#endif
		static void NewProp_bMirrorDecalY_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMirrorDecalY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMirrorDecalZ_MetaData[];
#endif
		static void NewProp_bMirrorDecalZ_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMirrorDecalZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSpawnSound_MetaData[];
#endif
		static void NewProp_bSpawnSound_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSpawnSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SoundParameterName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FootstepType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootstepType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FootstepType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideMaskCurve_MetaData[];
#endif
		static void NewProp_bOverrideMaskCurve_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideMaskCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumeMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PitchMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSpawnNiagara_MetaData[];
#endif
		static void NewProp_bSpawnNiagara_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSpawnNiagara;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_ALSV4_CPP,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Character footstep anim notify\n */" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "Character/Animation/Notify/ALSAnimNotifyFootstep.h" },
		{ "ModuleRelativePath", "Public/Character/Animation/Notify/ALSAnimNotifyFootstep.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Character footstep anim notify" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_HitDataTable_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Character/Animation/Notify/ALSAnimNotifyFootstep.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_HitDataTable = { "HitDataTable", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSAnimNotifyFootstep, HitDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_HitDataTable_MetaData), Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_HitDataTable_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_FootSocketName_MetaData[] = {
		{ "Category", "Socket" },
		{ "ModuleRelativePath", "Public/Character/Animation/Notify/ALSAnimNotifyFootstep.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_FootSocketName = { "FootSocketName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSAnimNotifyFootstep, FootSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_FootSocketName_MetaData), Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_FootSocketName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_TraceChannel_MetaData[] = {
		{ "Category", "Trace" },
		{ "ModuleRelativePath", "Public/Character/Animation/Notify/ALSAnimNotifyFootstep.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSAnimNotifyFootstep, TraceChannel), Z_Construct_UEnum_Engine_ETraceTypeQuery, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_TraceChannel_MetaData), Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_TraceChannel_MetaData) }; // 2725057287
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_DrawDebugType_MetaData[] = {
		{ "Category", "Trace" },
		{ "ModuleRelativePath", "Public/Character/Animation/Notify/ALSAnimNotifyFootstep.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_DrawDebugType = { "DrawDebugType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSAnimNotifyFootstep, DrawDebugType), Z_Construct_UEnum_Engine_EDrawDebugTrace, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_DrawDebugType_MetaData), Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_DrawDebugType_MetaData) }; // 739760662
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_TraceLength_MetaData[] = {
		{ "Category", "Trace" },
		{ "ModuleRelativePath", "Public/Character/Animation/Notify/ALSAnimNotifyFootstep.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_TraceLength = { "TraceLength", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSAnimNotifyFootstep, TraceLength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_TraceLength_MetaData), Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_TraceLength_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_bSpawnDecal_MetaData[] = {
		{ "Category", "Decal" },
		{ "ModuleRelativePath", "Public/Character/Animation/Notify/ALSAnimNotifyFootstep.h" },
	};
#endif
	void Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_bSpawnDecal_SetBit(void* Obj)
	{
		((UALSAnimNotifyFootstep*)Obj)->bSpawnDecal = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_bSpawnDecal = { "bSpawnDecal", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UALSAnimNotifyFootstep), &Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_bSpawnDecal_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_bSpawnDecal_MetaData), Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_bSpawnDecal_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_bMirrorDecalX_MetaData[] = {
		{ "Category", "Decal" },
		{ "ModuleRelativePath", "Public/Character/Animation/Notify/ALSAnimNotifyFootstep.h" },
	};
#endif
	void Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_bMirrorDecalX_SetBit(void* Obj)
	{
		((UALSAnimNotifyFootstep*)Obj)->bMirrorDecalX = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_bMirrorDecalX = { "bMirrorDecalX", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UALSAnimNotifyFootstep), &Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_bMirrorDecalX_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_bMirrorDecalX_MetaData), Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_bMirrorDecalX_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_bMirrorDecalY_MetaData[] = {
		{ "Category", "Decal" },
		{ "ModuleRelativePath", "Public/Character/Animation/Notify/ALSAnimNotifyFootstep.h" },
	};
#endif
	void Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_bMirrorDecalY_SetBit(void* Obj)
	{
		((UALSAnimNotifyFootstep*)Obj)->bMirrorDecalY = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_bMirrorDecalY = { "bMirrorDecalY", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UALSAnimNotifyFootstep), &Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_bMirrorDecalY_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_bMirrorDecalY_MetaData), Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_bMirrorDecalY_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_bMirrorDecalZ_MetaData[] = {
		{ "Category", "Decal" },
		{ "ModuleRelativePath", "Public/Character/Animation/Notify/ALSAnimNotifyFootstep.h" },
	};
#endif
	void Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_bMirrorDecalZ_SetBit(void* Obj)
	{
		((UALSAnimNotifyFootstep*)Obj)->bMirrorDecalZ = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_bMirrorDecalZ = { "bMirrorDecalZ", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UALSAnimNotifyFootstep), &Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_bMirrorDecalZ_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_bMirrorDecalZ_MetaData), Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_bMirrorDecalZ_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_bSpawnSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/Character/Animation/Notify/ALSAnimNotifyFootstep.h" },
	};
#endif
	void Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_bSpawnSound_SetBit(void* Obj)
	{
		((UALSAnimNotifyFootstep*)Obj)->bSpawnSound = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_bSpawnSound = { "bSpawnSound", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UALSAnimNotifyFootstep), &Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_bSpawnSound_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_bSpawnSound_MetaData), Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_bSpawnSound_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_SoundParameterName_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/Character/Animation/Notify/ALSAnimNotifyFootstep.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_SoundParameterName = { "SoundParameterName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSAnimNotifyFootstep, SoundParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_SoundParameterName_MetaData), Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_SoundParameterName_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_FootstepType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_FootstepType_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/Character/Animation/Notify/ALSAnimNotifyFootstep.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_FootstepType = { "FootstepType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSAnimNotifyFootstep, FootstepType), Z_Construct_UEnum_ALSV4_CPP_EALSFootstepType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_FootstepType_MetaData), Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_FootstepType_MetaData) }; // 1771331670
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_bOverrideMaskCurve_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/Character/Animation/Notify/ALSAnimNotifyFootstep.h" },
	};
#endif
	void Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_bOverrideMaskCurve_SetBit(void* Obj)
	{
		((UALSAnimNotifyFootstep*)Obj)->bOverrideMaskCurve = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_bOverrideMaskCurve = { "bOverrideMaskCurve", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UALSAnimNotifyFootstep), &Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_bOverrideMaskCurve_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_bOverrideMaskCurve_MetaData), Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_bOverrideMaskCurve_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_VolumeMultiplier_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/Character/Animation/Notify/ALSAnimNotifyFootstep.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_VolumeMultiplier = { "VolumeMultiplier", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSAnimNotifyFootstep, VolumeMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_VolumeMultiplier_MetaData), Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_VolumeMultiplier_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_PitchMultiplier_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/Character/Animation/Notify/ALSAnimNotifyFootstep.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_PitchMultiplier = { "PitchMultiplier", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSAnimNotifyFootstep, PitchMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_PitchMultiplier_MetaData), Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_PitchMultiplier_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_bSpawnNiagara_MetaData[] = {
		{ "Category", "Niagara" },
		{ "ModuleRelativePath", "Public/Character/Animation/Notify/ALSAnimNotifyFootstep.h" },
	};
#endif
	void Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_bSpawnNiagara_SetBit(void* Obj)
	{
		((UALSAnimNotifyFootstep*)Obj)->bSpawnNiagara = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_bSpawnNiagara = { "bSpawnNiagara", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UALSAnimNotifyFootstep), &Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_bSpawnNiagara_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_bSpawnNiagara_MetaData), Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_bSpawnNiagara_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_HitDataTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_FootSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_TraceChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_DrawDebugType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_TraceLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_bSpawnDecal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_bMirrorDecalX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_bMirrorDecalY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_bMirrorDecalZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_bSpawnSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_SoundParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_FootstepType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_FootstepType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_bOverrideMaskCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_VolumeMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_PitchMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::NewProp_bSpawnNiagara,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UALSAnimNotifyFootstep>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::ClassParams = {
		&UALSAnimNotifyFootstep::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::PropPointers),
		0,
		0x001120A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::Class_MetaDataParams), Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UALSAnimNotifyFootstep()
	{
		if (!Z_Registration_Info_UClass_UALSAnimNotifyFootstep.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UALSAnimNotifyFootstep.OuterSingleton, Z_Construct_UClass_UALSAnimNotifyFootstep_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UALSAnimNotifyFootstep.OuterSingleton;
	}
	template<> ALSV4_CPP_API UClass* StaticClass<UALSAnimNotifyFootstep>()
	{
		return UALSAnimNotifyFootstep::StaticClass();
	}
	UALSAnimNotifyFootstep::UALSAnimNotifyFootstep(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UALSAnimNotifyFootstep);
	UALSAnimNotifyFootstep::~UALSAnimNotifyFootstep() {}
	struct Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Character_Animation_Notify_ALSAnimNotifyFootstep_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Character_Animation_Notify_ALSAnimNotifyFootstep_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UALSAnimNotifyFootstep, UALSAnimNotifyFootstep::StaticClass, TEXT("UALSAnimNotifyFootstep"), &Z_Registration_Info_UClass_UALSAnimNotifyFootstep, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UALSAnimNotifyFootstep), 968117257U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Character_Animation_Notify_ALSAnimNotifyFootstep_h_2230753446(TEXT("/Script/ALSV4_CPP"),
		Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Character_Animation_Notify_ALSAnimNotifyFootstep_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Character_Animation_Notify_ALSAnimNotifyFootstep_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
