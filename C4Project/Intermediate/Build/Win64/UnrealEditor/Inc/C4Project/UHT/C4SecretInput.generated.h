// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/C4SecretInput.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef C4PROJECT_C4SecretInput_generated_h
#error "C4SecretInput.generated.h already included, missing '#pragma once' in C4SecretInput.h"
#endif
#define C4PROJECT_C4SecretInput_generated_h

#define FID_C4Project_Source_C4Project_Public_UI_C4SecretInput_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleOwnSecretChanged);


#define FID_C4Project_Source_C4Project_Public_UI_C4SecretInput_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUC4SecretInput(); \
	friend struct Z_Construct_UClass_UC4SecretInput_Statics; \
public: \
	DECLARE_CLASS(UC4SecretInput, UC4UserWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/C4Project"), NO_API) \
	DECLARE_SERIALIZER(UC4SecretInput)


#define FID_C4Project_Source_C4Project_Public_UI_C4SecretInput_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UC4SecretInput(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UC4SecretInput(UC4SecretInput&&); \
	UC4SecretInput(const UC4SecretInput&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UC4SecretInput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UC4SecretInput); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UC4SecretInput) \
	NO_API virtual ~UC4SecretInput();


#define FID_C4Project_Source_C4Project_Public_UI_C4SecretInput_h_19_PROLOG
#define FID_C4Project_Source_C4Project_Public_UI_C4SecretInput_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_C4Project_Source_C4Project_Public_UI_C4SecretInput_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_C4Project_Source_C4Project_Public_UI_C4SecretInput_h_22_INCLASS_NO_PURE_DECLS \
	FID_C4Project_Source_C4Project_Public_UI_C4SecretInput_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> C4PROJECT_API UClass* StaticClass<class UC4SecretInput>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_C4Project_Source_C4Project_Public_UI_C4SecretInput_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
