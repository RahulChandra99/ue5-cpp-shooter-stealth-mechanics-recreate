// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Library/ALSCharacterEnumLibrary.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ALSV4_CPP_ALSCharacterEnumLibrary_generated_h
#error "ALSCharacterEnumLibrary.generated.h already included, missing '#pragma once' in ALSCharacterEnumLibrary.h"
#endif
#define ALSV4_CPP_ALSCharacterEnumLibrary_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameDevelopment_UnrealEngine_Projects_hitman_stealth_recreate_Plugins_ALS_Community_main_Source_ALSV4_CPP_Public_Library_ALSCharacterEnumLibrary_h


#define FOREACH_ENUM_EALSGAIT(op) \
	op(EALSGait::Walking) \
	op(EALSGait::Running) \
	op(EALSGait::Sprinting) 

enum class EALSGait : uint8;
template<> struct TIsUEnumClass<EALSGait> { enum { Value = true }; };
template<> ALSV4_CPP_API UEnum* StaticEnum<EALSGait>();

#define FOREACH_ENUM_EALSMOVEMENTACTION(op) \
	op(EALSMovementAction::None) \
	op(EALSMovementAction::LowMantle) \
	op(EALSMovementAction::HighMantle) \
	op(EALSMovementAction::Rolling) \
	op(EALSMovementAction::GettingUp) 

enum class EALSMovementAction : uint8;
template<> struct TIsUEnumClass<EALSMovementAction> { enum { Value = true }; };
template<> ALSV4_CPP_API UEnum* StaticEnum<EALSMovementAction>();

#define FOREACH_ENUM_EALSMOVEMENTSTATE(op) \
	op(EALSMovementState::None) \
	op(EALSMovementState::Grounded) \
	op(EALSMovementState::InAir) \
	op(EALSMovementState::Mantling) \
	op(EALSMovementState::Ragdoll) 

enum class EALSMovementState : uint8;
template<> struct TIsUEnumClass<EALSMovementState> { enum { Value = true }; };
template<> ALSV4_CPP_API UEnum* StaticEnum<EALSMovementState>();

#define FOREACH_ENUM_EALSOVERLAYSTATE(op) \
	op(EALSOverlayState::Default) \
	op(EALSOverlayState::Masculine) \
	op(EALSOverlayState::Feminine) \
	op(EALSOverlayState::Injured) \
	op(EALSOverlayState::HandsTied) \
	op(EALSOverlayState::Rifle) \
	op(EALSOverlayState::PistolOneHanded) \
	op(EALSOverlayState::PistolTwoHanded) \
	op(EALSOverlayState::Bow) \
	op(EALSOverlayState::Torch) \
	op(EALSOverlayState::Binoculars) \
	op(EALSOverlayState::Box) \
	op(EALSOverlayState::Barrel) 

enum class EALSOverlayState : uint8;
template<> struct TIsUEnumClass<EALSOverlayState> { enum { Value = true }; };
template<> ALSV4_CPP_API UEnum* StaticEnum<EALSOverlayState>();

#define FOREACH_ENUM_EALSROTATIONMODE(op) \
	op(EALSRotationMode::VelocityDirection) \
	op(EALSRotationMode::LookingDirection) \
	op(EALSRotationMode::Aiming) 

enum class EALSRotationMode : uint8;
template<> struct TIsUEnumClass<EALSRotationMode> { enum { Value = true }; };
template<> ALSV4_CPP_API UEnum* StaticEnum<EALSRotationMode>();

#define FOREACH_ENUM_EALSSTANCE(op) \
	op(EALSStance::Standing) \
	op(EALSStance::Crouching) 

enum class EALSStance : uint8;
template<> struct TIsUEnumClass<EALSStance> { enum { Value = true }; };
template<> ALSV4_CPP_API UEnum* StaticEnum<EALSStance>();

#define FOREACH_ENUM_EALSVIEWMODE(op) \
	op(EALSViewMode::ThirdPerson) \
	op(EALSViewMode::FirstPerson) 

enum class EALSViewMode : uint8;
template<> struct TIsUEnumClass<EALSViewMode> { enum { Value = true }; };
template<> ALSV4_CPP_API UEnum* StaticEnum<EALSViewMode>();

#define FOREACH_ENUM_EALSANIMFEATUREEXAMPLE(op) \
	op(EALSAnimFeatureExample::StrideBlending) \
	op(EALSAnimFeatureExample::AdditiveBlending) \
	op(EALSAnimFeatureExample::SprintImpulse) 

enum class EALSAnimFeatureExample : uint8;
template<> struct TIsUEnumClass<EALSAnimFeatureExample> { enum { Value = true }; };
template<> ALSV4_CPP_API UEnum* StaticEnum<EALSAnimFeatureExample>();

#define FOREACH_ENUM_EALSFOOTSTEPTYPE(op) \
	op(EALSFootstepType::Step) \
	op(EALSFootstepType::WalkRun) \
	op(EALSFootstepType::Jump) \
	op(EALSFootstepType::Land) 

enum class EALSFootstepType : uint8;
template<> struct TIsUEnumClass<EALSFootstepType> { enum { Value = true }; };
template<> ALSV4_CPP_API UEnum* StaticEnum<EALSFootstepType>();

#define FOREACH_ENUM_EALSGROUNDEDENTRYSTATE(op) \
	op(EALSGroundedEntryState::None) \
	op(EALSGroundedEntryState::Roll) 

enum class EALSGroundedEntryState : uint8;
template<> struct TIsUEnumClass<EALSGroundedEntryState> { enum { Value = true }; };
template<> ALSV4_CPP_API UEnum* StaticEnum<EALSGroundedEntryState>();

#define FOREACH_ENUM_EALSHIPSDIRECTION(op) \
	op(EALSHipsDirection::F) \
	op(EALSHipsDirection::B) \
	op(EALSHipsDirection::RF) \
	op(EALSHipsDirection::RB) \
	op(EALSHipsDirection::LF) \
	op(EALSHipsDirection::LB) 

enum class EALSHipsDirection : uint8;
template<> struct TIsUEnumClass<EALSHipsDirection> { enum { Value = true }; };
template<> ALSV4_CPP_API UEnum* StaticEnum<EALSHipsDirection>();

#define FOREACH_ENUM_EALSMANTLETYPE(op) \
	op(EALSMantleType::HighMantle) \
	op(EALSMantleType::LowMantle) \
	op(EALSMantleType::FallingCatch) 

enum class EALSMantleType : uint8;
template<> struct TIsUEnumClass<EALSMantleType> { enum { Value = true }; };
template<> ALSV4_CPP_API UEnum* StaticEnum<EALSMantleType>();

#define FOREACH_ENUM_EALSMOVEMENTDIRECTION(op) \
	op(EALSMovementDirection::Forward) \
	op(EALSMovementDirection::Right) \
	op(EALSMovementDirection::Left) \
	op(EALSMovementDirection::Backward) 

enum class EALSMovementDirection : uint8;
template<> struct TIsUEnumClass<EALSMovementDirection> { enum { Value = true }; };
template<> ALSV4_CPP_API UEnum* StaticEnum<EALSMovementDirection>();

#define FOREACH_ENUM_EALSSPAWNTYPE(op) \
	op(EALSSpawnType::Location) \
	op(EALSSpawnType::Attached) 

enum class EALSSpawnType : uint8;
template<> struct TIsUEnumClass<EALSSpawnType> { enum { Value = true }; };
template<> ALSV4_CPP_API UEnum* StaticEnum<EALSSpawnType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
