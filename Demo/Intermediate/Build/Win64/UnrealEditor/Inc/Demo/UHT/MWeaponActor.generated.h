// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Inventory/Actors/MWeaponActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AMCharacter;
class USkeletalMeshComponent;
#ifdef DEMO_MWeaponActor_generated_h
#error "MWeaponActor.generated.h already included, missing '#pragma once' in MWeaponActor.h"
#endif
#define DEMO_MWeaponActor_generated_h

#define FID_Demo_Source_Demo_Private_Inventory_Actors_MWeaponActor_h_17_SPARSE_DATA
#define FID_Demo_Source_Demo_Private_Inventory_Actors_MWeaponActor_h_17_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Demo_Source_Demo_Private_Inventory_Actors_MWeaponActor_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Demo_Source_Demo_Private_Inventory_Actors_MWeaponActor_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEndPlay); \
	DECLARE_FUNCTION(execGetSkeletalMeshComponent); \
	DECLARE_FUNCTION(execFire); \
	DECLARE_FUNCTION(execAttachWeapon);


#define FID_Demo_Source_Demo_Private_Inventory_Actors_MWeaponActor_h_17_ACCESSORS
#define FID_Demo_Source_Demo_Private_Inventory_Actors_MWeaponActor_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMWeaponActor(); \
	friend struct Z_Construct_UClass_AMWeaponActor_Statics; \
public: \
	DECLARE_CLASS(AMWeaponActor, AMGearActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Demo"), NO_API) \
	DECLARE_SERIALIZER(AMWeaponActor)


#define FID_Demo_Source_Demo_Private_Inventory_Actors_MWeaponActor_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMWeaponActor(AMWeaponActor&&); \
	NO_API AMWeaponActor(const AMWeaponActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMWeaponActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMWeaponActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMWeaponActor) \
	NO_API virtual ~AMWeaponActor();


#define FID_Demo_Source_Demo_Private_Inventory_Actors_MWeaponActor_h_14_PROLOG
#define FID_Demo_Source_Demo_Private_Inventory_Actors_MWeaponActor_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Demo_Source_Demo_Private_Inventory_Actors_MWeaponActor_h_17_SPARSE_DATA \
	FID_Demo_Source_Demo_Private_Inventory_Actors_MWeaponActor_h_17_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Demo_Source_Demo_Private_Inventory_Actors_MWeaponActor_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Demo_Source_Demo_Private_Inventory_Actors_MWeaponActor_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Demo_Source_Demo_Private_Inventory_Actors_MWeaponActor_h_17_ACCESSORS \
	FID_Demo_Source_Demo_Private_Inventory_Actors_MWeaponActor_h_17_INCLASS_NO_PURE_DECLS \
	FID_Demo_Source_Demo_Private_Inventory_Actors_MWeaponActor_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEMO_API UClass* StaticClass<class AMWeaponActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Demo_Source_Demo_Private_Inventory_Actors_MWeaponActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
