// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGlobalGameJam_init() {}
	GLOBALGAMEJAM_API UFunction* Z_Construct_UDelegateFunction_GlobalGameJam_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_GlobalGameJam;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_GlobalGameJam()
	{
		if (!Z_Registration_Info_UPackage__Script_GlobalGameJam.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_GlobalGameJam_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/GlobalGameJam",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x15480D0D,
				0xB9E0FB5F,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_GlobalGameJam.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_GlobalGameJam.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_GlobalGameJam(Z_Construct_UPackage__Script_GlobalGameJam, TEXT("/Script/GlobalGameJam"), Z_Registration_Info_UPackage__Script_GlobalGameJam, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x15480D0D, 0xB9E0FB5F));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
