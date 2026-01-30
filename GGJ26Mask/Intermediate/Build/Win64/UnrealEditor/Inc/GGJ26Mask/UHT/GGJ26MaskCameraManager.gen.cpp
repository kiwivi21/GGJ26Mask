// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GGJ26MaskCameraManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeGGJ26MaskCameraManager() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
GGJ26MASK_API UClass* Z_Construct_UClass_AGGJ26MaskCameraManager();
GGJ26MASK_API UClass* Z_Construct_UClass_AGGJ26MaskCameraManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_GGJ26Mask();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AGGJ26MaskCameraManager **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AGGJ26MaskCameraManager;
UClass* AGGJ26MaskCameraManager::GetPrivateStaticClass()
{
	using TClass = AGGJ26MaskCameraManager;
	if (!Z_Registration_Info_UClass_AGGJ26MaskCameraManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("GGJ26MaskCameraManager"),
			Z_Registration_Info_UClass_AGGJ26MaskCameraManager.InnerSingleton,
			StaticRegisterNativesAGGJ26MaskCameraManager,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AGGJ26MaskCameraManager.InnerSingleton;
}
UClass* Z_Construct_UClass_AGGJ26MaskCameraManager_NoRegister()
{
	return AGGJ26MaskCameraManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AGGJ26MaskCameraManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Basic First Person camera manager.\n *  Limits min/max look pitch.\n */" },
#endif
		{ "IncludePath", "GGJ26MaskCameraManager.h" },
		{ "ModuleRelativePath", "GGJ26MaskCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic First Person camera manager.\nLimits min/max look pitch." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class AGGJ26MaskCameraManager constinit property declarations ******************
// ********** End Class AGGJ26MaskCameraManager constinit property declarations ********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGGJ26MaskCameraManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AGGJ26MaskCameraManager_Statics
UObject* (*const Z_Construct_UClass_AGGJ26MaskCameraManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
	(UObject* (*)())Z_Construct_UPackage__Script_GGJ26Mask,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGGJ26MaskCameraManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGGJ26MaskCameraManager_Statics::ClassParams = {
	&AGGJ26MaskCameraManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGGJ26MaskCameraManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AGGJ26MaskCameraManager_Statics::Class_MetaDataParams)
};
void AGGJ26MaskCameraManager::StaticRegisterNativesAGGJ26MaskCameraManager()
{
}
UClass* Z_Construct_UClass_AGGJ26MaskCameraManager()
{
	if (!Z_Registration_Info_UClass_AGGJ26MaskCameraManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGGJ26MaskCameraManager.OuterSingleton, Z_Construct_UClass_AGGJ26MaskCameraManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGGJ26MaskCameraManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AGGJ26MaskCameraManager);
AGGJ26MaskCameraManager::~AGGJ26MaskCameraManager() {}
// ********** End Class AGGJ26MaskCameraManager ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GGJ26Mask_VersionControl_GGJ26Mask_GGJ26Mask_Source_GGJ26Mask_GGJ26MaskCameraManager_h__Script_GGJ26Mask_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGGJ26MaskCameraManager, AGGJ26MaskCameraManager::StaticClass, TEXT("AGGJ26MaskCameraManager"), &Z_Registration_Info_UClass_AGGJ26MaskCameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGGJ26MaskCameraManager), 2505875953U) },
	};
}; // Z_CompiledInDeferFile_FID_GGJ26Mask_VersionControl_GGJ26Mask_GGJ26Mask_Source_GGJ26Mask_GGJ26MaskCameraManager_h__Script_GGJ26Mask_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GGJ26Mask_VersionControl_GGJ26Mask_GGJ26Mask_Source_GGJ26Mask_GGJ26MaskCameraManager_h__Script_GGJ26Mask_4145455150{
	TEXT("/Script/GGJ26Mask"),
	Z_CompiledInDeferFile_FID_GGJ26Mask_VersionControl_GGJ26Mask_GGJ26Mask_Source_GGJ26Mask_GGJ26MaskCameraManager_h__Script_GGJ26Mask_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GGJ26Mask_VersionControl_GGJ26Mask_GGJ26Mask_Source_GGJ26Mask_GGJ26MaskCameraManager_h__Script_GGJ26Mask_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
