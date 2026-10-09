// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "C4Type.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerState;
enum class EC4GamePhase : uint8;
#ifdef C4PROJECT_C4Type_generated_h
#error "C4Type.generated.h already included, missing '#pragma once' in C4Type.h"
#endif
#define C4PROJECT_C4Type_generated_h

#define FID_C4Project_Source_C4Project_Public_C4Type_h_8_DELEGATE \
C4PROJECT_API void FOnC4TurnChanged_DelegateWrapper(const FMulticastScriptDelegate& OnC4TurnChanged, APlayerState* TurnPlayer);


#define FID_C4Project_Source_C4Project_Public_C4Type_h_9_DELEGATE \
C4PROJECT_API void FOnC4GuessHistoryChanged_DelegateWrapper(const FMulticastScriptDelegate& OnC4GuessHistoryChanged);


#define FID_C4Project_Source_C4Project_Public_C4Type_h_51_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FC4Notification_Statics; \
	C4PROJECT_API static class UScriptStruct* StaticStruct();


template<> C4PROJECT_API UScriptStruct* StaticStruct<struct FC4Notification>();

#define FID_C4Project_Source_C4Project_Public_C4Type_h_63_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FC4GuessRecord_Statics; \
	C4PROJECT_API static class UScriptStruct* StaticStruct();


template<> C4PROJECT_API UScriptStruct* StaticStruct<struct FC4GuessRecord>();

#define FID_C4Project_Source_C4Project_Public_C4Type_h_74_DELEGATE \
C4PROJECT_API void FOnC4PhaseChanged_DelegateWrapper(const FMulticastScriptDelegate& OnC4PhaseChanged, EC4GamePhase NewPhase);


#define FID_C4Project_Source_C4Project_Public_C4Type_h_75_DELEGATE \
C4PROJECT_API void FOnC4TextEvent_DelegateWrapper(const FMulticastScriptDelegate& OnC4TextEvent, FText const& Text);


#define FID_C4Project_Source_C4Project_Public_C4Type_h_76_DELEGATE \
C4PROJECT_API void FOnC4StringChanged_DelegateWrapper(const FMulticastScriptDelegate& OnC4StringChanged, const FString& Value);


#define FID_C4Project_Source_C4Project_Public_C4Type_h_77_DELEGATE \
C4PROJECT_API void FOnC4BoolChanged_DelegateWrapper(const FMulticastScriptDelegate& OnC4BoolChanged, bool bValue);


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_C4Project_Source_C4Project_Public_C4Type_h


#define FOREACH_ENUM_EC4GAMEPHASE(op) \
	op(EC4GamePhase::WaitingPlayer) \
	op(EC4GamePhase::SecretSetup) \
	op(EC4GamePhase::Playing) \
	op(EC4GamePhase::GameOver) 

enum class EC4GamePhase : uint8;
template<> struct TIsUEnumClass<EC4GamePhase> { enum { Value = true }; };
template<> C4PROJECT_API UEnum* StaticEnum<EC4GamePhase>();

#define FOREACH_ENUM_EC4NOTIFICATIONTYPE(op) \
	op(EC4NotificationType::None) \
	op(EC4NotificationType::Connected) \
	op(EC4NotificationType::PlayerJoined) \
	op(EC4NotificationType::WaitingForOpponent) \
	op(EC4NotificationType::OpponentLeft) \
	op(EC4NotificationType::EnterSecret) \
	op(EC4NotificationType::InvalidNumber) \
	op(EC4NotificationType::SecretAccepted) \
	op(EC4NotificationType::SecretAlreadySet) \
	op(EC4NotificationType::CannotEnterSecretNow) \
	op(EC4NotificationType::OpponentReady) \
	op(EC4NotificationType::GameStart) \
	op(EC4NotificationType::YourTurn) \
	op(EC4NotificationType::OpponentTurn) \
	op(EC4NotificationType::LastChance) \
	op(EC4NotificationType::GuessResult) \
	op(EC4NotificationType::Win) \
	op(EC4NotificationType::Draw) \
	op(EC4NotificationType::Restarting) 

enum class EC4NotificationType : uint8;
template<> struct TIsUEnumClass<EC4NotificationType> { enum { Value = true }; };
template<> C4PROJECT_API UEnum* StaticEnum<EC4NotificationType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
