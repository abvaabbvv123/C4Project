// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "C4Project/Public/UI/C4ChatInput.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC4ChatInput() {}

// Begin Cross Module References
C4PROJECT_API UClass* Z_Construct_UClass_UC4ChatInput();
C4PROJECT_API UClass* Z_Construct_UClass_UC4ChatInput_NoRegister();
C4PROJECT_API UClass* Z_Construct_UClass_UC4UserWidgetBase();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ETextCommit();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateFontInfo();
UMG_API UClass* Z_Construct_UClass_UEditableTextBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UScrollBox_NoRegister();
UPackage* Z_Construct_UPackage__Script_C4Project();
// End Cross Module References

// Begin Class UC4ChatInput Function HandleChatMessageReceived
struct Z_Construct_UFunction_UC4ChatInput_HandleChatMessageReceived_Statics
{
	struct C4ChatInput_eventHandleChatMessageReceived_Parms
	{
		FString InMessage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x84\x9c\xeb\xb2\x84\xea\xb0\x80 \xeb\xb3\xb4\xeb\x82\xb8 \xec\xb1\x84\xed\x8c\x85 \xed\x95\x9c \xec\xa4\x84\xec\x9d\x84 \xeb\xa1\x9c\xea\xb7\xb8(ScrollBox)\xec\x97\x90 \xec\xb6\x94\xea\xb0\x80\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/C4ChatInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x84\x9c\xeb\xb2\x84\xea\xb0\x80 \xeb\xb3\xb4\xeb\x82\xb8 \xec\xb1\x84\xed\x8c\x85 \xed\x95\x9c \xec\xa4\x84\xec\x9d\x84 \xeb\xa1\x9c\xea\xb7\xb8(ScrollBox)\xec\x97\x90 \xec\xb6\x94\xea\xb0\x80" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UC4ChatInput_HandleChatMessageReceived_Statics::NewProp_InMessage = { "InMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C4ChatInput_eventHandleChatMessageReceived_Parms, InMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InMessage_MetaData), NewProp_InMessage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UC4ChatInput_HandleChatMessageReceived_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC4ChatInput_HandleChatMessageReceived_Statics::NewProp_InMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UC4ChatInput_HandleChatMessageReceived_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UC4ChatInput_HandleChatMessageReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UC4ChatInput, nullptr, "HandleChatMessageReceived", nullptr, nullptr, Z_Construct_UFunction_UC4ChatInput_HandleChatMessageReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UC4ChatInput_HandleChatMessageReceived_Statics::PropPointers), sizeof(Z_Construct_UFunction_UC4ChatInput_HandleChatMessageReceived_Statics::C4ChatInput_eventHandleChatMessageReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UC4ChatInput_HandleChatMessageReceived_Statics::Function_MetaDataParams), Z_Construct_UFunction_UC4ChatInput_HandleChatMessageReceived_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UC4ChatInput_HandleChatMessageReceived_Statics::C4ChatInput_eventHandleChatMessageReceived_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UC4ChatInput_HandleChatMessageReceived()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UC4ChatInput_HandleChatMessageReceived_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UC4ChatInput::execHandleChatMessageReceived)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InMessage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleChatMessageReceived(Z_Param_InMessage);
	P_NATIVE_END;
}
// End Class UC4ChatInput Function HandleChatMessageReceived

