// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "C4Project/Public/GameSystem/C4GameStateBase.h"
#include "C4Project/Public/C4Type.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC4GameStateBase() {}

// Begin Cross Module References
C4PROJECT_API UClass* Z_Construct_UClass_AC4GameStateBase();
C4PROJECT_API UClass* Z_Construct_UClass_AC4GameStateBase_NoRegister();
C4PROJECT_API UEnum* Z_Construct_UEnum_C4Project_EC4GamePhase();
C4PROJECT_API UFunction* Z_Construct_UDelegateFunction_C4Project_OnC4BoolChanged__DelegateSignature();
C4PROJECT_API UFunction* Z_Construct_UDelegateFunction_C4Project_OnC4GuessHistoryChanged__DelegateSignature();
C4PROJECT_API UFunction* Z_Construct_UDelegateFunction_C4Project_OnC4PhaseChanged__DelegateSignature();
C4PROJECT_API UFunction* Z_Construct_UDelegateFunction_C4Project_OnC4TurnChanged__DelegateSignature();
C4PROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FC4GuessRecord();
ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
UPackage* Z_Construct_UPackage__Script_C4Project();
// End Cross Module References

// Begin Class AC4GameStateBase Function OnRepCurrentTurnPlayer
struct Z_Construct_UFunction_AC4GameStateBase_OnRepCurrentTurnPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameSystem/C4GameStateBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC4GameStateBase_OnRepCurrentTurnPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC4GameStateBase, nullptr, "OnRepCurrentTurnPlayer", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AC4GameStateBase_OnRepCurrentTurnPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AC4GameStateBase_OnRepCurrentTurnPlayer_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AC4GameStateBase_OnRepCurrentTurnPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC4GameStateBase_OnRepCurrentTurnPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AC4GameStateBase::execOnRepCurrentTurnPlayer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRepCurrentTurnPlayer();
	P_NATIVE_END;
}
// End Class AC4GameStateBase Function OnRepCurrentTurnPlayer

// Begin Class AC4GameStateBase Function OnRepGamePhase
struct Z_Construct_UFunction_AC4GameStateBase_OnRepGamePhase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameSystem/C4GameStateBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC4GameStateBase_OnRepGamePhase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC4GameStateBase, nullptr, "OnRepGamePhase", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AC4GameStateBase_OnRepGamePhase_Statics::Function_MetaDataParams), Z_Construct_UFunction_AC4GameStateBase_OnRepGamePhase_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AC4GameStateBase_OnRepGamePhase()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC4GameStateBase_OnRepGamePhase_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AC4GameStateBase::execOnRepGamePhase)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRepGamePhase();
	P_NATIVE_END;
}
// End Class AC4GameStateBase Function OnRepGamePhase

// Begin Class AC4GameStateBase Function OnRepGuessLog
struct Z_Construct_UFunction_AC4GameStateBase_OnRepGuessLog_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameSystem/C4GameStateBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC4GameStateBase_OnRepGuessLog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC4GameStateBase, nullptr, "OnRepGuessLog", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AC4GameStateBase_OnRepGuessLog_Statics::Function_MetaDataParams), Z_Construct_UFunction_AC4GameStateBase_OnRepGuessLog_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AC4GameStateBase_OnRepGuessLog()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC4GameStateBase_OnRepGuessLog_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AC4GameStateBase::execOnRepGuessLog)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRepGuessLog();
	P_NATIVE_END;
}
// End Class AC4GameStateBase Function OnRepGuessLog

// Begin Class AC4GameStateBase Function OnRepLastChance
struct Z_Construct_UFunction_AC4GameStateBase_OnRepLastChance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameSystem/C4GameStateBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC4GameStateBase_OnRepLastChance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC4GameStateBase, nullptr, "OnRepLastChance", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AC4GameStateBase_OnRepLastChance_Statics::Function_MetaDataParams), Z_Construct_UFunction_AC4GameStateBase_OnRepLastChance_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AC4GameStateBase_OnRepLastChance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC4GameStateBase_OnRepLastChance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AC4GameStateBase::execOnRepLastChance)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRepLastChance();
	P_NATIVE_END;
}
// End Class AC4GameStateBase Function OnRepLastChance

