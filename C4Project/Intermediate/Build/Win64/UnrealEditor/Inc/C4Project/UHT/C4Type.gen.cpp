// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "C4Project/Public/C4Type.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC4Type() {}

// Begin Cross Module References
C4PROJECT_API UEnum* Z_Construct_UEnum_C4Project_EC4GamePhase();
C4PROJECT_API UEnum* Z_Construct_UEnum_C4Project_EC4NotificationType();
C4PROJECT_API UFunction* Z_Construct_UDelegateFunction_C4Project_OnC4BoolChanged__DelegateSignature();
C4PROJECT_API UFunction* Z_Construct_UDelegateFunction_C4Project_OnC4GuessHistoryChanged__DelegateSignature();
C4PROJECT_API UFunction* Z_Construct_UDelegateFunction_C4Project_OnC4PhaseChanged__DelegateSignature();
C4PROJECT_API UFunction* Z_Construct_UDelegateFunction_C4Project_OnC4StringChanged__DelegateSignature();
C4PROJECT_API UFunction* Z_Construct_UDelegateFunction_C4Project_OnC4TextEvent__DelegateSignature();
C4PROJECT_API UFunction* Z_Construct_UDelegateFunction_C4Project_OnC4TurnChanged__DelegateSignature();
C4PROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FC4GuessRecord();
C4PROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FC4Notification();
ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
UPackage* Z_Construct_UPackage__Script_C4Project();
// End Cross Module References

