// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GGJ26MaskPlayerController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeGGJ26MaskPlayerController() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
GGJ26MASK_API UClass* Z_Construct_UClass_AGGJ26MaskPlayerController();
GGJ26MASK_API UClass* Z_Construct_UClass_AGGJ26MaskPlayerController_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_GGJ26Mask();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AGGJ26MaskPlayerController ***********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AGGJ26MaskPlayerController;
UClass* AGGJ26MaskPlayerController::GetPrivateStaticClass()
{
	using TClass = AGGJ26MaskPlayerController;
	if (!Z_Registration_Info_UClass_AGGJ26MaskPlayerController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("GGJ26MaskPlayerController"),
			Z_Registration_Info_UClass_AGGJ26MaskPlayerController.InnerSingleton,
			StaticRegisterNativesAGGJ26MaskPlayerController,
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
	return Z_Registration_Info_UClass_AGGJ26MaskPlayerController.InnerSingleton;
}
UClass* Z_Construct_UClass_AGGJ26MaskPlayerController_NoRegister()
{
	return AGGJ26MaskPlayerController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AGGJ26MaskPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple first person Player Controller\n *  Manages the input mapping context.\n *  Overrides the Player Camera Manager class.\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "GGJ26MaskPlayerController.h" },
		{ "ModuleRelativePath", "GGJ26MaskPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple first person Player Controller\nManages the input mapping context.\nOverrides the Player Camera Manager class." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContexts_MetaData[] = {
		{ "Category", "Input|Input Mappings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Contexts */" },
#endif
		{ "ModuleRelativePath", "GGJ26MaskPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Contexts" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MobileExcludedMappingContexts_MetaData[] = {
		{ "Category", "Input|Input Mappings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Contexts */" },
#endif
		{ "ModuleRelativePath", "GGJ26MaskPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Contexts" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MobileControlsWidgetClass_MetaData[] = {
		{ "Category", "Input|Touch Controls" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Mobile controls widget to spawn */" },
#endif
		{ "ModuleRelativePath", "GGJ26MaskPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mobile controls widget to spawn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MobileControlsWidget_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pointer to the mobile controls widget */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GGJ26MaskPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pointer to the mobile controls widget" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceTouchControls_MetaData[] = {
		{ "Category", "Input|Touch Controls" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, the player will use UMG touch controls even if not playing on mobile platforms */" },
#endif
		{ "ModuleRelativePath", "GGJ26MaskPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, the player will use UMG touch controls even if not playing on mobile platforms" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class AGGJ26MaskPlayerController constinit property declarations ***************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContexts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultMappingContexts;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MobileExcludedMappingContexts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MobileExcludedMappingContexts;
	static const UECodeGen_Private::FClassPropertyParams NewProp_MobileControlsWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MobileControlsWidget;
	static void NewProp_bForceTouchControls_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceTouchControls;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AGGJ26MaskPlayerController constinit property declarations *****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGGJ26MaskPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AGGJ26MaskPlayerController_Statics

// ********** Begin Class AGGJ26MaskPlayerController Property Definitions **************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGGJ26MaskPlayerController_Statics::NewProp_DefaultMappingContexts_Inner = { "DefaultMappingContexts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGGJ26MaskPlayerController_Statics::NewProp_DefaultMappingContexts = { "DefaultMappingContexts", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGGJ26MaskPlayerController, DefaultMappingContexts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContexts_MetaData), NewProp_DefaultMappingContexts_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGGJ26MaskPlayerController_Statics::NewProp_MobileExcludedMappingContexts_Inner = { "MobileExcludedMappingContexts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGGJ26MaskPlayerController_Statics::NewProp_MobileExcludedMappingContexts = { "MobileExcludedMappingContexts", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGGJ26MaskPlayerController, MobileExcludedMappingContexts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MobileExcludedMappingContexts_MetaData), NewProp_MobileExcludedMappingContexts_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGGJ26MaskPlayerController_Statics::NewProp_MobileControlsWidgetClass = { "MobileControlsWidgetClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGGJ26MaskPlayerController, MobileControlsWidgetClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MobileControlsWidgetClass_MetaData), NewProp_MobileControlsWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGGJ26MaskPlayerController_Statics::NewProp_MobileControlsWidget = { "MobileControlsWidget", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGGJ26MaskPlayerController, MobileControlsWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MobileControlsWidget_MetaData), NewProp_MobileControlsWidget_MetaData) };
void Z_Construct_UClass_AGGJ26MaskPlayerController_Statics::NewProp_bForceTouchControls_SetBit(void* Obj)
{
	((AGGJ26MaskPlayerController*)Obj)->bForceTouchControls = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGGJ26MaskPlayerController_Statics::NewProp_bForceTouchControls = { "bForceTouchControls", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGGJ26MaskPlayerController), &Z_Construct_UClass_AGGJ26MaskPlayerController_Statics::NewProp_bForceTouchControls_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceTouchControls_MetaData), NewProp_bForceTouchControls_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGGJ26MaskPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGGJ26MaskPlayerController_Statics::NewProp_DefaultMappingContexts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGGJ26MaskPlayerController_Statics::NewProp_DefaultMappingContexts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGGJ26MaskPlayerController_Statics::NewProp_MobileExcludedMappingContexts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGGJ26MaskPlayerController_Statics::NewProp_MobileExcludedMappingContexts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGGJ26MaskPlayerController_Statics::NewProp_MobileControlsWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGGJ26MaskPlayerController_Statics::NewProp_MobileControlsWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGGJ26MaskPlayerController_Statics::NewProp_bForceTouchControls,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGGJ26MaskPlayerController_Statics::PropPointers) < 2048);
// ********** End Class AGGJ26MaskPlayerController Property Definitions ****************************
UObject* (*const Z_Construct_UClass_AGGJ26MaskPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_GGJ26Mask,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGGJ26MaskPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGGJ26MaskPlayerController_Statics::ClassParams = {
	&AGGJ26MaskPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AGGJ26MaskPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AGGJ26MaskPlayerController_Statics::PropPointers),
	0,
	0x009002A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGGJ26MaskPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AGGJ26MaskPlayerController_Statics::Class_MetaDataParams)
};
void AGGJ26MaskPlayerController::StaticRegisterNativesAGGJ26MaskPlayerController()
{
}
UClass* Z_Construct_UClass_AGGJ26MaskPlayerController()
{
	if (!Z_Registration_Info_UClass_AGGJ26MaskPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGGJ26MaskPlayerController.OuterSingleton, Z_Construct_UClass_AGGJ26MaskPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGGJ26MaskPlayerController.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AGGJ26MaskPlayerController);
AGGJ26MaskPlayerController::~AGGJ26MaskPlayerController() {}
// ********** End Class AGGJ26MaskPlayerController *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GGJ26Mask_VersionControl_GGJ26Mask_GGJ26Mask_Source_GGJ26Mask_GGJ26MaskPlayerController_h__Script_GGJ26Mask_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGGJ26MaskPlayerController, AGGJ26MaskPlayerController::StaticClass, TEXT("AGGJ26MaskPlayerController"), &Z_Registration_Info_UClass_AGGJ26MaskPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGGJ26MaskPlayerController), 916397306U) },
	};
}; // Z_CompiledInDeferFile_FID_GGJ26Mask_VersionControl_GGJ26Mask_GGJ26Mask_Source_GGJ26Mask_GGJ26MaskPlayerController_h__Script_GGJ26Mask_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GGJ26Mask_VersionControl_GGJ26Mask_GGJ26Mask_Source_GGJ26Mask_GGJ26MaskPlayerController_h__Script_GGJ26Mask_3353885871{
	TEXT("/Script/GGJ26Mask"),
	Z_CompiledInDeferFile_FID_GGJ26Mask_VersionControl_GGJ26Mask_GGJ26Mask_Source_GGJ26Mask_GGJ26MaskPlayerController_h__Script_GGJ26Mask_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GGJ26Mask_VersionControl_GGJ26Mask_GGJ26Mask_Source_GGJ26Mask_GGJ26MaskPlayerController_h__Script_GGJ26Mask_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
