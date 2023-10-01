// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Private/Inventory/Actors/Components/PickUpComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickUpComponent() {}
// Cross Module References
	DEMO_API UClass* Z_Construct_UClass_UPickUpComponent();
	DEMO_API UClass* Z_Construct_UClass_UPickUpComponent_NoRegister();
	DEMO_API UFunction* Z_Construct_UDelegateFunction_Demo_OnPickUp__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent();
	UPackage* Z_Construct_UPackage__Script_Demo();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Demo_OnPickUp__DelegateSignature_Statics
	{
		struct _Script_Demo_eventOnPickUp_Parms
		{
			AActor* PickUpActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PickUpActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Demo_OnPickUp__DelegateSignature_Statics::NewProp_PickUpActor = { "PickUpActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Demo_eventOnPickUp_Parms, PickUpActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Demo_OnPickUp__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Demo_OnPickUp__DelegateSignature_Statics::NewProp_PickUpActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Demo_OnPickUp__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Declaration of the delegate that will be called when someone picks this up\n// The character picking this up is the parameter sent with the notification\n" },
#endif
		{ "ModuleRelativePath", "Private/Inventory/Actors/Components/PickUpComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Declaration of the delegate that will be called when someone picks this up\nThe character picking this up is the parameter sent with the notification" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Demo_OnPickUp__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Demo, nullptr, "OnPickUp__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Demo_OnPickUp__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Demo_OnPickUp__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Demo_OnPickUp__DelegateSignature_Statics::_Script_Demo_eventOnPickUp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Demo_OnPickUp__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Demo_OnPickUp__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Demo_OnPickUp__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Demo_OnPickUp__DelegateSignature_Statics::_Script_Demo_eventOnPickUp_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Demo_OnPickUp__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Demo_OnPickUp__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnPickUp_DelegateWrapper(const FMulticastScriptDelegate& OnPickUp, AActor* PickUpActor)
{
	struct _Script_Demo_eventOnPickUp_Parms
	{
		AActor* PickUpActor;
	};
	_Script_Demo_eventOnPickUp_Parms Parms;
	Parms.PickUpActor=PickUpActor;
	OnPickUp.ProcessMulticastDelegate<UObject>(&Parms);
}
	void UPickUpComponent::StaticRegisterNativesUPickUpComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPickUpComponent);
	UClass* Z_Construct_UClass_UPickUpComponent_NoRegister()
	{
		return UPickUpComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPickUpComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPickUp_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPickUp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPickUpComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USphereComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Demo,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPickUpComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPickUpComponent_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "Inventory/Actors/Components/PickUpComponent.h" },
		{ "ModuleRelativePath", "Private/Inventory/Actors/Components/PickUpComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPickUpComponent_Statics::NewProp_OnPickUp_MetaData[] = {
		{ "Category", "Interaction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Delegate to whom anyone can subscribe to receive this event */" },
#endif
		{ "ModuleRelativePath", "Private/Inventory/Actors/Components/PickUpComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate to whom anyone can subscribe to receive this event" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPickUpComponent_Statics::NewProp_OnPickUp = { "OnPickUp", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPickUpComponent, OnPickUp), Z_Construct_UDelegateFunction_Demo_OnPickUp__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPickUpComponent_Statics::NewProp_OnPickUp_MetaData), Z_Construct_UClass_UPickUpComponent_Statics::NewProp_OnPickUp_MetaData) }; // 754843906
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPickUpComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPickUpComponent_Statics::NewProp_OnPickUp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPickUpComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPickUpComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPickUpComponent_Statics::ClassParams = {
		&UPickUpComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPickUpComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPickUpComponent_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPickUpComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPickUpComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPickUpComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPickUpComponent()
	{
		if (!Z_Registration_Info_UClass_UPickUpComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPickUpComponent.OuterSingleton, Z_Construct_UClass_UPickUpComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPickUpComponent.OuterSingleton;
	}
	template<> DEMO_API UClass* StaticClass<UPickUpComponent>()
	{
		return UPickUpComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPickUpComponent);
	UPickUpComponent::~UPickUpComponent() {}
	struct Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_Inventory_Actors_Components_PickUpComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_Inventory_Actors_Components_PickUpComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPickUpComponent, UPickUpComponent::StaticClass, TEXT("UPickUpComponent"), &Z_Registration_Info_UClass_UPickUpComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPickUpComponent), 2029468467U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_Inventory_Actors_Components_PickUpComponent_h_287660495(TEXT("/Script/Demo"),
		Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_Inventory_Actors_Components_PickUpComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_Inventory_Actors_Components_PickUpComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