// Begin Delegate FOnC4TurnChanged
struct Z_Construct_UDelegateFunction_C4Project_OnC4TurnChanged__DelegateSignature_Statics
{
	struct _Script_C4Project_eventOnC4TurnChanged_Parms
	{
		APlayerState* TurnPlayer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/C4Type.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TurnPlayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_C4Project_OnC4TurnChanged__DelegateSignature_Statics::NewProp_TurnPlayer = { "TurnPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_C4Project_eventOnC4TurnChanged_Parms, TurnPlayer), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_C4Project_OnC4TurnChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_C4Project_OnC4TurnChanged__DelegateSignature_Statics::NewProp_TurnPlayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_C4Project_OnC4TurnChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_C4Project_OnC4TurnChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_C4Project, nullptr, "OnC4TurnChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_C4Project_OnC4TurnChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_C4Project_OnC4TurnChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_C4Project_OnC4TurnChanged__DelegateSignature_Statics::_Script_C4Project_eventOnC4TurnChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_C4Project_OnC4TurnChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_C4Project_OnC4TurnChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_C4Project_OnC4TurnChanged__DelegateSignature_Statics::_Script_C4Project_eventOnC4TurnChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_C4Project_OnC4TurnChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_C4Project_OnC4TurnChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnC4TurnChanged_DelegateWrapper(const FMulticastScriptDelegate& OnC4TurnChanged, APlayerState* TurnPlayer)
{
	struct _Script_C4Project_eventOnC4TurnChanged_Parms
	{
		APlayerState* TurnPlayer;
	};
	_Script_C4Project_eventOnC4TurnChanged_Parms Parms;
	Parms.TurnPlayer=TurnPlayer;
	OnC4TurnChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnC4TurnChanged

// Begin Delegate FOnC4GuessHistoryChanged
struct Z_Construct_UDelegateFunction_C4Project_OnC4GuessHistoryChanged__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/C4Type.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_C4Project_OnC4GuessHistoryChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_C4Project, nullptr, "OnC4GuessHistoryChanged__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_C4Project_OnC4GuessHistoryChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_C4Project_OnC4GuessHistoryChanged__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_C4Project_OnC4GuessHistoryChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_C4Project_OnC4GuessHistoryChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnC4GuessHistoryChanged_DelegateWrapper(const FMulticastScriptDelegate& OnC4GuessHistoryChanged)
{
	OnC4GuessHistoryChanged.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnC4GuessHistoryChanged

// Begin Enum EC4GamePhase
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EC4GamePhase;
static UEnum* EC4GamePhase_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EC4GamePhase.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EC4GamePhase.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_C4Project_EC4GamePhase, (UObject*)Z_Construct_UPackage__Script_C4Project(), TEXT("EC4GamePhase"));
	}
	return Z_Registration_Info_UEnum_EC4GamePhase.OuterSingleton;
}
template<> C4PROJECT_API UEnum* StaticEnum<EC4GamePhase>()
{
	return EC4GamePhase_StaticEnum();
}
struct Z_Construct_UEnum_C4Project_EC4GamePhase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "GameOver.Comment", "/**\n * \n */" },
		{ "GameOver.Name", "EC4GamePhase::GameOver" },
		{ "ModuleRelativePath", "Public/C4Type.h" },
		{ "Playing.Comment", "/**\n * \n */" },
		{ "Playing.Name", "EC4GamePhase::Playing" },
		{ "SecretSetup.Comment", "/**\n * \n */" },
		{ "SecretSetup.Name", "EC4GamePhase::SecretSetup" },
		{ "WaitingPlayer.Comment", "/**\n * \n */" },
		{ "WaitingPlayer.Name", "EC4GamePhase::WaitingPlayer" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EC4GamePhase::WaitingPlayer", (int64)EC4GamePhase::WaitingPlayer },
		{ "EC4GamePhase::SecretSetup", (int64)EC4GamePhase::SecretSetup },
		{ "EC4GamePhase::Playing", (int64)EC4GamePhase::Playing },
		{ "EC4GamePhase::GameOver", (int64)EC4GamePhase::GameOver },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_C4Project_EC4GamePhase_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_C4Project,
	nullptr,
	"EC4GamePhase",
	"EC4GamePhase",
	Z_Construct_UEnum_C4Project_EC4GamePhase_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_C4Project_EC4GamePhase_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_C4Project_EC4GamePhase_Statics::Enum_MetaDataParams), Z_Construct_UEnum_C4Project_EC4GamePhase_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_C4Project_EC4GamePhase()
{
	if (!Z_Registration_Info_UEnum_EC4GamePhase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EC4GamePhase.InnerSingleton, Z_Construct_UEnum_C4Project_EC4GamePhase_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EC4GamePhase.InnerSingleton;
}
// End Enum EC4GamePhase

// Begin Enum EC4NotificationType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EC4NotificationType;
static UEnum* EC4NotificationType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EC4NotificationType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EC4NotificationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_C4Project_EC4NotificationType, (UObject*)Z_Construct_UPackage__Script_C4Project(), TEXT("EC4NotificationType"));
	}
	return Z_Registration_Info_UEnum_EC4NotificationType.OuterSingleton;
}
template<> C4PROJECT_API UEnum* StaticEnum<EC4NotificationType>()
{
	return EC4NotificationType_StaticEnum();
}
struct Z_Construct_UEnum_C4Project_EC4NotificationType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotEnterSecretNow.Comment", "// Your secret number is already set.\n" },
		{ "CannotEnterSecretNow.Name", "EC4NotificationType::CannotEnterSecretNow" },
		{ "CannotEnterSecretNow.ToolTip", "Your secret number is already set." },
		{ "Connected.Comment", "// Connection\n" },
		{ "Connected.Name", "EC4NotificationType::Connected" },
		{ "Connected.ToolTip", "Connection" },
		{ "Draw.Comment", "// {0} wins!\n" },
		{ "Draw.Name", "EC4NotificationType::Draw" },
		{ "Draw.ToolTip", "{0} wins!" },
		{ "EnterSecret.Comment", "// Your opponent has left. Waiting for a new player...\n// Secret setup\n" },
		{ "EnterSecret.Name", "EC4NotificationType::EnterSecret" },
		{ "EnterSecret.ToolTip", "Your opponent has left. Waiting for a new player...\nSecret setup" },
		{ "GameStart.Comment", "// Your opponent is ready.\n// Playing \n" },
		{ "GameStart.Name", "EC4NotificationType::GameStart" },
		{ "GameStart.ToolTip", "Your opponent is ready.\nPlaying" },
		{ "GuessResult.Comment", "// {0} hit the number! Last chance for the opponent.\n" },
		{ "GuessResult.Name", "EC4NotificationType::GuessResult" },
		{ "GuessResult.ToolTip", "{0} hit the number! Last chance for the opponent." },
		{ "InvalidNumber.Comment", "// Enter your secret number (4 unique digits).\n" },
		{ "InvalidNumber.Name", "EC4NotificationType::InvalidNumber" },
		{ "InvalidNumber.ToolTip", "Enter your secret number (4 unique digits)." },
		{ "LastChance.Comment", "// Opponent's turn.\n" },
		{ "LastChance.Name", "EC4NotificationType::LastChance" },
		{ "LastChance.ToolTip", "Opponent's turn." },
		{ "ModuleRelativePath", "Public/C4Type.h" },
		{ "None.Hidden", "" },
		{ "None.Name", "EC4NotificationType::None" },
		{ "OpponentLeft.Comment", "// Waiting for an opponent...\n" },
		{ "OpponentLeft.Name", "EC4NotificationType::OpponentLeft" },
		{ "OpponentLeft.ToolTip", "Waiting for an opponent..." },
		{ "OpponentReady.Comment", "// You can't enter a secret number right now.\n" },
		{ "OpponentReady.Name", "EC4NotificationType::OpponentReady" },
		{ "OpponentReady.ToolTip", "You can't enter a secret number right now." },
		{ "OpponentTurn.Comment", "// Your turn.\n" },
		{ "OpponentTurn.Name", "EC4NotificationType::OpponentTurn" },
		{ "OpponentTurn.ToolTip", "Your turn." },
		{ "PlayerJoined.Comment", "// Connected to the game server.\n" },
		{ "PlayerJoined.Name", "EC4NotificationType::PlayerJoined" },
		{ "PlayerJoined.ToolTip", "Connected to the game server." },
		{ "Restarting.Comment", "// Draw!\n" },
		{ "Restarting.Name", "EC4NotificationType::Restarting" },
		{ "Restarting.ToolTip", "Draw!" },
		{ "SecretAccepted.Comment", "// Invalid number. Use 4 unique digits (0-9).\n" },
		{ "SecretAccepted.Name", "EC4NotificationType::SecretAccepted" },
		{ "SecretAccepted.ToolTip", "Invalid number. Use 4 unique digits (0-9)." },
		{ "SecretAlreadySet.Comment", "// Secret number registered. Waiting for your opponent...\n" },
		{ "SecretAlreadySet.Name", "EC4NotificationType::SecretAlreadySet" },
		{ "SecretAlreadySet.ToolTip", "Secret number registered. Waiting for your opponent..." },
		{ "WaitingForOpponent.Comment", "// {0} has joined the game.\n" },
		{ "WaitingForOpponent.Name", "EC4NotificationType::WaitingForOpponent" },
		{ "WaitingForOpponent.ToolTip", "{0} has joined the game." },
		{ "Win.Comment", "// Your guess: {0}\n// GameOver\n" },
		{ "Win.Name", "EC4NotificationType::Win" },
		{ "Win.ToolTip", "Your guess: {0}\nGameOver" },
		{ "YourTurn.Comment", "// Game start! {0} goes first.\n" },
		{ "YourTurn.Name", "EC4NotificationType::YourTurn" },
		{ "YourTurn.ToolTip", "Game start! {0} goes first." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EC4NotificationType::None", (int64)EC4NotificationType::None },
		{ "EC4NotificationType::Connected", (int64)EC4NotificationType::Connected },
		{ "EC4NotificationType::PlayerJoined", (int64)EC4NotificationType::PlayerJoined },
		{ "EC4NotificationType::WaitingForOpponent", (int64)EC4NotificationType::WaitingForOpponent },
		{ "EC4NotificationType::OpponentLeft", (int64)EC4NotificationType::OpponentLeft },
		{ "EC4NotificationType::EnterSecret", (int64)EC4NotificationType::EnterSecret },
		{ "EC4NotificationType::InvalidNumber", (int64)EC4NotificationType::InvalidNumber },
		{ "EC4NotificationType::SecretAccepted", (int64)EC4NotificationType::SecretAccepted },
		{ "EC4NotificationType::SecretAlreadySet", (int64)EC4NotificationType::SecretAlreadySet },
		{ "EC4NotificationType::CannotEnterSecretNow", (int64)EC4NotificationType::CannotEnterSecretNow },
		{ "EC4NotificationType::OpponentReady", (int64)EC4NotificationType::OpponentReady },
		{ "EC4NotificationType::GameStart", (int64)EC4NotificationType::GameStart },
		{ "EC4NotificationType::YourTurn", (int64)EC4NotificationType::YourTurn },
		{ "EC4NotificationType::OpponentTurn", (int64)EC4NotificationType::OpponentTurn },
		{ "EC4NotificationType::LastChance", (int64)EC4NotificationType::LastChance },
		{ "EC4NotificationType::GuessResult", (int64)EC4NotificationType::GuessResult },
		{ "EC4NotificationType::Win", (int64)EC4NotificationType::Win },
		{ "EC4NotificationType::Draw", (int64)EC4NotificationType::Draw },
		{ "EC4NotificationType::Restarting", (int64)EC4NotificationType::Restarting },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_C4Project_EC4NotificationType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_C4Project,
	nullptr,
	"EC4NotificationType",
	"EC4NotificationType",
	Z_Construct_UEnum_C4Project_EC4NotificationType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_C4Project_EC4NotificationType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_C4Project_EC4NotificationType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_C4Project_EC4NotificationType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_C4Project_EC4NotificationType()
{
	if (!Z_Registration_Info_UEnum_EC4NotificationType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EC4NotificationType.InnerSingleton, Z_Construct_UEnum_C4Project_EC4NotificationType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EC4NotificationType.InnerSingleton;
}
// End Enum EC4NotificationType

// Begin ScriptStruct FC4Notification
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_C4Notification;
class UScriptStruct* FC4Notification::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_C4Notification.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_C4Notification.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FC4Notification, (UObject*)Z_Construct_UPackage__Script_C4Project(), TEXT("C4Notification"));
	}
	return Z_Registration_Info_UScriptStruct_C4Notification.OuterSingleton;
}
template<> C4PROJECT_API UScriptStruct* StaticStruct<FC4Notification>()
{
	return FC4Notification::StaticStruct();
}
struct Z_Construct_UScriptStruct_FC4Notification_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/C4Type.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/C4Type.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/C4Type.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Serial_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// {0}\n" },
#endif
		{ "ModuleRelativePath", "Public/C4Type.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "{0}" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Serial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FC4Notification>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FC4Notification_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FC4Notification_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FC4Notification, Type), Z_Construct_UEnum_C4Project_EC4NotificationType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 1666936503
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FC4Notification_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FC4Notification, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FC4Notification_Statics::NewProp_Serial = { "Serial", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FC4Notification, Serial), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Serial_MetaData), NewProp_Serial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FC4Notification_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FC4Notification_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FC4Notification_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FC4Notification_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FC4Notification_Statics::NewProp_Serial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FC4Notification_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FC4Notification_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_C4Project,
	nullptr,
	&NewStructOps,
	"C4Notification",
	Z_Construct_UScriptStruct_FC4Notification_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FC4Notification_Statics::PropPointers),
	sizeof(FC4Notification),
	alignof(FC4Notification),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FC4Notification_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FC4Notification_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FC4Notification()
{
	if (!Z_Registration_Info_UScriptStruct_C4Notification.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_C4Notification.InnerSingleton, Z_Construct_UScriptStruct_FC4Notification_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_C4Notification.InnerSingleton;
}
// End ScriptStruct FC4Notification

// Begin ScriptStruct FC4GuessRecord
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_C4GuessRecord;
class UScriptStruct* FC4GuessRecord::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_C4GuessRecord.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_C4GuessRecord.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FC4GuessRecord, (UObject*)Z_Construct_UPackage__Script_C4Project(), TEXT("C4GuessRecord"));
	}
	return Z_Registration_Info_UScriptStruct_C4GuessRecord.OuterSingleton;
}
template<> C4PROJECT_API UScriptStruct* StaticStruct<FC4GuessRecord>()
{
	return FC4GuessRecord::StaticStruct();
}
struct Z_Construct_UScriptStruct_FC4GuessRecord_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/C4Type.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GuessNumber_MetaData[] = {
		{ "Category", "C4GuessRecord" },
		{ "ModuleRelativePath", "Public/C4Type.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Strike_MetaData[] = {
		{ "Category", "C4GuessRecord" },
		{ "ModuleRelativePath", "Public/C4Type.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ball_MetaData[] = {
		{ "Category", "C4GuessRecord" },
		{ "ModuleRelativePath", "Public/C4Type.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Guesser_MetaData[] = {
		{ "Category", "C4GuessRecord" },
		{ "ModuleRelativePath", "Public/C4Type.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_GuessNumber;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Strike;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Ball;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Guesser;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FC4GuessRecord>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FC4GuessRecord_Statics::NewProp_GuessNumber = { "GuessNumber", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FC4GuessRecord, GuessNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GuessNumber_MetaData), NewProp_GuessNumber_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FC4GuessRecord_Statics::NewProp_Strike = { "Strike", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FC4GuessRecord, Strike), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Strike_MetaData), NewProp_Strike_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FC4GuessRecord_Statics::NewProp_Ball = { "Ball", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FC4GuessRecord, Ball), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ball_MetaData), NewProp_Ball_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FC4GuessRecord_Statics::NewProp_Guesser = { "Guesser", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FC4GuessRecord, Guesser), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Guesser_MetaData), NewProp_Guesser_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FC4GuessRecord_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FC4GuessRecord_Statics::NewProp_GuessNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FC4GuessRecord_Statics::NewProp_Strike,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FC4GuessRecord_Statics::NewProp_Ball,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FC4GuessRecord_Statics::NewProp_Guesser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FC4GuessRecord_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FC4GuessRecord_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_C4Project,
	nullptr,
	&NewStructOps,
	"C4GuessRecord",
	Z_Construct_UScriptStruct_FC4GuessRecord_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FC4GuessRecord_Statics::PropPointers),
	sizeof(FC4GuessRecord),
	alignof(FC4GuessRecord),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FC4GuessRecord_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FC4GuessRecord_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FC4GuessRecord()
{
	if (!Z_Registration_Info_UScriptStruct_C4GuessRecord.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_C4GuessRecord.InnerSingleton, Z_Construct_UScriptStruct_FC4GuessRecord_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_C4GuessRecord.InnerSingleton;
}
// End ScriptStruct FC4GuessRecord

// Begin Delegate FOnC4PhaseChanged
struct Z_Construct_UDelegateFunction_C4Project_OnC4PhaseChanged__DelegateSignature_Statics
{
	struct _Script_C4Project_eventOnC4PhaseChanged_Parms
	{
		EC4GamePhase NewPhase;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// delegates\n" },
#endif
		{ "ModuleRelativePath", "Public/C4Type.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "delegates" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewPhase_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewPhase;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_C4Project_OnC4PhaseChanged__DelegateSignature_Statics::NewProp_NewPhase_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_C4Project_OnC4PhaseChanged__DelegateSignature_Statics::NewProp_NewPhase = { "NewPhase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_C4Project_eventOnC4PhaseChanged_Parms, NewPhase), Z_Construct_UEnum_C4Project_EC4GamePhase, METADATA_PARAMS(0, nullptr) }; // 3658021259
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_C4Project_OnC4PhaseChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_C4Project_OnC4PhaseChanged__DelegateSignature_Statics::NewProp_NewPhase_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_C4Project_OnC4PhaseChanged__DelegateSignature_Statics::NewProp_NewPhase,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_C4Project_OnC4PhaseChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_C4Project_OnC4PhaseChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_C4Project, nullptr, "OnC4PhaseChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_C4Project_OnC4PhaseChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_C4Project_OnC4PhaseChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_C4Project_OnC4PhaseChanged__DelegateSignature_Statics::_Script_C4Project_eventOnC4PhaseChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_C4Project_OnC4PhaseChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_C4Project_OnC4PhaseChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_C4Project_OnC4PhaseChanged__DelegateSignature_Statics::_Script_C4Project_eventOnC4PhaseChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_C4Project_OnC4PhaseChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_C4Project_OnC4PhaseChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnC4PhaseChanged_DelegateWrapper(const FMulticastScriptDelegate& OnC4PhaseChanged, EC4GamePhase NewPhase)
{
	struct _Script_C4Project_eventOnC4PhaseChanged_Parms
	{
		EC4GamePhase NewPhase;
	};
	_Script_C4Project_eventOnC4PhaseChanged_Parms Parms;
	Parms.NewPhase=NewPhase;
	OnC4PhaseChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnC4PhaseChanged

// Begin Delegate FOnC4TextEvent
struct Z_Construct_UDelegateFunction_C4Project_OnC4TextEvent__DelegateSignature_Statics
{
	struct _Script_C4Project_eventOnC4TextEvent_Parms
	{
		FText Text;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/C4Type.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UDelegateFunction_C4Project_OnC4TextEvent__DelegateSignature_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_C4Project_eventOnC4TextEvent_Parms, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_C4Project_OnC4TextEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_C4Project_OnC4TextEvent__DelegateSignature_Statics::NewProp_Text,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_C4Project_OnC4TextEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_C4Project_OnC4TextEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_C4Project, nullptr, "OnC4TextEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_C4Project_OnC4TextEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_C4Project_OnC4TextEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_C4Project_OnC4TextEvent__DelegateSignature_Statics::_Script_C4Project_eventOnC4TextEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_C4Project_OnC4TextEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_C4Project_OnC4TextEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_C4Project_OnC4TextEvent__DelegateSignature_Statics::_Script_C4Project_eventOnC4TextEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_C4Project_OnC4TextEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_C4Project_OnC4TextEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnC4TextEvent_DelegateWrapper(const FMulticastScriptDelegate& OnC4TextEvent, FText const& Text)
{
	struct _Script_C4Project_eventOnC4TextEvent_Parms
	{
		FText Text;
	};
	_Script_C4Project_eventOnC4TextEvent_Parms Parms;
	Parms.Text=Text;
	OnC4TextEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnC4TextEvent

// Begin Delegate FOnC4StringChanged
struct Z_Construct_UDelegateFunction_C4Project_OnC4StringChanged__DelegateSignature_Statics
{
	struct _Script_C4Project_eventOnC4StringChanged_Parms
	{
		FString Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/C4Type.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_C4Project_OnC4StringChanged__DelegateSignature_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_C4Project_eventOnC4StringChanged_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_C4Project_OnC4StringChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_C4Project_OnC4StringChanged__DelegateSignature_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_C4Project_OnC4StringChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_C4Project_OnC4StringChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_C4Project, nullptr, "OnC4StringChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_C4Project_OnC4StringChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_C4Project_OnC4StringChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_C4Project_OnC4StringChanged__DelegateSignature_Statics::_Script_C4Project_eventOnC4StringChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_C4Project_OnC4StringChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_C4Project_OnC4StringChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_C4Project_OnC4StringChanged__DelegateSignature_Statics::_Script_C4Project_eventOnC4StringChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_C4Project_OnC4StringChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_C4Project_OnC4StringChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnC4StringChanged_DelegateWrapper(const FMulticastScriptDelegate& OnC4StringChanged, const FString& Value)
{
	struct _Script_C4Project_eventOnC4StringChanged_Parms
	{
		FString Value;
	};
	_Script_C4Project_eventOnC4StringChanged_Parms Parms;
	Parms.Value=Value;
	OnC4StringChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnC4StringChanged

// Begin Delegate FOnC4BoolChanged
struct Z_Construct_UDelegateFunction_C4Project_OnC4BoolChanged__DelegateSignature_Statics
{
	struct _Script_C4Project_eventOnC4BoolChanged_Parms
	{
		bool bValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/C4Type.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_C4Project_OnC4BoolChanged__DelegateSignature_Statics::NewProp_bValue_SetBit(void* Obj)
{
	((_Script_C4Project_eventOnC4BoolChanged_Parms*)Obj)->bValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_C4Project_OnC4BoolChanged__DelegateSignature_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_C4Project_eventOnC4BoolChanged_Parms), &Z_Construct_UDelegateFunction_C4Project_OnC4BoolChanged__DelegateSignature_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_C4Project_OnC4BoolChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_C4Project_OnC4BoolChanged__DelegateSignature_Statics::NewProp_bValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_C4Project_OnC4BoolChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_C4Project_OnC4BoolChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_C4Project, nullptr, "OnC4BoolChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_C4Project_OnC4BoolChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_C4Project_OnC4BoolChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_C4Project_OnC4BoolChanged__DelegateSignature_Statics::_Script_C4Project_eventOnC4BoolChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_C4Project_OnC4BoolChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_C4Project_OnC4BoolChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_C4Project_OnC4BoolChanged__DelegateSignature_Statics::_Script_C4Project_eventOnC4BoolChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_C4Project_OnC4BoolChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_C4Project_OnC4BoolChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnC4BoolChanged_DelegateWrapper(const FMulticastScriptDelegate& OnC4BoolChanged, bool bValue)
{
	struct _Script_C4Project_eventOnC4BoolChanged_Parms
	{
		bool bValue;
	};
	_Script_C4Project_eventOnC4BoolChanged_Parms Parms;
	Parms.bValue=bValue ? true : false;
	OnC4BoolChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnC4BoolChanged

// Begin Registration
struct Z_CompiledInDeferFile_FID_C4Project_Source_C4Project_Public_C4Type_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EC4GamePhase_StaticEnum, TEXT("EC4GamePhase"), &Z_Registration_Info_UEnum_EC4GamePhase, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3658021259U) },
		{ EC4NotificationType_StaticEnum, TEXT("EC4NotificationType"), &Z_Registration_Info_UEnum_EC4NotificationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1666936503U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FC4Notification::StaticStruct, Z_Construct_UScriptStruct_FC4Notification_Statics::NewStructOps, TEXT("C4Notification"), &Z_Registration_Info_UScriptStruct_C4Notification, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FC4Notification), 3119847730U) },
		{ FC4GuessRecord::StaticStruct, Z_Construct_UScriptStruct_FC4GuessRecord_Statics::NewStructOps, TEXT("C4GuessRecord"), &Z_Registration_Info_UScriptStruct_C4GuessRecord, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FC4GuessRecord), 3013400007U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_C4Project_Source_C4Project_Public_C4Type_h_262364842(TEXT("/Script/C4Project"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_C4Project_Source_C4Project_Public_C4Type_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_C4Project_Source_C4Project_Public_C4Type_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_C4Project_Source_C4Project_Public_C4Type_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_C4Project_Source_C4Project_Public_C4Type_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
