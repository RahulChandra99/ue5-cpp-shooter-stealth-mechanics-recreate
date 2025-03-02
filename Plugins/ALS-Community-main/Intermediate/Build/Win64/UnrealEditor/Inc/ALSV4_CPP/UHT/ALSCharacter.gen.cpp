// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALSV4_CPP/Public/Character/ALSCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeALSCharacter() {}
// Cross Module References
	ALSV4_CPP_API UClass* Z_Construct_UClass_AALSBaseCharacter();
	ALSV4_CPP_API UClass* Z_Construct_UClass_AALSCharacter();
	ALSV4_CPP_API UClass* Z_Construct_UClass_AALSCharacter_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ALSV4_CPP();
// End Cross Module References
	DEFINE_FUNCTION(AALSCharacter::execAttachToHand)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_NewStaticMesh);
		P_GET_OBJECT(USkeletalMesh,Z_Param_NewSkeletalMesh);
		P_GET_OBJECT(UClass,Z_Param_NewAnimClass);
		P_GET_UBOOL(Z_Param_bLeftHand);
		P_GET_STRUCT(FVector,Z_Param_Offset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AttachToHand(Z_Param_NewStaticMesh,Z_Param_NewSkeletalMesh,Z_Param_NewAnimClass,Z_Param_bLeftHand,Z_Param_Offset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALSCharacter::execClearHeldObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearHeldObject();
		P_NATIVE_END;
	}
	static FName NAME_AALSCharacter_UpdateHeldObject = FName(TEXT("UpdateHeldObject"));
	void AALSCharacter::UpdateHeldObject()
	{
		ProcessEvent(FindFunctionChecked(NAME_AALSCharacter_UpdateHeldObject),NULL);
	}
	static FName NAME_AALSCharacter_UpdateHeldObjectAnimations = FName(TEXT("UpdateHeldObjectAnimations"));
	void AALSCharacter::UpdateHeldObjectAnimations()
	{
		ProcessEvent(FindFunctionChecked(NAME_AALSCharacter_UpdateHeldObjectAnimations),NULL);
	}
	void AALSCharacter::StaticRegisterNativesAALSCharacter()
	{
		UClass* Class = AALSCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AttachToHand", &AALSCharacter::execAttachToHand },
			{ "ClearHeldObject", &AALSCharacter::execClearHeldObject },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AALSCharacter_AttachToHand_Statics
	{
		struct ALSCharacter_eventAttachToHand_Parms
		{
			UStaticMesh* NewStaticMesh;
			USkeletalMesh* NewSkeletalMesh;
			UClass* NewAnimClass;
			bool bLeftHand;
			FVector Offset;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewStaticMesh;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewSkeletalMesh;
		static const UECodeGen_Private::FClassPropertyParams NewProp_NewAnimClass;
		static void NewProp_bLeftHand_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLeftHand;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AALSCharacter_AttachToHand_Statics::NewProp_NewStaticMesh = { "NewStaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSCharacter_eventAttachToHand_Parms, NewStaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AALSCharacter_AttachToHand_Statics::NewProp_NewSkeletalMesh = { "NewSkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSCharacter_eventAttachToHand_Parms, NewSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AALSCharacter_AttachToHand_Statics::NewProp_NewAnimClass = { "NewAnimClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSCharacter_eventAttachToHand_Parms, NewAnimClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AALSCharacter_AttachToHand_Statics::NewProp_bLeftHand_SetBit(void* Obj)
	{
		((ALSCharacter_eventAttachToHand_Parms*)Obj)->bLeftHand = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AALSCharacter_AttachToHand_Statics::NewProp_bLeftHand = { "bLeftHand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALSCharacter_eventAttachToHand_Parms), &Z_Construct_UFunction_AALSCharacter_AttachToHand_Statics::NewProp_bLeftHand_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AALSCharacter_AttachToHand_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSCharacter_eventAttachToHand_Parms, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALSCharacter_AttachToHand_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSCharacter_AttachToHand_Statics::NewProp_NewStaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSCharacter_AttachToHand_Statics::NewProp_NewSkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSCharacter_AttachToHand_Statics::NewProp_NewAnimClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSCharacter_AttachToHand_Statics::NewProp_bLeftHand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALSCharacter_AttachToHand_Statics::NewProp_Offset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSCharacter_AttachToHand_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|HeldObject" },
		{ "ModuleRelativePath", "Public/Character/ALSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSCharacter_AttachToHand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSCharacter, nullptr, "AttachToHand", nullptr, nullptr, Z_Construct_UFunction_AALSCharacter_AttachToHand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALSCharacter_AttachToHand_Statics::PropPointers), sizeof(Z_Construct_UFunction_AALSCharacter_AttachToHand_Statics::ALSCharacter_eventAttachToHand_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSCharacter_AttachToHand_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSCharacter_AttachToHand_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSCharacter_AttachToHand_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AALSCharacter_AttachToHand_Statics::ALSCharacter_eventAttachToHand_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AALSCharacter_AttachToHand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSCharacter_AttachToHand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSCharacter_ClearHeldObject_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSCharacter_ClearHeldObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|HeldObject" },
		{ "ModuleRelativePath", "Public/Character/ALSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSCharacter_ClearHeldObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSCharacter, nullptr, "ClearHeldObject", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSCharacter_ClearHeldObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSCharacter_ClearHeldObject_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AALSCharacter_ClearHeldObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSCharacter_ClearHeldObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSCharacter_UpdateHeldObject_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSCharacter_UpdateHeldObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|HeldObject" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Implemented on BP to update held objects */" },
#endif
		{ "ModuleRelativePath", "Public/Character/ALSCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implemented on BP to update held objects" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSCharacter_UpdateHeldObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSCharacter, nullptr, "UpdateHeldObject", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSCharacter_UpdateHeldObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSCharacter_UpdateHeldObject_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AALSCharacter_UpdateHeldObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSCharacter_UpdateHeldObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALSCharacter_UpdateHeldObjectAnimations_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALSCharacter_UpdateHeldObjectAnimations_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|HeldObject" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Implement on BP to update animation states of held objects */" },
#endif
		{ "ModuleRelativePath", "Public/Character/ALSCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implement on BP to update animation states of held objects" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALSCharacter_UpdateHeldObjectAnimations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALSCharacter, nullptr, "UpdateHeldObjectAnimations", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALSCharacter_UpdateHeldObjectAnimations_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALSCharacter_UpdateHeldObjectAnimations_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AALSCharacter_UpdateHeldObjectAnimations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALSCharacter_UpdateHeldObjectAnimations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AALSCharacter);
	UClass* Z_Construct_UClass_AALSCharacter_NoRegister()
	{
		return AALSCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AALSCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeldObjectRoot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_HeldObjectRoot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StaticMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AALSCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AALSBaseCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ALSV4_CPP,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AALSCharacter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AALSCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AALSCharacter_AttachToHand, "AttachToHand" }, // 3116760960
		{ &Z_Construct_UFunction_AALSCharacter_ClearHeldObject, "ClearHeldObject" }, // 1391174266
		{ &Z_Construct_UFunction_AALSCharacter_UpdateHeldObject, "UpdateHeldObject" }, // 446355582
		{ &Z_Construct_UFunction_AALSCharacter_UpdateHeldObjectAnimations, "UpdateHeldObjectAnimations" }, // 1638055657
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AALSCharacter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALSCharacter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Specialized character class, with additional features like held object etc.\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/ALSCharacter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Character/ALSCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Specialized character class, with additional features like held object etc." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALSCharacter_Statics::NewProp_HeldObjectRoot_MetaData[] = {
		{ "Category", "ALS|Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/ALSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AALSCharacter_Statics::NewProp_HeldObjectRoot = { "HeldObjectRoot", nullptr, (EPropertyFlags)0x001400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AALSCharacter, HeldObjectRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AALSCharacter_Statics::NewProp_HeldObjectRoot_MetaData), Z_Construct_UClass_AALSCharacter_Statics::NewProp_HeldObjectRoot_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALSCharacter_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "Category", "ALS|Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/ALSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AALSCharacter_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x001400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AALSCharacter, SkeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AALSCharacter_Statics::NewProp_SkeletalMesh_MetaData), Z_Construct_UClass_AALSCharacter_Statics::NewProp_SkeletalMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALSCharacter_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Category", "ALS|Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/ALSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AALSCharacter_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x001400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AALSCharacter, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AALSCharacter_Statics::NewProp_StaticMesh_MetaData), Z_Construct_UClass_AALSCharacter_Statics::NewProp_StaticMesh_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AALSCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALSCharacter_Statics::NewProp_HeldObjectRoot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALSCharacter_Statics::NewProp_SkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALSCharacter_Statics::NewProp_StaticMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AALSCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AALSCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AALSCharacter_Statics::ClassParams = {
		&AALSCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AALSCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AALSCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AALSCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AALSCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AALSCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AALSCharacter()
	{
		if (!Z_Registration_Info_UClass_AALSCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AALSCharacter.OuterSingleton, Z_Construct_UClass_AALSCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AALSCharacter.OuterSingleton;
	}
	template<> ALSV4_CPP_API UClass* StaticClass<AALSCharacter>()
	{
		return AALSCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AALSCharacter);
	AALSCharacter::~AALSCharacter() {}
	struct Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_hitman_stealth_recreate_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Character_ALSCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_hitman_stealth_recreate_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Character_ALSCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AALSCharacter, AALSCharacter::StaticClass, TEXT("AALSCharacter"), &Z_Registration_Info_UClass_AALSCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AALSCharacter), 1204731705U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_hitman_stealth_recreate_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Character_ALSCharacter_h_1460473117(TEXT("/Script/ALSV4_CPP"),
		Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_hitman_stealth_recreate_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Character_ALSCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_hitman_stealth_recreate_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Character_ALSCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
