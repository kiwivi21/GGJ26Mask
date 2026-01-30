// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GlobalGameJam/GlobalGameJamGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGlobalGameJamGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
GLOBALGAMEJAM_API UClass* Z_Construct_UClass_AGlobalGameJamGameMode();
GLOBALGAMEJAM_API UClass* Z_Construct_UClass_AGlobalGameJamGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_GlobalGameJam();
// End Cross Module References

// Begin Class AGlobalGameJamGameMode
void AGlobalGameJamGameMode::StaticRegisterNativesAGlobalGameJamGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGlobalGameJamGameMode);
UClass* Z_Construct_UClass_AGlobalGameJamGameMode_NoRegister()
{
	return AGlobalGameJamGameMode::StaticClass();
}
struct Z_Construct_UClass_AGlobalGameJamGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GlobalGameJamGameMode.h" },
		{ "ModuleRelativePath", "GlobalGameJamGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGlobalGameJamGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AGlobalGameJamGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_GlobalGameJam,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGlobalGameJamGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGlobalGameJamGameMode_Statics::ClassParams = {
	&AGlobalGameJamGameMode::StaticClass,
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
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGlobalGameJamGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AGlobalGameJamGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGlobalGameJamGameMode()
{
	if (!Z_Registration_Info_UClass_AGlobalGameJamGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGlobalGameJamGameMode.OuterSingleton, Z_Construct_UClass_AGlobalGameJamGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGlobalGameJamGameMode.OuterSingleton;
}
template<> GLOBALGAMEJAM_API UClass* StaticClass<AGlobalGameJamGameMode>()
{
	return AGlobalGameJamGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGlobalGameJamGameMode);
AGlobalGameJamGameMode::~AGlobalGameJamGameMode() {}
// End Class AGlobalGameJamGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_jakob_Mask_Game_Jam_GlobalGameJam_Source_GlobalGameJam_GlobalGameJamGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGlobalGameJamGameMode, AGlobalGameJamGameMode::StaticClass, TEXT("AGlobalGameJamGameMode"), &Z_Registration_Info_UClass_AGlobalGameJamGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGlobalGameJamGameMode), 1360867655U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jakob_Mask_Game_Jam_GlobalGameJam_Source_GlobalGameJam_GlobalGameJamGameMode_h_2289644052(TEXT("/Script/GlobalGameJam"),
	Z_CompiledInDeferFile_FID_Users_jakob_Mask_Game_Jam_GlobalGameJam_Source_GlobalGameJam_GlobalGameJamGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jakob_Mask_Game_Jam_GlobalGameJam_Source_GlobalGameJam_GlobalGameJamGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
