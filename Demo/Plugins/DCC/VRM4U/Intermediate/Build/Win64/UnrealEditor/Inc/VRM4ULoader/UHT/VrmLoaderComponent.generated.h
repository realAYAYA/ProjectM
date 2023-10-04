// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VrmLoaderComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UVrmAssetListObject;
#ifdef VRM4ULOADER_VrmLoaderComponent_generated_h
#error "VrmLoaderComponent.generated.h already included, missing '#pragma once' in VrmLoaderComponent.h"
#endif
#define VRM4ULOADER_VrmLoaderComponent_generated_h

#define FID_Demo_Plugins_DCC_VRM4U_Source_VRM4ULoader_Public_VrmLoaderComponent_h_45_DELEGATE \
static void FOnFinishLoad_DelegateWrapper(const FMulticastScriptDelegate& OnFinishLoad, UVrmAssetListObject* AssetList);


#define FID_Demo_Plugins_DCC_VRM4U_Source_VRM4ULoader_Public_VrmLoaderComponent_h_36_SPARSE_DATA
#define FID_Demo_Plugins_DCC_VRM4U_Source_VRM4ULoader_Public_VrmLoaderComponent_h_36_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Demo_Plugins_DCC_VRM4U_Source_VRM4ULoader_Public_VrmLoaderComponent_h_36_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Demo_Plugins_DCC_VRM4U_Source_VRM4ULoader_Public_VrmLoaderComponent_h_36_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLoadVRMFileAsync); \
	DECLARE_FUNCTION(execLoadVRMFile);


#define FID_Demo_Plugins_DCC_VRM4U_Source_VRM4ULoader_Public_VrmLoaderComponent_h_36_ACCESSORS
#define FID_Demo_Plugins_DCC_VRM4U_Source_VRM4ULoader_Public_VrmLoaderComponent_h_36_INCLASS \
private: \
	static void StaticRegisterNativesUVrmLoaderComponent(); \
	friend struct Z_Construct_UClass_UVrmLoaderComponent_Statics; \
public: \
	DECLARE_CLASS(UVrmLoaderComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRM4ULoader"), NO_API) \
	DECLARE_SERIALIZER(UVrmLoaderComponent)


#define FID_Demo_Plugins_DCC_VRM4U_Source_VRM4ULoader_Public_VrmLoaderComponent_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVrmLoaderComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVrmLoaderComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVrmLoaderComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVrmLoaderComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVrmLoaderComponent(UVrmLoaderComponent&&); \
	NO_API UVrmLoaderComponent(const UVrmLoaderComponent&); \
public: \
	NO_API virtual ~UVrmLoaderComponent();


#define FID_Demo_Plugins_DCC_VRM4U_Source_VRM4ULoader_Public_VrmLoaderComponent_h_33_PROLOG
#define FID_Demo_Plugins_DCC_VRM4U_Source_VRM4ULoader_Public_VrmLoaderComponent_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Demo_Plugins_DCC_VRM4U_Source_VRM4ULoader_Public_VrmLoaderComponent_h_36_SPARSE_DATA \
	FID_Demo_Plugins_DCC_VRM4U_Source_VRM4ULoader_Public_VrmLoaderComponent_h_36_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Demo_Plugins_DCC_VRM4U_Source_VRM4ULoader_Public_VrmLoaderComponent_h_36_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Demo_Plugins_DCC_VRM4U_Source_VRM4ULoader_Public_VrmLoaderComponent_h_36_RPC_WRAPPERS \
	FID_Demo_Plugins_DCC_VRM4U_Source_VRM4ULoader_Public_VrmLoaderComponent_h_36_ACCESSORS \
	FID_Demo_Plugins_DCC_VRM4U_Source_VRM4ULoader_Public_VrmLoaderComponent_h_36_INCLASS \
	FID_Demo_Plugins_DCC_VRM4U_Source_VRM4ULoader_Public_VrmLoaderComponent_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VRM4ULOADER_API UClass* StaticClass<class UVrmLoaderComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Demo_Plugins_DCC_VRM4U_Source_VRM4ULoader_Public_VrmLoaderComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
