// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "C4Project/Public/GameSystem/C4PlayerController.h"
#include "C4Project/Public/C4Type.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC4PlayerController() {}

// Begin Cross Module References
C4PROJECT_API UClass* Z_Construct_UClass_AC4PlayerController();
C4PROJECT_API UClass* Z_Construct_UClass_AC4PlayerController_NoRegister();
C4PROJECT_API UClass* Z_Construct_UClass_UC4ChatInput_NoRegister();
C4PROJECT_API UClass* Z_Construct_UClass_UC4SecretInput_NoRegister();
C4PROJECT_API UFunction* Z_Construct_UDelegateFunction_C4Project_OnC4StringChanged__DelegateSignature();
C4PROJECT_API UFunction* Z_Construct_UDelegateFunction_C4Project_OnC4TextEvent__DelegateSignature();
C4PROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FC4Notification();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_C4Project();
// End Cross Module References

// Begin Class AC4PlayerController Function ClientRPCReceiveChatMessage
struct C4PlayerController_eventClientRPCReceiveChatMessage_Parms
{
	FString InChatMessageString;
};
static const FName NAME_AC4PlayerController_ClientRPCReceiveChatMessage = FName(TEXT("ClientRPCReceiveChatMessage"));
void AC4PlayerController::ClientRPCReceiveChatMessage(const FString& InChatMessageString)
{
	C4PlayerController_eventClientRPCReceiveChatMessage_Parms Parms;
	Parms.InChatMessageString=InChatMessageString;
	UFunction* Func = FindFunctionChecked(NAME_AC4PlayerController_ClientRPCReceiveChatMessage);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AC4PlayerController_ClientRPCReceiveChatMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Server\n" },
#endif
		{ "ModuleRelativePath", "Public/GameSystem/C4PlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Server" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InChatMessageString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InChatMessageString;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AC4PlayerController_ClientRPCReceiveChatMessage_Statics::NewProp_InChatMessageString = { "InChatMessageString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C4PlayerController_eventClientRPCReceiveChatMessage_Parms, InChatMessageString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InChatMessageString_MetaData), NewProp_InChatMessageString_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC4PlayerController_ClientRPCReceiveChatMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC4PlayerController_ClientRPCReceiveChatMessage_Statics::NewProp_InChatMessageString,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AC4PlayerController_ClientRPCReceiveChatMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC4PlayerController_ClientRPCReceiveChatMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC4PlayerController, nullptr, "ClientRPCReceiveChatMessage", nullptr, nullptr, Z_Construct_UFunction_AC4PlayerController_ClientRPCReceiveChatMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC4PlayerController_ClientRPCReceiveChatMessage_Statics::PropPointers), sizeof(C4PlayerController_eventClientRPCReceiveChatMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AC4PlayerController_ClientRPCReceiveChatMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AC4PlayerController_ClientRPCReceiveChatMessage_Statics::Function_MetaDataParams) };
static_assert(sizeof(C4PlayerController_eventClientRPCReceiveChatMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AC4PlayerController_ClientRPCReceiveChatMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC4PlayerController_ClientRPCReceiveChatMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AC4PlayerController::execClientRPCReceiveChatMessage)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InChatMessageString);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientRPCReceiveChatMessage_Implementation(Z_Param_InChatMessageString);
	P_NATIVE_END;
}
// End Class AC4PlayerController Function ClientRPCReceiveChatMessage

// Begin Class AC4PlayerController Function OnRepNotification
struct Z_Construct_UFunction_AC4PlayerController_OnRepNotification_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameSystem/C4PlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC4PlayerController_OnRepNotification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC4PlayerController, nullptr, "OnRepNotification", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AC4PlayerController_OnRepNotification_Statics::Function_MetaDataParams), Z_Construct_UFunction_AC4PlayerController_OnRepNotification_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AC4PlayerController_OnRepNotification()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC4PlayerController_OnRepNotification_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AC4PlayerController::execOnRepNotification)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRepNotification();
	P_NATIVE_END;
}
// End Class AC4PlayerController Function OnRepNotification

