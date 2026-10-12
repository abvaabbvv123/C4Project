// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "C4Project/Public/UI/C4UserWidgetBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC4UserWidgetBase() {}

// Begin Cross Module References
C4PROJECT_API UClass* Z_Construct_UClass_UC4UserWidgetBase();
C4PROJECT_API UClass* Z_Construct_UClass_UC4UserWidgetBase_NoRegister();
C4PROJECT_API UEnum* Z_Construct_UEnum_C4Project_EC4GamePhase();
ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_C4Project();
// End Cross Module References

// Begin Class UC4UserWidgetBase Function HandleFlowLastChance
struct Z_Construct_UFunction_UC4UserWidgetBase_HandleFlowLastChance_Statics
{
	struct C4UserWidgetBase_eventHandleFlowLastChance_Parms
	{
		bool bInLastChance;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/C4UserWidgetBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bInLastChance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInLastChance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UC4UserWidgetBase_HandleFlowLastChance_Statics::NewProp_bInLastChance_SetBit(void* Obj)
{
	((C4UserWidgetBase_eventHandleFlowLastChance_Parms*)Obj)->bInLastChance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UC4UserWidgetBase_HandleFlowLastChance_Statics::NewProp_bInLastChance = { "bInLastChance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(C4UserWidgetBase_eventHandleFlowLastChance_Parms), &Z_Construct_UFunction_UC4UserWidgetBase_HandleFlowLastChance_Statics::NewProp_bInLastChance_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UC4UserWidgetBase_HandleFlowLastChance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC4UserWidgetBase_HandleFlowLastChance_Statics::NewProp_bInLastChance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UC4UserWidgetBase_HandleFlowLastChance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UC4UserWidgetBase_HandleFlowLastChance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UC4UserWidgetBase, nullptr, "HandleFlowLastChance", nullptr, nullptr, Z_Construct_UFunction_UC4UserWidgetBase_HandleFlowLastChance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UC4UserWidgetBase_HandleFlowLastChance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UC4UserWidgetBase_HandleFlowLastChance_Statics::C4UserWidgetBase_eventHandleFlowLastChance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UC4UserWidgetBase_HandleFlowLastChance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UC4UserWidgetBase_HandleFlowLastChance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UC4UserWidgetBase_HandleFlowLastChance_Statics::C4UserWidgetBase_eventHandleFlowLastChance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UC4UserWidgetBase_HandleFlowLastChance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UC4UserWidgetBase_HandleFlowLastChance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UC4UserWidgetBase::execHandleFlowLastChance)
{
	P_GET_UBOOL(Z_Param_bInLastChance);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleFlowLastChance(Z_Param_bInLastChance);
	P_NATIVE_END;
}
// End Class UC4UserWidgetBase Function HandleFlowLastChance

// Begin Class UC4UserWidgetBase Function HandleFlowOwnSecret
struct Z_Construct_UFunction_UC4UserWidgetBase_HandleFlowOwnSecret_Statics
{
	struct C4UserWidgetBase_eventHandleFlowOwnSecret_Parms
	{
		FString InSecret;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/C4UserWidgetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSecret_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InSecret;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UC4UserWidgetBase_HandleFlowOwnSecret_Statics::NewProp_InSecret = { "InSecret", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C4UserWidgetBase_eventHandleFlowOwnSecret_Parms, InSecret), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSecret_MetaData), NewProp_InSecret_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UC4UserWidgetBase_HandleFlowOwnSecret_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC4UserWidgetBase_HandleFlowOwnSecret_Statics::NewProp_InSecret,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UC4UserWidgetBase_HandleFlowOwnSecret_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UC4UserWidgetBase_HandleFlowOwnSecret_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UC4UserWidgetBase, nullptr, "HandleFlowOwnSecret", nullptr, nullptr, Z_Construct_UFunction_UC4UserWidgetBase_HandleFlowOwnSecret_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UC4UserWidgetBase_HandleFlowOwnSecret_Statics::PropPointers), sizeof(Z_Construct_UFunction_UC4UserWidgetBase_HandleFlowOwnSecret_Statics::C4UserWidgetBase_eventHandleFlowOwnSecret_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UC4UserWidgetBase_HandleFlowOwnSecret_Statics::Function_MetaDataParams), Z_Construct_UFunction_UC4UserWidgetBase_HandleFlowOwnSecret_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UC4UserWidgetBase_HandleFlowOwnSecret_Statics::C4UserWidgetBase_eventHandleFlowOwnSecret_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UC4UserWidgetBase_HandleFlowOwnSecret()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UC4UserWidgetBase_HandleFlowOwnSecret_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UC4UserWidgetBase::execHandleFlowOwnSecret)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InSecret);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleFlowOwnSecret(Z_Param_InSecret);
	P_NATIVE_END;
}
// End Class UC4UserWidgetBase Function HandleFlowOwnSecret

// Begin Class UC4UserWidgetBase Function HandleFlowPhase
struct Z_Construct_UFunction_UC4UserWidgetBase_HandleFlowPhase_Statics
{
	struct C4UserWidgetBase_eventHandleFlowPhase_Parms
	{
		EC4GamePhase NewPhase;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// GameFlow \xeb\x8d\xb8\xeb\xa6\xac\xea\xb2\x8c\xec\x9d\xb4\xed\x8a\xb8 \xec\x88\x98\xec\x8b\xa0\xec\x9a\xa9. \xec\x8b\x9c\xea\xb7\xb8\xeb\x8b\x88\xec\xb2\x98\xeb\x8a\x94 \xea\xb0\x81 \xeb\x8d\xb8\xeb\xa6\xac\xea\xb2\x8c\xec\x9d\xb4\xed\x8a\xb8\xec\x97\x90 \xeb\xa7\x9e\xec\xb6\xb0\xec\x95\xbc \xed\x95\xb4\xec\x84\x9c 4\xea\xb0\x9c\xeb\xa1\x9c \xeb\x82\x98\xeb\x89\x98\xec\xa7\x80\xeb\xa7\x8c, \xed\x95\x98\xeb\x8a\x94 \xec\x9d\xbc\xec\x9d\x80 \xeb\xaa\xa8\xeb\x91\x90 \xea\xb0\x99\xeb\x8b\xa4\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/C4UserWidgetBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GameFlow \xeb\x8d\xb8\xeb\xa6\xac\xea\xb2\x8c\xec\x9d\xb4\xed\x8a\xb8 \xec\x88\x98\xec\x8b\xa0\xec\x9a\xa9. \xec\x8b\x9c\xea\xb7\xb8\xeb\x8b\x88\xec\xb2\x98\xeb\x8a\x94 \xea\xb0\x81 \xeb\x8d\xb8\xeb\xa6\xac\xea\xb2\x8c\xec\x9d\xb4\xed\x8a\xb8\xec\x97\x90 \xeb\xa7\x9e\xec\xb6\xb0\xec\x95\xbc \xed\x95\xb4\xec\x84\x9c 4\xea\xb0\x9c\xeb\xa1\x9c \xeb\x82\x98\xeb\x89\x98\xec\xa7\x80\xeb\xa7\x8c, \xed\x95\x98\xeb\x8a\x94 \xec\x9d\xbc\xec\x9d\x80 \xeb\xaa\xa8\xeb\x91\x90 \xea\xb0\x99\xeb\x8b\xa4" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewPhase_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewPhase;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UC4UserWidgetBase_HandleFlowPhase_Statics::NewProp_NewPhase_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UC4UserWidgetBase_HandleFlowPhase_Statics::NewProp_NewPhase = { "NewPhase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C4UserWidgetBase_eventHandleFlowPhase_Parms, NewPhase), Z_Construct_UEnum_C4Project_EC4GamePhase, METADATA_PARAMS(0, nullptr) }; // 3658021259
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UC4UserWidgetBase_HandleFlowPhase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC4UserWidgetBase_HandleFlowPhase_Statics::NewProp_NewPhase_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC4UserWidgetBase_HandleFlowPhase_Statics::NewProp_NewPhase,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UC4UserWidgetBase_HandleFlowPhase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UC4UserWidgetBase_HandleFlowPhase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UC4UserWidgetBase, nullptr, "HandleFlowPhase", nullptr, nullptr, Z_Construct_UFunction_UC4UserWidgetBase_HandleFlowPhase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UC4UserWidgetBase_HandleFlowPhase_Statics::PropPointers), sizeof(Z_Construct_UFunction_UC4UserWidgetBase_HandleFlowPhase_Statics::C4UserWidgetBase_eventHandleFlowPhase_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UC4UserWidgetBase_HandleFlowPhase_Statics::Function_MetaDataParams), Z_Construct_UFunction_UC4UserWidgetBase_HandleFlowPhase_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UC4UserWidgetBase_HandleFlowPhase_Statics::C4UserWidgetBase_eventHandleFlowPhase_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UC4UserWidgetBase_HandleFlowPhase()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UC4UserWidgetBase_HandleFlowPhase_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UC4UserWidgetBase::execHandleFlowPhase)
{
	P_GET_ENUM(EC4GamePhase,Z_Param_NewPhase);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleFlowPhase(EC4GamePhase(Z_Param_NewPhase));
	P_NATIVE_END;
}
// End Class UC4UserWidgetBase Function HandleFlowPhase

// Begin Class UC4UserWidgetBase Function HandleFlowTurn
struct Z_Construct_UFunction_UC4UserWidgetBase_HandleFlowTurn_Statics
{
	struct C4UserWidgetBase_eventHandleFlowTurn_Parms
	{
		APlayerState* InTurnPlayer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/C4UserWidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InTurnPlayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UC4UserWidgetBase_HandleFlowTurn_Statics::NewProp_InTurnPlayer = { "InTurnPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C4UserWidgetBase_eventHandleFlowTurn_Parms, InTurnPlayer), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UC4UserWidgetBase_HandleFlowTurn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC4UserWidgetBase_HandleFlowTurn_Statics::NewProp_InTurnPlayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UC4UserWidgetBase_HandleFlowTurn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UC4UserWidgetBase_HandleFlowTurn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UC4UserWidgetBase, nullptr, "HandleFlowTurn", nullptr, nullptr, Z_Construct_UFunction_UC4UserWidgetBase_HandleFlowTurn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UC4UserWidgetBase_HandleFlowTurn_Statics::PropPointers), sizeof(Z_Construct_UFunction_UC4UserWidgetBase_HandleFlowTurn_Statics::C4UserWidgetBase_eventHandleFlowTurn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UC4UserWidgetBase_HandleFlowTurn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UC4UserWidgetBase_HandleFlowTurn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UC4UserWidgetBase_HandleFlowTurn_Statics::C4UserWidgetBase_eventHandleFlowTurn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UC4UserWidgetBase_HandleFlowTurn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UC4UserWidgetBase_HandleFlowTurn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UC4UserWidgetBase::execHandleFlowTurn)
{
	P_GET_OBJECT(APlayerState,Z_Param_InTurnPlayer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleFlowTurn(Z_Param_InTurnPlayer);
	P_NATIVE_END;
}
// End Class UC4UserWidgetBase Function HandleFlowTurn

// Begin Class UC4UserWidgetBase
void UC4UserWidgetBase::StaticRegisterNativesUC4UserWidgetBase()
{
	UClass* Class = UC4UserWidgetBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleFlowLastChance", &UC4UserWidgetBase::execHandleFlowLastChance },
		{ "HandleFlowOwnSecret", &UC4UserWidgetBase::execHandleFlowOwnSecret },
		{ "HandleFlowPhase", &UC4UserWidgetBase::execHandleFlowPhase },
		{ "HandleFlowTurn", &UC4UserWidgetBase::execHandleFlowTurn },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UC4UserWidgetBase);
UClass* Z_Construct_UClass_UC4UserWidgetBase_NoRegister()
{
	return UC4UserWidgetBase::StaticClass();
}
struct Z_Construct_UClass_UC4UserWidgetBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/C4UserWidgetBase.h" },
		{ "ModuleRelativePath", "Public/UI/C4UserWidgetBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UC4UserWidgetBase_HandleFlowLastChance, "HandleFlowLastChance" }, // 684755009
		{ &Z_Construct_UFunction_UC4UserWidgetBase_HandleFlowOwnSecret, "HandleFlowOwnSecret" }, // 3657306203
		{ &Z_Construct_UFunction_UC4UserWidgetBase_HandleFlowPhase, "HandleFlowPhase" }, // 1860648617
		{ &Z_Construct_UFunction_UC4UserWidgetBase_HandleFlowTurn, "HandleFlowTurn" }, // 1212061175
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UC4UserWidgetBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UC4UserWidgetBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_C4Project,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UC4UserWidgetBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UC4UserWidgetBase_Statics::ClassParams = {
	&UC4UserWidgetBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UC4UserWidgetBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UC4UserWidgetBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UC4UserWidgetBase()
{
	if (!Z_Registration_Info_UClass_UC4UserWidgetBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UC4UserWidgetBase.OuterSingleton, Z_Construct_UClass_UC4UserWidgetBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UC4UserWidgetBase.OuterSingleton;
}
template<> C4PROJECT_API UClass* StaticClass<UC4UserWidgetBase>()
{
	return UC4UserWidgetBase::StaticClass();
}
UC4UserWidgetBase::UC4UserWidgetBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UC4UserWidgetBase);
UC4UserWidgetBase::~UC4UserWidgetBase() {}
// End Class UC4UserWidgetBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_C4Project_Source_C4Project_Public_UI_C4UserWidgetBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UC4UserWidgetBase, UC4UserWidgetBase::StaticClass, TEXT("UC4UserWidgetBase"), &Z_Registration_Info_UClass_UC4UserWidgetBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UC4UserWidgetBase), 313197595U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_C4Project_Source_C4Project_Public_UI_C4UserWidgetBase_h_2065595451(TEXT("/Script/C4Project"),
	Z_CompiledInDeferFile_FID_C4Project_Source_C4Project_Public_UI_C4UserWidgetBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_C4Project_Source_C4Project_Public_UI_C4UserWidgetBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
