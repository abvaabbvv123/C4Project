// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "C4Project/Public/UI/C4GuessedNumbers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC4GuessedNumbers() {}

// Begin Cross Module References
C4PROJECT_API UClass* Z_Construct_UClass_UC4GuessedNumbers();
C4PROJECT_API UClass* Z_Construct_UClass_UC4GuessedNumbers_NoRegister();
C4PROJECT_API UClass* Z_Construct_UClass_UC4GuessingEntry_NoRegister();
C4PROJECT_API UClass* Z_Construct_UClass_UC4UserWidgetBase();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
UMG_API UClass* Z_Construct_UClass_UScrollBox_NoRegister();
UPackage* Z_Construct_UPackage__Script_C4Project();
// End Cross Module References

// Begin Class UC4GuessedNumbers Function HandleGuessLogChanged
struct Z_Construct_UFunction_UC4GuessedNumbers_HandleGuessLogChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xeb\xa1\x9c\xea\xb7\xb8 \xeb\xb3\x80\xea\xb2\xbd(\xec\xb6\x94\xea\xb0\x80 / \xec\xb4\x88\xea\xb8\xb0\xed\x99\x94) \xec\x88\x98\xec\x8b\xa0\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/C4GuessedNumbers.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xa1\x9c\xea\xb7\xb8 \xeb\xb3\x80\xea\xb2\xbd(\xec\xb6\x94\xea\xb0\x80 / \xec\xb4\x88\xea\xb8\xb0\xed\x99\x94) \xec\x88\x98\xec\x8b\xa0" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UC4GuessedNumbers_HandleGuessLogChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UC4GuessedNumbers, nullptr, "HandleGuessLogChanged", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UC4GuessedNumbers_HandleGuessLogChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UC4GuessedNumbers_HandleGuessLogChanged_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UC4GuessedNumbers_HandleGuessLogChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UC4GuessedNumbers_HandleGuessLogChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UC4GuessedNumbers::execHandleGuessLogChanged)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleGuessLogChanged();
	P_NATIVE_END;
}
// End Class UC4GuessedNumbers Function HandleGuessLogChanged

