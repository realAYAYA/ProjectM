// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MGameInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMGameTables;
#ifdef DEMO_MGameInstance_generated_h
#error "MGameInstance.generated.h already included, missing '#pragma once' in MGameInstance.h"
#endif
#define DEMO_MGameInstance_generated_h

#define FID_Demo_Source_Demo_Public_MGameInstance_h_20_SPARSE_DATA
#define FID_Demo_Source_Demo_Public_MGameInstance_h_20_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Demo_Source_Demo_Public_MGameInstance_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Demo_Source_Demo_Public_MGameInstance_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMGameTables); \
	DECLARE_FUNCTION(execSetLoginInfo);


#define FID_Demo_Source_Demo_Public_MGameInstance_h_20_ACCESSORS
#define FID_Demo_Source_Demo_Public_MGameInstance_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMGameInstance(); \
	friend struct Z_Construct_UClass_UMGameInstance_Statics; \
public: \
	DECLARE_CLASS(UMGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Demo"), NO_API) \
	DECLARE_SERIALIZER(UMGameInstance)


#define FID_Demo_Source_Demo_Public_MGameInstance_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMGameInstance(UMGameInstance&&); \
	NO_API UMGameInstance(const UMGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMGameInstance) \
	NO_API virtual ~UMGameInstance();


#define FID_Demo_Source_Demo_Public_MGameInstance_h_17_PROLOG
#define FID_Demo_Source_Demo_Public_MGameInstance_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Demo_Source_Demo_Public_MGameInstance_h_20_SPARSE_DATA \
	FID_Demo_Source_Demo_Public_MGameInstance_h_20_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Demo_Source_Demo_Public_MGameInstance_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Demo_Source_Demo_Public_MGameInstance_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Demo_Source_Demo_Public_MGameInstance_h_20_ACCESSORS \
	FID_Demo_Source_Demo_Public_MGameInstance_h_20_INCLASS_NO_PURE_DECLS \
	FID_Demo_Source_Demo_Public_MGameInstance_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEMO_API UClass* StaticClass<class UMGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Demo_Source_Demo_Public_MGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
