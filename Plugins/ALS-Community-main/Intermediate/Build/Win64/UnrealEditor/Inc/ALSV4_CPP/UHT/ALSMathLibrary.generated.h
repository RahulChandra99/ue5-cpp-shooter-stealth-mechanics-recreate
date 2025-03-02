// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Library/ALSMathLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCapsuleComponent;
enum class EALSMovementDirection : uint8;
struct FALSComponentAndTransform;
#ifdef ALSV4_CPP_ALSMathLibrary_generated_h
#error "ALSMathLibrary.generated.h already included, missing '#pragma once' in ALSMathLibrary.h"
#endif
#define ALSV4_CPP_ALSMathLibrary_generated_h

#define FID_GameDevelopment_UnrealEngine_Projects_hitman_stealth_recreate_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Library_ALSMathLibrary_h_22_SPARSE_DATA
#define FID_GameDevelopment_UnrealEngine_Projects_hitman_stealth_recreate_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Library_ALSMathLibrary_h_22_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_GameDevelopment_UnrealEngine_Projects_hitman_stealth_recreate_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Library_ALSMathLibrary_h_22_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_GameDevelopment_UnrealEngine_Projects_hitman_stealth_recreate_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Library_ALSMathLibrary_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCalculateQuadrant); \
	DECLARE_FUNCTION(execAngleInRange); \
	DECLARE_FUNCTION(execCapsuleHasRoomCheck); \
	DECLARE_FUNCTION(execGetCapsuleLocationFromBase); \
	DECLARE_FUNCTION(execGetCapsuleBaseLocation); \
	DECLARE_FUNCTION(execTransformAdd); \
	DECLARE_FUNCTION(execTransformSub); \
	DECLARE_FUNCTION(execMantleComponentLocalToWorld);


#define FID_GameDevelopment_UnrealEngine_Projects_hitman_stealth_recreate_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Library_ALSMathLibrary_h_22_ACCESSORS
#define FID_GameDevelopment_UnrealEngine_Projects_hitman_stealth_recreate_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Library_ALSMathLibrary_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUALSMathLibrary(); \
	friend struct Z_Construct_UClass_UALSMathLibrary_Statics; \
public: \
	DECLARE_CLASS(UALSMathLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ALSV4_CPP"), NO_API) \
	DECLARE_SERIALIZER(UALSMathLibrary)


#define FID_GameDevelopment_UnrealEngine_Projects_hitman_stealth_recreate_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Library_ALSMathLibrary_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UALSMathLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UALSMathLibrary(UALSMathLibrary&&); \
	NO_API UALSMathLibrary(const UALSMathLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UALSMathLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UALSMathLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UALSMathLibrary) \
	NO_API virtual ~UALSMathLibrary();


#define FID_GameDevelopment_UnrealEngine_Projects_hitman_stealth_recreate_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Library_ALSMathLibrary_h_19_PROLOG
#define FID_GameDevelopment_UnrealEngine_Projects_hitman_stealth_recreate_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Library_ALSMathLibrary_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameDevelopment_UnrealEngine_Projects_hitman_stealth_recreate_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Library_ALSMathLibrary_h_22_SPARSE_DATA \
	FID_GameDevelopment_UnrealEngine_Projects_hitman_stealth_recreate_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Library_ALSMathLibrary_h_22_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_GameDevelopment_UnrealEngine_Projects_hitman_stealth_recreate_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Library_ALSMathLibrary_h_22_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_GameDevelopment_UnrealEngine_Projects_hitman_stealth_recreate_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Library_ALSMathLibrary_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameDevelopment_UnrealEngine_Projects_hitman_stealth_recreate_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Library_ALSMathLibrary_h_22_ACCESSORS \
	FID_GameDevelopment_UnrealEngine_Projects_hitman_stealth_recreate_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Library_ALSMathLibrary_h_22_INCLASS_NO_PURE_DECLS \
	FID_GameDevelopment_UnrealEngine_Projects_hitman_stealth_recreate_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Library_ALSMathLibrary_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ALSV4_CPP_API UClass* StaticClass<class UALSMathLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameDevelopment_UnrealEngine_Projects_hitman_stealth_recreate_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Library_ALSMathLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