// Begin Class UC4ChatInput Function OnChatInputTextCommitted
struct Z_Construct_UFunction_UC4ChatInput_OnChatInputTextCommitted_Statics
{
	struct C4ChatInput_eventOnChatInputTextCommitted_Parms
	{
		FText Text;
		TEnumAsByte<ETextCommit::Type> CommitMethod;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x9e\x85\xeb\xa0\xa5\xec\xb0\xbd\xec\x97\x90\xec\x84\x9c Enter \xe2\x86\x92 \xea\xb3\xb5\xeb\xb0\xb1 \xec\xa0\x9c\xea\xb1\xb0 \xed\x9b\x84 \xec\x84\x9c\xeb\xb2\x84\xeb\xa1\x9c \xec\xa0\x9c\xec\xb6\x9c\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/C4ChatInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x9e\x85\xeb\xa0\xa5\xec\xb0\xbd\xec\x97\x90\xec\x84\x9c Enter \xe2\x86\x92 \xea\xb3\xb5\xeb\xb0\xb1 \xec\xa0\x9c\xea\xb1\xb0 \xed\x9b\x84 \xec\x84\x9c\xeb\xb2\x84\xeb\xa1\x9c \xec\xa0\x9c\xec\xb6\x9c" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CommitMethod;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UC4ChatInput_OnChatInputTextCommitted_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C4ChatInput_eventOnChatInputTextCommitted_Parms, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UC4ChatInput_OnChatInputTextCommitted_Statics::NewProp_CommitMethod = { "CommitMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C4ChatInput_eventOnChatInputTextCommitted_Parms, CommitMethod), Z_Construct_UEnum_SlateCore_ETextCommit, METADATA_PARAMS(0, nullptr) }; // 1817921380
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UC4ChatInput_OnChatInputTextCommitted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC4ChatInput_OnChatInputTextCommitted_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC4ChatInput_OnChatInputTextCommitted_Statics::NewProp_CommitMethod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UC4ChatInput_OnChatInputTextCommitted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UC4ChatInput_OnChatInputTextCommitted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UC4ChatInput, nullptr, "OnChatInputTextCommitted", nullptr, nullptr, Z_Construct_UFunction_UC4ChatInput_OnChatInputTextCommitted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UC4ChatInput_OnChatInputTextCommitted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UC4ChatInput_OnChatInputTextCommitted_Statics::C4ChatInput_eventOnChatInputTextCommitted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UC4ChatInput_OnChatInputTextCommitted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UC4ChatInput_OnChatInputTextCommitted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UC4ChatInput_OnChatInputTextCommitted_Statics::C4ChatInput_eventOnChatInputTextCommitted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UC4ChatInput_OnChatInputTextCommitted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UC4ChatInput_OnChatInputTextCommitted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UC4ChatInput::execOnChatInputTextCommitted)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Text);
	P_GET_PROPERTY(FByteProperty,Z_Param_CommitMethod);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnChatInputTextCommitted(Z_Param_Out_Text,ETextCommit::Type(Z_Param_CommitMethod));
	P_NATIVE_END;
}
// End Class UC4ChatInput Function OnChatInputTextCommitted

// Begin Class UC4ChatInput
void UC4ChatInput::StaticRegisterNativesUC4ChatInput()
{
	UClass* Class = UC4ChatInput::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleChatMessageReceived", &UC4ChatInput::execHandleChatMessageReceived },
		{ "OnChatInputTextCommitted", &UC4ChatInput::execOnChatInputTextCommitted },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UC4ChatInput);
