// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayAbilitySystem/Abilities/MGameplayAbility.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AMCharacter;
class UMAbilitySystemComponent;
enum class EActivateFailCode : uint8;
struct FGameplayAbilityActorInfo;
#ifdef DEMO_MGameplayAbility_generated_h
#error "MGameplayAbility.generated.h already included, missing '#pragma once' in MGameplayAbility.h"
#endif
#define DEMO_MGameplayAbility_generated_h

#define FID_Demo_Source_Demo_Private_GameplayAbilitySystem_Abilities_MGameplayAbility_h_45_SPARSE_DATA
#define FID_Demo_Source_Demo_Private_GameplayAbilitySystem_Abilities_MGameplayAbility_h_45_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Demo_Source_Demo_Private_GameplayAbilitySystem_Abilities_MGameplayAbility_h_45_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Demo_Source_Demo_Private_GameplayAbilitySystem_Abilities_MGameplayAbility_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCanActivateCondition); \
	DECLARE_FUNCTION(execGetMAbilitySystemComponent); \
	DECLARE_FUNCTION(execGetMCharacterFromActorInfo);


#define FID_Demo_Source_Demo_Private_GameplayAbilitySystem_Abilities_MGameplayAbility_h_45_ACCESSORS
#define FID_Demo_Source_Demo_Private_GameplayAbilitySystem_Abilities_MGameplayAbility_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMGameplayAbility(); \
	friend struct Z_Construct_UClass_UMGameplayAbility_Statics; \
public: \
	DECLARE_CLASS(UMGameplayAbility, UGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Demo"), NO_API) \
	DECLARE_SERIALIZER(UMGameplayAbility)


#define FID_Demo_Source_Demo_Private_GameplayAbilitySystem_Abilities_MGameplayAbility_h_45_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMGameplayAbility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMGameplayAbility(UMGameplayAbility&&); \
	NO_API UMGameplayAbility(const UMGameplayAbility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMGameplayAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMGameplayAbility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMGameplayAbility) \
	NO_API virtual ~UMGameplayAbility();


#define FID_Demo_Source_Demo_Private_GameplayAbilitySystem_Abilities_MGameplayAbility_h_42_PROLOG
#define FID_Demo_Source_Demo_Private_GameplayAbilitySystem_Abilities_MGameplayAbility_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Demo_Source_Demo_Private_GameplayAbilitySystem_Abilities_MGameplayAbility_h_45_SPARSE_DATA \
	FID_Demo_Source_Demo_Private_GameplayAbilitySystem_Abilities_MGameplayAbility_h_45_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Demo_Source_Demo_Private_GameplayAbilitySystem_Abilities_MGameplayAbility_h_45_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Demo_Source_Demo_Private_GameplayAbilitySystem_Abilities_MGameplayAbility_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Demo_Source_Demo_Private_GameplayAbilitySystem_Abilities_MGameplayAbility_h_45_ACCESSORS \
	FID_Demo_Source_Demo_Private_GameplayAbilitySystem_Abilities_MGameplayAbility_h_45_INCLASS_NO_PURE_DECLS \
	FID_Demo_Source_Demo_Private_GameplayAbilitySystem_Abilities_MGameplayAbility_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEMO_API UClass* StaticClass<class UMGameplayAbility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Demo_Source_Demo_Private_GameplayAbilitySystem_Abilities_MGameplayAbility_h


#define FOREACH_ENUM_ETARGETTYPE(op) \
	op(ETargetType::Self) \
	op(ETargetType::Hostile) \
	op(ETargetType::Friendly) 

enum class ETargetType : uint8;
template<> struct TIsUEnumClass<ETargetType> { enum { Value = true }; };
template<> DEMO_API UEnum* StaticEnum<ETargetType>();

#define FOREACH_ENUM_EACTIVATEFAILCODE(op) \
	op(EActivateFailCode::Success) \
	op(EActivateFailCode::Immunity) \
	op(EActivateFailCode::Cooldown) \
	op(EActivateFailCode::OutOfRange) \
	op(EActivateFailCode::ToClose) \
	op(EActivateFailCode::NoToward) \
	op(EActivateFailCode::NoMana) \
	op(EActivateFailCode::NoEnergy) \
	op(EActivateFailCode::NoRage) \
	op(EActivateFailCode::InValidTarget) \
	op(EActivateFailCode::NoTarget) \
	op(EActivateFailCode::NoItem) \
	op(EActivateFailCode::CodeError) 

enum class EActivateFailCode : uint8;
template<> struct TIsUEnumClass<EActivateFailCode> { enum { Value = true }; };
template<> DEMO_API UEnum* StaticEnum<EActivateFailCode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
