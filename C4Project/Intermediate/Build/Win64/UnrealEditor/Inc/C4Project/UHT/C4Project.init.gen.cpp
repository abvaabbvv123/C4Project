// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC4Project_init() {}
	C4PROJECT_API UFunction* Z_Construct_UDelegateFunction_C4Project_OnC4BoolChanged__DelegateSignature();
	C4PROJECT_API UFunction* Z_Construct_UDelegateFunction_C4Project_OnC4GuessHistoryChanged__DelegateSignature();
	C4PROJECT_API UFunction* Z_Construct_UDelegateFunction_C4Project_OnC4PhaseChanged__DelegateSignature();
	C4PROJECT_API UFunction* Z_Construct_UDelegateFunction_C4Project_OnC4StringChanged__DelegateSignature();
	C4PROJECT_API UFunction* Z_Construct_UDelegateFunction_C4Project_OnC4TextEvent__DelegateSignature();
	C4PROJECT_API UFunction* Z_Construct_UDelegateFunction_C4Project_OnC4TurnChanged__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_C4Project;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_C4Project()
	{
		if (!Z_Registration_Info_UPackage__Script_C4Project.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_C4Project_OnC4BoolChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_C4Project_OnC4GuessHistoryChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_C4Project_OnC4PhaseChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_C4Project_OnC4StringChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_C4Project_OnC4TextEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_C4Project_OnC4TurnChanged__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/C4Project",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x07AFEED4,
				0x0E2C7129,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_C4Project.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_C4Project.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_C4Project(Z_Construct_UPackage__Script_C4Project, TEXT("/Script/C4Project"), Z_Registration_Info_UPackage__Script_C4Project, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x07AFEED4, 0x0E2C7129));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
