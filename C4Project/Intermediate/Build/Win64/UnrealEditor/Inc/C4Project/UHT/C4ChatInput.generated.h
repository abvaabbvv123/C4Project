// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/C4ChatInput.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef C4PROJECT_C4ChatInput_generated_h
#error "C4ChatInput.generated.h already included, missing '#pragma once' in C4ChatInput.h"
#endif
#define C4PROJECT_C4ChatInput_generated_h

#define FID_C4Project_Source_C4Project_Public_UI_C4ChatInput_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleChatMessageReceived); \
	DECLARE_FUNCTION(execOnChatInputTextCommitted);


#define FID_C4Project_Source_C4Project_Public_UI_C4ChatInput_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUC4ChatInput(); \
	friend struct Z_Construct_UClass_UC4ChatInput_Statics; \
public: \
	DECLARE_CLASS(UC4ChatInput, UC4UserWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/C4Project"), NO_API) \
	DECLARE_SERIALIZER(UC4ChatInput)


#define FID_C4Project_Source_C4Project_Public_UI_C4ChatInput_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UC4ChatInput(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UC4ChatInput(UC4ChatInput&&); \
	UC4ChatInput(const UC4ChatInput&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UC4ChatInput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UC4ChatInput); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UC4ChatInput) \
	NO_API virtual ~UC4ChatInput();


#define FID_C4Project_Source_C4Project_Public_UI_C4ChatInput_h_16_PROLOG
#define FID_C4Project_Source_C4Project_Public_UI_C4ChatInput_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_C4Project_Source_C4Project_Public_UI_C4ChatInput_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_C4Project_Source_C4Project_Public_UI_C4ChatInput_h_19_INCLASS_NO_PURE_DECLS \
	FID_C4Project_Source_C4Project_Public_UI_C4ChatInput_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> C4PROJECT_API UClass* StaticClass<class UC4ChatInput>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_C4Project_Source_C4Project_Public_UI_C4ChatInput_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
