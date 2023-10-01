// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MGameServer/Public/MGameServerBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMGameServerBPLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	MGAMESERVER_API UClass* Z_Construct_UClass_UMGameServerBPLibrary();
	MGAMESERVER_API UClass* Z_Construct_UClass_UMGameServerBPLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MGameServer();
// End Cross Module References
	DEFINE_FUNCTION(UMGameServerBPLibrary::execMWebSocketServerSampleFunction)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Param);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UMGameServerBPLibrary::MWebSocketServerSampleFunction(Z_Param_Param);
		P_NATIVE_END;
	}
	void UMGameServerBPLibrary::StaticRegisterNativesUMGameServerBPLibrary()
	{
		UClass* Class = UMGameServerBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MWebSocketServerSampleFunction", &UMGameServerBPLibrary::execMWebSocketServerSampleFunction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMGameServerBPLibrary_MWebSocketServerSampleFunction_Statics
	{
		struct MGameServerBPLibrary_eventMWebSocketServerSampleFunction_Parms
		{
			float Param;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Param;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMGameServerBPLibrary_MWebSocketServerSampleFunction_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MGameServerBPLibrary_eventMWebSocketServerSampleFunction_Parms, Param), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMGameServerBPLibrary_MWebSocketServerSampleFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MGameServerBPLibrary_eventMWebSocketServerSampleFunction_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMGameServerBPLibrary_MWebSocketServerSampleFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMGameServerBPLibrary_MWebSocketServerSampleFunction_Statics::NewProp_Param,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMGameServerBPLibrary_MWebSocketServerSampleFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMGameServerBPLibrary_MWebSocketServerSampleFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", "MWebSocketServerTesting" },
		{ "DisplayName", "Execute Sample function" },
		{ "Keywords", "MWebSocketServer sample test testing" },
		{ "ModuleRelativePath", "Public/MGameServerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMGameServerBPLibrary_MWebSocketServerSampleFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMGameServerBPLibrary, nullptr, "MWebSocketServerSampleFunction", nullptr, nullptr, Z_Construct_UFunction_UMGameServerBPLibrary_MWebSocketServerSampleFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMGameServerBPLibrary_MWebSocketServerSampleFunction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMGameServerBPLibrary_MWebSocketServerSampleFunction_Statics::MGameServerBPLibrary_eventMWebSocketServerSampleFunction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMGameServerBPLibrary_MWebSocketServerSampleFunction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMGameServerBPLibrary_MWebSocketServerSampleFunction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMGameServerBPLibrary_MWebSocketServerSampleFunction_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMGameServerBPLibrary_MWebSocketServerSampleFunction_Statics::MGameServerBPLibrary_eventMWebSocketServerSampleFunction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMGameServerBPLibrary_MWebSocketServerSampleFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMGameServerBPLibrary_MWebSocketServerSampleFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMGameServerBPLibrary);
	UClass* Z_Construct_UClass_UMGameServerBPLibrary_NoRegister()
	{
		return UMGameServerBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMGameServerBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMGameServerBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MGameServer,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMGameServerBPLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMGameServerBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMGameServerBPLibrary_MWebSocketServerSampleFunction, "MWebSocketServerSampleFunction" }, // 2857376789
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMGameServerBPLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMGameServerBPLibrary_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
#endif
		{ "IncludePath", "MGameServerBPLibrary.h" },
		{ "ModuleRelativePath", "Public/MGameServerBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMGameServerBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMGameServerBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMGameServerBPLibrary_Statics::ClassParams = {
		&UMGameServerBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMGameServerBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UMGameServerBPLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMGameServerBPLibrary()
	{
		if (!Z_Registration_Info_UClass_UMGameServerBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMGameServerBPLibrary.OuterSingleton, Z_Construct_UClass_UMGameServerBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMGameServerBPLibrary.OuterSingleton;
	}
	template<> MGAMESERVER_API UClass* StaticClass<UMGameServerBPLibrary>()
	{
		return UMGameServerBPLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMGameServerBPLibrary);
	UMGameServerBPLibrary::~UMGameServerBPLibrary() {}
	struct Z_CompiledInDeferFile_FID_Demo_Plugins_MGameServer_Source_MGameServer_Public_MGameServerBPLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Plugins_MGameServer_Source_MGameServer_Public_MGameServerBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMGameServerBPLibrary, UMGameServerBPLibrary::StaticClass, TEXT("UMGameServerBPLibrary"), &Z_Registration_Info_UClass_UMGameServerBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMGameServerBPLibrary), 2568458593U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Plugins_MGameServer_Source_MGameServer_Public_MGameServerBPLibrary_h_2834358408(TEXT("/Script/MGameServer"),
		Z_CompiledInDeferFile_FID_Demo_Plugins_MGameServer_Source_MGameServer_Public_MGameServerBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Demo_Plugins_MGameServer_Source_MGameServer_Public_MGameServerBPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS