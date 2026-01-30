// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGGJ26Mask_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	GGJ26MASK_API UFunction* Z_Construct_UDelegateFunction_GGJ26Mask_BulletCountUpdatedDelegate__DelegateSignature();
	GGJ26MASK_API UFunction* Z_Construct_UDelegateFunction_GGJ26Mask_DamagedDelegate__DelegateSignature();
	GGJ26MASK_API UFunction* Z_Construct_UDelegateFunction_GGJ26Mask_PawnDeathDelegate__DelegateSignature();
	GGJ26MASK_API UFunction* Z_Construct_UDelegateFunction_GGJ26Mask_SprintStateChangedDelegate__DelegateSignature();
	GGJ26MASK_API UFunction* Z_Construct_UDelegateFunction_GGJ26Mask_UpdateSprintMeterDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_GGJ26Mask;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_GGJ26Mask()
	{
		if (!Z_Registration_Info_UPackage__Script_GGJ26Mask.OuterSingleton)
		{
		static UObject* (*const SingletonFuncArray[])() = {
			(UObject* (*)())Z_Construct_UDelegateFunction_GGJ26Mask_BulletCountUpdatedDelegate__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_GGJ26Mask_DamagedDelegate__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_GGJ26Mask_PawnDeathDelegate__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_GGJ26Mask_SprintStateChangedDelegate__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_GGJ26Mask_UpdateSprintMeterDelegate__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/GGJ26Mask",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0x2784E6E0,
			0x69719278,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_GGJ26Mask.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_GGJ26Mask.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_GGJ26Mask(Z_Construct_UPackage__Script_GGJ26Mask, TEXT("/Script/GGJ26Mask"), Z_Registration_Info_UPackage__Script_GGJ26Mask, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x2784E6E0, 0x69719278));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
