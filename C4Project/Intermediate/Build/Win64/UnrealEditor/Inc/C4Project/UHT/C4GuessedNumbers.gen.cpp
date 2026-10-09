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
		{ "ModuleRelativePath", "Public/UI/C4GuessedNumbers.h" },
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
		{ "IncludePath", "UI/C4GuessedNumbers.h" },
		{ "ModuleRelativePath", "Public/UI/C4GuessedNumbers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScrollBox_History_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/C4GuessedNumbers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntryWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/C4GuessedNumbers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ScrollBox_History;
	static const UECodeGen_Private::FClassPropertyParams NewProp_EntryWidgetClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UC4GuessedNumbers_HandleGuessLogChanged, "HandleGuessLogChanged" }, // 1444327839
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
		{ Z_Construct_UClass_UC4GuessedNumbers, UC4GuessedNumbers::StaticClass, TEXT("UC4GuessedNumbers"), &Z_Registration_Info_UClass_UC4GuessedNumbers, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UC4GuessedNumbers), 2528627306U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_C4Project_Source_C4Project_Public_UI_C4GuessedNumbers_h_2615012508(TEXT("/Script/C4Project"),
	Z_CompiledInDeferFile_FID_C4Project_Source_C4Project_Public_UI_C4GuessedNumbers_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_C4Project_Source_C4Project_Public_UI_C4GuessedNumbers_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
