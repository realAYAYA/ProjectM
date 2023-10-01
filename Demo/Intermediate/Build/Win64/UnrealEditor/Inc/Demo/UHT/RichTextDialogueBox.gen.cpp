// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Public/UI/RichTextDialogueBox.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRichTextDialogueBox() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DEMO_API UClass* Z_Construct_UClass_URichTextDialogueBox();
	DEMO_API UClass* Z_Construct_UClass_URichTextDialogueBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_URichTextBlock_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Demo();
// End Cross Module References
	DEFINE_FUNCTION(URichTextDialogueBox::execSkipToLineEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SkipToLineEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URichTextDialogueBox::execHasFinishedPlayingLine)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasFinishedPlayingLine();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URichTextDialogueBox::execGetCurrentLine)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_OutLine);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetCurrentLine(Z_Param_Out_OutLine);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URichTextDialogueBox::execPlayLine)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_InLine);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayLine(Z_Param_Out_InLine);
		P_NATIVE_END;
	}
	static FName NAME_URichTextDialogueBox_OnLineFinishedPlaying = FName(TEXT("OnLineFinishedPlaying"));
	void URichTextDialogueBox::OnLineFinishedPlaying()
	{
		ProcessEvent(FindFunctionChecked(NAME_URichTextDialogueBox_OnLineFinishedPlaying),NULL);
	}
	static FName NAME_URichTextDialogueBox_OnPlayLetter = FName(TEXT("OnPlayLetter"));
	void URichTextDialogueBox::OnPlayLetter()
	{
		ProcessEvent(FindFunctionChecked(NAME_URichTextDialogueBox_OnPlayLetter),NULL);
	}
	void URichTextDialogueBox::StaticRegisterNativesURichTextDialogueBox()
	{
		UClass* Class = URichTextDialogueBox::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentLine", &URichTextDialogueBox::execGetCurrentLine },
			{ "HasFinishedPlayingLine", &URichTextDialogueBox::execHasFinishedPlayingLine },
			{ "PlayLine", &URichTextDialogueBox::execPlayLine },
			{ "SkipToLineEnd", &URichTextDialogueBox::execSkipToLineEnd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URichTextDialogueBox_GetCurrentLine_Statics
	{
		struct RichTextDialogueBox_eventGetCurrentLine_Parms
		{
			FText OutLine;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_OutLine;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_URichTextDialogueBox_GetCurrentLine_Statics::NewProp_OutLine = { "OutLine", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RichTextDialogueBox_eventGetCurrentLine_Parms, OutLine), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URichTextDialogueBox_GetCurrentLine_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URichTextDialogueBox_GetCurrentLine_Statics::NewProp_OutLine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URichTextDialogueBox_GetCurrentLine_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjectM" },
		{ "ModuleRelativePath", "Public/UI/RichTextDialogueBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URichTextDialogueBox_GetCurrentLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URichTextDialogueBox, nullptr, "GetCurrentLine", nullptr, nullptr, Z_Construct_UFunction_URichTextDialogueBox_GetCurrentLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextDialogueBox_GetCurrentLine_Statics::PropPointers), sizeof(Z_Construct_UFunction_URichTextDialogueBox_GetCurrentLine_Statics::RichTextDialogueBox_eventGetCurrentLine_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextDialogueBox_GetCurrentLine_Statics::Function_MetaDataParams), Z_Construct_UFunction_URichTextDialogueBox_GetCurrentLine_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextDialogueBox_GetCurrentLine_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URichTextDialogueBox_GetCurrentLine_Statics::RichTextDialogueBox_eventGetCurrentLine_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URichTextDialogueBox_GetCurrentLine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URichTextDialogueBox_GetCurrentLine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URichTextDialogueBox_HasFinishedPlayingLine_Statics
	{
		struct RichTextDialogueBox_eventHasFinishedPlayingLine_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URichTextDialogueBox_HasFinishedPlayingLine_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RichTextDialogueBox_eventHasFinishedPlayingLine_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URichTextDialogueBox_HasFinishedPlayingLine_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RichTextDialogueBox_eventHasFinishedPlayingLine_Parms), &Z_Construct_UFunction_URichTextDialogueBox_HasFinishedPlayingLine_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URichTextDialogueBox_HasFinishedPlayingLine_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URichTextDialogueBox_HasFinishedPlayingLine_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URichTextDialogueBox_HasFinishedPlayingLine_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjectM" },
		{ "ModuleRelativePath", "Public/UI/RichTextDialogueBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URichTextDialogueBox_HasFinishedPlayingLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URichTextDialogueBox, nullptr, "HasFinishedPlayingLine", nullptr, nullptr, Z_Construct_UFunction_URichTextDialogueBox_HasFinishedPlayingLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextDialogueBox_HasFinishedPlayingLine_Statics::PropPointers), sizeof(Z_Construct_UFunction_URichTextDialogueBox_HasFinishedPlayingLine_Statics::RichTextDialogueBox_eventHasFinishedPlayingLine_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextDialogueBox_HasFinishedPlayingLine_Statics::Function_MetaDataParams), Z_Construct_UFunction_URichTextDialogueBox_HasFinishedPlayingLine_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextDialogueBox_HasFinishedPlayingLine_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URichTextDialogueBox_HasFinishedPlayingLine_Statics::RichTextDialogueBox_eventHasFinishedPlayingLine_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URichTextDialogueBox_HasFinishedPlayingLine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URichTextDialogueBox_HasFinishedPlayingLine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URichTextDialogueBox_OnLineFinishedPlaying_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URichTextDialogueBox_OnLineFinishedPlaying_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjectM" },
		{ "ModuleRelativePath", "Public/UI/RichTextDialogueBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URichTextDialogueBox_OnLineFinishedPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URichTextDialogueBox, nullptr, "OnLineFinishedPlaying", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextDialogueBox_OnLineFinishedPlaying_Statics::Function_MetaDataParams), Z_Construct_UFunction_URichTextDialogueBox_OnLineFinishedPlaying_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_URichTextDialogueBox_OnLineFinishedPlaying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URichTextDialogueBox_OnLineFinishedPlaying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URichTextDialogueBox_OnPlayLetter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URichTextDialogueBox_OnPlayLetter_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjectM" },
		{ "ModuleRelativePath", "Public/UI/RichTextDialogueBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URichTextDialogueBox_OnPlayLetter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URichTextDialogueBox, nullptr, "OnPlayLetter", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextDialogueBox_OnPlayLetter_Statics::Function_MetaDataParams), Z_Construct_UFunction_URichTextDialogueBox_OnPlayLetter_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_URichTextDialogueBox_OnPlayLetter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URichTextDialogueBox_OnPlayLetter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URichTextDialogueBox_PlayLine_Statics
	{
		struct RichTextDialogueBox_eventPlayLine_Parms
		{
			FText InLine;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InLine_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_InLine;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URichTextDialogueBox_PlayLine_Statics::NewProp_InLine_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_URichTextDialogueBox_PlayLine_Statics::NewProp_InLine = { "InLine", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RichTextDialogueBox_eventPlayLine_Parms, InLine), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextDialogueBox_PlayLine_Statics::NewProp_InLine_MetaData), Z_Construct_UFunction_URichTextDialogueBox_PlayLine_Statics::NewProp_InLine_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URichTextDialogueBox_PlayLine_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URichTextDialogueBox_PlayLine_Statics::NewProp_InLine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URichTextDialogueBox_PlayLine_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjectM" },
		{ "ModuleRelativePath", "Public/UI/RichTextDialogueBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URichTextDialogueBox_PlayLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URichTextDialogueBox, nullptr, "PlayLine", nullptr, nullptr, Z_Construct_UFunction_URichTextDialogueBox_PlayLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextDialogueBox_PlayLine_Statics::PropPointers), sizeof(Z_Construct_UFunction_URichTextDialogueBox_PlayLine_Statics::RichTextDialogueBox_eventPlayLine_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextDialogueBox_PlayLine_Statics::Function_MetaDataParams), Z_Construct_UFunction_URichTextDialogueBox_PlayLine_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextDialogueBox_PlayLine_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URichTextDialogueBox_PlayLine_Statics::RichTextDialogueBox_eventPlayLine_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URichTextDialogueBox_PlayLine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URichTextDialogueBox_PlayLine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URichTextDialogueBox_SkipToLineEnd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URichTextDialogueBox_SkipToLineEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjectM" },
		{ "ModuleRelativePath", "Public/UI/RichTextDialogueBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URichTextDialogueBox_SkipToLineEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URichTextDialogueBox, nullptr, "SkipToLineEnd", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextDialogueBox_SkipToLineEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_URichTextDialogueBox_SkipToLineEnd_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_URichTextDialogueBox_SkipToLineEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URichTextDialogueBox_SkipToLineEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URichTextDialogueBox);
	UClass* Z_Construct_UClass_URichTextDialogueBox_NoRegister()
	{
		return URichTextDialogueBox::StaticClass();
	}
	struct Z_Construct_UClass_URichTextDialogueBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LineText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LineText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LetterPlayTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LetterPlayTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndHoldTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EndHoldTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLine_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_CurrentLine;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URichTextDialogueBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Demo,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URichTextDialogueBox_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_URichTextDialogueBox_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URichTextDialogueBox_GetCurrentLine, "GetCurrentLine" }, // 447605003
		{ &Z_Construct_UFunction_URichTextDialogueBox_HasFinishedPlayingLine, "HasFinishedPlayingLine" }, // 3324340119
		{ &Z_Construct_UFunction_URichTextDialogueBox_OnLineFinishedPlaying, "OnLineFinishedPlaying" }, // 2037460364
		{ &Z_Construct_UFunction_URichTextDialogueBox_OnPlayLetter, "OnPlayLetter" }, // 2162798947
		{ &Z_Construct_UFunction_URichTextDialogueBox_PlayLine, "PlayLine" }, // 3913771650
		{ &Z_Construct_UFunction_URichTextDialogueBox_SkipToLineEnd, "SkipToLineEnd" }, // 274458822
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URichTextDialogueBox_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URichTextDialogueBox_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/RichTextDialogueBox.h" },
		{ "ModuleRelativePath", "Public/UI/RichTextDialogueBox.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URichTextDialogueBox_Statics::NewProp_LineText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "RichTextDialogueBox" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/RichTextDialogueBox.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URichTextDialogueBox_Statics::NewProp_LineText = { "LineText", nullptr, (EPropertyFlags)0x001400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URichTextDialogueBox, LineText), Z_Construct_UClass_URichTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URichTextDialogueBox_Statics::NewProp_LineText_MetaData), Z_Construct_UClass_URichTextDialogueBox_Statics::NewProp_LineText_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URichTextDialogueBox_Statics::NewProp_LetterPlayTime_MetaData[] = {
		{ "Category", "ProjectM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The amount of time between printing individual letters (for the \"typewriter\" effect).\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/RichTextDialogueBox.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The amount of time between printing individual letters (for the \"typewriter\" effect)." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URichTextDialogueBox_Statics::NewProp_LetterPlayTime = { "LetterPlayTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URichTextDialogueBox, LetterPlayTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URichTextDialogueBox_Statics::NewProp_LetterPlayTime_MetaData), Z_Construct_UClass_URichTextDialogueBox_Statics::NewProp_LetterPlayTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URichTextDialogueBox_Statics::NewProp_EndHoldTime_MetaData[] = {
		{ "Category", "ProjectM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The amount of time to wait after finishing the line before actually marking it completed.\n// This helps prevent accidentally progressing dialogue on short lines.\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/RichTextDialogueBox.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The amount of time to wait after finishing the line before actually marking it completed.\nThis helps prevent accidentally progressing dialogue on short lines." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URichTextDialogueBox_Statics::NewProp_EndHoldTime = { "EndHoldTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URichTextDialogueBox, EndHoldTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URichTextDialogueBox_Statics::NewProp_EndHoldTime_MetaData), Z_Construct_UClass_URichTextDialogueBox_Statics::NewProp_EndHoldTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URichTextDialogueBox_Statics::NewProp_CurrentLine_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/RichTextDialogueBox.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_URichTextDialogueBox_Statics::NewProp_CurrentLine = { "CurrentLine", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URichTextDialogueBox, CurrentLine), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URichTextDialogueBox_Statics::NewProp_CurrentLine_MetaData), Z_Construct_UClass_URichTextDialogueBox_Statics::NewProp_CurrentLine_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URichTextDialogueBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URichTextDialogueBox_Statics::NewProp_LineText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URichTextDialogueBox_Statics::NewProp_LetterPlayTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URichTextDialogueBox_Statics::NewProp_EndHoldTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URichTextDialogueBox_Statics::NewProp_CurrentLine,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URichTextDialogueBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URichTextDialogueBox>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URichTextDialogueBox_Statics::ClassParams = {
		&URichTextDialogueBox::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URichTextDialogueBox_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URichTextDialogueBox_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URichTextDialogueBox_Statics::Class_MetaDataParams), Z_Construct_UClass_URichTextDialogueBox_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URichTextDialogueBox_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_URichTextDialogueBox()
	{
		if (!Z_Registration_Info_UClass_URichTextDialogueBox.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URichTextDialogueBox.OuterSingleton, Z_Construct_UClass_URichTextDialogueBox_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URichTextDialogueBox.OuterSingleton;
	}
	template<> DEMO_API UClass* StaticClass<URichTextDialogueBox>()
	{
		return URichTextDialogueBox::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URichTextDialogueBox);
	URichTextDialogueBox::~URichTextDialogueBox() {}
	struct Z_CompiledInDeferFile_FID_Demo_Source_Demo_Public_UI_RichTextDialogueBox_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Source_Demo_Public_UI_RichTextDialogueBox_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URichTextDialogueBox, URichTextDialogueBox::StaticClass, TEXT("URichTextDialogueBox"), &Z_Registration_Info_UClass_URichTextDialogueBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URichTextDialogueBox), 1430620595U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo_Source_Demo_Public_UI_RichTextDialogueBox_h_920742924(TEXT("/Script/Demo"),
		Z_CompiledInDeferFile_FID_Demo_Source_Demo_Public_UI_RichTextDialogueBox_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Demo_Source_Demo_Public_UI_RichTextDialogueBox_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
