// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayAbilitySystem/GameplayEffects/MGameplayEffect.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEMO_MGameplayEffect_generated_h
#error "MGameplayEffect.generated.h already included, missing '#pragma once' in MGameplayEffect.h"
#endif
#define DEMO_MGameplayEffect_generated_h

#define FID_Demo_Source_Demo_Private_GameplayAbilitySystem_GameplayEffects_MGameplayEffect_h_42_SPARSE_DATA
#define FID_Demo_Source_Demo_Private_GameplayAbilitySystem_GameplayEffects_MGameplayEffect_h_42_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Demo_Source_Demo_Private_GameplayAbilitySystem_GameplayEffects_MGameplayEffect_h_42_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Demo_Source_Demo_Private_GameplayAbilitySystem_GameplayEffects_MGameplayEffect_h_42_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Demo_Source_Demo_Private_GameplayAbilitySystem_GameplayEffects_MGameplayEffect_h_42_ACCESSORS
#define FID_Demo_Source_Demo_Private_GameplayAbilitySystem_GameplayEffects_MGameplayEffect_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMGameplayEffect(); \
	friend struct Z_Construct_UClass_UMGameplayEffect_Statics; \
public: \
	DECLARE_CLASS(UMGameplayEffect, UGameplayEffect, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Demo"), NO_API) \
	DECLARE_SERIALIZER(UMGameplayEffect)


#define FID_Demo_Source_Demo_Private_GameplayAbilitySystem_GameplayEffects_MGameplayEffect_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMGameplayEffect(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMGameplayEffect(UMGameplayEffect&&); \
	NO_API UMGameplayEffect(const UMGameplayEffect&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMGameplayEffect); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMGameplayEffect); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMGameplayEffect) \
	NO_API virtual ~UMGameplayEffect();


#define FID_Demo_Source_Demo_Private_GameplayAbilitySystem_GameplayEffects_MGameplayEffect_h_39_PROLOG
#define FID_Demo_Source_Demo_Private_GameplayAbilitySystem_GameplayEffects_MGameplayEffect_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Demo_Source_Demo_Private_GameplayAbilitySystem_GameplayEffects_MGameplayEffect_h_42_SPARSE_DATA \
	FID_Demo_Source_Demo_Private_GameplayAbilitySystem_GameplayEffects_MGameplayEffect_h_42_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Demo_Source_Demo_Private_GameplayAbilitySystem_GameplayEffects_MGameplayEffect_h_42_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Demo_Source_Demo_Private_GameplayAbilitySystem_GameplayEffects_MGameplayEffect_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Demo_Source_Demo_Private_GameplayAbilitySystem_GameplayEffects_MGameplayEffect_h_42_ACCESSORS \
	FID_Demo_Source_Demo_Private_GameplayAbilitySystem_GameplayEffects_MGameplayEffect_h_42_INCLASS_NO_PURE_DECLS \
	FID_Demo_Source_Demo_Private_GameplayAbilitySystem_GameplayEffects_MGameplayEffect_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEMO_API UClass* StaticClass<class UMGameplayEffect>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Demo_Source_Demo_Private_GameplayAbilitySystem_GameplayEffects_MGameplayEffect_h


#define FOREACH_ENUM_ERANGETYPE(op) \
	op(ERangeType::None) \
	op(ERangeType::Melee) \
	op(ERangeType::Ranged) 

enum class ERangeType : uint8;
template<> struct TIsUEnumClass<ERangeType> { enum { Value = true }; };
template<> DEMO_API UEnum* StaticEnum<ERangeType>();

#define FOREACH_ENUM_EBUFFTYPE(op) \
	op(EBuffType::None) \
	op(EBuffType::Spell) 

enum class EBuffType : uint8;
template<> struct TIsUEnumClass<EBuffType> { enum { Value = true }; };
template<> DEMO_API UEnum* StaticEnum<EBuffType>();

#define FOREACH_ENUM_EDAMAGETYPE(op) \
	op(EDamageType::None) \
	op(EDamageType::Physical) \
	op(EDamageType::Frost) \
	op(EDamageType::Flame) \
	op(EDamageType::Nature) \
	op(EDamageType::Divine) \
	op(EDamageType::Shadow) 

enum class EDamageType : uint8;
template<> struct TIsUEnumClass<EDamageType> { enum { Value = true }; };
template<> DEMO_API UEnum* StaticEnum<EDamageType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
