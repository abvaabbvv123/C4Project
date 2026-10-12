// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/C4UserWidgetBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerState;
enum class EC4GamePhase : uint8;
#ifdef C4PROJECT_C4UserWidgetBase_generated_h
#error "C4UserWidgetBase.generated.h already included, missing '#pragma once' in C4UserWidgetBase.h"
#endif
#define C4PROJECT_C4UserWidgetBase_generated_h

#define FID_C4Project_Source_C4Project_Public_UI_C4UserWidgetBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleFlowOwnSecret); \
	DECLARE_FUNCTION(execHandleFlowLastChance); \
	DECLARE_FUNCTION(execHandleFlowTurn); \
	DECLARE_FUNCTION(execHandleFlowPhase);


#define FID_C4Project_Source_C4Project_Public_UI_C4UserWidgetBase_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUC4UserWidgetBase(); \
	friend struct Z_Construct_UClass_UC4UserWidgetBase_Statics; \
public: \
	DECLARE_CLASS(UC4UserWidgetBase, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/C4Project"), NO_API) \
	DECLARE_SERIALIZER(UC4UserWidgetBase)


#define FID_C4Project_Source_C4Project_Public_UI_C4UserWidgetBase_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UC4UserWidgetBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UC4UserWidgetBase(UC4UserWidgetBase&&); \
	UC4UserWidgetBase(const UC4UserWidgetBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UC4UserWidgetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UC4UserWidgetBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UC4UserWidgetBase) \
	NO_API virtual ~UC4UserWidgetBase();


#define FID_C4Project_Source_C4Project_Public_UI_C4UserWidgetBase_h_14_PROLOG
#define FID_C4Project_Source_C4Project_Public_UI_C4UserWidgetBase_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_C4Project_Source_C4Project_Public_UI_C4UserWidgetBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_C4Project_Source_C4Project_Public_UI_C4UserWidgetBase_h_17_INCLASS_NO_PURE_DECLS \
	FID_C4Project_Source_C4Project_Public_UI_C4UserWidgetBase_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> C4PROJECT_API UClass* StaticClass<class UC4UserWidgetBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_C4Project_Source_C4Project_Public_UI_C4UserWidgetBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
