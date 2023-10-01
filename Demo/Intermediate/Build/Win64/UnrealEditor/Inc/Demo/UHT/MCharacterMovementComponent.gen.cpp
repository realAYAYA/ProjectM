// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Private/Characters/Components/MCharacterMovementComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMCharacterMovementComponent() {}
// Cross Module References
	DEMO_API UClass* Z_Construct_UClass_UMCharacterMovementComponent();
	DEMO_API UClass* Z_Construct_UClass_UMCharacterMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
	UPackage* Z_Construct_UPackage__Script_Demo();
// End Cross Module References
	void UMCharacterMovementComponent::StaticRegisterNativesUMCharacterMovementComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMCharacterMovementComponent);
	UClass* Z_Construct_UClass_UMCharacterMovementComponent_NoRegister()
	{
		return UMCharacterMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMCharacterMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMCharacterMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Demo,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMCharacterMovementComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMCharacterMovementComponent_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Characters/Components/MCharacterMovementComponent.h" },
		{ "ModuleRelativePath", "Private/Characters/Components/MCharacterMovementComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMCharacterMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMCharacterMovementComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMCharacterMovementComponent_Statics::ClassParams = {
		&UMCharacterMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00A000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMCharacterMovementComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMCharacterMovementComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMCharacterMovementComponent()
	{
		if (!Z_Registration_Info_UClass_UMCharacterMovementComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMCharacterMovementComponent.OuterSingleton, Z_Construct_UClass_UMCharacterMovementComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMCharacterMovementComponent.OuterSingleton;
	}
	template<> DEMO_API UClass* StaticClass<UMCharacterMovementComponent>()
	{
		return UMCharacterMovementComponent::StaticClass();
	}
	UMCharacterMovementComponent::UMCharacterMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMCharacterMovementComponent);
	UMCharacterMovementComponent::~UMCharacterMovementComponent() {}
	struct Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_Characters_Components_MCharacterMovementComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_Characters_Components_MCharacterMovementComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMCharacterMovementComponent, UMCharacterMovementComponent::StaticClass, TEXT("UMCharacterMovementComponent"), &Z_Registration_Info_UClass_UMCharacterMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMCharacterMovementComponent), 2941413293U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_Characters_Components_MCharacterMovementComponent_h_2883831447(TEXT("/Script/Demo"),
		Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_Characters_Components_MCharacterMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_Characters_Components_MCharacterMovementComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
