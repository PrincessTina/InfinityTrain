// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystemEditor/Private/DialogueEditor/Graph/SchemaActions/ConvertSpeechSequenceNodeToSpeechNodes_DialogueGraphSchemaAction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConvertSpeechSequenceNodeToSpeechNodes_DialogueGraphSchemaAction() {}
// Cross Module References
	DLGSYSTEMEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FConvertSpeechSequenceNodeToSpeechNodes_DialogueGraphSchemaAction();
	UPackage* Z_Construct_UPackage__Script_DlgSystemEditor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();
// End Cross Module References
class UScriptStruct* FConvertSpeechSequenceNodeToSpeechNodes_DialogueGraphSchemaAction::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DLGSYSTEMEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FConvertSpeechSequenceNodeToSpeechNodes_DialogueGraphSchemaAction_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FConvertSpeechSequenceNodeToSpeechNodes_DialogueGraphSchemaAction, Z_Construct_UPackage__Script_DlgSystemEditor(), TEXT("ConvertSpeechSequenceNodeToSpeechNodes_DialogueGraphSchemaAction"), sizeof(FConvertSpeechSequenceNodeToSpeechNodes_DialogueGraphSchemaAction), Get_Z_Construct_UScriptStruct_FConvertSpeechSequenceNodeToSpeechNodes_DialogueGraphSchemaAction_Hash());
	}
	return Singleton;
}
template<> DLGSYSTEMEDITOR_API UScriptStruct* StaticStruct<FConvertSpeechSequenceNodeToSpeechNodes_DialogueGraphSchemaAction>()
{
	return FConvertSpeechSequenceNodeToSpeechNodes_DialogueGraphSchemaAction::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FConvertSpeechSequenceNodeToSpeechNodes_DialogueGraphSchemaAction(FConvertSpeechSequenceNodeToSpeechNodes_DialogueGraphSchemaAction::StaticStruct, TEXT("/Script/DlgSystemEditor"), TEXT("ConvertSpeechSequenceNodeToSpeechNodes_DialogueGraphSchemaAction"), false, nullptr, nullptr);
static struct FScriptStruct_DlgSystemEditor_StaticRegisterNativesFConvertSpeechSequenceNodeToSpeechNodes_DialogueGraphSchemaAction
{
	FScriptStruct_DlgSystemEditor_StaticRegisterNativesFConvertSpeechSequenceNodeToSpeechNodes_DialogueGraphSchemaAction()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ConvertSpeechSequenceNodeToSpeechNodes_DialogueGraphSchemaAction")),new UScriptStruct::TCppStructOps<FConvertSpeechSequenceNodeToSpeechNodes_DialogueGraphSchemaAction>);
	}
} ScriptStruct_DlgSystemEditor_StaticRegisterNativesFConvertSpeechSequenceNodeToSpeechNodes_DialogueGraphSchemaAction;
	struct Z_Construct_UScriptStruct_FConvertSpeechSequenceNodeToSpeechNodes_DialogueGraphSchemaAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConvertSpeechSequenceNodeToSpeechNodes_DialogueGraphSchemaAction_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Action to convert a Speech Sequence node to a list of Speech nodes.\n * This is the opposite of the FConvertSpeechNodesToSpeechSequence_DialogueGraphSchemaAction.\n */" },
		{ "ModuleRelativePath", "Private/DialogueEditor/Graph/SchemaActions/ConvertSpeechSequenceNodeToSpeechNodes_DialogueGraphSchemaAction.h" },
		{ "ToolTip", "Action to convert a Speech Sequence node to a list of Speech nodes.\nThis is the opposite of the FConvertSpeechNodesToSpeechSequence_DialogueGraphSchemaAction." },
	};
#endif
	void* Z_Construct_UScriptStruct_FConvertSpeechSequenceNodeToSpeechNodes_DialogueGraphSchemaAction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConvertSpeechSequenceNodeToSpeechNodes_DialogueGraphSchemaAction>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConvertSpeechSequenceNodeToSpeechNodes_DialogueGraphSchemaAction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystemEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"ConvertSpeechSequenceNodeToSpeechNodes_DialogueGraphSchemaAction",
		sizeof(FConvertSpeechSequenceNodeToSpeechNodes_DialogueGraphSchemaAction),
		alignof(FConvertSpeechSequenceNodeToSpeechNodes_DialogueGraphSchemaAction),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConvertSpeechSequenceNodeToSpeechNodes_DialogueGraphSchemaAction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConvertSpeechSequenceNodeToSpeechNodes_DialogueGraphSchemaAction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConvertSpeechSequenceNodeToSpeechNodes_DialogueGraphSchemaAction()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FConvertSpeechSequenceNodeToSpeechNodes_DialogueGraphSchemaAction_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DlgSystemEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ConvertSpeechSequenceNodeToSpeechNodes_DialogueGraphSchemaAction"), sizeof(FConvertSpeechSequenceNodeToSpeechNodes_DialogueGraphSchemaAction), Get_Z_Construct_UScriptStruct_FConvertSpeechSequenceNodeToSpeechNodes_DialogueGraphSchemaAction_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FConvertSpeechSequenceNodeToSpeechNodes_DialogueGraphSchemaAction_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FConvertSpeechSequenceNodeToSpeechNodes_DialogueGraphSchemaAction_Hash() { return 1794590958U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
