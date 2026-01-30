// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GlobalGameJamProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef GLOBALGAMEJAM_GlobalGameJamProjectile_generated_h
#error "GlobalGameJamProjectile.generated.h already included, missing '#pragma once' in GlobalGameJamProjectile.h"
#endif
#define GLOBALGAMEJAM_GlobalGameJamProjectile_generated_h

#define FID_Users_jakob_Mask_Game_Jam_GlobalGameJam_Source_GlobalGameJam_GlobalGameJamProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_Users_jakob_Mask_Game_Jam_GlobalGameJam_Source_GlobalGameJam_GlobalGameJamProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGlobalGameJamProjectile(); \
	friend struct Z_Construct_UClass_AGlobalGameJamProjectile_Statics; \
public: \
	DECLARE_CLASS(AGlobalGameJamProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GlobalGameJam"), NO_API) \
	DECLARE_SERIALIZER(AGlobalGameJamProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Users_jakob_Mask_Game_Jam_GlobalGameJam_Source_GlobalGameJam_GlobalGameJamProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AGlobalGameJamProjectile(AGlobalGameJamProjectile&&); \
	AGlobalGameJamProjectile(const AGlobalGameJamProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGlobalGameJamProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGlobalGameJamProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGlobalGameJamProjectile) \
	NO_API virtual ~AGlobalGameJamProjectile();


#define FID_Users_jakob_Mask_Game_Jam_GlobalGameJam_Source_GlobalGameJam_GlobalGameJamProjectile_h_12_PROLOG
#define FID_Users_jakob_Mask_Game_Jam_GlobalGameJam_Source_GlobalGameJam_GlobalGameJamProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_jakob_Mask_Game_Jam_GlobalGameJam_Source_GlobalGameJam_GlobalGameJamProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_jakob_Mask_Game_Jam_GlobalGameJam_Source_GlobalGameJam_GlobalGameJamProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_jakob_Mask_Game_Jam_GlobalGameJam_Source_GlobalGameJam_GlobalGameJamProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GLOBALGAMEJAM_API UClass* StaticClass<class AGlobalGameJamProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_jakob_Mask_Game_Jam_GlobalGameJam_Source_GlobalGameJam_GlobalGameJamProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
