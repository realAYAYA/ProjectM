// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Developer/MSaveGame.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCreateRoleParams;
struct FMUserData;
struct FRoleData;
#ifdef DEMO_MSaveGame_generated_h
#error "MSaveGame.generated.h already included, missing '#pragma once' in MSaveGame.h"
#endif
#define DEMO_MSaveGame_generated_h

#define FID_Demo_Source_Demo_Private_Developer_MSaveGame_h_18_SPARSE_DATA
#define FID_Demo_Source_Demo_Private_Developer_MSaveGame_h_18_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Demo_Source_Demo_Private_Developer_MSaveGame_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Demo_Source_Demo_Private_Developer_MSaveGame_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveRole); \
	DECLARE_FUNCTION(execUpdateRole); \
	DECLARE_FUNCTION(execCreateRole); \
	DECLARE_FUNCTION(execUpdateRoleName); \
	DECLARE_FUNCTION(execGetRoleData); \
	DECLARE_FUNCTION(execFindUserData); \
	DECLARE_FUNCTION(execRemoveUser); \
	DECLARE_FUNCTION(execCreateUser);


#define FID_Demo_Source_Demo_Private_Developer_MSaveGame_h_18_ACCESSORS
#define FID_Demo_Source_Demo_Private_Developer_MSaveGame_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMSaveGame(); \
	friend struct Z_Construct_UClass_UMSaveGame_Statics; \
public: \
	DECLARE_CLASS(UMSaveGame, USaveGame, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Demo"), NO_API) \
	DECLARE_SERIALIZER(UMSaveGame)


#define FID_Demo_Source_Demo_Private_Developer_MSaveGame_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMSaveGame(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMSaveGame(UMSaveGame&&); \
	NO_API UMSaveGame(const UMSaveGame&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMSaveGame); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMSaveGame); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMSaveGame) \
	NO_API virtual ~UMSaveGame();


#define FID_Demo_Source_Demo_Private_Developer_MSaveGame_h_15_PROLOG
#define FID_Demo_Source_Demo_Private_Developer_MSaveGame_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Demo_Source_Demo_Private_Developer_MSaveGame_h_18_SPARSE_DATA \
	FID_Demo_Source_Demo_Private_Developer_MSaveGame_h_18_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Demo_Source_Demo_Private_Developer_MSaveGame_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Demo_Source_Demo_Private_Developer_MSaveGame_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Demo_Source_Demo_Private_Developer_MSaveGame_h_18_ACCESSORS \
	FID_Demo_Source_Demo_Private_Developer_MSaveGame_h_18_INCLASS_NO_PURE_DECLS \
	FID_Demo_Source_Demo_Private_Developer_MSaveGame_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEMO_API UClass* StaticClass<class UMSaveGame>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Demo_Source_Demo_Private_Developer_MSaveGame_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
