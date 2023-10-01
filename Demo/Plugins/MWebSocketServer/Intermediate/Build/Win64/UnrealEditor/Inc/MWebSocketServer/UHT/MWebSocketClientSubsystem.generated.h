// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Client/MWebSocketClientSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MWEBSOCKETSERVER_MWebSocketClientSubsystem_generated_h
#error "MWebSocketClientSubsystem.generated.h already included, missing '#pragma once' in MWebSocketClientSubsystem.h"
#endif
#define MWEBSOCKETSERVER_MWebSocketClientSubsystem_generated_h

#define FID_Demo_Plugins_MWebSocketServer_Source_MWebSocketServer_Private_Client_MWebSocketClientSubsystem_h_11_SPARSE_DATA
#define FID_Demo_Plugins_MWebSocketServer_Source_MWebSocketServer_Private_Client_MWebSocketClientSubsystem_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendMessage); \
	DECLARE_FUNCTION(execCloseSocket); \
	DECLARE_FUNCTION(execCreateSocket);


#define FID_Demo_Plugins_MWebSocketServer_Source_MWebSocketServer_Private_Client_MWebSocketClientSubsystem_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendMessage); \
	DECLARE_FUNCTION(execCloseSocket); \
	DECLARE_FUNCTION(execCreateSocket);


#define FID_Demo_Plugins_MWebSocketServer_Source_MWebSocketServer_Private_Client_MWebSocketClientSubsystem_h_11_ACCESSORS
#define FID_Demo_Plugins_MWebSocketServer_Source_MWebSocketServer_Private_Client_MWebSocketClientSubsystem_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMWebSocketClientSubsystem(); \
	friend struct Z_Construct_UClass_UMWebSocketClientSubsystem_Statics; \
public: \
	DECLARE_CLASS(UMWebSocketClientSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MWebSocketServer"), NO_API) \
	DECLARE_SERIALIZER(UMWebSocketClientSubsystem)


#define FID_Demo_Plugins_MWebSocketServer_Source_MWebSocketServer_Private_Client_MWebSocketClientSubsystem_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUMWebSocketClientSubsystem(); \
	friend struct Z_Construct_UClass_UMWebSocketClientSubsystem_Statics; \
public: \
	DECLARE_CLASS(UMWebSocketClientSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MWebSocketServer"), NO_API) \
	DECLARE_SERIALIZER(UMWebSocketClientSubsystem)


#define FID_Demo_Plugins_MWebSocketServer_Source_MWebSocketServer_Private_Client_MWebSocketClientSubsystem_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMWebSocketClientSubsystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMWebSocketClientSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMWebSocketClientSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMWebSocketClientSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMWebSocketClientSubsystem(UMWebSocketClientSubsystem&&); \
	NO_API UMWebSocketClientSubsystem(const UMWebSocketClientSubsystem&); \
public: \
	NO_API virtual ~UMWebSocketClientSubsystem();


#define FID_Demo_Plugins_MWebSocketServer_Source_MWebSocketServer_Private_Client_MWebSocketClientSubsystem_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMWebSocketClientSubsystem() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMWebSocketClientSubsystem(UMWebSocketClientSubsystem&&); \
	NO_API UMWebSocketClientSubsystem(const UMWebSocketClientSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMWebSocketClientSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMWebSocketClientSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMWebSocketClientSubsystem) \
	NO_API virtual ~UMWebSocketClientSubsystem();


#define FID_Demo_Plugins_MWebSocketServer_Source_MWebSocketServer_Private_Client_MWebSocketClientSubsystem_h_8_PROLOG
#define FID_Demo_Plugins_MWebSocketServer_Source_MWebSocketServer_Private_Client_MWebSocketClientSubsystem_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Demo_Plugins_MWebSocketServer_Source_MWebSocketServer_Private_Client_MWebSocketClientSubsystem_h_11_SPARSE_DATA \
	FID_Demo_Plugins_MWebSocketServer_Source_MWebSocketServer_Private_Client_MWebSocketClientSubsystem_h_11_RPC_WRAPPERS \
	FID_Demo_Plugins_MWebSocketServer_Source_MWebSocketServer_Private_Client_MWebSocketClientSubsystem_h_11_ACCESSORS \
	FID_Demo_Plugins_MWebSocketServer_Source_MWebSocketServer_Private_Client_MWebSocketClientSubsystem_h_11_INCLASS \
	FID_Demo_Plugins_MWebSocketServer_Source_MWebSocketServer_Private_Client_MWebSocketClientSubsystem_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Demo_Plugins_MWebSocketServer_Source_MWebSocketServer_Private_Client_MWebSocketClientSubsystem_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Demo_Plugins_MWebSocketServer_Source_MWebSocketServer_Private_Client_MWebSocketClientSubsystem_h_11_SPARSE_DATA \
	FID_Demo_Plugins_MWebSocketServer_Source_MWebSocketServer_Private_Client_MWebSocketClientSubsystem_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Demo_Plugins_MWebSocketServer_Source_MWebSocketServer_Private_Client_MWebSocketClientSubsystem_h_11_ACCESSORS \
	FID_Demo_Plugins_MWebSocketServer_Source_MWebSocketServer_Private_Client_MWebSocketClientSubsystem_h_11_INCLASS_NO_PURE_DECLS \
	FID_Demo_Plugins_MWebSocketServer_Source_MWebSocketServer_Private_Client_MWebSocketClientSubsystem_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MWEBSOCKETSERVER_API UClass* StaticClass<class UMWebSocketClientSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Demo_Plugins_MWebSocketServer_Source_MWebSocketServer_Private_Client_MWebSocketClientSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
