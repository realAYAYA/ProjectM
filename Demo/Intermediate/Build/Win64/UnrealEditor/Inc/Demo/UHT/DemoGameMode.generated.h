// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DemoGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AMPlayerState;
#ifdef DEMO_DemoGameMode_generated_h
#error "DemoGameMode.generated.h already included, missing '#pragma once' in DemoGameMode.h"
#endif
#define DEMO_DemoGameMode_generated_h

#define FID_Demo_Source_Demo_Public_DemoGameMode_h_14_SPARSE_DATA
#define FID_Demo_Source_Demo_Public_DemoGameMode_h_14_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Demo_Source_Demo_Public_DemoGameMode_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Demo_Source_Demo_Public_DemoGameMode_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAllPlayerStates); \
	DECLARE_FUNCTION(execFindOnlinePlayerByName); \
	DECLARE_FUNCTION(execFindOnlinePlayerByID);


#define FID_Demo_Source_Demo_Public_DemoGameMode_h_14_ACCESSORS
#define FID_Demo_Source_Demo_Public_DemoGameMode_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMGameMode(); \
	friend struct Z_Construct_UClass_AMGameMode_Statics; \
public: \
	DECLARE_CLASS(AMGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Demo"), DEMO_API) \
	DECLARE_SERIALIZER(AMGameMode)


#define FID_Demo_Source_Demo_Public_DemoGameMode_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	DEMO_API AMGameMode(AMGameMode&&); \
	DEMO_API AMGameMode(const AMGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DEMO_API, AMGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMGameMode) \
	DEMO_API virtual ~AMGameMode();


#define FID_Demo_Source_Demo_Public_DemoGameMode_h_11_PROLOG
#define FID_Demo_Source_Demo_Public_DemoGameMode_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Demo_Source_Demo_Public_DemoGameMode_h_14_SPARSE_DATA \
	FID_Demo_Source_Demo_Public_DemoGameMode_h_14_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Demo_Source_Demo_Public_DemoGameMode_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Demo_Source_Demo_Public_DemoGameMode_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Demo_Source_Demo_Public_DemoGameMode_h_14_ACCESSORS \
	FID_Demo_Source_Demo_Public_DemoGameMode_h_14_INCLASS_NO_PURE_DECLS \
	FID_Demo_Source_Demo_Public_DemoGameMode_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEMO_API UClass* StaticClass<class AMGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Demo_Source_Demo_Public_DemoGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
