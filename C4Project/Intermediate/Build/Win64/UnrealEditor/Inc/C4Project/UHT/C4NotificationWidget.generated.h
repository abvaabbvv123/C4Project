// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/C4NotificationWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef C4PROJECT_C4NotificationWidget_generated_h
#error "C4NotificationWidget.generated.h already included, missing '#pragma once' in C4NotificationWidget.h"
#endif
#define C4PROJECT_C4NotificationWidget_generated_h

#define FID_C4Project_Source_C4Project_Public_UI_C4NotificationWidget_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleNotificationChanged);


#define FID_C4Project_Source_C4Project_Public_UI_C4NotificationWidget_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUC4NotificationWidget(); \
	friend struct Z_Construct_UClass_UC4NotificationWidget_Statics; \
public: \
	DECLARE_CLASS(UC4NotificationWidget, UC4UserWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/C4Project"), NO_API) \
	DECLARE_SERIALIZER(UC4NotificationWidget)


#define FID_C4Project_Source_C4Project_Public_UI_C4NotificationWidget_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UC4NotificationWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UC4NotificationWidget(UC4NotificationWidget&&); \
	UC4NotificationWidget(const UC4NotificationWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UC4NotificationWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UC4NotificationWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UC4NotificationWidget) \
	NO_API virtual ~UC4NotificationWidget();


#define FID_C4Project_Source_C4Project_Public_UI_C4NotificationWidget_h_16_PROLOG
#define FID_C4Project_Source_C4Project_Public_UI_C4NotificationWidget_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_C4Project_Source_C4Project_Public_UI_C4NotificationWidget_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_C4Project_Source_C4Project_Public_UI_C4NotificationWidget_h_19_INCLASS_NO_PURE_DECLS \
	FID_C4Project_Source_C4Project_Public_UI_C4NotificationWidget_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> C4PROJECT_API UClass* StaticClass<class UC4NotificationWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_C4Project_Source_C4Project_Public_UI_C4NotificationWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
