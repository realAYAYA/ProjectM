// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AMPlayerState;
enum class ELoginCode : uint8;
struct FCreateRoleParams;
struct FMUserData;
struct FRoleData;
#ifdef DEMO_MPlayerController_generated_h
#error "MPlayerController.generated.h already included, missing '#pragma once' in MPlayerController.h"
#endif
#define DEMO_MPlayerController_generated_h

#define FID_Demo_Source_Demo_Public_MPlayerController_h_12_DELEGATE \
DEMO_API void FOnFinishedLogin_DelegateWrapper(const FMulticastScriptDelegate& OnFinishedLogin, const ELoginCode Code);


#define FID_Demo_Source_Demo_Public_MPlayerController_h_21_SPARSE_DATA
#define FID_Demo_Source_Demo_Public_MPlayerController_h_21_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Demo_Source_Demo_Public_MPlayerController_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Demo_Source_Demo_Public_MPlayerController_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ChooseRoleAck_Implementation(bool bOk); \
	virtual void ChooseRoleReq_Implementation(const FString& InID, const FString& InName); \
	virtual void CreateRoleAck_Implementation(FRoleData const& InData); \
	virtual void CreateRoleReq_Implementation(const FString& InID, FCreateRoleParams const& InParam); \
	virtual void LoginAck_Implementation(const ELoginCode Code, FMUserData const& InData); \
	virtual void LoginReq_Implementation(const FString& InID, const FString& Name); \
 \
	DECLARE_FUNCTION(execChooseRoleAck); \
	DECLARE_FUNCTION(execChooseRoleReq); \
	DECLARE_FUNCTION(execCreateRoleAck); \
	DECLARE_FUNCTION(execCreateRoleReq); \
	DECLARE_FUNCTION(execLoginAck); \
	DECLARE_FUNCTION(execLoginReq); \
	DECLARE_FUNCTION(execK2_ChooseRole); \
	DECLARE_FUNCTION(execK2_CreateRole); \
	DECLARE_FUNCTION(execK2_Login); \
	DECLARE_FUNCTION(execGetMPlayerState); \
	DECLARE_FUNCTION(execK2_GetUserID); \
	DECLARE_FUNCTION(execIsOnline);


#define FID_Demo_Source_Demo_Public_MPlayerController_h_21_ACCESSORS
#define FID_Demo_Source_Demo_Public_MPlayerController_h_21_CALLBACK_WRAPPERS
#define FID_Demo_Source_Demo_Public_MPlayerController_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMPlayerController(); \
	friend struct Z_Construct_UClass_AMPlayerController_Statics; \
public: \
	DECLARE_CLASS(AMPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Demo"), NO_API) \
	DECLARE_SERIALIZER(AMPlayerController)


#define FID_Demo_Source_Demo_Public_MPlayerController_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMPlayerController(AMPlayerController&&); \
	NO_API AMPlayerController(const AMPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMPlayerController) \
	NO_API virtual ~AMPlayerController();


#define FID_Demo_Source_Demo_Public_MPlayerController_h_18_PROLOG
#define FID_Demo_Source_Demo_Public_MPlayerController_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Demo_Source_Demo_Public_MPlayerController_h_21_SPARSE_DATA \
	FID_Demo_Source_Demo_Public_MPlayerController_h_21_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Demo_Source_Demo_Public_MPlayerController_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Demo_Source_Demo_Public_MPlayerController_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Demo_Source_Demo_Public_MPlayerController_h_21_ACCESSORS \
	FID_Demo_Source_Demo_Public_MPlayerController_h_21_CALLBACK_WRAPPERS \
	FID_Demo_Source_Demo_Public_MPlayerController_h_21_INCLASS_NO_PURE_DECLS \
	FID_Demo_Source_Demo_Public_MPlayerController_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEMO_API UClass* StaticClass<class AMPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Demo_Source_Demo_Public_MPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
