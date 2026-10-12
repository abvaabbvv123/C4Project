// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/C4GuessingEntry.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef C4PROJECT_C4GuessingEntry_generated_h
#error "C4GuessingEntry.generated.h already included, missing '#pragma once' in C4GuessingEntry.h"
#endif
#define C4PROJECT_C4GuessingEntry_generated_h

#define FID_C4Project_Source_C4Project_Public_UI_C4GuessingEntry_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUC4GuessingEntry(); \
	friend struct Z_Construct_UClass_UC4GuessingEntry_Statics; \
public: \
	DECLARE_CLASS(UC4GuessingEntry, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/C4Project"), NO_API) \
	DECLARE_SERIALIZER(UC4GuessingEntry)


#define FID_C4Project_Source_C4Project_Public_UI_C4GuessingEntry_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UC4GuessingEntry(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UC4GuessingEntry(UC4GuessingEntry&&); \
	UC4GuessingEntry(const UC4GuessingEntry&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UC4GuessingEntry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UC4GuessingEntry); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UC4GuessingEntry) \
	NO_API virtual ~UC4GuessingEntry();


#define FID_C4Project_Source_C4Project_Public_UI_C4GuessingEntry_h_17_PROLOG
#define FID_C4Project_Source_C4Project_Public_UI_C4GuessingEntry_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_C4Project_Source_C4Project_Public_UI_C4GuessingEntry_h_20_INCLASS_NO_PURE_DECLS \
	FID_C4Project_Source_C4Project_Public_UI_C4GuessingEntry_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> C4PROJECT_API UClass* StaticClass<class UC4GuessingEntry>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_C4Project_Source_C4Project_Public_UI_C4GuessingEntry_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
