// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "C4Project/Public/UI/C4NotificationWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC4NotificationWidget() {}

// Begin Cross Module References
C4PROJECT_API UClass* Z_Construct_UClass_UC4NotificationWidget();
C4PROJECT_API UClass* Z_Construct_UClass_UC4NotificationWidget_NoRegister();
C4PROJECT_API UClass* Z_Construct_UClass_UC4UserWidgetBase();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
UPackage* Z_Construct_UPackage__Script_C4Project();
// End Cross Module References

// Begin Class UC4NotificationWidget Function HandleNotificationChanged
struct Z_Construct_UFunction_UC4NotificationWidget_HandleNotificationChanged_Statics
{
	struct C4NotificationWidget_eventHandleNotificationChanged_Parms
	{
		FText InText;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x83\x88 \xec\x95\x8c\xeb\xa6\xbc \xec\x88\x98\xec\x8b\xa0 \xe2\x86\x92 \xeb\xac\xb8\xea\xb5\xac \xeb\xb3\x80\xea\xb2\xbd + \xec\x95\xa0\xeb\x8b\x88\xeb\xa9\x94\xec\x9d\xb4\xec\x85\x98 + \xec\x95\x8c\xeb\xa6\xbc\xec\x9d\x8c\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/C4NotificationWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x83\x88 \xec\x95\x8c\xeb\xa6\xbc \xec\x88\x98\xec\x8b\xa0 \xe2\x86\x92 \xeb\xac\xb8\xea\xb5\xac \xeb\xb3\x80\xea\xb2\xbd + \xec\x95\xa0\xeb\x8b\x88\xeb\xa9\x94\xec\x9d\xb4\xec\x85\x98 + \xec\x95\x8c\xeb\xa6\xbc\xec\x9d\x8c" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_InText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UC4NotificationWidget_HandleNotificationChanged_Statics::NewProp_InText = { "InText", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C4NotificationWidget_eventHandleNotificationChanged_Parms, InText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InText_MetaData), NewProp_InText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UC4NotificationWidget_HandleNotificationChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC4NotificationWidget_HandleNotificationChanged_Statics::NewProp_InText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UC4NotificationWidget_HandleNotificationChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UC4NotificationWidget_HandleNotificationChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UC4NotificationWidget, nullptr, "HandleNotificationChanged", nullptr, nullptr, Z_Construct_UFunction_UC4NotificationWidget_HandleNotificationChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UC4NotificationWidget_HandleNotificationChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UC4NotificationWidget_HandleNotificationChanged_Statics::C4NotificationWidget_eventHandleNotificationChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UC4NotificationWidget_HandleNotificationChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UC4NotificationWidget_HandleNotificationChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UC4NotificationWidget_HandleNotificationChanged_Statics::C4NotificationWidget_eventHandleNotificationChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UC4NotificationWidget_HandleNotificationChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UC4NotificationWidget_HandleNotificationChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UC4NotificationWidget::execHandleNotificationChanged)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_InText);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleNotificationChanged(Z_Param_Out_InText);
	P_NATIVE_END;
}
// End Class UC4NotificationWidget Function HandleNotificationChanged

// Begin Class UC4NotificationWidget
void UC4NotificationWidget::StaticRegisterNativesUC4NotificationWidget()
{
	UClass* Class = UC4NotificationWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleNotificationChanged", &UC4NotificationWidget::execHandleNotificationChanged },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UC4NotificationWidget);
UClass* Z_Construct_UClass_UC4NotificationWidget_NoRegister()
{
	return UC4NotificationWidget::StaticClass();
}
struct Z_Construct_UClass_UC4NotificationWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xec\x83\x81\xeb\x8b\xa8 \xec\x95\x8c\xeb\xa6\xbc \xec\x9c\x84\xec\xa0\xaf (WBP_Notification\xec\x9d\x98 \xeb\xb6\x80\xeb\xaa\xa8)\n * - \xec\x95\x8c\xeb\xa6\xbc \xeb\xac\xb8\xea\xb5\xac: PC\xec\x9d\x98 NotificationText(\xec\x84\x9c\xeb\xb2\x84\xea\xb0\x80 \xeb\xb3\xb4\xeb\x82\xb8 \xec\x95\x8c\xeb\xa6\xbc ID\xeb\xa5\xbc \xed\x81\xb4\xeb\x9d\xbc\xec\x97\x90\xec\x84\x9c \xed\x85\x8d\xec\x8a\xa4\xed\x8a\xb8\xeb\xa1\x9c \xeb\xb3\x80\xed\x99\x98\xed\x95\x9c \xea\xb0\x92)\xeb\xa5\xbc \xed\x91\x9c\xec\x8b\x9c\n * - \xed\x84\xb4 \xed\x91\x9c\xec\x8b\x9c / LAST CHANCE \xeb\xb0\xb0\xeb\x84\x88: GameState \xea\xb0\x92\xec\x9d\x84 \xeb\xb3\xb4\xea\xb3\xa0 \xed\x91\x9c\xec\x8b\x9c (WatchesGameFlow \xec\x82\xac\xec\x9a\xa9)\n * - \xec\x95\x8c\xeb\xa6\xbc\xec\x9d\xb4 \xeb\xb0\x94\xeb\x80\x94 \xeb\x95\x8c \xec\x95\xa0\xeb\x8b\x88\xeb\xa9\x94\xec\x9d\xb4\xec\x85\x98 + \xec\x95\x8c\xeb\xa6\xbc\xec\x9d\x8c \xec\x9e\xac\xec\x83\x9d\n */" },
#endif
		{ "IncludePath", "UI/C4NotificationWidget.h" },
		{ "ModuleRelativePath", "Public/UI/C4NotificationWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x83\x81\xeb\x8b\xa8 \xec\x95\x8c\xeb\xa6\xbc \xec\x9c\x84\xec\xa0\xaf (WBP_Notification\xec\x9d\x98 \xeb\xb6\x80\xeb\xaa\xa8)\n- \xec\x95\x8c\xeb\xa6\xbc \xeb\xac\xb8\xea\xb5\xac: PC\xec\x9d\x98 NotificationText(\xec\x84\x9c\xeb\xb2\x84\xea\xb0\x80 \xeb\xb3\xb4\xeb\x82\xb8 \xec\x95\x8c\xeb\xa6\xbc ID\xeb\xa5\xbc \xed\x81\xb4\xeb\x9d\xbc\xec\x97\x90\xec\x84\x9c \xed\x85\x8d\xec\x8a\xa4\xed\x8a\xb8\xeb\xa1\x9c \xeb\xb3\x80\xed\x99\x98\xed\x95\x9c \xea\xb0\x92)\xeb\xa5\xbc \xed\x91\x9c\xec\x8b\x9c\n- \xed\x84\xb4 \xed\x91\x9c\xec\x8b\x9c / LAST CHANCE \xeb\xb0\xb0\xeb\x84\x88: GameState \xea\xb0\x92\xec\x9d\x84 \xeb\xb3\xb4\xea\xb3\xa0 \xed\x91\x9c\xec\x8b\x9c (WatchesGameFlow \xec\x82\xac\xec\x9a\xa9)\n- \xec\x95\x8c\xeb\xa6\xbc\xec\x9d\xb4 \xeb\xb0\x94\xeb\x80\x94 \xeb\x95\x8c \xec\x95\xa0\xeb\x8b\x88\xeb\xa9\x94\xec\x9d\xb4\xec\x85\x98 + \xec\x95\x8c\xeb\xa6\xbc\xec\x9d\x8c \xec\x9e\xac\xec\x83\x9d" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextBlock_Notification_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/C4NotificationWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextBlock_TurnStatus_MetaData[] = {
		{ "BindWidgetOptional", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xed\x95\x84\xec\x88\x98: \xec\x95\x8c\xeb\xa6\xbc \xeb\xb3\xb8\xeb\xac\xb8\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/C4NotificationWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x95\x84\xec\x88\x98: \xec\x95\x8c\xeb\xa6\xbc \xeb\xb3\xb8\xeb\xac\xb8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Widget_LastChance_MetaData[] = {
		{ "BindWidgetOptional", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x84\xa0\xed\x83\x9d: YOUR TURN / OPPONENT'S TURN\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/C4NotificationWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x84\xa0\xed\x83\x9d: YOUR TURN / OPPONENT'S TURN" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Anim_Notify_MetaData[] = {
		{ "BindWidgetAnimOptional", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x84\xa0\xed\x83\x9d: \xeb\x9d\xbc\xec\x8a\xa4\xed\x8a\xb8\xec\xb0\xac\xec\x8a\xa4 \xeb\xb0\xb0\xeb\x84\x88 (Border \xeb\x93\xb1 \xec\x95\x84\xeb\xac\xb4 \xec\x9c\x84\xec\xa0\xaf)\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/C4NotificationWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x84\xa0\xed\x83\x9d: \xeb\x9d\xbc\xec\x8a\xa4\xed\x8a\xb8\xec\xb0\xac\xec\x8a\xa4 \xeb\xb0\xb0\xeb\x84\x88 (Border \xeb\x93\xb1 \xec\x95\x84\xeb\xac\xb4 \xec\x9c\x84\xec\xa0\xaf)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NotificationSound_MetaData[] = {
		{ "Category", "Sound" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x84\xa0\xed\x83\x9d: WBP \xec\x95\xa0\xeb\x8b\x88\xeb\xa9\x94\xec\x9d\xb4\xec\x85\x98 \xec\x9d\xb4\xeb\xa6\x84\xec\x9d\x84 \xec\xa0\x95\xed\x99\x95\xed\x9e\x88 Anim_Notify\xeb\xa1\x9c\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/C4NotificationWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x84\xa0\xed\x83\x9d: WBP \xec\x95\xa0\xeb\x8b\x88\xeb\xa9\x94\xec\x9d\xb4\xec\x85\x98 \xec\x9d\xb4\xeb\xa6\x84\xec\x9d\x84 \xec\xa0\x95\xed\x99\x95\xed\x9e\x88 Anim_Notify\xeb\xa1\x9c" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextBlock_Notification;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextBlock_TurnStatus;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget_LastChance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Anim_Notify;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NotificationSound;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UC4NotificationWidget_HandleNotificationChanged, "HandleNotificationChanged" }, // 1862638979
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UC4NotificationWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UC4NotificationWidget_Statics::NewProp_TextBlock_Notification = { "TextBlock_Notification", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UC4NotificationWidget, TextBlock_Notification), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextBlock_Notification_MetaData), NewProp_TextBlock_Notification_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UC4NotificationWidget_Statics::NewProp_TextBlock_TurnStatus = { "TextBlock_TurnStatus", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UC4NotificationWidget, TextBlock_TurnStatus), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextBlock_TurnStatus_MetaData), NewProp_TextBlock_TurnStatus_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UC4NotificationWidget_Statics::NewProp_Widget_LastChance = { "Widget_LastChance", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UC4NotificationWidget, Widget_LastChance), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Widget_LastChance_MetaData), NewProp_Widget_LastChance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UC4NotificationWidget_Statics::NewProp_Anim_Notify = { "Anim_Notify", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UC4NotificationWidget, Anim_Notify), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Anim_Notify_MetaData), NewProp_Anim_Notify_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UC4NotificationWidget_Statics::NewProp_NotificationSound = { "NotificationSound", nullptr, (EPropertyFlags)0x0124080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UC4NotificationWidget, NotificationSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NotificationSound_MetaData), NewProp_NotificationSound_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UC4NotificationWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UC4NotificationWidget_Statics::NewProp_TextBlock_Notification,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UC4NotificationWidget_Statics::NewProp_TextBlock_TurnStatus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UC4NotificationWidget_Statics::NewProp_Widget_LastChance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UC4NotificationWidget_Statics::NewProp_Anim_Notify,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UC4NotificationWidget_Statics::NewProp_NotificationSound,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UC4NotificationWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UC4NotificationWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UC4UserWidgetBase,
	(UObject* (*)())Z_Construct_UPackage__Script_C4Project,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UC4NotificationWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UC4NotificationWidget_Statics::ClassParams = {
	&UC4NotificationWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UC4NotificationWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UC4NotificationWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UC4NotificationWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UC4NotificationWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UC4NotificationWidget()
{
	if (!Z_Registration_Info_UClass_UC4NotificationWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UC4NotificationWidget.OuterSingleton, Z_Construct_UClass_UC4NotificationWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UC4NotificationWidget.OuterSingleton;
}
template<> C4PROJECT_API UClass* StaticClass<UC4NotificationWidget>()
{
	return UC4NotificationWidget::StaticClass();
}
UC4NotificationWidget::UC4NotificationWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UC4NotificationWidget);
UC4NotificationWidget::~UC4NotificationWidget() {}
// End Class UC4NotificationWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_C4Project_Source_C4Project_Public_UI_C4NotificationWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UC4NotificationWidget, UC4NotificationWidget::StaticClass, TEXT("UC4NotificationWidget"), &Z_Registration_Info_UClass_UC4NotificationWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UC4NotificationWidget), 3961636597U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_C4Project_Source_C4Project_Public_UI_C4NotificationWidget_h_1560748294(TEXT("/Script/C4Project"),
	Z_CompiledInDeferFile_FID_C4Project_Source_C4Project_Public_UI_C4NotificationWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_C4Project_Source_C4Project_Public_UI_C4NotificationWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
