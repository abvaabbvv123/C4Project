// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "C4Project/Public/UI/C4GuessingEntry.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC4GuessingEntry() {}

// Begin Cross Module References
C4PROJECT_API UClass* Z_Construct_UClass_UC4GuessingEntry();
C4PROJECT_API UClass* Z_Construct_UClass_UC4GuessingEntry_NoRegister();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_C4Project();
// End Cross Module References

// Begin Class UC4GuessingEntry
void UC4GuessingEntry::StaticRegisterNativesUC4GuessingEntry()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UC4GuessingEntry);
UClass* Z_Construct_UClass_UC4GuessingEntry_NoRegister()
{
	return UC4GuessingEntry::StaticClass();
}
struct Z_Construct_UClass_UC4GuessingEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/C4GuessingEntry.h" },
		{ "ModuleRelativePath", "Public/UI/C4GuessingEntry.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextBlock_Index_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/C4GuessingEntry.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextBlock_Player_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/C4GuessingEntry.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextBlock_Number_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/C4GuessingEntry.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextBlock_Result_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/C4GuessingEntry.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyColor_MetaData[] = {
		{ "Category", "Style" },
		{ "ModuleRelativePath", "Public/UI/C4GuessingEntry.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpponentColor_MetaData[] = {
		{ "Category", "Style" },
		{ "ModuleRelativePath", "Public/UI/C4GuessingEntry.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitColor_MetaData[] = {
		{ "Category", "Style" },
		{ "ModuleRelativePath", "Public/UI/C4GuessingEntry.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextBlock_Index;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextBlock_Player;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextBlock_Number;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextBlock_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MyColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OpponentColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UC4GuessingEntry>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UC4GuessingEntry_Statics::NewProp_TextBlock_Index = { "TextBlock_Index", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UC4GuessingEntry, TextBlock_Index), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextBlock_Index_MetaData), NewProp_TextBlock_Index_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UC4GuessingEntry_Statics::NewProp_TextBlock_Player = { "TextBlock_Player", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UC4GuessingEntry, TextBlock_Player), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextBlock_Player_MetaData), NewProp_TextBlock_Player_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UC4GuessingEntry_Statics::NewProp_TextBlock_Number = { "TextBlock_Number", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UC4GuessingEntry, TextBlock_Number), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextBlock_Number_MetaData), NewProp_TextBlock_Number_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UC4GuessingEntry_Statics::NewProp_TextBlock_Result = { "TextBlock_Result", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UC4GuessingEntry, TextBlock_Result), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextBlock_Result_MetaData), NewProp_TextBlock_Result_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UC4GuessingEntry_Statics::NewProp_MyColor = { "MyColor", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UC4GuessingEntry, MyColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyColor_MetaData), NewProp_MyColor_MetaData) }; // 2024315916
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UC4GuessingEntry_Statics::NewProp_OpponentColor = { "OpponentColor", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UC4GuessingEntry, OpponentColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpponentColor_MetaData), NewProp_OpponentColor_MetaData) }; // 2024315916
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UC4GuessingEntry_Statics::NewProp_HitColor = { "HitColor", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UC4GuessingEntry, HitColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitColor_MetaData), NewProp_HitColor_MetaData) }; // 2024315916
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UC4GuessingEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UC4GuessingEntry_Statics::NewProp_TextBlock_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UC4GuessingEntry_Statics::NewProp_TextBlock_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UC4GuessingEntry_Statics::NewProp_TextBlock_Number,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UC4GuessingEntry_Statics::NewProp_TextBlock_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UC4GuessingEntry_Statics::NewProp_MyColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UC4GuessingEntry_Statics::NewProp_OpponentColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UC4GuessingEntry_Statics::NewProp_HitColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UC4GuessingEntry_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UC4GuessingEntry_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_C4Project,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UC4GuessingEntry_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UC4GuessingEntry_Statics::ClassParams = {
	&UC4GuessingEntry::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UC4GuessingEntry_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UC4GuessingEntry_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UC4GuessingEntry_Statics::Class_MetaDataParams), Z_Construct_UClass_UC4GuessingEntry_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UC4GuessingEntry()
{
	if (!Z_Registration_Info_UClass_UC4GuessingEntry.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UC4GuessingEntry.OuterSingleton, Z_Construct_UClass_UC4GuessingEntry_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UC4GuessingEntry.OuterSingleton;
}
template<> C4PROJECT_API UClass* StaticClass<UC4GuessingEntry>()
{
	return UC4GuessingEntry::StaticClass();
}
UC4GuessingEntry::UC4GuessingEntry(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UC4GuessingEntry);
UC4GuessingEntry::~UC4GuessingEntry() {}
// End Class UC4GuessingEntry

// Begin Registration
struct Z_CompiledInDeferFile_FID_C4Project_Source_C4Project_Public_UI_C4GuessingEntry_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UC4GuessingEntry, UC4GuessingEntry::StaticClass, TEXT("UC4GuessingEntry"), &Z_Registration_Info_UClass_UC4GuessingEntry, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UC4GuessingEntry), 3391183965U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_C4Project_Source_C4Project_Public_UI_C4GuessingEntry_h_531455145(TEXT("/Script/C4Project"),
	Z_CompiledInDeferFile_FID_C4Project_Source_C4Project_Public_UI_C4GuessingEntry_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_C4Project_Source_C4Project_Public_UI_C4GuessingEntry_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
