// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/MCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AMCharacter;
class AMPlayerController;
class AMPlayerState;
class UMAttributeSet;
enum class EActivateFailCode : uint8;
#ifdef DEMO_MCharacter_generated_h
#error "MCharacter.generated.h already included, missing '#pragma once' in MCharacter.h"
#endif
#define DEMO_MCharacter_generated_h

#define FID_Demo_Source_Demo_Private_Characters_MCharacter_h_29_DELEGATE \
DEMO_API void FOnRoleNameChanged_DelegateWrapper(const FMulticastScriptDelegate& OnRoleNameChanged, const FString& InName);


#define FID_Demo_Source_Demo_Private_Characters_MCharacter_h_30_DELEGATE \
DEMO_API void FOnCurrentChanged_DelegateWrapper(const FMulticastScriptDelegate& OnCurrentChanged, AMCharacter* Target);


#define FID_Demo_Source_Demo_Private_Characters_MCharacter_h_32_DELEGATE \
DEMO_API void FOnMoveInput_DelegateWrapper(const FMulticastScriptDelegate& OnMoveInput, float X, float Y);


#define FID_Demo_Source_Demo_Private_Characters_MCharacter_h_33_DELEGATE \
DEMO_API void FOnLookInput_DelegateWrapper(const FMulticastScriptDelegate& OnLookInput, float X, float Y);


#define FID_Demo_Source_Demo_Private_Characters_MCharacter_h_34_DELEGATE \
DEMO_API void FOnJumpInput_DelegateWrapper(const FMulticastScriptDelegate& OnJumpInput, float V);


#define FID_Demo_Source_Demo_Private_Characters_MCharacter_h_36_DELEGATE \
DEMO_API void FOnHealthChanged_DelegateWrapper(const FMulticastScriptDelegate& OnHealthChanged, float V);


#define FID_Demo_Source_Demo_Private_Characters_MCharacter_h_37_DELEGATE \
DEMO_API void FOnMaxHealthChanged_DelegateWrapper(const FMulticastScriptDelegate& OnMaxHealthChanged, float V);


#define FID_Demo_Source_Demo_Private_Characters_MCharacter_h_38_DELEGATE \
DEMO_API void FOnManaChanged_DelegateWrapper(const FMulticastScriptDelegate& OnManaChanged, float V);


#define FID_Demo_Source_Demo_Private_Characters_MCharacter_h_39_DELEGATE \
DEMO_API void FOnMaxManaChanged_DelegateWrapper(const FMulticastScriptDelegate& OnMaxManaChanged, float V);


#define FID_Demo_Source_Demo_Private_Characters_MCharacter_h_40_DELEGATE \
DEMO_API void FOnRageChanged_DelegateWrapper(const FMulticastScriptDelegate& OnRageChanged, float V);


#define FID_Demo_Source_Demo_Private_Characters_MCharacter_h_41_DELEGATE \
DEMO_API void FOnMaxRageChanged_DelegateWrapper(const FMulticastScriptDelegate& OnMaxRageChanged, float V);


#define FID_Demo_Source_Demo_Private_Characters_MCharacter_h_42_DELEGATE \
DEMO_API void FOnEnergyChanged_DelegateWrapper(const FMulticastScriptDelegate& OnEnergyChanged, float V);


#define FID_Demo_Source_Demo_Private_Characters_MCharacter_h_43_DELEGATE \
DEMO_API void FOnMaxEnergyChanged_DelegateWrapper(const FMulticastScriptDelegate& OnMaxEnergyChanged, float V);


#define FID_Demo_Source_Demo_Private_Characters_MCharacter_h_45_DELEGATE \
DEMO_API void FOnAbilityFailed_DelegateWrapper(const FMulticastScriptDelegate& OnAbilityFailed, EActivateFailCode FailCode);


#define FID_Demo_Source_Demo_Private_Characters_MCharacter_h_50_SPARSE_DATA
#define FID_Demo_Source_Demo_Private_Characters_MCharacter_h_50_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Demo_Source_Demo_Private_Characters_MCharacter_h_50_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Demo_Source_Demo_Private_Characters_MCharacter_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetCurrentTarget_Implementation(AMCharacter* NewTarget); \
 \
	DECLARE_FUNCTION(execGetAttributeSet); \
	DECLARE_FUNCTION(execOnRep_CurrentTarget); \
	DECLARE_FUNCTION(execOnRep_RoleName); \
	DECLARE_FUNCTION(execSetCurrentTarget); \
	DECLARE_FUNCTION(execGetMPlayerController); \
	DECLARE_FUNCTION(execGetMPlayerState);


#define FID_Demo_Source_Demo_Private_Characters_MCharacter_h_50_ACCESSORS
#define FID_Demo_Source_Demo_Private_Characters_MCharacter_h_50_CALLBACK_WRAPPERS
#define FID_Demo_Source_Demo_Private_Characters_MCharacter_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMCharacter(); \
	friend struct Z_Construct_UClass_AMCharacter_Statics; \
public: \
	DECLARE_CLASS(AMCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Demo"), NO_API) \
	DECLARE_SERIALIZER(AMCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AMCharacter*>(this); } \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		RoleName=NETFIELD_REP_START, \
		CurrentTarget, \
		CharacterData, \
		NETFIELD_REP_END=CharacterData	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Demo_Source_Demo_Private_Characters_MCharacter_h_50_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMCharacter(AMCharacter&&); \
	NO_API AMCharacter(const AMCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMCharacter) \
	NO_API virtual ~AMCharacter();


#define FID_Demo_Source_Demo_Private_Characters_MCharacter_h_47_PROLOG
#define FID_Demo_Source_Demo_Private_Characters_MCharacter_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Demo_Source_Demo_Private_Characters_MCharacter_h_50_SPARSE_DATA \
	FID_Demo_Source_Demo_Private_Characters_MCharacter_h_50_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Demo_Source_Demo_Private_Characters_MCharacter_h_50_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Demo_Source_Demo_Private_Characters_MCharacter_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Demo_Source_Demo_Private_Characters_MCharacter_h_50_ACCESSORS \
	FID_Demo_Source_Demo_Private_Characters_MCharacter_h_50_CALLBACK_WRAPPERS \
	FID_Demo_Source_Demo_Private_Characters_MCharacter_h_50_INCLASS_NO_PURE_DECLS \
	FID_Demo_Source_Demo_Private_Characters_MCharacter_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEMO_API UClass* StaticClass<class AMCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Demo_Source_Demo_Private_Characters_MCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
