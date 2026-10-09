// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameSystem/C4PlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef C4PROJECT_C4PlayerController_generated_h
#error "C4PlayerController.generated.h already included, missing '#pragma once' in C4PlayerController.h"
#endif
#define C4PROJECT_C4PlayerController_generated_h

#define FID_C4Project_Source_C4Project_Public_GameSystem_C4PlayerController_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ClientRPCReceiveChatMessage_Implementation(const FString& InChatMessageString); \
	virtual void ServerRPCSubmitInput_Implementation(const FString& InRawInput); \
	DECLARE_FUNCTION(execOnRepOwnSecretNumber); \
	DECLARE_FUNCTION(execOnRepNotification); \
	DECLARE_FUNCTION(execClientRPCReceiveChatMessage); \
	DECLARE_FUNCTION(execServerRPCSubmitInput);


#define FID_C4Project_Source_C4Project_Public_GameSystem_C4PlayerController_h_19_CALLBACK_WRAPPERS
#define FID_C4Project_Source_C4Project_Public_GameSystem_C4PlayerController_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAC4PlayerController(); \
	friend struct Z_Construct_UClass_AC4PlayerController_Statics; \
public: \
	DECLARE_CLASS(AC4PlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/C4Project"), NO_API) \
	DECLARE_SERIALIZER(AC4PlayerController) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Notification=NETFIELD_REP_START, \
		OwnSecretNumber, \
		NETFIELD_REP_END=OwnSecretNumber	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_C4Project_Source_C4Project_Public_GameSystem_C4PlayerController_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AC4PlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AC4PlayerController(AC4PlayerController&&); \
	AC4PlayerController(const AC4PlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AC4PlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AC4PlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AC4PlayerController) \
	NO_API virtual ~AC4PlayerController();


#define FID_C4Project_Source_C4Project_Public_GameSystem_C4PlayerController_h_16_PROLOG
#define FID_C4Project_Source_C4Project_Public_GameSystem_C4PlayerController_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_C4Project_Source_C4Project_Public_GameSystem_C4PlayerController_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_C4Project_Source_C4Project_Public_GameSystem_C4PlayerController_h_19_CALLBACK_WRAPPERS \
	FID_C4Project_Source_C4Project_Public_GameSystem_C4PlayerController_h_19_INCLASS_NO_PURE_DECLS \
	FID_C4Project_Source_C4Project_Public_GameSystem_C4PlayerController_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> C4PROJECT_API UClass* StaticClass<class AC4PlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_C4Project_Source_C4Project_Public_GameSystem_C4PlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
