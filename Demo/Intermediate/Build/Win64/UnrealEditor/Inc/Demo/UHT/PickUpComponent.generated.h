// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Inventory/Actors/Components/PickUpComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef DEMO_PickUpComponent_generated_h
#error "PickUpComponent.generated.h already included, missing '#pragma once' in PickUpComponent.h"
#endif
#define DEMO_PickUpComponent_generated_h

#define FID_Demo_Source_Demo_Private_Inventory_Actors_Components_PickUpComponent_h_11_DELEGATE \
DEMO_API void FOnPickUp_DelegateWrapper(const FMulticastScriptDelegate& OnPickUp, AActor* PickUpActor);


#define FID_Demo_Source_Demo_Private_Inventory_Actors_Components_PickUpComponent_h_19_SPARSE_DATA
#define FID_Demo_Source_Demo_Private_Inventory_Actors_Components_PickUpComponent_h_19_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Demo_Source_Demo_Private_Inventory_Actors_Components_PickUpComponent_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Demo_Source_Demo_Private_Inventory_Actors_Components_PickUpComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Demo_Source_Demo_Private_Inventory_Actors_Components_PickUpComponent_h_19_ACCESSORS
#define FID_Demo_Source_Demo_Private_Inventory_Actors_Components_PickUpComponent_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPickUpComponent(); \
	friend struct Z_Construct_UClass_UPickUpComponent_Statics; \
public: \
	DECLARE_CLASS(UPickUpComponent, USphereComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Demo"), NO_API) \
	DECLARE_SERIALIZER(UPickUpComponent)


#define FID_Demo_Source_Demo_Private_Inventory_Actors_Components_PickUpComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPickUpComponent(UPickUpComponent&&); \
	NO_API UPickUpComponent(const UPickUpComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPickUpComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPickUpComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPickUpComponent) \
	NO_API virtual ~UPickUpComponent();


#define FID_Demo_Source_Demo_Private_Inventory_Actors_Components_PickUpComponent_h_16_PROLOG
#define FID_Demo_Source_Demo_Private_Inventory_Actors_Components_PickUpComponent_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Demo_Source_Demo_Private_Inventory_Actors_Components_PickUpComponent_h_19_SPARSE_DATA \
	FID_Demo_Source_Demo_Private_Inventory_Actors_Components_PickUpComponent_h_19_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Demo_Source_Demo_Private_Inventory_Actors_Components_PickUpComponent_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Demo_Source_Demo_Private_Inventory_Actors_Components_PickUpComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Demo_Source_Demo_Private_Inventory_Actors_Components_PickUpComponent_h_19_ACCESSORS \
	FID_Demo_Source_Demo_Private_Inventory_Actors_Components_PickUpComponent_h_19_INCLASS_NO_PURE_DECLS \
	FID_Demo_Source_Demo_Private_Inventory_Actors_Components_PickUpComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEMO_API UClass* StaticClass<class UPickUpComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Demo_Source_Demo_Private_Inventory_Actors_Components_PickUpComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
