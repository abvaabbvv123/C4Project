// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "C4Project/Public/GameSystem/C4GameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC4GameModeBase() {}

// Begin Cross Module References
C4PROJECT_API UClass* Z_Construct_UClass_AC4GameModeBase();
C4PROJECT_API UClass* Z_Construct_UClass_AC4GameModeBase_NoRegister();
C4PROJECT_API UClass* Z_Construct_UClass_AC4PlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_C4Project();
// End Cross Module References

// Begin Class AC4GameModeBase
void AC4GameModeBase::StaticRegisterNativesAC4GameModeBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AC4GameModeBase);
UClass* Z_Construct_UClass_AC4GameModeBase_NoRegister()
{
	return AC4GameModeBase::StaticClass();
}
struct Z_Construct_UClass_AC4GameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameSystem/C4GameModeBase.h" },
		{ "ModuleRelativePath", "Public/GameSystem/C4GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RestartDelaySeconds_MetaData[] = {
		{ "Category", "Rule" },
		{ "ModuleRelativePath", "Public/GameSystem/C4GameModeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllPlayerControllers_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameSystem/C4GameModeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecretSetupDelay_MetaData[] = {
		{ "Category", "Rule" },
		{ "ModuleRelativePath", "Public/GameSystem/C4GameModeBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_RestartDelaySeconds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AllPlayerControllers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllPlayerControllers;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SecretSetupDelay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC4GameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AC4GameModeBase_Statics::NewProp_RestartDelaySeconds = { "RestartDelaySeconds", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC4GameModeBase, RestartDelaySeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RestartDelaySeconds_MetaData), NewProp_RestartDelaySeconds_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC4GameModeBase_Statics::NewProp_AllPlayerControllers_Inner = { "AllPlayerControllers", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AC4PlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AC4GameModeBase_Statics::NewProp_AllPlayerControllers = { "AllPlayerControllers", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC4GameModeBase, AllPlayerControllers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllPlayerControllers_MetaData), NewProp_AllPlayerControllers_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AC4GameModeBase_Statics::NewProp_SecretSetupDelay = { "SecretSetupDelay", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC4GameModeBase, SecretSetupDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecretSetupDelay_MetaData), NewProp_SecretSetupDelay_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AC4GameModeBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC4GameModeBase_Statics::NewProp_RestartDelaySeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC4GameModeBase_Statics::NewProp_AllPlayerControllers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC4GameModeBase_Statics::NewProp_AllPlayerControllers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC4GameModeBase_Statics::NewProp_SecretSetupDelay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AC4GameModeBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AC4GameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_C4Project,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AC4GameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AC4GameModeBase_Statics::ClassParams = {
	&AC4GameModeBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AC4GameModeBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AC4GameModeBase_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AC4GameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AC4GameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AC4GameModeBase()
{
	if (!Z_Registration_Info_UClass_AC4GameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AC4GameModeBase.OuterSingleton, Z_Construct_UClass_AC4GameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AC4GameModeBase.OuterSingleton;
}
template<> C4PROJECT_API UClass* StaticClass<AC4GameModeBase>()
{
	return AC4GameModeBase::StaticClass();
}
AC4GameModeBase::AC4GameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AC4GameModeBase);
AC4GameModeBase::~AC4GameModeBase() {}
// End Class AC4GameModeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_C4Project_Source_C4Project_Public_GameSystem_C4GameModeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AC4GameModeBase, AC4GameModeBase::StaticClass, TEXT("AC4GameModeBase"), &Z_Registration_Info_UClass_AC4GameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AC4GameModeBase), 3950529391U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_C4Project_Source_C4Project_Public_GameSystem_C4GameModeBase_h_3345665226(TEXT("/Script/C4Project"),
	Z_CompiledInDeferFile_FID_C4Project_Source_C4Project_Public_GameSystem_C4GameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_C4Project_Source_C4Project_Public_GameSystem_C4GameModeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
