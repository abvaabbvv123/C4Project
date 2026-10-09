// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameSystem/C4PlayerState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef C4PROJECT_C4PlayerState_generated_h
#error "C4PlayerState.generated.h already included, missing '#pragma once' in C4PlayerState.h"
#endif
#define C4PROJECT_C4PlayerState_generated_h

#define FID_C4Project_Source_C4Project_Public_GameSystem_C4PlayerState_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRepSecretReady);


#define FID_C4Project_Source_C4Project_Public_GameSystem_C4PlayerState_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAC4PlayerState(); \
	friend struct Z_Construct_UClass_AC4PlayerState_Statics; \
public: \
	DECLARE_CLASS(AC4PlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/C4Project"), NO_API) \
	DECLARE_SERIALIZER(AC4PlayerState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bSecretReady=NETFIELD_REP_START, \
		NETFIELD_REP_END=bSecretReady	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_C4Project_Source_C4Project_Public_GameSystem_C4PlayerState_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AC4PlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AC4PlayerState(AC4PlayerState&&); \
	AC4PlayerState(const AC4PlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AC4PlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AC4PlayerState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AC4PlayerState) \
	NO_API virtual ~AC4PlayerState();


#define FID_C4Project_Source_C4Project_Public_GameSystem_C4PlayerState_h_13_PROLOG
#define FID_C4Project_Source_C4Project_Public_GameSystem_C4PlayerState_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_C4Project_Source_C4Project_Public_GameSystem_C4PlayerState_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_C4Project_Source_C4Project_Public_GameSystem_C4PlayerState_h_16_INCLASS_NO_PURE_DECLS \
	FID_C4Project_Source_C4Project_Public_GameSystem_C4PlayerState_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> C4PROJECT_API UClass* StaticClass<class AC4PlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_C4Project_Source_C4Project_Public_GameSystem_C4PlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
