// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GlobalGameJamPickUpComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AGlobalGameJamCharacter;
class UPrimitiveComponent;
struct FHitResult;
#ifdef GLOBALGAMEJAM_GlobalGameJamPickUpComponent_generated_h
#error "GlobalGameJamPickUpComponent.generated.h already included, missing '#pragma once' in GlobalGameJamPickUpComponent.h"
#endif
#define GLOBALGAMEJAM_GlobalGameJamPickUpComponent_generated_h

#define FID_Users_jakob_Mask_Game_Jam_GlobalGameJam_Source_GlobalGameJam_GlobalGameJamPickUpComponent_h_12_DELEGATE \
GLOBALGAMEJAM_API void FOnPickUp_DelegateWrapper(const FMulticastScriptDelegate& OnPickUp, AGlobalGameJamCharacter* PickUpCharacter);


#define FID_Users_jakob_Mask_Game_Jam_GlobalGameJam_Source_GlobalGameJam_GlobalGameJamPickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnSphereBeginOverlap);


#define FID_Users_jakob_Mask_Game_Jam_GlobalGameJam_Source_GlobalGameJam_GlobalGameJamPickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGlobalGameJamPickUpComponent(); \
	friend struct Z_Construct_UClass_UGlobalGameJamPickUpComponent_Statics; \
public: \
	DECLARE_CLASS(UGlobalGameJamPickUpComponent, USphereComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GlobalGameJam"), NO_API) \
	DECLARE_SERIALIZER(UGlobalGameJamPickUpComponent)


#define FID_Users_jakob_Mask_Game_Jam_GlobalGameJam_Source_GlobalGameJam_GlobalGameJamPickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGlobalGameJamPickUpComponent(UGlobalGameJamPickUpComponent&&); \
	UGlobalGameJamPickUpComponent(const UGlobalGameJamPickUpComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGlobalGameJamPickUpComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGlobalGameJamPickUpComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGlobalGameJamPickUpComponent) \
	NO_API virtual ~UGlobalGameJamPickUpComponent();


#define FID_Users_jakob_Mask_Game_Jam_GlobalGameJam_Source_GlobalGameJam_GlobalGameJamPickUpComponent_h_14_PROLOG
#define FID_Users_jakob_Mask_Game_Jam_GlobalGameJam_Source_GlobalGameJam_GlobalGameJamPickUpComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_jakob_Mask_Game_Jam_GlobalGameJam_Source_GlobalGameJam_GlobalGameJamPickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_jakob_Mask_Game_Jam_GlobalGameJam_Source_GlobalGameJam_GlobalGameJamPickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_jakob_Mask_Game_Jam_GlobalGameJam_Source_GlobalGameJam_GlobalGameJamPickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GLOBALGAMEJAM_API UClass* StaticClass<class UGlobalGameJamPickUpComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_jakob_Mask_Game_Jam_GlobalGameJam_Source_GlobalGameJam_GlobalGameJamPickUpComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
