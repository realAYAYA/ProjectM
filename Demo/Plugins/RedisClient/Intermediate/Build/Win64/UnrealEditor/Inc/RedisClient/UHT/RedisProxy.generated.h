// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RedisProxy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef REDISCLIENT_RedisProxy_generated_h
#error "RedisProxy.generated.h already included, missing '#pragma once' in RedisProxy.h"
#endif
#define REDISCLIENT_RedisProxy_generated_h

#define FID_Demo_Plugins_RedisClient_Source_RedisClient_Public_RedisProxy_h_14_SPARSE_DATA
#define FID_Demo_Plugins_RedisClient_Source_RedisClient_Public_RedisProxy_h_14_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Demo_Plugins_RedisClient_Source_RedisClient_Public_RedisProxy_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Demo_Plugins_RedisClient_Source_RedisClient_Public_RedisProxy_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execExecuteCmd); \
	DECLARE_FUNCTION(execDisconnect); \
	DECLARE_FUNCTION(execConnect);


#define FID_Demo_Plugins_RedisClient_Source_RedisClient_Public_RedisProxy_h_14_ACCESSORS
#define FID_Demo_Plugins_RedisClient_Source_RedisClient_Public_RedisProxy_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURedisProxy(); \
	friend struct Z_Construct_UClass_URedisProxy_Statics; \
public: \
	DECLARE_CLASS(URedisProxy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RedisClient"), NO_API) \
	DECLARE_SERIALIZER(URedisProxy)


#define FID_Demo_Plugins_RedisClient_Source_RedisClient_Public_RedisProxy_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URedisProxy(URedisProxy&&); \
	NO_API URedisProxy(const URedisProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URedisProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URedisProxy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URedisProxy) \
	NO_API virtual ~URedisProxy();


#define FID_Demo_Plugins_RedisClient_Source_RedisClient_Public_RedisProxy_h_11_PROLOG
#define FID_Demo_Plugins_RedisClient_Source_RedisClient_Public_RedisProxy_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Demo_Plugins_RedisClient_Source_RedisClient_Public_RedisProxy_h_14_SPARSE_DATA \
	FID_Demo_Plugins_RedisClient_Source_RedisClient_Public_RedisProxy_h_14_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Demo_Plugins_RedisClient_Source_RedisClient_Public_RedisProxy_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Demo_Plugins_RedisClient_Source_RedisClient_Public_RedisProxy_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Demo_Plugins_RedisClient_Source_RedisClient_Public_RedisProxy_h_14_ACCESSORS \
	FID_Demo_Plugins_RedisClient_Source_RedisClient_Public_RedisProxy_h_14_INCLASS_NO_PURE_DECLS \
	FID_Demo_Plugins_RedisClient_Source_RedisClient_Public_RedisProxy_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> REDISCLIENT_API UClass* StaticClass<class URedisProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Demo_Plugins_RedisClient_Source_RedisClient_Public_RedisProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
