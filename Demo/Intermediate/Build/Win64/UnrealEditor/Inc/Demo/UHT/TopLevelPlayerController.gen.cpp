// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Private/TopLevel/TopLevelPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTopLevelPlayerController() {}
// Cross Module References
	DEMO_API UClass* Z_Construct_UClass_ATopLevelPlayerController();
	DEMO_API UClass* Z_Construct_UClass_ATopLevelPlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Demo();
// End Cross Module References
	void ATopLevelPlayerController::StaticRegisterNativesATopLevelPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATopLevelPlayerController);
	UClass* Z_Construct_UClass_ATopLevelPlayerController_NoRegister()
	{
		return ATopLevelPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ATopLevelPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATopLevelPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Demo,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATopLevelPlayerController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopLevelPlayerController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe7\x94\xa8\xe4\xba\x8e\xe6\xb5\x81\xe5\xbc\x8f\xe5\x85\xb3\xe5\x8d\xa1\xe4\xb8\x8b\xe7\x9a\x84\xe5\xa4\xb4\xe9\x83\xa8PlayerControler\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "TopLevel/TopLevelPlayerController.h" },
		{ "ModuleRelativePath", "Private/TopLevel/TopLevelPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x94\xa8\xe4\xba\x8e\xe6\xb5\x81\xe5\xbc\x8f\xe5\x85\xb3\xe5\x8d\xa1\xe4\xb8\x8b\xe7\x9a\x84\xe5\xa4\xb4\xe9\x83\xa8PlayerControler" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATopLevelPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATopLevelPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATopLevelPlayerController_Statics::ClassParams = {
		&ATopLevelPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATopLevelPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ATopLevelPlayerController_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ATopLevelPlayerController()
	{
		if (!Z_Registration_Info_UClass_ATopLevelPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATopLevelPlayerController.OuterSingleton, Z_Construct_UClass_ATopLevelPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATopLevelPlayerController.OuterSingleton;
	}
	template<> DEMO_API UClass* StaticClass<ATopLevelPlayerController>()
	{
		return ATopLevelPlayerController::StaticClass();
	}
	ATopLevelPlayerController::ATopLevelPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATopLevelPlayerController);
	ATopLevelPlayerController::~ATopLevelPlayerController() {}
	struct Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_TopLevel_TopLevelPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_TopLevel_TopLevelPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATopLevelPlayerController, ATopLevelPlayerController::StaticClass, TEXT("ATopLevelPlayerController"), &Z_Registration_Info_UClass_ATopLevelPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATopLevelPlayerController), 3038999765U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_TopLevel_TopLevelPlayerController_h_4056111862(TEXT("/Script/Demo"),
		Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_TopLevel_TopLevelPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Demo_Source_Demo_Private_TopLevel_TopLevelPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
