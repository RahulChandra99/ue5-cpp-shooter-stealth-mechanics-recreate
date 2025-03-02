// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/ALSDebugComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
#ifdef ALSV4_CPP_ALSDebugComponent_generated_h
#error "ALSDebugComponent.generated.h already included, missing '#pragma once' in ALSDebugComponent.h"
#endif
#define ALSV4_CPP_ALSDebugComponent_generated_h

#define FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Components_ALSDebugComponent_h_19_SPARSE_DATA
#define FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Components_ALSDebugComponent_h_19_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Components_ALSDebugComponent_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Components_ALSDebugComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OverlayMenuCycle_Implementation(bool bValue); \
	virtual void OpenOverlayMenu_Implementation(bool bValue); \
 \
	DECLARE_FUNCTION(execFocusedDebugCharacterCycle); \
	DECLARE_FUNCTION(execGetShowLayerColors); \
	DECLARE_FUNCTION(execGetShowDebugShapes); \
	DECLARE_FUNCTION(execGetShowTraces); \
	DECLARE_FUNCTION(execGetDebugView); \
	DECLARE_FUNCTION(execToggleCharacterInfo); \
	DECLARE_FUNCTION(execToggleLayerColors); \
	DECLARE_FUNCTION(execToggleDebugShapes); \
	DECLARE_FUNCTION(execToggleTraces); \
	DECLARE_FUNCTION(execToggleDebugMesh); \
	DECLARE_FUNCTION(execOverlayMenuCycle); \
	DECLARE_FUNCTION(execOpenOverlayMenu); \
	DECLARE_FUNCTION(execToggleDebugView); \
	DECLARE_FUNCTION(execToggleHud); \
	DECLARE_FUNCTION(execToggleSlomo); \
	DECLARE_FUNCTION(execToggleGlobalTimeDilationLocal);


#define FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Components_ALSDebugComponent_h_19_ACCESSORS
#define FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Components_ALSDebugComponent_h_19_CALLBACK_WRAPPERS
#define FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Components_ALSDebugComponent_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUALSDebugComponent(); \
	friend struct Z_Construct_UClass_UALSDebugComponent_Statics; \
public: \
	DECLARE_CLASS(UALSDebugComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ALSV4_CPP"), NO_API) \
	DECLARE_SERIALIZER(UALSDebugComponent)


#define FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Components_ALSDebugComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UALSDebugComponent(UALSDebugComponent&&); \
	NO_API UALSDebugComponent(const UALSDebugComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UALSDebugComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UALSDebugComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UALSDebugComponent) \
	NO_API virtual ~UALSDebugComponent();


#define FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Components_ALSDebugComponent_h_16_PROLOG
#define FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Components_ALSDebugComponent_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Components_ALSDebugComponent_h_19_SPARSE_DATA \
	FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Components_ALSDebugComponent_h_19_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Components_ALSDebugComponent_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Components_ALSDebugComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Components_ALSDebugComponent_h_19_ACCESSORS \
	FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Components_ALSDebugComponent_h_19_CALLBACK_WRAPPERS \
	FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Components_ALSDebugComponent_h_19_INCLASS_NO_PURE_DECLS \
	FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Components_ALSDebugComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ALSV4_CPP_API UClass* StaticClass<class UALSDebugComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameDevelopment_UnrealEngine_Projects_TPS_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Components_ALSDebugComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