// Begin Class AC4PlayerController Function OnRepOwnSecretNumber
struct Z_Construct_UFunction_AC4PlayerController_OnRepOwnSecretNumber_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameSystem/C4PlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC4PlayerController_OnRepOwnSecretNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC4PlayerController, nullptr, "OnRepOwnSecretNumber", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AC4PlayerController_OnRepOwnSecretNumber_Statics::Function_MetaDataParams), Z_Construct_UFunction_AC4PlayerController_OnRepOwnSecretNumber_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AC4PlayerController_OnRepOwnSecretNumber()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC4PlayerController_OnRepOwnSecretNumber_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AC4PlayerController::execOnRepOwnSecretNumber)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRepOwnSecretNumber();
	P_NATIVE_END;
}
// End Class AC4PlayerController Function OnRepOwnSecretNumber

// Begin Class AC4PlayerController Function ServerRPCSubmitInput
struct C4PlayerController_eventServerRPCSubmitInput_Parms
{
	FString InRawInput;
};
static const FName NAME_AC4PlayerController_ServerRPCSubmitInput = FName(TEXT("ServerRPCSubmitInput"));
void AC4PlayerController::ServerRPCSubmitInput(const FString& InRawInput)
{
	C4PlayerController_eventServerRPCSubmitInput_Parms Parms;
	Parms.InRawInput=InRawInput;
	UFunction* Func = FindFunctionChecked(NAME_AC4PlayerController_ServerRPCSubmitInput);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AC4PlayerController_ServerRPCSubmitInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UFUNCTION(Server, Reliable)\n//void ServerRPCSubmitSecret(const FString& InSecret);\n" },
#endif
		{ "ModuleRelativePath", "Public/GameSystem/C4PlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UFUNCTION(Server, Reliable)\nvoid ServerRPCSubmitSecret(const FString& InSecret);" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InRawInput_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InRawInput;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AC4PlayerController_ServerRPCSubmitInput_Statics::NewProp_InRawInput = { "InRawInput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C4PlayerController_eventServerRPCSubmitInput_Parms, InRawInput), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InRawInput_MetaData), NewProp_InRawInput_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC4PlayerController_ServerRPCSubmitInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC4PlayerController_ServerRPCSubmitInput_Statics::NewProp_InRawInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AC4PlayerController_ServerRPCSubmitInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC4PlayerController_ServerRPCSubmitInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC4PlayerController, nullptr, "ServerRPCSubmitInput", nullptr, nullptr, Z_Construct_UFunction_AC4PlayerController_ServerRPCSubmitInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC4PlayerController_ServerRPCSubmitInput_Statics::PropPointers), sizeof(C4PlayerController_eventServerRPCSubmitInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AC4PlayerController_ServerRPCSubmitInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_AC4PlayerController_ServerRPCSubmitInput_Statics::Function_MetaDataParams) };
static_assert(sizeof(C4PlayerController_eventServerRPCSubmitInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AC4PlayerController_ServerRPCSubmitInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC4PlayerController_ServerRPCSubmitInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AC4PlayerController::execServerRPCSubmitInput)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InRawInput);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerRPCSubmitInput_Implementation(Z_Param_InRawInput);
	P_NATIVE_END;
}
// End Class AC4PlayerController Function ServerRPCSubmitInput

// Begin Class AC4PlayerController
void AC4PlayerController::StaticRegisterNativesAC4PlayerController()
{
	UClass* Class = AC4PlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClientRPCReceiveChatMessage", &AC4PlayerController::execClientRPCReceiveChatMessage },
		{ "OnRepNotification", &AC4PlayerController::execOnRepNotification },
		{ "OnRepOwnSecretNumber", &AC4PlayerController::execOnRepOwnSecretNumber },
		{ "ServerRPCSubmitInput", &AC4PlayerController::execServerRPCSubmitInput },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AC4PlayerController);
UClass* Z_Construct_UClass_AC4PlayerController_NoRegister()
{
	return AC4PlayerController::StaticClass();
}
struct Z_Construct_UClass_AC4PlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "GameSystem/C4PlayerController.h" },
		{ "ModuleRelativePath", "Public/GameSystem/C4PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NotificationText_MetaData[] = {
		{ "Category", "C4PlayerController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// for client\n" },
#endif
		{ "ModuleRelativePath", "Public/GameSystem/C4PlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "for client" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnNotificationChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameSystem/C4PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnOwnSecretChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameSystem/C4PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnChatMessageReceived_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UFUNCTION(Server, Reliable)\n//void ServerRPCPrintChatMessageString(const FString& InChatMessageString);\n" },
#endif
		{ "ModuleRelativePath", "Public/GameSystem/C4PlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UFUNCTION(Server, Reliable)\nvoid ServerRPCPrintChatMessageString(const FString& InChatMessageString);" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChatInputWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/GameSystem/C4PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChatInputWidgetInstance_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameSystem/C4PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NotificationTextWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/GameSystem/C4PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NotificationTextWidgetInstance_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameSystem/C4PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecretInputWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/GameSystem/C4PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecretInputWidgetInstance_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameSystem/C4PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainHUDWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/GameSystem/C4PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainHUDWidgetInstance_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameSystem/C4PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Notification_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameSystem/C4PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnSecretNumber_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameSystem/C4PlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_NotificationText;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNotificationChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnOwnSecretChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChatMessageReceived;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ChatInputWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChatInputWidgetInstance;
	static const UECodeGen_Private::FClassPropertyParams NewProp_NotificationTextWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NotificationTextWidgetInstance;
	static const UECodeGen_Private::FClassPropertyParams NewProp_SecretInputWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SecretInputWidgetInstance;
	static const UECodeGen_Private::FClassPropertyParams NewProp_MainHUDWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainHUDWidgetInstance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Notification;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OwnSecretNumber;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AC4PlayerController_ClientRPCReceiveChatMessage, "ClientRPCReceiveChatMessage" }, // 3496214353
		{ &Z_Construct_UFunction_AC4PlayerController_OnRepNotification, "OnRepNotification" }, // 1040455901
		{ &Z_Construct_UFunction_AC4PlayerController_OnRepOwnSecretNumber, "OnRepOwnSecretNumber" }, // 3924124975
		{ &Z_Construct_UFunction_AC4PlayerController_ServerRPCSubmitInput, "ServerRPCSubmitInput" }, // 2823611060
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC4PlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_AC4PlayerController_Statics::NewProp_NotificationText = { "NotificationText", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC4PlayerController, NotificationText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NotificationText_MetaData), NewProp_NotificationText_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AC4PlayerController_Statics::NewProp_OnNotificationChanged = { "OnNotificationChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC4PlayerController, OnNotificationChanged), Z_Construct_UDelegateFunction_C4Project_OnC4TextEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnNotificationChanged_MetaData), NewProp_OnNotificationChanged_MetaData) }; // 259088669
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AC4PlayerController_Statics::NewProp_OnOwnSecretChanged = { "OnOwnSecretChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC4PlayerController, OnOwnSecretChanged), Z_Construct_UDelegateFunction_C4Project_OnC4StringChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnOwnSecretChanged_MetaData), NewProp_OnOwnSecretChanged_MetaData) }; // 2727750658
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AC4PlayerController_Statics::NewProp_OnChatMessageReceived = { "OnChatMessageReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC4PlayerController, OnChatMessageReceived), Z_Construct_UDelegateFunction_C4Project_OnC4StringChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnChatMessageReceived_MetaData), NewProp_OnChatMessageReceived_MetaData) }; // 2727750658
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AC4PlayerController_Statics::NewProp_ChatInputWidgetClass = { "ChatInputWidgetClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC4PlayerController, ChatInputWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UC4ChatInput_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChatInputWidgetClass_MetaData), NewProp_ChatInputWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC4PlayerController_Statics::NewProp_ChatInputWidgetInstance = { "ChatInputWidgetInstance", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC4PlayerController, ChatInputWidgetInstance), Z_Construct_UClass_UC4ChatInput_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChatInputWidgetInstance_MetaData), NewProp_ChatInputWidgetInstance_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AC4PlayerController_Statics::NewProp_NotificationTextWidgetClass = { "NotificationTextWidgetClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC4PlayerController, NotificationTextWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NotificationTextWidgetClass_MetaData), NewProp_NotificationTextWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC4PlayerController_Statics::NewProp_NotificationTextWidgetInstance = { "NotificationTextWidgetInstance", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC4PlayerController, NotificationTextWidgetInstance), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NotificationTextWidgetInstance_MetaData), NewProp_NotificationTextWidgetInstance_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AC4PlayerController_Statics::NewProp_SecretInputWidgetClass = { "SecretInputWidgetClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC4PlayerController, SecretInputWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UC4SecretInput_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecretInputWidgetClass_MetaData), NewProp_SecretInputWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC4PlayerController_Statics::NewProp_SecretInputWidgetInstance = { "SecretInputWidgetInstance", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC4PlayerController, SecretInputWidgetInstance), Z_Construct_UClass_UC4SecretInput_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecretInputWidgetInstance_MetaData), NewProp_SecretInputWidgetInstance_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AC4PlayerController_Statics::NewProp_MainHUDWidgetClass = { "MainHUDWidgetClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC4PlayerController, MainHUDWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainHUDWidgetClass_MetaData), NewProp_MainHUDWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC4PlayerController_Statics::NewProp_MainHUDWidgetInstance = { "MainHUDWidgetInstance", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC4PlayerController, MainHUDWidgetInstance), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainHUDWidgetInstance_MetaData), NewProp_MainHUDWidgetInstance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AC4PlayerController_Statics::NewProp_Notification = { "Notification", "OnRepNotification", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC4PlayerController, Notification), Z_Construct_UScriptStruct_FC4Notification, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Notification_MetaData), NewProp_Notification_MetaData) }; // 3119847730
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AC4PlayerController_Statics::NewProp_OwnSecretNumber = { "OwnSecretNumber", "OnRepOwnSecretNumber", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC4PlayerController, OwnSecretNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnSecretNumber_MetaData), NewProp_OwnSecretNumber_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AC4PlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC4PlayerController_Statics::NewProp_NotificationText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC4PlayerController_Statics::NewProp_OnNotificationChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC4PlayerController_Statics::NewProp_OnOwnSecretChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC4PlayerController_Statics::NewProp_OnChatMessageReceived,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC4PlayerController_Statics::NewProp_ChatInputWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC4PlayerController_Statics::NewProp_ChatInputWidgetInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC4PlayerController_Statics::NewProp_NotificationTextWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC4PlayerController_Statics::NewProp_NotificationTextWidgetInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC4PlayerController_Statics::NewProp_SecretInputWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC4PlayerController_Statics::NewProp_SecretInputWidgetInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC4PlayerController_Statics::NewProp_MainHUDWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC4PlayerController_Statics::NewProp_MainHUDWidgetInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC4PlayerController_Statics::NewProp_Notification,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC4PlayerController_Statics::NewProp_OwnSecretNumber,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AC4PlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AC4PlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_C4Project,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AC4PlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AC4PlayerController_Statics::ClassParams = {
	&AC4PlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AC4PlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AC4PlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AC4PlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AC4PlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AC4PlayerController()
{
	if (!Z_Registration_Info_UClass_AC4PlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AC4PlayerController.OuterSingleton, Z_Construct_UClass_AC4PlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AC4PlayerController.OuterSingleton;
}
template<> C4PROJECT_API UClass* StaticClass<AC4PlayerController>()
{
	return AC4PlayerController::StaticClass();
}
void AC4PlayerController::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_Notification(TEXT("Notification"));
	static const FName Name_OwnSecretNumber(TEXT("OwnSecretNumber"));
	const bool bIsValid = true
		&& Name_Notification == ClassReps[(int32)ENetFields_Private::Notification].Property->GetFName()
		&& Name_OwnSecretNumber == ClassReps[(int32)ENetFields_Private::OwnSecretNumber].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AC4PlayerController"));
}
AC4PlayerController::AC4PlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AC4PlayerController);
AC4PlayerController::~AC4PlayerController() {}
// End Class AC4PlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_C4Project_Source_C4Project_Public_GameSystem_C4PlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AC4PlayerController, AC4PlayerController::StaticClass, TEXT("AC4PlayerController"), &Z_Registration_Info_UClass_AC4PlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AC4PlayerController), 2458892663U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_C4Project_Source_C4Project_Public_GameSystem_C4PlayerController_h_2740171840(TEXT("/Script/C4Project"),
	Z_CompiledInDeferFile_FID_C4Project_Source_C4Project_Public_GameSystem_C4PlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_C4Project_Source_C4Project_Public_GameSystem_C4PlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
