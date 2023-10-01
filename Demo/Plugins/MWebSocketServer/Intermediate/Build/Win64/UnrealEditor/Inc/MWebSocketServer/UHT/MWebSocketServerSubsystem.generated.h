// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Server/MWebSocketServerSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MWEBSOCKETSERVER_MWebSocketServerSubsystem_generated_h
#error "MWebSocketServerSubsystem.generated.h already included, missing '#pragma once' in MWebSocketServerSubsystem.h"
#endif
#define MWEBSOCKETSERVER_MWebSocketServerSubsystem_generated_h

#define FID_Demo_Plugins_MWebSocketServer_Source_MWebSocketServer_Private_Server_MWebSocketServerSubsystem_h_46_SPARSE_DATA
#define FID_Demo_Plugins_MWebSocketServer_Source_MWebSocketServer_Private_Server_MWebSocketServerSubsystem_h_46_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendToAll); \
	DECLARE_FUNCTION(execStopWebSocketServer); \
	DECLARE_FUNCTION(execStartWebSocketServer);


#define FID_Demo_Plugins_MWebSocketServer_Source_MWebSocketServer_Private_Server_MWebSocketServerSubsystem_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendToAll); \
	DECLARE_FUNCTION(execStopWebSocketServer); \
	DECLARE_FUNCTION(execStartWebSocketServer);


#define FID_Demo_Plugins_MWebSocketServer_Source_MWebSocketServer_Private_Server_MWebSocketServerSubsystem_h_46_ACCESSORS
#define FID_Demo_Plugins_MWebSocketServer_Source_MWebSocketServer_Private_Server_MWebSocketServerSubsystem_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMWebSocketServerSubsystem(); \
	friend struct Z_Construct_UClass_UMWebSocketServerSubsystem_Statics; \
public: \
	DECLARE_CLASS(UMWebSocketServerSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MWebSocketServer"), NO_API) \
	DECLARE_SERIALIZER(UMWebSocketServerSubsystem)


#define FID_Demo_Plugins_MWebSocketServer_Source_MWebSocketServer_Private_Server_MWebSocketServerSubsystem_h_46_INCLASS \
private: \
	static void StaticRegisterNativesUMWebSocketServerSubsystem(); \
	friend struct Z_Construct_UClass_UMWebSocketServerSubsystem_Statics; \
public: \
	DECLARE_CLASS(UMWebSocketServerSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MWebSocketServer"), NO_API) \
	DECLARE_SERIALIZER(UMWebSocketServerSubsystem)


#define FID_Demo_Plugins_MWebSocketServer_Source_MWebSocketServer_Private_Server_MWebSocketServerSubsystem_h_46_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMWebSocketServerSubsystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMWebSocketServerSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMWebSocketServerSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMWebSocketServerSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMWebSocketServerSubsystem(UMWebSocketServerSubsystem&&); \
	NO_API UMWebSocketServerSubsystem(const UMWebSocketServerSubsystem&); \
public: \
	NO_API virtual ~UMWebSocketServerSubsystem();


#define FID_Demo_Plugins_MWebSocketServer_Source_MWebSocketServer_Private_Server_MWebSocketServerSubsystem_h_46_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMWebSocketServerSubsystem() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMWebSocketServerSubsystem(UMWebSocketServerSubsystem&&); \
	NO_API UMWebSocketServerSubsystem(const UMWebSocketServerSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMWebSocketServerSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMWebSocketServerSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMWebSocketServerSubsystem) \
	NO_API virtual ~UMWebSocketServerSubsystem();


#define FID_Demo_Plugins_MWebSocketServer_Source_MWebSocketServer_Private_Server_MWebSocketServerSubsystem_h_43_PROLOG
#define FID_Demo_Plugins_MWebSocketServer_Source_MWebSocketServer_Private_Server_MWebSocketServerSubsystem_h_46_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Demo_Plugins_MWebSocketServer_Source_MWebSocketServer_Private_Server_MWebSocketServerSubsystem_h_46_SPARSE_DATA \
	FID_Demo_Plugins_MWebSocketServer_Source_MWebSocketServer_Private_Server_MWebSocketServerSubsystem_h_46_RPC_WRAPPERS \
	FID_Demo_Plugins_MWebSocketServer_Source_MWebSocketServer_Private_Server_MWebSocketServerSubsystem_h_46_ACCESSORS \
	FID_Demo_Plugins_MWebSocketServer_Source_MWebSocketServer_Private_Server_MWebSocketServerSubsystem_h_46_INCLASS \
	FID_Demo_Plugins_MWebSocketServer_Source_MWebSocketServer_Private_Server_MWebSocketServerSubsystem_h_46_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Demo_Plugins_MWebSocketServer_Source_MWebSocketServer_Private_Server_MWebSocketServerSubsystem_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Demo_Plugins_MWebSocketServer_Source_MWebSocketServer_Private_Server_MWebSocketServerSubsystem_h_46_SPARSE_DATA \
	FID_Demo_Plugins_MWebSocketServer_Source_MWebSocketServer_Private_Server_MWebSocketServerSubsystem_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Demo_Plugins_MWebSocketServer_Source_MWebSocketServer_Private_Server_MWebSocketServerSubsystem_h_46_ACCESSORS \
	FID_Demo_Plugins_MWebSocketServer_Source_MWebSocketServer_Private_Server_MWebSocketServerSubsystem_h_46_INCLASS_NO_PURE_DECLS \
	FID_Demo_Plugins_MWebSocketServer_Source_MWebSocketServer_Private_Server_MWebSocketServerSubsystem_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MWEBSOCKETSERVER_API UClass* StaticClass<class UMWebSocketServerSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Demo_Plugins_MWebSocketServer_Source_MWebSocketServer_Private_Server_MWebSocketServerSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
