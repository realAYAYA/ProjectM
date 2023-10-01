// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MGameServerSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MGAMESERVER_MGameServerSubsystem_generated_h
#error "MGameServerSubsystem.generated.h already included, missing '#pragma once' in MGameServerSubsystem.h"
#endif
#define MGAMESERVER_MGameServerSubsystem_generated_h

#define FID_Demo_Plugins_MGameServer_Source_MGameServer_Private_MGameServerSubsystem_h_46_SPARSE_DATA
#define FID_Demo_Plugins_MGameServer_Source_MGameServer_Private_MGameServerSubsystem_h_46_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Demo_Plugins_MGameServer_Source_MGameServer_Private_MGameServerSubsystem_h_46_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Demo_Plugins_MGameServer_Source_MGameServer_Private_MGameServerSubsystem_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendToAll); \
	DECLARE_FUNCTION(execStopWebSocketServer); \
	DECLARE_FUNCTION(execStartWebSocketServer);


#define FID_Demo_Plugins_MGameServer_Source_MGameServer_Private_MGameServerSubsystem_h_46_ACCESSORS
#define FID_Demo_Plugins_MGameServer_Source_MGameServer_Private_MGameServerSubsystem_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMGameServerSubsystem(); \
	friend struct Z_Construct_UClass_UMGameServerSubsystem_Statics; \
public: \
	DECLARE_CLASS(UMGameServerSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MGameServer"), NO_API) \
	DECLARE_SERIALIZER(UMGameServerSubsystem)


#define FID_Demo_Plugins_MGameServer_Source_MGameServer_Private_MGameServerSubsystem_h_46_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMGameServerSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMGameServerSubsystem(UMGameServerSubsystem&&); \
	NO_API UMGameServerSubsystem(const UMGameServerSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMGameServerSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMGameServerSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMGameServerSubsystem) \
	NO_API virtual ~UMGameServerSubsystem();


#define FID_Demo_Plugins_MGameServer_Source_MGameServer_Private_MGameServerSubsystem_h_43_PROLOG
#define FID_Demo_Plugins_MGameServer_Source_MGameServer_Private_MGameServerSubsystem_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Demo_Plugins_MGameServer_Source_MGameServer_Private_MGameServerSubsystem_h_46_SPARSE_DATA \
	FID_Demo_Plugins_MGameServer_Source_MGameServer_Private_MGameServerSubsystem_h_46_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Demo_Plugins_MGameServer_Source_MGameServer_Private_MGameServerSubsystem_h_46_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Demo_Plugins_MGameServer_Source_MGameServer_Private_MGameServerSubsystem_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Demo_Plugins_MGameServer_Source_MGameServer_Private_MGameServerSubsystem_h_46_ACCESSORS \
	FID_Demo_Plugins_MGameServer_Source_MGameServer_Private_MGameServerSubsystem_h_46_INCLASS_NO_PURE_DECLS \
	FID_Demo_Plugins_MGameServer_Source_MGameServer_Private_MGameServerSubsystem_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MGAMESERVER_API UClass* StaticClass<class UMGameServerSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Demo_Plugins_MGameServer_Source_MGameServer_Private_MGameServerSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
