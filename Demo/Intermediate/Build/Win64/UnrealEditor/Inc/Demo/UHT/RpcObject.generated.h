// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Net/RpcObject.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEMO_RpcObject_generated_h
#error "RpcObject.generated.h already included, missing '#pragma once' in RpcObject.h"
#endif
#define DEMO_RpcObject_generated_h

#define FID_Demo_Source_Demo_Private_Net_RpcObject_h_15_SPARSE_DATA
#define FID_Demo_Source_Demo_Private_Net_RpcObject_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Demo_Source_Demo_Private_Net_RpcObject_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Demo_Source_Demo_Private_Net_RpcObject_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Demo_Source_Demo_Private_Net_RpcObject_h_15_ACCESSORS
#define FID_Demo_Source_Demo_Private_Net_RpcObject_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURpcObject(); \
	friend struct Z_Construct_UClass_URpcObject_Statics; \
public: \
	DECLARE_CLASS(URpcObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Demo"), NO_API) \
	DECLARE_SERIALIZER(URpcObject)


#define FID_Demo_Source_Demo_Private_Net_RpcObject_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URpcObject(URpcObject&&); \
	NO_API URpcObject(const URpcObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URpcObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URpcObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URpcObject) \
	NO_API virtual ~URpcObject();


#define FID_Demo_Source_Demo_Private_Net_RpcObject_h_12_PROLOG
#define FID_Demo_Source_Demo_Private_Net_RpcObject_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Demo_Source_Demo_Private_Net_RpcObject_h_15_SPARSE_DATA \
	FID_Demo_Source_Demo_Private_Net_RpcObject_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Demo_Source_Demo_Private_Net_RpcObject_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Demo_Source_Demo_Private_Net_RpcObject_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Demo_Source_Demo_Private_Net_RpcObject_h_15_ACCESSORS \
	FID_Demo_Source_Demo_Private_Net_RpcObject_h_15_INCLASS_NO_PURE_DECLS \
	FID_Demo_Source_Demo_Private_Net_RpcObject_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEMO_API UClass* StaticClass<class URpcObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Demo_Source_Demo_Private_Net_RpcObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
