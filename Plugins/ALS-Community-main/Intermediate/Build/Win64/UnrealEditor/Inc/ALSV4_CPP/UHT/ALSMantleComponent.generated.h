// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/ALSMantleComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EALSMantleType : uint8;
enum class EALSOverlayState : uint8;
struct FALSComponentAndTransform;
struct FALSMantleAsset;
struct FALSMantleTraceSettings;
#ifdef ALSV4_CPP_ALSMantleComponent_generated_h
#error "ALSMantleComponent.generated.h already included, missing '#pragma once' in ALSMantleComponent.h"
#endif
#define ALSV4_CPP_ALSMantleComponent_generated_h

#define FID_GameDevelopment_UnrealEngine_Projects_hitman_stealth_recreate_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Components_ALSMantleComponent_h_21_SPARSE_DATA
#define FID_GameDevelopment_UnrealEngine_Projects_hitman_stealth_recreate_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Components_ALSMantleComponent_h_21_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_GameDevelopment_UnrealEngine_Projects_hitman_stealth_recreate_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Components_ALSMantleComponent_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_GameDevelopment_UnrealEngine_Projects_hitman_stealth_recreate_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Components_ALSMantleComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_MantleStart_Implementation(float MantleHeight, FALSComponentAndTransform const& MantleLedgeWS, EALSMantleType MantleType); \
	virtual void Server_MantleStart_Implementation(float MantleHeight, FALSComponentAndTransform const& MantleLedgeWS, EALSMantleType MantleType); \
 \
	DECLARE_FUNCTION(execMulticast_MantleStart); \
	DECLARE_FUNCTION(execServer_MantleStart); \
	DECLARE_FUNCTION(execOnOwnerRagdollStateChanged); \
	DECLARE_FUNCTION(execOnOwnerJumpInput); \
	DECLARE_FUNCTION(execMantleEnd); \
	DECLARE_FUNCTION(execMantleUpdate); \
	DECLARE_FUNCTION(execMantleStart); \
	DECLARE_FUNCTION(execMantleCheck);


#define FID_GameDevelopment_UnrealEngine_Projects_hitman_stealth_recreate_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Components_ALSMantleComponent_h_21_ACCESSORS
#define FID_GameDevelopment_UnrealEngine_Projects_hitman_stealth_recreate_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Components_ALSMantleComponent_h_21_CALLBACK_WRAPPERS
#define FID_GameDevelopment_UnrealEngine_Projects_hitman_stealth_recreate_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Components_ALSMantleComponent_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUALSMantleComponent(); \
	friend struct Z_Construct_UClass_UALSMantleComponent_Statics; \
public: \
	DECLARE_CLASS(UALSMantleComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ALSV4_CPP"), NO_API) \
	DECLARE_SERIALIZER(UALSMantleComponent)


#define FID_GameDevelopment_UnrealEngine_Projects_hitman_stealth_recreate_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Components_ALSMantleComponent_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UALSMantleComponent(UALSMantleComponent&&); \
	NO_API UALSMantleComponent(const UALSMantleComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UALSMantleComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UALSMantleComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UALSMantleComponent) \
	NO_API virtual ~UALSMantleComponent();


#define FID_GameDevelopment_UnrealEngine_Projects_hitman_stealth_recreate_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Components_ALSMantleComponent_h_18_PROLOG
#define FID_GameDevelopment_UnrealEngine_Projects_hitman_stealth_recreate_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Components_ALSMantleComponent_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameDevelopment_UnrealEngine_Projects_hitman_stealth_recreate_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Components_ALSMantleComponent_h_21_SPARSE_DATA \
	FID_GameDevelopment_UnrealEngine_Projects_hitman_stealth_recreate_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Components_ALSMantleComponent_h_21_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_GameDevelopment_UnrealEngine_Projects_hitman_stealth_recreate_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Components_ALSMantleComponent_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_GameDevelopment_UnrealEngine_Projects_hitman_stealth_recreate_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Components_ALSMantleComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameDevelopment_UnrealEngine_Projects_hitman_stealth_recreate_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Components_ALSMantleComponent_h_21_ACCESSORS \
	FID_GameDevelopment_UnrealEngine_Projects_hitman_stealth_recreate_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Components_ALSMantleComponent_h_21_CALLBACK_WRAPPERS \
	FID_GameDevelopment_UnrealEngine_Projects_hitman_stealth_recreate_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Components_ALSMantleComponent_h_21_INCLASS_NO_PURE_DECLS \
	FID_GameDevelopment_UnrealEngine_Projects_hitman_stealth_recreate_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Components_ALSMantleComponent_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ALSV4_CPP_API UClass* StaticClass<class UALSMantleComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameDevelopment_UnrealEngine_Projects_hitman_stealth_recreate_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Components_ALSMantleComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
