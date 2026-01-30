// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GGJ26MaskGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeGGJ26MaskGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
GGJ26MASK_API UClass* Z_Construct_UClass_AGGJ26MaskGameMode();
GGJ26MASK_API UClass* Z_Construct_UClass_AGGJ26MaskGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_GGJ26Mask();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AGGJ26MaskGameMode *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AGGJ26MaskGameMode;
UClass* AGGJ26MaskGameMode::GetPrivateStaticClass()
{
	using TClass = AGGJ26MaskGameMode;
	if (!Z_Registration_Info_UClass_AGGJ26MaskGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("GGJ26MaskGameMode"),
			Z_Registration_Info_UClass_AGGJ26MaskGameMode.InnerSingleton,
			StaticRegisterNativesAGGJ26MaskGameMode,
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
	return Z_Registration_Info_UClass_AGGJ26MaskGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AGGJ26MaskGameMode_NoRegister()
{
	return AGGJ26MaskGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AGGJ26MaskGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a first person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GGJ26MaskGameMode.h" },
		{ "ModuleRelativePath", "GGJ26MaskGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a first person game" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class AGGJ26MaskGameMode constinit property declarations ***********************
// ********** End Class AGGJ26MaskGameMode constinit property declarations *************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGGJ26MaskGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AGGJ26MaskGameMode_Statics
UObject* (*const Z_Construct_UClass_AGGJ26MaskGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_GGJ26Mask,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGGJ26MaskGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGGJ26MaskGameMode_Statics::ClassParams = {
	&AGGJ26MaskGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008002ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGGJ26MaskGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AGGJ26MaskGameMode_Statics::Class_MetaDataParams)
};
void AGGJ26MaskGameMode::StaticRegisterNativesAGGJ26MaskGameMode()
{
}
UClass* Z_Construct_UClass_AGGJ26MaskGameMode()
{
	if (!Z_Registration_Info_UClass_AGGJ26MaskGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGGJ26MaskGameMode.OuterSingleton, Z_Construct_UClass_AGGJ26MaskGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGGJ26MaskGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AGGJ26MaskGameMode);
AGGJ26MaskGameMode::~AGGJ26MaskGameMode() {}
// ********** End Class AGGJ26MaskGameMode *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GGJ26Mask_VersionControl_GGJ26Mask_GGJ26Mask_Source_GGJ26Mask_GGJ26MaskGameMode_h__Script_GGJ26Mask_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGGJ26MaskGameMode, AGGJ26MaskGameMode::StaticClass, TEXT("AGGJ26MaskGameMode"), &Z_Registration_Info_UClass_AGGJ26MaskGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGGJ26MaskGameMode), 2879123678U) },
	};
}; // Z_CompiledInDeferFile_FID_GGJ26Mask_VersionControl_GGJ26Mask_GGJ26Mask_Source_GGJ26Mask_GGJ26MaskGameMode_h__Script_GGJ26Mask_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GGJ26Mask_VersionControl_GGJ26Mask_GGJ26Mask_Source_GGJ26Mask_GGJ26MaskGameMode_h__Script_GGJ26Mask_891678070{
	TEXT("/Script/GGJ26Mask"),
	Z_CompiledInDeferFile_FID_GGJ26Mask_VersionControl_GGJ26Mask_GGJ26Mask_Source_GGJ26Mask_GGJ26MaskGameMode_h__Script_GGJ26Mask_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GGJ26Mask_VersionControl_GGJ26Mask_GGJ26Mask_Source_GGJ26Mask_GGJ26MaskGameMode_h__Script_GGJ26Mask_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
