// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Inventory/Actors/ItemActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AMCharacter;
class UPrimitiveComponent;
struct FHitResult;
#ifdef DEMO_ItemActor_generated_h
#error "ItemActor.generated.h already included, missing '#pragma once' in ItemActor.h"
#endif
#define DEMO_ItemActor_generated_h

#define FID_Demo_Source_Demo_Private_Inventory_Actors_ItemActor_h_18_SPARSE_DATA
#define FID_Demo_Source_Demo_Private_Inventory_Actors_ItemActor_h_18_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Demo_Source_Demo_Private_Inventory_Actors_ItemActor_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Demo_Source_Demo_Private_Inventory_Actors_ItemActor_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_ItemID); \
	DECLARE_FUNCTION(execOnRep_ItemState); \
	DECLARE_FUNCTION(execGetItemOwner); \
	DECLARE_FUNCTION(execOnBeginOverlap); \
	DECLARE_FUNCTION(execOnTake); \
	DECLARE_FUNCTION(execOnDropped); \
	DECLARE_FUNCTION(execOnPickUp);


#define FID_Demo_Source_Demo_Private_Inventory_Actors_ItemActor_h_18_ACCESSORS
#define FID_Demo_Source_Demo_Private_Inventory_Actors_ItemActor_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAItemActor(); \
	friend struct Z_Construct_UClass_AItemActor_Statics; \
public: \
	DECLARE_CLASS(AItemActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Demo"), NO_API) \
	DECLARE_SERIALIZER(AItemActor) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CfgID=NETFIELD_REP_START, \
		ItemState, \
		NETFIELD_REP_END=ItemState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Demo_Source_Demo_Private_Inventory_Actors_ItemActor_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AItemActor(AItemActor&&); \
	NO_API AItemActor(const AItemActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItemActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItemActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AItemActor) \
	NO_API virtual ~AItemActor();


#define FID_Demo_Source_Demo_Private_Inventory_Actors_ItemActor_h_15_PROLOG
#define FID_Demo_Source_Demo_Private_Inventory_Actors_ItemActor_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Demo_Source_Demo_Private_Inventory_Actors_ItemActor_h_18_SPARSE_DATA \
	FID_Demo_Source_Demo_Private_Inventory_Actors_ItemActor_h_18_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Demo_Source_Demo_Private_Inventory_Actors_ItemActor_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Demo_Source_Demo_Private_Inventory_Actors_ItemActor_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Demo_Source_Demo_Private_Inventory_Actors_ItemActor_h_18_ACCESSORS \
	FID_Demo_Source_Demo_Private_Inventory_Actors_ItemActor_h_18_INCLASS_NO_PURE_DECLS \
	FID_Demo_Source_Demo_Private_Inventory_Actors_ItemActor_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEMO_API UClass* StaticClass<class AItemActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Demo_Source_Demo_Private_Inventory_Actors_ItemActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
