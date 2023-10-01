// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Inventory/Actors/MGearActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef DEMO_MGearActor_generated_h
#error "MGearActor.generated.h already included, missing '#pragma once' in MGearActor.h"
#endif
#define DEMO_MGearActor_generated_h

#define FID_Demo_Source_Demo_Private_Inventory_Actors_MGearActor_h_16_SPARSE_DATA
#define FID_Demo_Source_Demo_Private_Inventory_Actors_MGearActor_h_16_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Demo_Source_Demo_Private_Inventory_Actors_MGearActor_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Demo_Source_Demo_Private_Inventory_Actors_MGearActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnUnEquipped); \
	DECLARE_FUNCTION(execOnEquipped);


#define FID_Demo_Source_Demo_Private_Inventory_Actors_MGearActor_h_16_ACCESSORS
#define FID_Demo_Source_Demo_Private_Inventory_Actors_MGearActor_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMGearActor(); \
	friend struct Z_Construct_UClass_AMGearActor_Statics; \
public: \
	DECLARE_CLASS(AMGearActor, AItemActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Demo"), NO_API) \
	DECLARE_SERIALIZER(AMGearActor)


#define FID_Demo_Source_Demo_Private_Inventory_Actors_MGearActor_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMGearActor(AMGearActor&&); \
	NO_API AMGearActor(const AMGearActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMGearActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMGearActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMGearActor) \
	NO_API virtual ~AMGearActor();


#define FID_Demo_Source_Demo_Private_Inventory_Actors_MGearActor_h_13_PROLOG
#define FID_Demo_Source_Demo_Private_Inventory_Actors_MGearActor_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Demo_Source_Demo_Private_Inventory_Actors_MGearActor_h_16_SPARSE_DATA \
	FID_Demo_Source_Demo_Private_Inventory_Actors_MGearActor_h_16_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Demo_Source_Demo_Private_Inventory_Actors_MGearActor_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Demo_Source_Demo_Private_Inventory_Actors_MGearActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Demo_Source_Demo_Private_Inventory_Actors_MGearActor_h_16_ACCESSORS \
	FID_Demo_Source_Demo_Private_Inventory_Actors_MGearActor_h_16_INCLASS_NO_PURE_DECLS \
	FID_Demo_Source_Demo_Private_Inventory_Actors_MGearActor_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEMO_API UClass* StaticClass<class AMGearActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Demo_Source_Demo_Private_Inventory_Actors_MGearActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