// Begin Class AC4GameStateBase
void AC4GameStateBase::StaticRegisterNativesAC4GameStateBase()
{
	UClass* Class = AC4GameStateBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRepCurrentTurnPlayer", &AC4GameStateBase::execOnRepCurrentTurnPlayer },
		{ "OnRepGamePhase", &AC4GameStateBase::execOnRepGamePhase },
		{ "OnRepGuessLog", &AC4GameStateBase::execOnRepGuessLog },
		{ "OnRepLastChance", &AC4GameStateBase::execOnRepLastChance },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AC4GameStateBase);
UClass* Z_Construct_UClass_AC4GameStateBase_NoRegister()
{
	return AC4GameStateBase::StaticClass();
}
struct Z_Construct_UClass_AC4GameStateBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameSystem/C4GameStateBase.h" },
		{ "ModuleRelativePath", "Public/GameSystem/C4GameStateBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPhaseChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameSystem/C4GameStateBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTurnChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameSystem/C4GameStateBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLastChanceChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameSystem/C4GameStateBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGuessLogChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameSystem/C4GameStateBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GamePhase_MetaData[] = {
		{ "Category", "C4GameStateBase" },
		{ "ModuleRelativePath", "Public/GameSystem/C4GameStateBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTurnPlayer_MetaData[] = {
		{ "Category", "C4GameStateBase" },
		{ "ModuleRelativePath", "Public/GameSystem/C4GameStateBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLastChance_MetaData[] = {
		{ "Category", "C4GameStateBase" },
		{ "ModuleRelativePath", "Public/GameSystem/C4GameStateBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GuessLog_MetaData[] = {
		{ "Category", "C4GameStateBase" },
		{ "ModuleRelativePath", "Public/GameSystem/C4GameStateBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPhaseChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTurnChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLastChanceChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGuessLogChanged;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GamePhase_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GamePhase;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentTurnPlayer;
	static void NewProp_bLastChance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLastChance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GuessLog_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GuessLog;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AC4GameStateBase_OnRepCurrentTurnPlayer, "OnRepCurrentTurnPlayer" }, // 2723934124
		{ &Z_Construct_UFunction_AC4GameStateBase_OnRepGamePhase, "OnRepGamePhase" }, // 3257724750
		{ &Z_Construct_UFunction_AC4GameStateBase_OnRepGuessLog, "OnRepGuessLog" }, // 1837156414
		{ &Z_Construct_UFunction_AC4GameStateBase_OnRepLastChance, "OnRepLastChance" }, // 789895420
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC4GameStateBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AC4GameStateBase_Statics::NewProp_OnPhaseChanged = { "OnPhaseChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC4GameStateBase, OnPhaseChanged), Z_Construct_UDelegateFunction_C4Project_OnC4PhaseChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPhaseChanged_MetaData), NewProp_OnPhaseChanged_MetaData) }; // 3946885851
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AC4GameStateBase_Statics::NewProp_OnTurnChanged = { "OnTurnChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC4GameStateBase, OnTurnChanged), Z_Construct_UDelegateFunction_C4Project_OnC4TurnChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTurnChanged_MetaData), NewProp_OnTurnChanged_MetaData) }; // 1438183834
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AC4GameStateBase_Statics::NewProp_OnLastChanceChanged = { "OnLastChanceChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC4GameStateBase, OnLastChanceChanged), Z_Construct_UDelegateFunction_C4Project_OnC4BoolChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLastChanceChanged_MetaData), NewProp_OnLastChanceChanged_MetaData) }; // 998807014
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AC4GameStateBase_Statics::NewProp_OnGuessLogChanged = { "OnGuessLogChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC4GameStateBase, OnGuessLogChanged), Z_Construct_UDelegateFunction_C4Project_OnC4GuessHistoryChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGuessLogChanged_MetaData), NewProp_OnGuessLogChanged_MetaData) }; // 2470218127
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AC4GameStateBase_Statics::NewProp_GamePhase_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AC4GameStateBase_Statics::NewProp_GamePhase = { "GamePhase", "OnRepGamePhase", (EPropertyFlags)0x0020080100000034, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC4GameStateBase, GamePhase), Z_Construct_UEnum_C4Project_EC4GamePhase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GamePhase_MetaData), NewProp_GamePhase_MetaData) }; // 3658021259
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC4GameStateBase_Statics::NewProp_CurrentTurnPlayer = { "CurrentTurnPlayer", "OnRepCurrentTurnPlayer", (EPropertyFlags)0x0124080100000034, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC4GameStateBase, CurrentTurnPlayer), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTurnPlayer_MetaData), NewProp_CurrentTurnPlayer_MetaData) };
void Z_Construct_UClass_AC4GameStateBase_Statics::NewProp_bLastChance_SetBit(void* Obj)
{
	((AC4GameStateBase*)Obj)->bLastChance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AC4GameStateBase_Statics::NewProp_bLastChance = { "bLastChance", "OnRepLastChance", (EPropertyFlags)0x0020080100000034, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AC4GameStateBase), &Z_Construct_UClass_AC4GameStateBase_Statics::NewProp_bLastChance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLastChance_MetaData), NewProp_bLastChance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AC4GameStateBase_Statics::NewProp_GuessLog_Inner = { "GuessLog", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FC4GuessRecord, METADATA_PARAMS(0, nullptr) }; // 3013400007
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AC4GameStateBase_Statics::NewProp_GuessLog = { "GuessLog", "OnRepGuessLog", (EPropertyFlags)0x0020080100000034, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC4GameStateBase, GuessLog), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GuessLog_MetaData), NewProp_GuessLog_MetaData) }; // 3013400007
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AC4GameStateBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC4GameStateBase_Statics::NewProp_OnPhaseChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC4GameStateBase_Statics::NewProp_OnTurnChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC4GameStateBase_Statics::NewProp_OnLastChanceChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC4GameStateBase_Statics::NewProp_OnGuessLogChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC4GameStateBase_Statics::NewProp_GamePhase_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC4GameStateBase_Statics::NewProp_GamePhase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC4GameStateBase_Statics::NewProp_CurrentTurnPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC4GameStateBase_Statics::NewProp_bLastChance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC4GameStateBase_Statics::NewProp_GuessLog_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC4GameStateBase_Statics::NewProp_GuessLog,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AC4GameStateBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AC4GameStateBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameStateBase,
	(UObject* (*)())Z_Construct_UPackage__Script_C4Project,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AC4GameStateBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AC4GameStateBase_Statics::ClassParams = {
	&AC4GameStateBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AC4GameStateBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AC4GameStateBase_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AC4GameStateBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AC4GameStateBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AC4GameStateBase()
{
	if (!Z_Registration_Info_UClass_AC4GameStateBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AC4GameStateBase.OuterSingleton, Z_Construct_UClass_AC4GameStateBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AC4GameStateBase.OuterSingleton;
}
template<> C4PROJECT_API UClass* StaticClass<AC4GameStateBase>()
{
	return AC4GameStateBase::StaticClass();
}
void AC4GameStateBase::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_GamePhase(TEXT("GamePhase"));
	static const FName Name_CurrentTurnPlayer(TEXT("CurrentTurnPlayer"));
	static const FName Name_bLastChance(TEXT("bLastChance"));
	static const FName Name_GuessLog(TEXT("GuessLog"));
	const bool bIsValid = true
		&& Name_GamePhase == ClassReps[(int32)ENetFields_Private::GamePhase].Property->GetFName()
		&& Name_CurrentTurnPlayer == ClassReps[(int32)ENetFields_Private::CurrentTurnPlayer].Property->GetFName()
		&& Name_bLastChance == ClassReps[(int32)ENetFields_Private::bLastChance].Property->GetFName()
		&& Name_GuessLog == ClassReps[(int32)ENetFields_Private::GuessLog].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AC4GameStateBase"));
}
AC4GameStateBase::AC4GameStateBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AC4GameStateBase);
AC4GameStateBase::~AC4GameStateBase() {}
// End Class AC4GameStateBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_C4Project_Source_C4Project_Public_GameSystem_C4GameStateBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AC4GameStateBase, AC4GameStateBase::StaticClass, TEXT("AC4GameStateBase"), &Z_Registration_Info_UClass_AC4GameStateBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AC4GameStateBase), 1599558988U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_C4Project_Source_C4Project_Public_GameSystem_C4GameStateBase_h_1115703962(TEXT("/Script/C4Project"),
	Z_CompiledInDeferFile_FID_C4Project_Source_C4Project_Public_GameSystem_C4GameStateBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_C4Project_Source_C4Project_Public_GameSystem_C4GameStateBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
