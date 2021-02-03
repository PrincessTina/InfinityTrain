// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystemEditor/Private/DialogueEditor/Graph/SchemaActions/NewComment_DialogueGraphSchemaAction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNewComment_DialogueGraphSchemaAction() {}
// Cross Module References
	DLGSYSTEMEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FNewComment_DialogueGraphSchemaAction();
	UPackage* Z_Construct_UPackage__Script_DlgSystemEditor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();
// End Cross Module References
class UScriptStruct* FNewComment_DialogueGraphSchemaAction::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DLGSYSTEMEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FNewComment_DialogueGraphSchemaAction_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNewComment_DialogueGraphSchemaAction, Z_Construct_UPackage__Script_DlgSystemEditor(), TEXT("NewComment_DialogueGraphSchemaAction"), sizeof(FNewComment_DialogueGraphSchemaAction), Get_Z_Construct_UScriptStruct_FNewComment_DialogueGraphSchemaAction_Hash());
	}
	return Singleton;
}
template<> DLGSYSTEMEDITOR_API UScriptStruct* StaticStruct<FNewComment_DialogueGraphSchemaAction>()
{
	return FNewComment_DialogueGraphSchemaAction::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNewComment_DialogueGraphSchemaAction(FNewComment_DialogueGraphSchemaAction::StaticStruct, TEXT("/Script/DlgSystemEditor"), TEXT("NewComment_DialogueGraphSchemaAction"), false, nullptr, nullptr);
static struct FScriptStruct_DlgSystemEditor_StaticRegisterNativesFNewComment_DialogueGraphSchemaAction
{
	FScriptStruct_DlgSystemEditor_StaticRegisterNativesFNewComment_DialogueGraphSchemaAction()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NewComment_DialogueGraphSchemaAction")),new UScriptStruct::TCppStructOps<FNewComment_DialogueGraphSchemaAction>);
	}
} ScriptStruct_DlgSystemEditor_StaticRegisterNativesFNewComment_DialogueGraphSchemaAction;
	struct Z_Construct_UScriptStruct_FNewComment_DialogueGraphSchemaAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNewComment_DialogueGraphSchemaAction_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to create new comment */" },
		{ "ModuleRelativePath", "Private/DialogueEditor/Graph/SchemaActions/NewComment_DialogueGraphSchemaAction.h" },
		{ "ToolTip", "Action to create new comment" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNewComment_DialogueGraphSchemaAction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNewComment_DialogueGraphSchemaAction>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNewComment_DialogueGraphSchemaAction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystemEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"NewComment_DialogueGraphSchemaAction",
		sizeof(FNewComment_DialogueGraphSchemaAction),
		alignof(FNewComment_DialogueGraphSchemaAction),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNewComment_DialogueGraphSchemaAction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNewComment_DialogueGraphSchemaAction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNewComment_DialogueGraphSchemaAction()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNewComment_DialogueGraphSchemaAction_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DlgSystemEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NewComment_DialogueGraphSchemaAction"), sizeof(FNewComment_DialogueGraphSchemaAction), Get_Z_Construct_UScriptStruct_FNewComment_DialogueGraphSchemaAction_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNewComment_DialogueGraphSchemaAction_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNewComment_DialogueGraphSchemaAction_Hash() { return 2837806574U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
