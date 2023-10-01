// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MBlueprintLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMGameInstance;
class UMGameTables;
class UObject;
#ifdef DEMO_MBlueprintLibrary_generated_h
#error "MBlueprintLibrary.generated.h already included, missing '#pragma once' in MBlueprintLibrary.h"
#endif
#define DEMO_MBlueprintLibrary_generated_h

#define FID_Demo_Source_Demo_Public_MBlueprintLibrary_h_17_SPARSE_DATA
#define FID_Demo_Source_Demo_Public_MBlueprintLibrary_h_17_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Demo_Source_Demo_Public_MBlueprintLibrary_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Demo_Source_Demo_Public_MBlueprintLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMGameTables); \
	DECLARE_FUNCTION(execGetMGameInstance);


#define FID_Demo_Source_Demo_Public_MBlueprintLibrary_h_17_ACCESSORS
#define FID_Demo_Source_Demo_Public_MBlueprintLibrary_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UMBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UMBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Demo"), NO_API) \
	DECLARE_SERIALIZER(UMBlueprintLibrary)


#define FID_Demo_Source_Demo_Public_MBlueprintLibrary_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMBlueprintLibrary(UMBlueprintLibrary&&); \
	NO_API UMBlueprintLibrary(const UMBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMBlueprintLibrary) \
	NO_API virtual ~UMBlueprintLibrary();


#define FID_Demo_Source_Demo_Public_MBlueprintLibrary_h_14_PROLOG
#define FID_Demo_Source_Demo_Public_MBlueprintLibrary_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Demo_Source_Demo_Public_MBlueprintLibrary_h_17_SPARSE_DATA \
	FID_Demo_Source_Demo_Public_MBlueprintLibrary_h_17_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Demo_Source_Demo_Public_MBlueprintLibrary_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Demo_Source_Demo_Public_MBlueprintLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Demo_Source_Demo_Public_MBlueprintLibrary_h_17_ACCESSORS \
	FID_Demo_Source_Demo_Public_MBlueprintLibrary_h_17_INCLASS_NO_PURE_DECLS \
	FID_Demo_Source_Demo_Public_MBlueprintLibrary_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEMO_API UClass* StaticClass<class UMBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Demo_Source_Demo_Public_MBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
