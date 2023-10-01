// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayAbilitySystem/AttributeSets/MAttributeSet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttributeData;
#ifdef DEMO_MAttributeSet_generated_h
#error "MAttributeSet.generated.h already included, missing '#pragma once' in MAttributeSet.h"
#endif
#define DEMO_MAttributeSet_generated_h

#define FID_Demo_Source_Demo_Private_GameplayAbilitySystem_AttributeSets_MAttributeSet_h_23_SPARSE_DATA
#define FID_Demo_Source_Demo_Private_GameplayAbilitySystem_AttributeSets_MAttributeSet_h_23_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Demo_Source_Demo_Private_GameplayAbilitySystem_AttributeSets_MAttributeSet_h_23_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Demo_Source_Demo_Private_GameplayAbilitySystem_AttributeSets_MAttributeSet_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_MaxMoveSpeed); \
	DECLARE_FUNCTION(execOnRep_CastSpeed); \
	DECLARE_FUNCTION(execOnRep_MaxRage); \
	DECLARE_FUNCTION(execOnRep_Rage); \
	DECLARE_FUNCTION(execOnRep_MaxEnergy); \
	DECLARE_FUNCTION(execOnRep_Energy); \
	DECLARE_FUNCTION(execOnRep_MaxMana); \
	DECLARE_FUNCTION(execOnRep_Mana); \
	DECLARE_FUNCTION(execOnRep_MaxHealth); \
	DECLARE_FUNCTION(execOnRep_Health);


#define FID_Demo_Source_Demo_Private_GameplayAbilitySystem_AttributeSets_MAttributeSet_h_23_ACCESSORS
#define FID_Demo_Source_Demo_Private_GameplayAbilitySystem_AttributeSets_MAttributeSet_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMAttributeSet(); \
	friend struct Z_Construct_UClass_UMAttributeSet_Statics; \
public: \
	DECLARE_CLASS(UMAttributeSet, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Demo"), NO_API) \
	DECLARE_SERIALIZER(UMAttributeSet) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		MaxMoveSpeed=NETFIELD_REP_START, \
		Health, \
		MaxHealth, \
		Mana, \
		MaxMana, \
		Energy, \
		MaxEnergy, \
		Rage, \
		MaxRage, \
		CastSpeed, \
		NETFIELD_REP_END=CastSpeed	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UMAttributeSet) \
public:


#define FID_Demo_Source_Demo_Private_GameplayAbilitySystem_AttributeSets_MAttributeSet_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMAttributeSet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMAttributeSet(UMAttributeSet&&); \
	NO_API UMAttributeSet(const UMAttributeSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMAttributeSet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMAttributeSet) \
	NO_API virtual ~UMAttributeSet();


#define FID_Demo_Source_Demo_Private_GameplayAbilitySystem_AttributeSets_MAttributeSet_h_20_PROLOG
#define FID_Demo_Source_Demo_Private_GameplayAbilitySystem_AttributeSets_MAttributeSet_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Demo_Source_Demo_Private_GameplayAbilitySystem_AttributeSets_MAttributeSet_h_23_SPARSE_DATA \
	FID_Demo_Source_Demo_Private_GameplayAbilitySystem_AttributeSets_MAttributeSet_h_23_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Demo_Source_Demo_Private_GameplayAbilitySystem_AttributeSets_MAttributeSet_h_23_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Demo_Source_Demo_Private_GameplayAbilitySystem_AttributeSets_MAttributeSet_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Demo_Source_Demo_Private_GameplayAbilitySystem_AttributeSets_MAttributeSet_h_23_ACCESSORS \
	FID_Demo_Source_Demo_Private_GameplayAbilitySystem_AttributeSets_MAttributeSet_h_23_INCLASS_NO_PURE_DECLS \
	FID_Demo_Source_Demo_Private_GameplayAbilitySystem_AttributeSets_MAttributeSet_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEMO_API UClass* StaticClass<class UMAttributeSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Demo_Source_Demo_Private_GameplayAbilitySystem_AttributeSets_MAttributeSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
