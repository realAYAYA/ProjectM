// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VrmMocopiReceiver.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FStructMocopiData;
#ifdef VRM4UCAPTURE_VrmMocopiReceiver_generated_h
#error "VrmMocopiReceiver.generated.h already included, missing '#pragma once' in VrmMocopiReceiver.h"
#endif
#define VRM4UCAPTURE_VrmMocopiReceiver_generated_h

#define FID_Demo_Plugins_DCC_VRM4U_Source_VRM4UCapture_Public_VrmMocopiReceiver_h_34_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStructMocopiData_Statics; \
	VRM4UCAPTURE_API static class UScriptStruct* StaticStruct();


template<> VRM4UCAPTURE_API UScriptStruct* StaticStruct<struct FStructMocopiData>();

#define FID_Demo_Plugins_DCC_VRM4U_Source_VRM4UCapture_Public_VrmMocopiReceiver_h_135_DELEGATE \
static void FVrmMocopiReceiverDelegate_DelegateWrapper(const FMulticastScriptDelegate& VrmMocopiReceiverDelegate, FStructMocopiData data);


#define FID_Demo_Plugins_DCC_VRM4U_Source_VRM4UCapture_Public_VrmMocopiReceiver_h_99_SPARSE_DATA
#define FID_Demo_Plugins_DCC_VRM4U_Source_VRM4UCapture_Public_VrmMocopiReceiver_h_99_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Demo_Plugins_DCC_VRM4U_Source_VRM4UCapture_Public_VrmMocopiReceiver_h_99_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Demo_Plugins_DCC_VRM4U_Source_VRM4UCapture_Public_VrmMocopiReceiver_h_99_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurrentTime); \
	DECLARE_FUNCTION(execGetLatestFrameData); \
	DECLARE_FUNCTION(execGetNextFrameData); \
	DECLARE_FUNCTION(execSetBufferNum); \
	DECLARE_FUNCTION(execSetAddress); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execListen);


#define FID_Demo_Plugins_DCC_VRM4U_Source_VRM4UCapture_Public_VrmMocopiReceiver_h_99_ACCESSORS
#define FID_Demo_Plugins_DCC_VRM4U_Source_VRM4UCapture_Public_VrmMocopiReceiver_h_99_INCLASS \
private: \
	static void StaticRegisterNativesUVrmMocopiReceiver(); \
	friend struct Z_Construct_UClass_UVrmMocopiReceiver_Statics; \
public: \
	DECLARE_CLASS(UVrmMocopiReceiver, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VRM4UCapture"), NO_API) \
	DECLARE_SERIALIZER(UVrmMocopiReceiver)


#define FID_Demo_Plugins_DCC_VRM4U_Source_VRM4UCapture_Public_VrmMocopiReceiver_h_99_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVrmMocopiReceiver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVrmMocopiReceiver) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVrmMocopiReceiver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVrmMocopiReceiver); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVrmMocopiReceiver(UVrmMocopiReceiver&&); \
	NO_API UVrmMocopiReceiver(const UVrmMocopiReceiver&); \
public: \
	NO_API virtual ~UVrmMocopiReceiver();


#define FID_Demo_Plugins_DCC_VRM4U_Source_VRM4UCapture_Public_VrmMocopiReceiver_h_96_PROLOG
#define FID_Demo_Plugins_DCC_VRM4U_Source_VRM4UCapture_Public_VrmMocopiReceiver_h_99_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Demo_Plugins_DCC_VRM4U_Source_VRM4UCapture_Public_VrmMocopiReceiver_h_99_SPARSE_DATA \
	FID_Demo_Plugins_DCC_VRM4U_Source_VRM4UCapture_Public_VrmMocopiReceiver_h_99_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Demo_Plugins_DCC_VRM4U_Source_VRM4UCapture_Public_VrmMocopiReceiver_h_99_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Demo_Plugins_DCC_VRM4U_Source_VRM4UCapture_Public_VrmMocopiReceiver_h_99_RPC_WRAPPERS \
	FID_Demo_Plugins_DCC_VRM4U_Source_VRM4UCapture_Public_VrmMocopiReceiver_h_99_ACCESSORS \
	FID_Demo_Plugins_DCC_VRM4U_Source_VRM4UCapture_Public_VrmMocopiReceiver_h_99_INCLASS \
	FID_Demo_Plugins_DCC_VRM4U_Source_VRM4UCapture_Public_VrmMocopiReceiver_h_99_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VRM4UCAPTURE_API UClass* StaticClass<class UVrmMocopiReceiver>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Demo_Plugins_DCC_VRM4U_Source_VRM4UCapture_Public_VrmMocopiReceiver_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
