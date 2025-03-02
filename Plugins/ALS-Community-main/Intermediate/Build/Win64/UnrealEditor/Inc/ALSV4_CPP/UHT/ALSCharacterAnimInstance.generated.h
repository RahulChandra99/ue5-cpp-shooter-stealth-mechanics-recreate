// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/Animation/ALSCharacterAnimInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EALSGroundedEntryState : uint8;
enum class EALSHipsDirection : uint8;
struct FALSDynamicMontageParams;
#ifdef ALSV4_CPP_ALSCharacterAnimInstance_generated_h
#error "ALSCharacterAnimInstance.generated.h already included, missing '#pragma once' in ALSCharacterAnimInstance.h"
#endif
#define ALSV4_CPP_ALSCharacterAnimInstance_generated_h

#define FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Character_Animation_ALSCharacterAnimInstance_h_26_SPARSE_DATA
#define FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Character_Animation_ALSCharacterAnimInstance_h_26_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Character_Animation_ALSCharacterAnimInstance_h_26_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Character_Animation_ALSCharacterAnimInstance_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCanDynamicTransition); \
	DECLARE_FUNCTION(execCanTurnInPlace); \
	DECLARE_FUNCTION(execCanRotateInPlace); \
	DECLARE_FUNCTION(execShouldMoveCheck); \
	DECLARE_FUNCTION(execSetGroundedEntryState); \
	DECLARE_FUNCTION(execSetTrackedHipsDirection); \
	DECLARE_FUNCTION(execOnPivot); \
	DECLARE_FUNCTION(execOnJumped); \
	DECLARE_FUNCTION(execPlayDynamicTransition); \
	DECLARE_FUNCTION(execPlayTransitionChecked); \
	DECLARE_FUNCTION(execPlayTransition);


#define FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Character_Animation_ALSCharacterAnimInstance_h_26_ACCESSORS
#define FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Character_Animation_ALSCharacterAnimInstance_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUALSCharacterAnimInstance(); \
	friend struct Z_Construct_UClass_UALSCharacterAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UALSCharacterAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ALSV4_CPP"), NO_API) \
	DECLARE_SERIALIZER(UALSCharacterAnimInstance)


#define FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Character_Animation_ALSCharacterAnimInstance_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UALSCharacterAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UALSCharacterAnimInstance(UALSCharacterAnimInstance&&); \
	NO_API UALSCharacterAnimInstance(const UALSCharacterAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UALSCharacterAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UALSCharacterAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UALSCharacterAnimInstance) \
	NO_API virtual ~UALSCharacterAnimInstance();


#define FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Character_Animation_ALSCharacterAnimInstance_h_23_PROLOG
#define FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Character_Animation_ALSCharacterAnimInstance_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Character_Animation_ALSCharacterAnimInstance_h_26_SPARSE_DATA \
	FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Character_Animation_ALSCharacterAnimInstance_h_26_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Character_Animation_ALSCharacterAnimInstance_h_26_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Character_Animation_ALSCharacterAnimInstance_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Character_Animation_ALSCharacterAnimInstance_h_26_ACCESSORS \
	FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Character_Animation_ALSCharacterAnimInstance_h_26_INCLASS_NO_PURE_DECLS \
	FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Character_Animation_ALSCharacterAnimInstance_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ALSV4_CPP_API UClass* StaticClass<class UALSCharacterAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Character_Animation_ALSCharacterAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