// Begin Class UC4GuessedNumbers
void UC4GuessedNumbers::StaticRegisterNativesUC4GuessedNumbers()
{
	UClass* Class = UC4GuessedNumbers::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleGuessLogChanged", &UC4GuessedNumbers::execHandleGuessLogChanged },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UC4GuessedNumbers);
UClass* Z_Construct_UClass_UC4GuessedNumbers_NoRegister()
{
	return UC4GuessedNumbers::StaticClass();
}
struct Z_Construct_UClass_UC4GuessedNumbers_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xec\xb6\x94\xec\xb8\xa1 \xeb\xa1\x9c\xea\xb7\xb8 \xec\x9c\x84\xec\xa0\xaf (WBP_GuessNumbers\xec\x9d\x98 \xeb\xb6\x80\xeb\xaa\xa8)\n * - \xec\x96\x91\xec\xaa\xbd \xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\x96\xb4\xec\x9d\x98 \xec\xb6\x94\xec\xb8\xa1\xec\x9d\x84 \xec\x8b\x9c\xea\xb0\x84 \xec\x88\x9c\xec\x84\x9c\xeb\x8c\x80\xeb\xa1\x9c \xed\x91\x9c\xec\x8b\x9c (\xeb\x82\xb4 \xec\xb6\x94\xec\xb8\xa1: \xec\xb4\x88\xeb\xa1\x9d / \xec\x83\x81\xeb\x8c\x80 \xec\xb6\x94\xec\xb8\xa1: \xeb\xb9\xa8\xea\xb0\x95)\n * - \xeb\x8d\xb0\xec\x9d\xb4\xed\x84\xb0\xeb\x8a\x94 GameState\xec\x9d\x98 GuessLog \xed\x95\x98\xeb\x82\x98 (\xeb\xaa\xa8\xeb\x93\xa0 \xed\x81\xb4\xeb\x9d\xbc\xec\x97\x90 \xeb\xb3\xb5\xec\xa0\x9c\xeb\x90\x98\xeb\x8a\x94 \xea\xb3\xb5\xec\x9a\xa9 \xea\xb8\xb0\xeb\xa1\x9d)\n * - \xec\x83\x81\xeb\x8c\x80\xec\x9d\x98 \xec\xb6\x94\xec\xb8\xa1\xec\x9d\x80 \"\xeb\x82\xb4 \xec\x88\xab\xec\x9e\x90\xec\x97\x90 \xeb\x8c\x80\xed\x95\x9c \xea\xb2\xb0\xea\xb3\xbc\"\xeb\x9d\xbc \xea\xb3\xb5\xea\xb0\x9c\xeb\x90\x98\xec\x96\xb4\xeb\x8f\x84 \xec\xa0\x95\xeb\xb3\xb4\xea\xb0\x80 \xec\x83\x88\xec\xa7\x80 \xec\x95\x8a\xeb\x8a\x94\xeb\x8b\xa4\n */" },
#endif
		{ "IncludePath", "UI/C4GuessedNumbers.h" },
		{ "ModuleRelativePath", "Public/UI/C4GuessedNumbers.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xb6\x94\xec\xb8\xa1 \xeb\xa1\x9c\xea\xb7\xb8 \xec\x9c\x84\xec\xa0\xaf (WBP_GuessNumbers\xec\x9d\x98 \xeb\xb6\x80\xeb\xaa\xa8)\n- \xec\x96\x91\xec\xaa\xbd \xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\x96\xb4\xec\x9d\x98 \xec\xb6\x94\xec\xb8\xa1\xec\x9d\x84 \xec\x8b\x9c\xea\xb0\x84 \xec\x88\x9c\xec\x84\x9c\xeb\x8c\x80\xeb\xa1\x9c \xed\x91\x9c\xec\x8b\x9c (\xeb\x82\xb4 \xec\xb6\x94\xec\xb8\xa1: \xec\xb4\x88\xeb\xa1\x9d / \xec\x83\x81\xeb\x8c\x80 \xec\xb6\x94\xec\xb8\xa1: \xeb\xb9\xa8\xea\xb0\x95)\n- \xeb\x8d\xb0\xec\x9d\xb4\xed\x84\xb0\xeb\x8a\x94 GameState\xec\x9d\x98 GuessLog \xed\x95\x98\xeb\x82\x98 (\xeb\xaa\xa8\xeb\x93\xa0 \xed\x81\xb4\xeb\x9d\xbc\xec\x97\x90 \xeb\xb3\xb5\xec\xa0\x9c\xeb\x90\x98\xeb\x8a\x94 \xea\xb3\xb5\xec\x9a\xa9 \xea\xb8\xb0\xeb\xa1\x9d)\n- \xec\x83\x81\xeb\x8c\x80\xec\x9d\x98 \xec\xb6\x94\xec\xb8\xa1\xec\x9d\x80 \"\xeb\x82\xb4 \xec\x88\xab\xec\x9e\x90\xec\x97\x90 \xeb\x8c\x80\xed\x95\x9c \xea\xb2\xb0\xea\xb3\xbc\"\xeb\x9d\xbc \xea\xb3\xb5\xea\xb0\x9c\xeb\x90\x98\xec\x96\xb4\xeb\x8f\x84 \xec\xa0\x95\xeb\xb3\xb4\xea\xb0\x80 \xec\x83\x88\xec\xa7\x80 \xec\x95\x8a\xeb\x8a\x94\xeb\x8b\xa4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScrollBox_History_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/C4GuessedNumbers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntryWidgetClass_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xed\x95\x9c \xec\xa4\x84\xec\x9d\x84 \xea\xb7\xb8\xeb\xa6\xb4 \xec\x9c\x84\xec\xa0\xaf \xed\x81\xb4\xeb\x9e\x98\xec\x8a\xa4 (WBP Class Defaults\xec\x97\x90\xec\x84\x9c WBP_GuessEntry \xec\xa7\x80\xec\xa0\x95. \xeb\xb9\x84\xec\x96\xb4 \xec\x9e\x88\xec\x9c\xbc\xeb\xa9\xb4 \xec\x95\x84\xeb\xac\xb4\xea\xb2\x83\xeb\x8f\x84 \xed\x91\x9c\xec\x8b\x9c\xeb\x90\x98\xec\xa7\x80 \xec\x95\x8a\xec\x9d\x8c)\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/C4GuessedNumbers.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x95\x9c \xec\xa4\x84\xec\x9d\x84 \xea\xb7\xb8\xeb\xa6\xb4 \xec\x9c\x84\xec\xa0\xaf \xed\x81\xb4\xeb\x9e\x98\xec\x8a\xa4 (WBP Class Defaults\xec\x97\x90\xec\x84\x9c WBP_GuessEntry \xec\xa7\x80\xec\xa0\x95. \xeb\xb9\x84\xec\x96\xb4 \xec\x9e\x88\xec\x9c\xbc\xeb\xa9\xb4 \xec\x95\x84\xeb\xac\xb4\xea\xb2\x83\xeb\x8f\x84 \xed\x91\x9c\xec\x8b\x9c\xeb\x90\x98\xec\xa7\x80 \xec\x95\x8a\xec\x9d\x8c)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ScrollBox_History;
	static const UECodeGen_Private::FClassPropertyParams NewProp_EntryWidgetClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UC4GuessedNumbers_HandleGuessLogChanged, "HandleGuessLogChanged" }, // 1621848806
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UC4GuessedNumbers>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UC4GuessedNumbers_Statics::NewProp_ScrollBox_History = { "ScrollBox_History", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UC4GuessedNumbers, ScrollBox_History), Z_Construct_UClass_UScrollBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScrollBox_History_MetaData), NewProp_ScrollBox_History_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UC4GuessedNumbers_Statics::NewProp_EntryWidgetClass = { "EntryWidgetClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UC4GuessedNumbers, EntryWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UC4GuessingEntry_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntryWidgetClass_MetaData), NewProp_EntryWidgetClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UC4GuessedNumbers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UC4GuessedNumbers_Statics::NewProp_ScrollBox_History,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UC4GuessedNumbers_Statics::NewProp_EntryWidgetClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UC4GuessedNumbers_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UC4GuessedNumbers_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UC4UserWidgetBase,
	(UObject* (*)())Z_Construct_UPackage__Script_C4Project,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UC4GuessedNumbers_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UC4GuessedNumbers_Statics::ClassParams = {
	&UC4GuessedNumbers::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UC4GuessedNumbers_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UC4GuessedNumbers_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UC4GuessedNumbers_Statics::Class_MetaDataParams), Z_Construct_UClass_UC4GuessedNumbers_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UC4GuessedNumbers()
{
	if (!Z_Registration_Info_UClass_UC4GuessedNumbers.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UC4GuessedNumbers.OuterSingleton, Z_Construct_UClass_UC4GuessedNumbers_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UC4GuessedNumbers.OuterSingleton;
}
template<> C4PROJECT_API UClass* StaticClass<UC4GuessedNumbers>()
{
	return UC4GuessedNumbers::StaticClass();
}
UC4GuessedNumbers::UC4GuessedNumbers(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UC4GuessedNumbers);
UC4GuessedNumbers::~UC4GuessedNumbers() {}
// End Class UC4GuessedNumbers

// Begin Registration
struct Z_CompiledInDeferFile_FID_C4Project_Source_C4Project_Public_UI_C4GuessedNumbers_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UC4GuessedNumbers, UC4GuessedNumbers::StaticClass, TEXT("UC4GuessedNumbers"), &Z_Registration_Info_UClass_UC4GuessedNumbers, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UC4GuessedNumbers), 3970423674U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_C4Project_Source_C4Project_Public_UI_C4GuessedNumbers_h_2070546405(TEXT("/Script/C4Project"),
	Z_CompiledInDeferFile_FID_C4Project_Source_C4Project_Public_UI_C4GuessedNumbers_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_C4Project_Source_C4Project_Public_UI_C4GuessedNumbers_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
