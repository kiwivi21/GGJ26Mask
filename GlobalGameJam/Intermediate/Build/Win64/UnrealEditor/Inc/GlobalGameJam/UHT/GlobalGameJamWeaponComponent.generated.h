// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GlobalGameJamWeaponComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AGlobalGameJamCharacter;
#ifdef GLOBALGAMEJAM_GlobalGameJamWeaponComponent_generated_h
#error "GlobalGameJamWeaponComponent.generated.h already included, missing '#pragma once' in GlobalGameJamWeaponComponent.h"
#endif
#define GLOBALGAMEJAM_GlobalGameJamWeaponComponent_generated_h

#define FID_Users_jakob_Mask_Game_Jam_GlobalGameJam_Source_GlobalGameJam_GlobalGameJamWeaponComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEndPlay); \
	DECLARE_FUNCTION(execFire); \
	DECLARE_FUNCTION(execAttachWeapon);


#define FID_Users_jakob_Mask_Game_Jam_GlobalGameJam_Source_GlobalGameJam_GlobalGameJamWeaponComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGlobalGameJamWeaponComponent(); \
	friend struct Z_Construct_UClass_UGlobalGameJamWeaponComponent_Statics; \
public: \
	DECLARE_CLASS(UGlobalGameJamWeaponComponent, USkeletalMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GlobalGameJam"), NO_API) \
	DECLARE_SERIALIZER(UGlobalGameJamWeaponComponent)


#define FID_Users_jakob_Mask_Game_Jam_GlobalGameJam_Source_GlobalGameJam_GlobalGameJamWeaponComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGlobalGameJamWeaponComponent(UGlobalGameJamWeaponComponent&&); \
	UGlobalGameJamWeaponComponent(const UGlobalGameJamWeaponComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGlobalGameJamWeaponComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGlobalGameJamWeaponComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGlobalGameJamWeaponComponent) \
	NO_API virtual ~UGlobalGameJamWeaponComponent();


#define FID_Users_jakob_Mask_Game_Jam_GlobalGameJam_Source_GlobalGameJam_GlobalGameJamWeaponComponent_h_11_PROLOG
#define FID_Users_jakob_Mask_Game_Jam_GlobalGameJam_Source_GlobalGameJam_GlobalGameJamWeaponComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_jakob_Mask_Game_Jam_GlobalGameJam_Source_GlobalGameJam_GlobalGameJamWeaponComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_jakob_Mask_Game_Jam_GlobalGameJam_Source_GlobalGameJam_GlobalGameJamWeaponComponent_h_14_INCLASS_NO_PURE_DECLS \
	FID_Users_jakob_Mask_Game_Jam_GlobalGameJam_Source_GlobalGameJam_GlobalGameJamWeaponComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GLOBALGAMEJAM_API UClass* StaticClass<class UGlobalGameJamWeaponComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_jakob_Mask_Game_Jam_GlobalGameJam_Source_GlobalGameJam_GlobalGameJamWeaponComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
