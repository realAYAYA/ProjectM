// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MPlayerState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEMO_MPlayerState_generated_h
#error "MPlayerState.generated.h already included, missing '#pragma once' in MPlayerState.h"
#endif
#define DEMO_MPlayerState_generated_h

#define FID_Demo_Source_Demo_Public_MPlayerState_h_18_SPARSE_DATA
#define FID_Demo_Source_Demo_Public_MPlayerState_h_18_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Demo_Source_Demo_Public_MPlayerState_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Demo_Source_Demo_Public_MPlayerState_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetRoleNum); \
	DECLARE_FUNCTION(execIsOnline);


#define FID_Demo_Source_Demo_Public_MPlayerState_h_18_ACCESSORS
#define FID_Demo_Source_Demo_Public_MPlayerState_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMPlayerState(); \
	friend struct Z_Construct_UClass_AMPlayerState_Statics; \
public: \
	DECLARE_CLASS(AMPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Demo"), NO_API) \
	DECLARE_SERIALIZER(AMPlayerState) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		UserID=NETFIELD_REP_START, \
		UserName, \
		NETFIELD_REP_END=UserName	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Demo_Source_Demo_Public_MPlayerState_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMPlayerState(AMPlayerState&&); \
	NO_API AMPlayerState(const AMPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMPlayerState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMPlayerState) \
	NO_API virtual ~AMPlayerState();


#define FID_Demo_Source_Demo_Public_MPlayerState_h_15_PROLOG
#define FID_Demo_Source_Demo_Public_MPlayerState_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Demo_Source_Demo_Public_MPlayerState_h_18_SPARSE_DATA \
	FID_Demo_Source_Demo_Public_MPlayerState_h_18_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Demo_Source_Demo_Public_MPlayerState_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Demo_Source_Demo_Public_MPlayerState_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Demo_Source_Demo_Public_MPlayerState_h_18_ACCESSORS \
	FID_Demo_Source_Demo_Public_MPlayerState_h_18_INCLASS_NO_PURE_DECLS \
	FID_Demo_Source_Demo_Public_MPlayerState_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEMO_API UClass* StaticClass<class AMPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Demo_Source_Demo_Public_MPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
