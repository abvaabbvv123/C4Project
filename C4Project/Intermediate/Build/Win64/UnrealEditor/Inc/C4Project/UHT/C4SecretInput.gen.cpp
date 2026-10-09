// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "C4Project/Public/UI/C4SecretInput.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC4SecretInput() {}

// Begin Cross Module References
C4PROJECT_API UClass* Z_Construct_UClass_UC4SecretInput();
C4PROJECT_API UClass* Z_Construct_UClass_UC4SecretInput_NoRegister();
C4PROJECT_API UClass* Z_Construct_UClass_UC4UserWidgetBase();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UPackage* Z_Construct_UPackage__Script_C4Project();
// End Cross Module References

// Begin Class UC4SecretInput Function HandleOwnSecretChanged
struct Z_Construct_UFunction_UC4SecretInput_HandleOwnSecretChanged_Statics
{
	struct C4SecretInput_eventHandleOwnSecretChanged_Parms
	{
		FString InSecret;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/C4SecretInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSecret_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InSecret;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UC4SecretInput_HandleOwnSecretChanged_Statics::NewProp_InSecret = { "InSecret", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C4SecretInput_eventHandleOwnSecretChanged_Parms, InSecret), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSecret_MetaData), NewProp_InSecret_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UC4SecretInput_HandleOwnSecretChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC4SecretInput_HandleOwnSecretChanged_Statics::NewProp_InSecret,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UC4SecretInput_HandleOwnSecretChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UC4SecretInput_HandleOwnSecretChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UC4SecretInput, nullptr, "HandleOwnSecretChanged", nullptr, nullptr, Z_Construct_UFunction_UC4SecretInput_HandleOwnSecretChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UC4SecretInput_HandleOwnSecretChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UC4SecretInput_HandleOwnSecretChanged_Statics::C4SecretInput_eventHandleOwnSecretChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UC4SecretInput_HandleOwnSecretChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UC4SecretInput_HandleOwnSecretChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UC4SecretInput_HandleOwnSecretChanged_Statics::C4SecretInput_eventHandleOwnSecretChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UC4SecretInput_HandleOwnSecretChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UC4SecretInput_HandleOwnSecretChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UC4SecretInput::execHandleOwnSecretChanged)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InSecret);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleOwnSecretChanged(Z_Param_InSecret);
	P_NATIVE_END;
}
// End Class UC4SecretInput Function HandleOwnSecretChanged

// Begin Class UC4SecretInput
void UC4SecretInput::StaticRegisterNativesUC4SecretInput()
{
	UClass* Class = UC4SecretInput::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleOwnSecretChanged", &UC4SecretInput::execHandleOwnSecretChanged },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UC4SecretInput);
UClass* Z_Construct_UClass_UC4SecretInput_NoRegister()
{
	return UC4SecretInput::StaticClass();
}
struct Z_Construct_UClass_UC4SecretInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/C4SecretInput.h" },
		{ "ModuleRelativePath", "Public/UI/C4SecretInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextBlock_MySecret_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/C4SecretInput.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextBlock_MySecret;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UC4SecretInput_HandleOwnSecretChanged, "HandleOwnSecretChanged" }, // 2909737614
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UC4SecretInput>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UC4SecretInput_Statics::NewProp_TextBlock_MySecret = { "TextBlock_MySecret", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UC4SecretInput, TextBlock_MySecret), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextBlock_MySecret_MetaData), NewProp_TextBlock_MySecret_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UC4SecretInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UC4SecretInput_Statics::NewProp_TextBlock_MySecret,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UC4SecretInput_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UC4SecretInput_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UC4UserWidgetBase,
	(UObject* (*)())Z_Construct_UPackage__Script_C4Project,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UC4SecretInput_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UC4SecretInput_Statics::ClassParams = {
	&UC4SecretInput::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UC4SecretInput_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UC4SecretInput_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UC4SecretInput_Statics::Class_MetaDataParams), Z_Construct_UClass_UC4SecretInput_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UC4SecretInput()
{
	if (!Z_Registration_Info_UClass_UC4SecretInput.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UC4SecretInput.OuterSingleton, Z_Construct_UClass_UC4SecretInput_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UC4SecretInput.OuterSingleton;
}
template<> C4PROJECT_API UClass* StaticClass<UC4SecretInput>()
{
	return UC4SecretInput::StaticClass();
}
UC4SecretInput::UC4SecretInput(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UC4SecretInput);
UC4SecretInput::~UC4SecretInput() {}
// End Class UC4SecretInput

// Begin Registration
struct Z_CompiledInDeferFile_FID_C4Project_Source_C4Project_Public_UI_C4SecretInput_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UC4SecretInput, UC4SecretInput::StaticClass, TEXT("UC4SecretInput"), &Z_Registration_Info_UClass_UC4SecretInput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UC4SecretInput), 3595481250U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_C4Project_Source_C4Project_Public_UI_C4SecretInput_h_753896866(TEXT("/Script/C4Project"),
	Z_CompiledInDeferFile_FID_C4Project_Source_C4Project_Public_UI_C4SecretInput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_C4Project_Source_C4Project_Public_UI_C4SecretInput_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
