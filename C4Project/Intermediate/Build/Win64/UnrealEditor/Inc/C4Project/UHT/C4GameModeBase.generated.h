// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameSystem/C4GameModeBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef C4PROJECT_C4GameModeBase_generated_h
#error "C4GameModeBase.generated.h already included, missing '#pragma once' in C4GameModeBase.h"
#endif
#define C4PROJECT_C4GameModeBase_generated_h

#define FID_C4Project_Source_C4Project_Public_GameSystem_C4GameModeBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAC4GameModeBase(); \
	friend struct Z_Construct_UClass_AC4GameModeBase_Statics; \
public: \
	DECLARE_CLASS(AC4GameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/C4Project"), NO_API) \
	DECLARE_SERIALIZER(AC4GameModeBase)


#define FID_C4Project_Source_C4Project_Public_GameSystem_C4GameModeBase_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AC4GameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AC4GameModeBase(AC4GameModeBase&&); \
	AC4GameModeBase(const AC4GameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AC4GameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AC4GameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AC4GameModeBase) \
	NO_API virtual ~AC4GameModeBase();


#define FID_C4Project_Source_C4Project_Public_GameSystem_C4GameModeBase_h_13_PROLOG
#define FID_C4Project_Source_C4Project_Public_GameSystem_C4GameModeBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_C4Project_Source_C4Project_Public_GameSystem_C4GameModeBase_h_16_INCLASS_NO_PURE_DECLS \
	FID_C4Project_Source_C4Project_Public_GameSystem_C4GameModeBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> C4PROJECT_API UClass* StaticClass<class AC4GameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_C4Project_Source_C4Project_Public_GameSystem_C4GameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