UClass* Z_Construct_UClass_UC4ChatInput_NoRegister()
{
	return UC4ChatInput::StaticClass();
}
struct Z_Construct_UClass_UC4ChatInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xec\xb1\x84\xed\x8c\x85 \xec\x9c\x84\xec\xa0\xaf (WBP_Chat\xec\x9d\x98 \xeb\xb6\x80\xeb\xaa\xa8)\n * - \xea\xb2\x8c\xec\x9e\x84\xec\x9d\x98 \"\xec\x9c\xa0\xec\x9d\xbc\xed\x95\x9c \xec\x9e\x85\xeb\xa0\xa5\xec\xb0\xbd\": \xec\xb1\x84\xed\x8c\x85 / \xec\x8b\x9c\xed\x81\xac\xeb\xa6\xbf \xeb\x93\xb1\xeb\xa1\x9d / \xec\xa0\x95\xeb\x8b\xb5 \xec\xb6\x94\xec\xb8\xa1\xec\x9d\x84 \xeb\xaa\xa8\xeb\x91\x90 \xec\x9d\xb4 \xec\x9e\x85\xeb\xa0\xa5\xec\xb0\xbd \xed\x95\x98\xeb\x82\x98\xeb\xa1\x9c \xeb\xb0\x9b\xeb\x8a\x94\xeb\x8b\xa4\n * - \xed\x81\xb4\xeb\x9d\xbc\xec\x9d\xb4\xec\x96\xb8\xed\x8a\xb8\xeb\x8a\x94 \xec\x9e\x85\xeb\xa0\xa5\xec\x9d\x98 \xec\x9d\x98\xeb\xaf\xb8\xeb\xa5\xbc \xed\x8c\x90\xeb\x8b\xa8\xed\x95\x98\xec\xa7\x80 \xec\x95\x8a\xea\xb3\xa0 \xec\x9b\x90\xeb\xac\xb8\xec\x9d\x84 \xec\x84\x9c\xeb\xb2\x84\xeb\xa1\x9c \xeb\xb3\xb4\xeb\x82\xb8\xeb\x8b\xa4 (\xed\x8c\x90\xeb\x8b\xa8\xec\x9d\x80 \xec\x84\x9c\xeb\xb2\x84 GameMode::HandlePlayerInput)\n * - \xec\x84\x9c\xeb\xb2\x84\xea\xb0\x80 \xeb\xb3\xb4\xeb\x82\xb8 \xec\xb1\x84\xed\x8c\x85(\xec\x9d\xbc\xeb\xb0\x98 \xec\xb1\x84\xed\x8c\x85 + [SYSTEM] \xeb\xa9\x94\xec\x8b\x9c\xec\xa7\x80)\xec\x9d\x84 \xeb\xa1\x9c\xea\xb7\xb8\xeb\xa1\x9c \xed\x91\x9c\xec\x8b\x9c\xed\x95\x9c\xeb\x8b\xa4\n */" },
#endif
		{ "IncludePath", "UI/C4ChatInput.h" },
		{ "ModuleRelativePath", "Public/UI/C4ChatInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xb1\x84\xed\x8c\x85 \xec\x9c\x84\xec\xa0\xaf (WBP_Chat\xec\x9d\x98 \xeb\xb6\x80\xeb\xaa\xa8)\n- \xea\xb2\x8c\xec\x9e\x84\xec\x9d\x98 \"\xec\x9c\xa0\xec\x9d\xbc\xed\x95\x9c \xec\x9e\x85\xeb\xa0\xa5\xec\xb0\xbd\": \xec\xb1\x84\xed\x8c\x85 / \xec\x8b\x9c\xed\x81\xac\xeb\xa6\xbf \xeb\x93\xb1\xeb\xa1\x9d / \xec\xa0\x95\xeb\x8b\xb5 \xec\xb6\x94\xec\xb8\xa1\xec\x9d\x84 \xeb\xaa\xa8\xeb\x91\x90 \xec\x9d\xb4 \xec\x9e\x85\xeb\xa0\xa5\xec\xb0\xbd \xed\x95\x98\xeb\x82\x98\xeb\xa1\x9c \xeb\xb0\x9b\xeb\x8a\x94\xeb\x8b\xa4\n- \xed\x81\xb4\xeb\x9d\xbc\xec\x9d\xb4\xec\x96\xb8\xed\x8a\xb8\xeb\x8a\x94 \xec\x9e\x85\xeb\xa0\xa5\xec\x9d\x98 \xec\x9d\x98\xeb\xaf\xb8\xeb\xa5\xbc \xed\x8c\x90\xeb\x8b\xa8\xed\x95\x98\xec\xa7\x80 \xec\x95\x8a\xea\xb3\xa0 \xec\x9b\x90\xeb\xac\xb8\xec\x9d\x84 \xec\x84\x9c\xeb\xb2\x84\xeb\xa1\x9c \xeb\xb3\xb4\xeb\x82\xb8\xeb\x8b\xa4 (\xed\x8c\x90\xeb\x8b\xa8\xec\x9d\x80 \xec\x84\x9c\xeb\xb2\x84 GameMode::HandlePlayerInput)\n- \xec\x84\x9c\xeb\xb2\x84\xea\xb0\x80 \xeb\xb3\xb4\xeb\x82\xb8 \xec\xb1\x84\xed\x8c\x85(\xec\x9d\xbc\xeb\xb0\x98 \xec\xb1\x84\xed\x8c\x85 + [SYSTEM] \xeb\xa9\x94\xec\x8b\x9c\xec\xa7\x80)\xec\x9d\x84 \xeb\xa1\x9c\xea\xb7\xb8\xeb\xa1\x9c \xed\x91\x9c\xec\x8b\x9c\xed\x95\x9c\xeb\x8b\xa4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditableTextBox_ChatInput_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// WBP\xec\x97\x90 \xea\xb0\x99\xec\x9d\x80 \xec\x9d\xb4\xeb\xa6\x84\xec\x9d\x98 \xec\x9c\x84\xec\xa0\xaf\xec\x9d\xb4 \xeb\xb0\x98\xeb\x93\x9c\xec\x8b\x9c \xec\x9e\x88\xec\x96\xb4\xec\x95\xbc \xed\x95\xa8 (BindWidget)\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/C4ChatInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "WBP\xec\x97\x90 \xea\xb0\x99\xec\x9d\x80 \xec\x9d\xb4\xeb\xa6\x84\xec\x9d\x98 \xec\x9c\x84\xec\xa0\xaf\xec\x9d\xb4 \xeb\xb0\x98\xeb\x93\x9c\xec\x8b\x9c \xec\x9e\x88\xec\x96\xb4\xec\x95\xbc \xed\x95\xa8 (BindWidget)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScrollBox_ChatLog_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xed\x86\xb5\xed\x95\xa9 \xec\x9e\x85\xeb\xa0\xa5\xec\xb0\xbd\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/C4ChatInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x86\xb5\xed\x95\xa9 \xec\x9e\x85\xeb\xa0\xa5\xec\xb0\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxChatLines_MetaData[] = {
		{ "Category", "Chat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xeb\xa1\x9c\xea\xb7\xb8 \xec\xb5\x9c\xeb\x8c\x80 \xec\xa4\x84 \xec\x88\x98. \xeb\x84\x98\xec\x9c\xbc\xeb\xa9\xb4 \xea\xb0\x80\xec\x9e\xa5 \xec\x98\xa4\xeb\x9e\x98\xeb\x90\x9c \xec\xa4\x84\xec\x9d\x84 \xec\x9e\xac\xed\x99\x9c\xec\x9a\xa9 (\xec\x9c\x84\xec\xa0\xaf\xec\x9d\xb4 \xeb\xac\xb4\xed\x95\x9c\xed\x9e\x88 \xeb\x8a\x98\xec\x96\xb4\xeb\x82\x98\xeb\x8a\x94 \xea\xb2\x83 \xeb\xb0\xa9\xec\xa7\x80)\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/C4ChatInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xa1\x9c\xea\xb7\xb8 \xec\xb5\x9c\xeb\x8c\x80 \xec\xa4\x84 \xec\x88\x98. \xeb\x84\x98\xec\x9c\xbc\xeb\xa9\xb4 \xea\xb0\x80\xec\x9e\xa5 \xec\x98\xa4\xeb\x9e\x98\xeb\x90\x9c \xec\xa4\x84\xec\x9d\x84 \xec\x9e\xac\xed\x99\x9c\xec\x9a\xa9 (\xec\x9c\x84\xec\xa0\xaf\xec\x9d\xb4 \xeb\xac\xb4\xed\x95\x9c\xed\x9e\x88 \xeb\x8a\x98\xec\x96\xb4\xeb\x82\x98\xeb\x8a\x94 \xea\xb2\x83 \xeb\xb0\xa9\xec\xa7\x80)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChatFont_MetaData[] = {
		{ "Category", "Chat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xbd\x94\xeb\x93\x9c\xeb\xa1\x9c \xec\x83\x9d\xec\x84\xb1\xeb\x90\x98\xeb\x8a\x94 \xec\xb1\x84\xed\x8c\x85 \xec\xa4\x84\xec\x97\x90 \xec\xa0\x81\xec\x9a\xa9\xed\x95\xa0 \xed\x8f\xb0\xed\x8a\xb8 (WBP Class Defaults\xec\x97\x90\xec\x84\x9c \xeb\xb3\x80\xea\xb2\xbd \xea\xb0\x80\xeb\x8a\xa5)\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/C4ChatInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xbd\x94\xeb\x93\x9c\xeb\xa1\x9c \xec\x83\x9d\xec\x84\xb1\xeb\x90\x98\xeb\x8a\x94 \xec\xb1\x84\xed\x8c\x85 \xec\xa4\x84\xec\x97\x90 \xec\xa0\x81\xec\x9a\xa9\xed\x95\xa0 \xed\x8f\xb0\xed\x8a\xb8 (WBP Class Defaults\xec\x97\x90\xec\x84\x9c \xeb\xb3\x80\xea\xb2\xbd \xea\xb0\x80\xeb\x8a\xa5)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EditableTextBox_ChatInput;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ScrollBox_ChatLog;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxChatLines;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChatFont;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UC4ChatInput_HandleChatMessageReceived, "HandleChatMessageReceived" }, // 4051204845
		{ &Z_Construct_UFunction_UC4ChatInput_OnChatInputTextCommitted, "OnChatInputTextCommitted" }, // 1976542090
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UC4ChatInput>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UC4ChatInput_Statics::NewProp_EditableTextBox_ChatInput = { "EditableTextBox_ChatInput", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UC4ChatInput, EditableTextBox_ChatInput), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditableTextBox_ChatInput_MetaData), NewProp_EditableTextBox_ChatInput_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UC4ChatInput_Statics::NewProp_ScrollBox_ChatLog = { "ScrollBox_ChatLog", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UC4ChatInput, ScrollBox_ChatLog), Z_Construct_UClass_UScrollBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScrollBox_ChatLog_MetaData), NewProp_ScrollBox_ChatLog_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UC4ChatInput_Statics::NewProp_MaxChatLines = { "MaxChatLines", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UC4ChatInput, MaxChatLines), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxChatLines_MetaData), NewProp_MaxChatLines_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UC4ChatInput_Statics::NewProp_ChatFont = { "ChatFont", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UC4ChatInput, ChatFont), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChatFont_MetaData), NewProp_ChatFont_MetaData) }; // 1633227880
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UC4ChatInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UC4ChatInput_Statics::NewProp_EditableTextBox_ChatInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UC4ChatInput_Statics::NewProp_ScrollBox_ChatLog,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UC4ChatInput_Statics::NewProp_MaxChatLines,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UC4ChatInput_Statics::NewProp_ChatFont,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UC4ChatInput_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UC4ChatInput_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UC4UserWidgetBase,
	(UObject* (*)())Z_Construct_UPackage__Script_C4Project,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UC4ChatInput_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UC4ChatInput_Statics::ClassParams = {
	&UC4ChatInput::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UC4ChatInput_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UC4ChatInput_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UC4ChatInput_Statics::Class_MetaDataParams), Z_Construct_UClass_UC4ChatInput_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UC4ChatInput()
{
	if (!Z_Registration_Info_UClass_UC4ChatInput.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UC4ChatInput.OuterSingleton, Z_Construct_UClass_UC4ChatInput_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UC4ChatInput.OuterSingleton;
}
template<> C4PROJECT_API UClass* StaticClass<UC4ChatInput>()
{
	return UC4ChatInput::StaticClass();
}
UC4ChatInput::UC4ChatInput(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UC4ChatInput);
UC4ChatInput::~UC4ChatInput() {}
// End Class UC4ChatInput

// Begin Registration
struct Z_CompiledInDeferFile_FID_C4Project_Source_C4Project_Public_UI_C4ChatInput_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UC4ChatInput, UC4ChatInput::StaticClass, TEXT("UC4ChatInput"), &Z_Registration_Info_UClass_UC4ChatInput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UC4ChatInput), 749441663U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_C4Project_Source_C4Project_Public_UI_C4ChatInput_h_755208609(TEXT("/Script/C4Project"),
	Z_CompiledInDeferFile_FID_C4Project_Source_C4Project_Public_UI_C4ChatInput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_C4Project_Source_C4Project_Public_UI_C4ChatInput_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
