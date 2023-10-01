// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Private/Inventory/Actors/ItemActor.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemActor() {}
// Cross Module References
	DEMO_API UClass* Z_Construct_UClass_AItemActor();
	DEMO_API UClass* Z_Construct_UClass_AItemActor_NoRegister();
	DEMO_API UClass* Z_Construct_UClass_AMCharacter_NoRegister();
	DEMO_API UClass* Z_Construct_UClass_UItem_NoRegister();
	DEMO_API UClass* Z_Construct_UClass_UPickUpComponent_NoRegister();
	DEMO_API UEnum* Z_Construct_UEnum_Demo_EItemState();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	UPackage* Z_Construct_UPackage__Script_Demo();
// End Cross Module References
	DEFINE_FUNCTION(AItemActor::execOnRep_ItemID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ItemID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AItemActor::execOnRep_ItemState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ItemState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AItemActor::execGetItemOwner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetItemOwner();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AItemActor::execOnBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AItemActor::execOnTake)
	{
		P_GET_OBJECT(AMCharacter,Z_Param_InOwner);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTake(Z_Param_InOwner);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AItemActor::execOnDropped)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDropped();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AItemActor::execOnPickUp)
	{
		P_GET_OBJECT(AMCharacter,Z_Param_InOwner);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPickUp(Z_Param_InOwner);
		P_NATIVE_END;
	}
	void AItemActor::StaticRegisterNativesAItemActor()
	{
		UClass* Class = AItemActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetItemOwner", &AItemActor::execGetItemOwner },
			{ "OnBeginOverlap", &AItemActor::execOnBeginOverlap },
			{ "OnDropped", &AItemActor::execOnDropped },
			{ "OnPickUp", &AItemActor::execOnPickUp },
			{ "OnRep_ItemID", &AItemActor::execOnRep_ItemID },
			{ "OnRep_ItemState", &AItemActor::execOnRep_ItemState },
			{ "OnTake", &AItemActor::execOnTake },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AItemActor_GetItemOwner_Statics
	{
		struct ItemActor_eventGetItemOwner_Parms
		{
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AItemActor_GetItemOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemActor_eventGetItemOwner_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AItemActor_GetItemOwner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItemActor_GetItemOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItemActor_GetItemOwner_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Inventory/Actors/ItemActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AItemActor_GetItemOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItemActor, nullptr, "GetItemOwner", nullptr, nullptr, Z_Construct_UFunction_AItemActor_GetItemOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AItemActor_GetItemOwner_Statics::PropPointers), sizeof(Z_Construct_UFunction_AItemActor_GetItemOwner_Statics::ItemActor_eventGetItemOwner_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AItemActor_GetItemOwner_Statics::Function_MetaDataParams), Z_Construct_UFunction_AItemActor_GetItemOwner_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AItemActor_GetItemOwner_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AItemActor_GetItemOwner_Statics::ItemActor_eventGetItemOwner_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AItemActor_GetItemOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AItemActor_GetItemOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AItemActor_OnBeginOverlap_Statics
	{
		struct ItemActor_eventOnBeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItemActor_OnBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AItemActor_OnBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemActor_eventOnBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AItemActor_OnBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData), Z_Construct_UFunction_AItemActor_OnBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AItemActor_OnBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemActor_eventOnBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItemActor_OnBeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AItemActor_OnBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemActor_eventOnBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AItemActor_OnBeginOverlap_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_AItemActor_OnBeginOverlap_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AItemActor_OnBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemActor_eventOnBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AItemActor_OnBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((ItemActor_eventOnBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AItemActor_OnBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ItemActor_eventOnBeginOverlap_Parms), &Z_Construct_UFunction_AItemActor_OnBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItemActor_OnBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AItemActor_OnBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemActor_eventOnBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AItemActor_OnBeginOverlap_Statics::NewProp_SweepResult_MetaData), Z_Construct_UFunction_AItemActor_OnBeginOverlap_Statics::NewProp_SweepResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AItemActor_OnBeginOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItemActor_OnBeginOverlap_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItemActor_OnBeginOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItemActor_OnBeginOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItemActor_OnBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItemActor_OnBeginOverlap_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItemActor_OnBeginOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItemActor_OnBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Inventory/Actors/ItemActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AItemActor_OnBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItemActor, nullptr, "OnBeginOverlap", nullptr, nullptr, Z_Construct_UFunction_AItemActor_OnBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AItemActor_OnBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AItemActor_OnBeginOverlap_Statics::ItemActor_eventOnBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AItemActor_OnBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AItemActor_OnBeginOverlap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AItemActor_OnBeginOverlap_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AItemActor_OnBeginOverlap_Statics::ItemActor_eventOnBeginOverlap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AItemActor_OnBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AItemActor_OnBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AItemActor_OnDropped_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItemActor_OnDropped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Inventory/Actors/ItemActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AItemActor_OnDropped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItemActor, nullptr, "OnDropped", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AItemActor_OnDropped_Statics::Function_MetaDataParams), Z_Construct_UFunction_AItemActor_OnDropped_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AItemActor_OnDropped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AItemActor_OnDropped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AItemActor_OnPickUp_Statics
	{
		struct ItemActor_eventOnPickUp_Parms
		{
			AMCharacter* InOwner;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InOwner;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AItemActor_OnPickUp_Statics::NewProp_InOwner = { "InOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemActor_eventOnPickUp_Parms, InOwner), Z_Construct_UClass_AMCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AItemActor_OnPickUp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItemActor_OnPickUp_Statics::NewProp_InOwner,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItemActor_OnPickUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Inventory/Actors/ItemActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AItemActor_OnPickUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItemActor, nullptr, "OnPickUp", nullptr, nullptr, Z_Construct_UFunction_AItemActor_OnPickUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AItemActor_OnPickUp_Statics::PropPointers), sizeof(Z_Construct_UFunction_AItemActor_OnPickUp_Statics::ItemActor_eventOnPickUp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AItemActor_OnPickUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_AItemActor_OnPickUp_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AItemActor_OnPickUp_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AItemActor_OnPickUp_Statics::ItemActor_eventOnPickUp_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AItemActor_OnPickUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AItemActor_OnPickUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AItemActor_OnRep_ItemID_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItemActor_OnRep_ItemID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Inventory/Actors/ItemActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AItemActor_OnRep_ItemID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItemActor, nullptr, "OnRep_ItemID", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AItemActor_OnRep_ItemID_Statics::Function_MetaDataParams), Z_Construct_UFunction_AItemActor_OnRep_ItemID_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AItemActor_OnRep_ItemID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AItemActor_OnRep_ItemID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AItemActor_OnRep_ItemState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItemActor_OnRep_ItemState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Inventory/Actors/ItemActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AItemActor_OnRep_ItemState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItemActor, nullptr, "OnRep_ItemState", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AItemActor_OnRep_ItemState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AItemActor_OnRep_ItemState_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AItemActor_OnRep_ItemState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AItemActor_OnRep_ItemState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AItemActor_OnTake_Statics
	{
		struct ItemActor_eventOnTake_Parms
		{
			AMCharacter* InOwner;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InOwner;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AItemActor_OnTake_Statics::NewProp_InOwner = { "InOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemActor_eventOnTake_Parms, InOwner), Z_Construct_UClass_AMCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AItemActor_OnTake_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItemActor_OnTake_Statics::NewProp_InOwner,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItemActor_OnTake_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Inventory/Actors/ItemActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AItemActor_OnTake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItemActor, nullptr, "OnTake", nullptr, nullptr, Z_Construct_UFunction_AItemActor_OnTake_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AItemActor_OnTake_Statics::PropPointers), sizeof(Z_Construct_UFunction_AItemActor_OnTake_Statics::ItemActor_eventOnTake_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AItemActor_OnTake_Statics::Function_MetaDataParams), Z_Construct_UFunction_AItemActor_OnTake_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AItemActor_OnTake_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AItemActor_OnTake_Statics::ItemActor_eventOnTake_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AItemActor_OnTake()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AItemActor_OnTake_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AItemActor);
	UClass* Z_Construct_UClass_AItemActor_NoRegister()
	{
		return AItemActor::StaticClass();
	}
	struct Z_Construct_UClass_AItemActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CfgID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CfgID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ItemState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ItemState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PickComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PickComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemOwner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemOwner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AItemActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Demo,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AItemActor_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AItemActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AItemActor_GetItemOwner, "GetItemOwner" }, // 3447583985
		{ &Z_Construct_UFunction_AItemActor_OnBeginOverlap, "OnBeginOverlap" }, // 4255501898
		{ &Z_Construct_UFunction_AItemActor_OnDropped, "OnDropped" }, // 574377020
		{ &Z_Construct_UFunction_AItemActor_OnPickUp, "OnPickUp" }, // 1881429489
		{ &Z_Construct_UFunction_AItemActor_OnRep_ItemID, "OnRep_ItemID" }, // 384940101
		{ &Z_Construct_UFunction_AItemActor_OnRep_ItemState, "OnRep_ItemState" }, // 2684576077
		{ &Z_Construct_UFunction_AItemActor_OnTake, "OnTake" }, // 3692480136
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AItemActor_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItemActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Inventory/Actors/ItemActor.h" },
		{ "ModuleRelativePath", "Private/Inventory/Actors/ItemActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItemActor_Statics::NewProp_CfgID_MetaData[] = {
		{ "Category", "ProjectM" },
		{ "ModuleRelativePath", "Private/Inventory/Actors/ItemActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AItemActor_Statics::NewProp_CfgID = { "CfgID", "OnRep_ItemID", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItemActor, CfgID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AItemActor_Statics::NewProp_CfgID_MetaData), Z_Construct_UClass_AItemActor_Statics::NewProp_CfgID_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AItemActor_Statics::NewProp_ItemState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItemActor_Statics::NewProp_ItemState_MetaData[] = {
		{ "Category", "ProjectM" },
		{ "ModuleRelativePath", "Private/Inventory/Actors/ItemActor.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AItemActor_Statics::NewProp_ItemState = { "ItemState", "OnRep_ItemState", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItemActor, ItemState), Z_Construct_UEnum_Demo_EItemState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AItemActor_Statics::NewProp_ItemState_MetaData), Z_Construct_UClass_AItemActor_Statics::NewProp_ItemState_MetaData) }; // 91400112
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItemActor_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "Category", "ProjectM" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Inventory/Actors/ItemActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AItemActor_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x0014000000090009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItemActor, MeshComponent), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AItemActor_Statics::NewProp_MeshComponent_MetaData), Z_Construct_UClass_AItemActor_Statics::NewProp_MeshComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItemActor_Statics::NewProp_PickComponent_MetaData[] = {
		{ "Category", "ProjectM" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Inventory/Actors/ItemActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AItemActor_Statics::NewProp_PickComponent = { "PickComponent", nullptr, (EPropertyFlags)0x0014000000090009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItemActor, PickComponent), Z_Construct_UClass_UPickUpComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AItemActor_Statics::NewProp_PickComponent_MetaData), Z_Construct_UClass_AItemActor_Statics::NewProp_PickComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItemActor_Statics::NewProp_ItemOwner_MetaData[] = {
		{ "ModuleRelativePath", "Private/Inventory/Actors/ItemActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItemActor_Statics::NewProp_ItemOwner = { "ItemOwner", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItemActor, ItemOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AItemActor_Statics::NewProp_ItemOwner_MetaData), Z_Construct_UClass_AItemActor_Statics::NewProp_ItemOwner_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItemActor_Statics::NewProp_Item_MetaData[] = {
		{ "ModuleRelativePath", "Private/Inventory/Actors/ItemActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItemActor_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItemActor, Item), Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AItemActor_Statics::NewProp_Item_MetaData), Z_Construct_UClass_AItemActor_Statics::NewProp_Item_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AItemActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemActor_Statics::NewProp_CfgID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemActor_Statics::NewProp_ItemState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemActor_Statics::NewProp_ItemState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemActor_Statics::NewProp_MeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemActor_Statics::NewProp_PickComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemActor_Statics::NewProp_ItemOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemActor_Statics::NewProp_Item,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AItemActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AItemActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AItemActor_Statics::ClassParams = {
		&AItemActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AItemActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AItemActor_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AItemActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AItemActor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AItemActor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AItemActor()
	{
		if (!Z_Registration_Info_UClass_AItemActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AItemActor.OuterSingleton, Z_Construct_UClass_AItemActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AItemActor.OuterSingleton;
	}
	template<> DEMO_API UClass* StaticClass<AItemActor>()
	{
		return AItemActor::StaticClass();
	}

	void AItemActor::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_CfgID(TEXT("CfgID"));
		static const FName Name_ItemState(TEXT("ItemState"));

		const bool bIsValid = true
			&& Name_CfgID == ClassReps[(int32)ENetFields_Private::CfgID].Property->GetFName()
			&& Name_ItemState == ClassReps[(int32)ENetFields_Private::ItemState].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AItemActor"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AItemActor);
	AItemActor::~AItemActor() {}
	struct Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_Inventory_Actors_ItemActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_Inventory_Actors_ItemActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AItemActor, AItemActor::StaticClass, TEXT("AItemActor"), &Z_Registration_Info_UClass_AItemActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AItemActor), 1667150680U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_Inventory_Actors_ItemActor_h_1150913712(TEXT("/Script/Demo"),
		Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_Inventory_Actors_ItemActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_Inventory_Actors_ItemActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
