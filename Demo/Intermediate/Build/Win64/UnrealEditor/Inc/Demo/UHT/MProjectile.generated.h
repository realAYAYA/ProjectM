// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Projectiles/MProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AMCharacter;
class UPrimitiveComponent;
struct FHitResult;
#ifdef DEMO_MProjectile_generated_h
#error "MProjectile.generated.h already included, missing '#pragma once' in MProjectile.h"
#endif
#define DEMO_MProjectile_generated_h

#define FID_Demo_Source_Demo_Private_Projectiles_MProjectile_h_14_SPARSE_DATA
#define FID_Demo_Source_Demo_Private_Projectiles_MProjectile_h_14_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Demo_Source_Demo_Private_Projectiles_MProjectile_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Demo_Source_Demo_Private_Projectiles_MProjectile_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit); \
	DECLARE_FUNCTION(execInitialize);


#define FID_Demo_Source_Demo_Private_Projectiles_MProjectile_h_14_ACCESSORS
#define FID_Demo_Source_Demo_Private_Projectiles_MProjectile_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMProjectile(); \
	friend struct Z_Construct_UClass_AMProjectile_Statics; \
public: \
	DECLARE_CLASS(AMProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Demo"), NO_API) \
	DECLARE_SERIALIZER(AMProjectile)


#define FID_Demo_Source_Demo_Private_Projectiles_MProjectile_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMProjectile(AMProjectile&&); \
	NO_API AMProjectile(const AMProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMProjectile) \
	NO_API virtual ~AMProjectile();


#define FID_Demo_Source_Demo_Private_Projectiles_MProjectile_h_11_PROLOG
#define FID_Demo_Source_Demo_Private_Projectiles_MProjectile_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Demo_Source_Demo_Private_Projectiles_MProjectile_h_14_SPARSE_DATA \
	FID_Demo_Source_Demo_Private_Projectiles_MProjectile_h_14_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Demo_Source_Demo_Private_Projectiles_MProjectile_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Demo_Source_Demo_Private_Projectiles_MProjectile_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Demo_Source_Demo_Private_Projectiles_MProjectile_h_14_ACCESSORS \
	FID_Demo_Source_Demo_Private_Projectiles_MProjectile_h_14_INCLASS_NO_PURE_DECLS \
	FID_Demo_Source_Demo_Private_Projectiles_MProjectile_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEMO_API UClass* StaticClass<class AMProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Demo_Source_Demo_Private_Projectiles_MProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
