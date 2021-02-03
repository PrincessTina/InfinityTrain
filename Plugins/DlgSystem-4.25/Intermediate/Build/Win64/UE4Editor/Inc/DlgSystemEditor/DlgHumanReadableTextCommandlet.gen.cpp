// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystemEditor/Private/Commandlets/DlgHumanReadableTextCommandlet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDlgHumanReadableTextCommandlet() {}
// Cross Module References
	DLGSYSTEMEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable();
	UPackage* Z_Construct_UPackage__Script_DlgSystemEditor();
	DLGSYSTEMEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable();
	DLGSYSTEMEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	DLGSYSTEMEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FDlgEdge_FormatHumanReadable();
	DLGSYSTEMEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_FormatHumanReadable();
	DLGSYSTEMEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FDlgEdgeOrphan_FormatHumanReadable();
	DLGSYSTEMEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FDlgNodeContext_FormatHumanReadable();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDlgHumanReadableTextCommandlet_NoRegister();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDlgHumanReadableTextCommandlet();
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
// End Cross Module References
class UScriptStruct* FDlgDialogue_FormatHumanReadable::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DLGSYSTEMEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable, Z_Construct_UPackage__Script_DlgSystemEditor(), TEXT("DlgDialogue_FormatHumanReadable"), sizeof(FDlgDialogue_FormatHumanReadable), Get_Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable_Hash());
	}
	return Singleton;
}
template<> DLGSYSTEMEDITOR_API UScriptStruct* StaticStruct<FDlgDialogue_FormatHumanReadable>()
{
	return FDlgDialogue_FormatHumanReadable::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDlgDialogue_FormatHumanReadable(FDlgDialogue_FormatHumanReadable::StaticStruct, TEXT("/Script/DlgSystemEditor"), TEXT("DlgDialogue_FormatHumanReadable"), false, nullptr, nullptr);
static struct FScriptStruct_DlgSystemEditor_StaticRegisterNativesFDlgDialogue_FormatHumanReadable
{
	FScriptStruct_DlgSystemEditor_StaticRegisterNativesFDlgDialogue_FormatHumanReadable()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DlgDialogue_FormatHumanReadable")),new UScriptStruct::TCppStructOps<FDlgDialogue_FormatHumanReadable>);
	}
} ScriptStruct_DlgSystemEditor_StaticRegisterNativesFDlgDialogue_FormatHumanReadable;
	struct Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeechSequenceNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpeechSequenceNodes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpeechSequenceNodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeechNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpeechNodes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpeechNodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogueGUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DialogueGUID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogueName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DialogueName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Variant of the UDlgDialogue that is human readable\n" },
		{ "ModuleRelativePath", "Private/Commandlets/DlgHumanReadableTextCommandlet.h" },
		{ "ToolTip", "Variant of the UDlgDialogue that is human readable" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDlgDialogue_FormatHumanReadable>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable_Statics::NewProp_SpeechSequenceNodes_MetaData[] = {
		{ "ModuleRelativePath", "Private/Commandlets/DlgHumanReadableTextCommandlet.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable_Statics::NewProp_SpeechSequenceNodes = { "SpeechSequenceNodes", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDlgDialogue_FormatHumanReadable, SpeechSequenceNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable_Statics::NewProp_SpeechSequenceNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable_Statics::NewProp_SpeechSequenceNodes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable_Statics::NewProp_SpeechSequenceNodes_Inner = { "SpeechSequenceNodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable_Statics::NewProp_SpeechNodes_MetaData[] = {
		{ "ModuleRelativePath", "Private/Commandlets/DlgHumanReadableTextCommandlet.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable_Statics::NewProp_SpeechNodes = { "SpeechNodes", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDlgDialogue_FormatHumanReadable, SpeechNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable_Statics::NewProp_SpeechNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable_Statics::NewProp_SpeechNodes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable_Statics::NewProp_SpeechNodes_Inner = { "SpeechNodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable_Statics::NewProp_DialogueGUID_MetaData[] = {
		{ "ModuleRelativePath", "Private/Commandlets/DlgHumanReadableTextCommandlet.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable_Statics::NewProp_DialogueGUID = { "DialogueGUID", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDlgDialogue_FormatHumanReadable, DialogueGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable_Statics::NewProp_DialogueGUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable_Statics::NewProp_DialogueGUID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable_Statics::NewProp_DialogueName_MetaData[] = {
		{ "ModuleRelativePath", "Private/Commandlets/DlgHumanReadableTextCommandlet.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable_Statics::NewProp_DialogueName = { "DialogueName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDlgDialogue_FormatHumanReadable, DialogueName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable_Statics::NewProp_DialogueName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable_Statics::NewProp_DialogueName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable_Statics::NewProp_SpeechSequenceNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable_Statics::NewProp_SpeechSequenceNodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable_Statics::NewProp_SpeechNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable_Statics::NewProp_SpeechNodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable_Statics::NewProp_DialogueGUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable_Statics::NewProp_DialogueName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystemEditor,
		nullptr,
		&NewStructOps,
		"DlgDialogue_FormatHumanReadable",
		sizeof(FDlgDialogue_FormatHumanReadable),
		alignof(FDlgDialogue_FormatHumanReadable),
		Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DlgSystemEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DlgDialogue_FormatHumanReadable"), sizeof(FDlgDialogue_FormatHumanReadable), Get_Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable_Hash() { return 136665353U; }
class UScriptStruct* FDlgNodeSpeech_FormatHumanReadable::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DLGSYSTEMEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable, Z_Construct_UPackage__Script_DlgSystemEditor(), TEXT("DlgNodeSpeech_FormatHumanReadable"), sizeof(FDlgNodeSpeech_FormatHumanReadable), Get_Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable_Hash());
	}
	return Singleton;
}
template<> DLGSYSTEMEDITOR_API UScriptStruct* StaticStruct<FDlgNodeSpeech_FormatHumanReadable>()
{
	return FDlgNodeSpeech_FormatHumanReadable::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable(FDlgNodeSpeech_FormatHumanReadable::StaticStruct, TEXT("/Script/DlgSystemEditor"), TEXT("DlgNodeSpeech_FormatHumanReadable"), false, nullptr, nullptr);
static struct FScriptStruct_DlgSystemEditor_StaticRegisterNativesFDlgNodeSpeech_FormatHumanReadable
{
	FScriptStruct_DlgSystemEditor_StaticRegisterNativesFDlgNodeSpeech_FormatHumanReadable()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DlgNodeSpeech_FormatHumanReadable")),new UScriptStruct::TCppStructOps<FDlgNodeSpeech_FormatHumanReadable>);
	}
} ScriptStruct_DlgSystemEditor_StaticRegisterNativesFDlgNodeSpeech_FormatHumanReadable;
	struct Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Edges_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Edges;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Edges_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Text;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speaker_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Speaker;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NodeIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Variant of the UDlgNode_Speech that is human readable\n" },
		{ "ModuleRelativePath", "Private/Commandlets/DlgHumanReadableTextCommandlet.h" },
		{ "ToolTip", "Variant of the UDlgNode_Speech that is human readable" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDlgNodeSpeech_FormatHumanReadable>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable_Statics::NewProp_Edges_MetaData[] = {
		{ "ModuleRelativePath", "Private/Commandlets/DlgHumanReadableTextCommandlet.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable_Statics::NewProp_Edges = { "Edges", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDlgNodeSpeech_FormatHumanReadable, Edges), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable_Statics::NewProp_Edges_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable_Statics::NewProp_Edges_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable_Statics::NewProp_Edges_Inner = { "Edges", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDlgEdge_FormatHumanReadable, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable_Statics::NewProp_Text_MetaData[] = {
		{ "ModuleRelativePath", "Private/Commandlets/DlgHumanReadableTextCommandlet.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDlgNodeSpeech_FormatHumanReadable, Text), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable_Statics::NewProp_Speaker_MetaData[] = {
		{ "ModuleRelativePath", "Private/Commandlets/DlgHumanReadableTextCommandlet.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable_Statics::NewProp_Speaker = { "Speaker", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDlgNodeSpeech_FormatHumanReadable, Speaker), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable_Statics::NewProp_Speaker_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable_Statics::NewProp_Speaker_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable_Statics::NewProp_NodeIndex_MetaData[] = {
		{ "Comment", "// Metadata, NodeIndex\n" },
		{ "ModuleRelativePath", "Private/Commandlets/DlgHumanReadableTextCommandlet.h" },
		{ "ToolTip", "Metadata, NodeIndex" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable_Statics::NewProp_NodeIndex = { "NodeIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDlgNodeSpeech_FormatHumanReadable, NodeIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable_Statics::NewProp_NodeIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable_Statics::NewProp_NodeIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable_Statics::NewProp_Edges,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable_Statics::NewProp_Edges_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable_Statics::NewProp_Speaker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable_Statics::NewProp_NodeIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystemEditor,
		nullptr,
		&NewStructOps,
		"DlgNodeSpeech_FormatHumanReadable",
		sizeof(FDlgNodeSpeech_FormatHumanReadable),
		alignof(FDlgNodeSpeech_FormatHumanReadable),
		Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DlgSystemEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DlgNodeSpeech_FormatHumanReadable"), sizeof(FDlgNodeSpeech_FormatHumanReadable), Get_Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable_Hash() { return 4148109953U; }
class UScriptStruct* FDlgNodeSpeechSequence_FormatHumanReadable::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DLGSYSTEMEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable, Z_Construct_UPackage__Script_DlgSystemEditor(), TEXT("DlgNodeSpeechSequence_FormatHumanReadable"), sizeof(FDlgNodeSpeechSequence_FormatHumanReadable), Get_Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable_Hash());
	}
	return Singleton;
}
template<> DLGSYSTEMEDITOR_API UScriptStruct* StaticStruct<FDlgNodeSpeechSequence_FormatHumanReadable>()
{
	return FDlgNodeSpeechSequence_FormatHumanReadable::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable(FDlgNodeSpeechSequence_FormatHumanReadable::StaticStruct, TEXT("/Script/DlgSystemEditor"), TEXT("DlgNodeSpeechSequence_FormatHumanReadable"), false, nullptr, nullptr);
static struct FScriptStruct_DlgSystemEditor_StaticRegisterNativesFDlgNodeSpeechSequence_FormatHumanReadable
{
	FScriptStruct_DlgSystemEditor_StaticRegisterNativesFDlgNodeSpeechSequence_FormatHumanReadable()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DlgNodeSpeechSequence_FormatHumanReadable")),new UScriptStruct::TCppStructOps<FDlgNodeSpeechSequence_FormatHumanReadable>);
	}
} ScriptStruct_DlgSystemEditor_StaticRegisterNativesFDlgNodeSpeechSequence_FormatHumanReadable;
	struct Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Edges_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Edges;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Edges_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Sequence;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Sequence_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speaker_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Speaker;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NodeIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Variant of the UDlgNode_SpeechSequence that is human readable\n" },
		{ "ModuleRelativePath", "Private/Commandlets/DlgHumanReadableTextCommandlet.h" },
		{ "ToolTip", "Variant of the UDlgNode_SpeechSequence that is human readable" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDlgNodeSpeechSequence_FormatHumanReadable>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable_Statics::NewProp_Edges_MetaData[] = {
		{ "ModuleRelativePath", "Private/Commandlets/DlgHumanReadableTextCommandlet.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable_Statics::NewProp_Edges = { "Edges", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDlgNodeSpeechSequence_FormatHumanReadable, Edges), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable_Statics::NewProp_Edges_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable_Statics::NewProp_Edges_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable_Statics::NewProp_Edges_Inner = { "Edges", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDlgEdge_FormatHumanReadable, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable_Statics::NewProp_Sequence_MetaData[] = {
		{ "ModuleRelativePath", "Private/Commandlets/DlgHumanReadableTextCommandlet.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDlgNodeSpeechSequence_FormatHumanReadable, Sequence), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable_Statics::NewProp_Sequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable_Statics::NewProp_Sequence_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable_Statics::NewProp_Sequence_Inner = { "Sequence", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_FormatHumanReadable, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable_Statics::NewProp_Speaker_MetaData[] = {
		{ "ModuleRelativePath", "Private/Commandlets/DlgHumanReadableTextCommandlet.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable_Statics::NewProp_Speaker = { "Speaker", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDlgNodeSpeechSequence_FormatHumanReadable, Speaker), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable_Statics::NewProp_Speaker_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable_Statics::NewProp_Speaker_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable_Statics::NewProp_NodeIndex_MetaData[] = {
		{ "Comment", "// Metadata\n" },
		{ "ModuleRelativePath", "Private/Commandlets/DlgHumanReadableTextCommandlet.h" },
		{ "ToolTip", "Metadata" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable_Statics::NewProp_NodeIndex = { "NodeIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDlgNodeSpeechSequence_FormatHumanReadable, NodeIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable_Statics::NewProp_NodeIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable_Statics::NewProp_NodeIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable_Statics::NewProp_Edges,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable_Statics::NewProp_Edges_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable_Statics::NewProp_Sequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable_Statics::NewProp_Sequence_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable_Statics::NewProp_Speaker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable_Statics::NewProp_NodeIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystemEditor,
		nullptr,
		&NewStructOps,
		"DlgNodeSpeechSequence_FormatHumanReadable",
		sizeof(FDlgNodeSpeechSequence_FormatHumanReadable),
		alignof(FDlgNodeSpeechSequence_FormatHumanReadable),
		Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DlgSystemEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DlgNodeSpeechSequence_FormatHumanReadable"), sizeof(FDlgNodeSpeechSequence_FormatHumanReadable), Get_Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable_Hash() { return 3977673681U; }
class UScriptStruct* FDlgSpeechSequenceEntry_FormatHumanReadable::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DLGSYSTEMEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_FormatHumanReadable_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_FormatHumanReadable, Z_Construct_UPackage__Script_DlgSystemEditor(), TEXT("DlgSpeechSequenceEntry_FormatHumanReadable"), sizeof(FDlgSpeechSequenceEntry_FormatHumanReadable), Get_Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_FormatHumanReadable_Hash());
	}
	return Singleton;
}
template<> DLGSYSTEMEDITOR_API UScriptStruct* StaticStruct<FDlgSpeechSequenceEntry_FormatHumanReadable>()
{
	return FDlgSpeechSequenceEntry_FormatHumanReadable::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDlgSpeechSequenceEntry_FormatHumanReadable(FDlgSpeechSequenceEntry_FormatHumanReadable::StaticStruct, TEXT("/Script/DlgSystemEditor"), TEXT("DlgSpeechSequenceEntry_FormatHumanReadable"), false, nullptr, nullptr);
static struct FScriptStruct_DlgSystemEditor_StaticRegisterNativesFDlgSpeechSequenceEntry_FormatHumanReadable
{
	FScriptStruct_DlgSystemEditor_StaticRegisterNativesFDlgSpeechSequenceEntry_FormatHumanReadable()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DlgSpeechSequenceEntry_FormatHumanReadable")),new UScriptStruct::TCppStructOps<FDlgSpeechSequenceEntry_FormatHumanReadable>);
	}
} ScriptStruct_DlgSystemEditor_StaticRegisterNativesFDlgSpeechSequenceEntry_FormatHumanReadable;
	struct Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_FormatHumanReadable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EdgeText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_EdgeText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Text;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speaker_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Speaker;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_FormatHumanReadable_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Variant of the FDlgSpeechSequenceEntry that is human readable\n" },
		{ "ModuleRelativePath", "Private/Commandlets/DlgHumanReadableTextCommandlet.h" },
		{ "ToolTip", "Variant of the FDlgSpeechSequenceEntry that is human readable" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_FormatHumanReadable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDlgSpeechSequenceEntry_FormatHumanReadable>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_FormatHumanReadable_Statics::NewProp_EdgeText_MetaData[] = {
		{ "ModuleRelativePath", "Private/Commandlets/DlgHumanReadableTextCommandlet.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_FormatHumanReadable_Statics::NewProp_EdgeText = { "EdgeText", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDlgSpeechSequenceEntry_FormatHumanReadable, EdgeText), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_FormatHumanReadable_Statics::NewProp_EdgeText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_FormatHumanReadable_Statics::NewProp_EdgeText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_FormatHumanReadable_Statics::NewProp_Text_MetaData[] = {
		{ "ModuleRelativePath", "Private/Commandlets/DlgHumanReadableTextCommandlet.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_FormatHumanReadable_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDlgSpeechSequenceEntry_FormatHumanReadable, Text), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_FormatHumanReadable_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_FormatHumanReadable_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_FormatHumanReadable_Statics::NewProp_Speaker_MetaData[] = {
		{ "Comment", "// ParticipantName\n" },
		{ "ModuleRelativePath", "Private/Commandlets/DlgHumanReadableTextCommandlet.h" },
		{ "ToolTip", "ParticipantName" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_FormatHumanReadable_Statics::NewProp_Speaker = { "Speaker", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDlgSpeechSequenceEntry_FormatHumanReadable, Speaker), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_FormatHumanReadable_Statics::NewProp_Speaker_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_FormatHumanReadable_Statics::NewProp_Speaker_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_FormatHumanReadable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_FormatHumanReadable_Statics::NewProp_EdgeText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_FormatHumanReadable_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_FormatHumanReadable_Statics::NewProp_Speaker,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_FormatHumanReadable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystemEditor,
		nullptr,
		&NewStructOps,
		"DlgSpeechSequenceEntry_FormatHumanReadable",
		sizeof(FDlgSpeechSequenceEntry_FormatHumanReadable),
		alignof(FDlgSpeechSequenceEntry_FormatHumanReadable),
		Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_FormatHumanReadable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_FormatHumanReadable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_FormatHumanReadable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_FormatHumanReadable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_FormatHumanReadable()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_FormatHumanReadable_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DlgSystemEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DlgSpeechSequenceEntry_FormatHumanReadable"), sizeof(FDlgSpeechSequenceEntry_FormatHumanReadable), Get_Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_FormatHumanReadable_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_FormatHumanReadable_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_FormatHumanReadable_Hash() { return 1880523270U; }
class UScriptStruct* FDlgEdge_FormatHumanReadable::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DLGSYSTEMEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FDlgEdge_FormatHumanReadable_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDlgEdge_FormatHumanReadable, Z_Construct_UPackage__Script_DlgSystemEditor(), TEXT("DlgEdge_FormatHumanReadable"), sizeof(FDlgEdge_FormatHumanReadable), Get_Z_Construct_UScriptStruct_FDlgEdge_FormatHumanReadable_Hash());
	}
	return Singleton;
}
template<> DLGSYSTEMEDITOR_API UScriptStruct* StaticStruct<FDlgEdge_FormatHumanReadable>()
{
	return FDlgEdge_FormatHumanReadable::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDlgEdge_FormatHumanReadable(FDlgEdge_FormatHumanReadable::StaticStruct, TEXT("/Script/DlgSystemEditor"), TEXT("DlgEdge_FormatHumanReadable"), false, nullptr, nullptr);
static struct FScriptStruct_DlgSystemEditor_StaticRegisterNativesFDlgEdge_FormatHumanReadable
{
	FScriptStruct_DlgSystemEditor_StaticRegisterNativesFDlgEdge_FormatHumanReadable()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DlgEdge_FormatHumanReadable")),new UScriptStruct::TCppStructOps<FDlgEdge_FormatHumanReadable>);
	}
} ScriptStruct_DlgSystemEditor_StaticRegisterNativesFDlgEdge_FormatHumanReadable;
	struct Z_Construct_UScriptStruct_FDlgEdge_FormatHumanReadable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Text;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetNodeIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetNodeIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgEdge_FormatHumanReadable_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Variant of the FDlgEdge that is human readable\n" },
		{ "ModuleRelativePath", "Private/Commandlets/DlgHumanReadableTextCommandlet.h" },
		{ "ToolTip", "Variant of the FDlgEdge that is human readable" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDlgEdge_FormatHumanReadable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDlgEdge_FormatHumanReadable>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgEdge_FormatHumanReadable_Statics::NewProp_Text_MetaData[] = {
		{ "ModuleRelativePath", "Private/Commandlets/DlgHumanReadableTextCommandlet.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDlgEdge_FormatHumanReadable_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDlgEdge_FormatHumanReadable, Text), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgEdge_FormatHumanReadable_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgEdge_FormatHumanReadable_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgEdge_FormatHumanReadable_Statics::NewProp_TargetNodeIndex_MetaData[] = {
		{ "Comment", "// Metadata\n" },
		{ "ModuleRelativePath", "Private/Commandlets/DlgHumanReadableTextCommandlet.h" },
		{ "ToolTip", "Metadata" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDlgEdge_FormatHumanReadable_Statics::NewProp_TargetNodeIndex = { "TargetNodeIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDlgEdge_FormatHumanReadable, TargetNodeIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgEdge_FormatHumanReadable_Statics::NewProp_TargetNodeIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgEdge_FormatHumanReadable_Statics::NewProp_TargetNodeIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDlgEdge_FormatHumanReadable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgEdge_FormatHumanReadable_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgEdge_FormatHumanReadable_Statics::NewProp_TargetNodeIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDlgEdge_FormatHumanReadable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystemEditor,
		nullptr,
		&NewStructOps,
		"DlgEdge_FormatHumanReadable",
		sizeof(FDlgEdge_FormatHumanReadable),
		alignof(FDlgEdge_FormatHumanReadable),
		Z_Construct_UScriptStruct_FDlgEdge_FormatHumanReadable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgEdge_FormatHumanReadable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgEdge_FormatHumanReadable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgEdge_FormatHumanReadable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDlgEdge_FormatHumanReadable()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDlgEdge_FormatHumanReadable_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DlgSystemEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DlgEdge_FormatHumanReadable"), sizeof(FDlgEdge_FormatHumanReadable), Get_Z_Construct_UScriptStruct_FDlgEdge_FormatHumanReadable_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDlgEdge_FormatHumanReadable_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDlgEdge_FormatHumanReadable_Hash() { return 693200303U; }
class UScriptStruct* FDlgEdgeOrphan_FormatHumanReadable::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DLGSYSTEMEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FDlgEdgeOrphan_FormatHumanReadable_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDlgEdgeOrphan_FormatHumanReadable, Z_Construct_UPackage__Script_DlgSystemEditor(), TEXT("DlgEdgeOrphan_FormatHumanReadable"), sizeof(FDlgEdgeOrphan_FormatHumanReadable), Get_Z_Construct_UScriptStruct_FDlgEdgeOrphan_FormatHumanReadable_Hash());
	}
	return Singleton;
}
template<> DLGSYSTEMEDITOR_API UScriptStruct* StaticStruct<FDlgEdgeOrphan_FormatHumanReadable>()
{
	return FDlgEdgeOrphan_FormatHumanReadable::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDlgEdgeOrphan_FormatHumanReadable(FDlgEdgeOrphan_FormatHumanReadable::StaticStruct, TEXT("/Script/DlgSystemEditor"), TEXT("DlgEdgeOrphan_FormatHumanReadable"), false, nullptr, nullptr);
static struct FScriptStruct_DlgSystemEditor_StaticRegisterNativesFDlgEdgeOrphan_FormatHumanReadable
{
	FScriptStruct_DlgSystemEditor_StaticRegisterNativesFDlgEdgeOrphan_FormatHumanReadable()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DlgEdgeOrphan_FormatHumanReadable")),new UScriptStruct::TCppStructOps<FDlgEdgeOrphan_FormatHumanReadable>);
	}
} ScriptStruct_DlgSystemEditor_StaticRegisterNativesFDlgEdgeOrphan_FormatHumanReadable;
	struct Z_Construct_UScriptStruct_FDlgEdgeOrphan_FormatHumanReadable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Text;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetNodeIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetNodeIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceNodeIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SourceNodeIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgEdgeOrphan_FormatHumanReadable_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Variant of the FDlgEdge that also tells us from what node to what node\n" },
		{ "ModuleRelativePath", "Private/Commandlets/DlgHumanReadableTextCommandlet.h" },
		{ "ToolTip", "Variant of the FDlgEdge that also tells us from what node to what node" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDlgEdgeOrphan_FormatHumanReadable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDlgEdgeOrphan_FormatHumanReadable>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgEdgeOrphan_FormatHumanReadable_Statics::NewProp_Text_MetaData[] = {
		{ "ModuleRelativePath", "Private/Commandlets/DlgHumanReadableTextCommandlet.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDlgEdgeOrphan_FormatHumanReadable_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDlgEdgeOrphan_FormatHumanReadable, Text), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgEdgeOrphan_FormatHumanReadable_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgEdgeOrphan_FormatHumanReadable_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgEdgeOrphan_FormatHumanReadable_Statics::NewProp_TargetNodeIndex_MetaData[] = {
		{ "ModuleRelativePath", "Private/Commandlets/DlgHumanReadableTextCommandlet.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDlgEdgeOrphan_FormatHumanReadable_Statics::NewProp_TargetNodeIndex = { "TargetNodeIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDlgEdgeOrphan_FormatHumanReadable, TargetNodeIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgEdgeOrphan_FormatHumanReadable_Statics::NewProp_TargetNodeIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgEdgeOrphan_FormatHumanReadable_Statics::NewProp_TargetNodeIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgEdgeOrphan_FormatHumanReadable_Statics::NewProp_SourceNodeIndex_MetaData[] = {
		{ "Comment", "// Metadata\n" },
		{ "ModuleRelativePath", "Private/Commandlets/DlgHumanReadableTextCommandlet.h" },
		{ "ToolTip", "Metadata" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDlgEdgeOrphan_FormatHumanReadable_Statics::NewProp_SourceNodeIndex = { "SourceNodeIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDlgEdgeOrphan_FormatHumanReadable, SourceNodeIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgEdgeOrphan_FormatHumanReadable_Statics::NewProp_SourceNodeIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgEdgeOrphan_FormatHumanReadable_Statics::NewProp_SourceNodeIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDlgEdgeOrphan_FormatHumanReadable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgEdgeOrphan_FormatHumanReadable_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgEdgeOrphan_FormatHumanReadable_Statics::NewProp_TargetNodeIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgEdgeOrphan_FormatHumanReadable_Statics::NewProp_SourceNodeIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDlgEdgeOrphan_FormatHumanReadable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystemEditor,
		nullptr,
		&NewStructOps,
		"DlgEdgeOrphan_FormatHumanReadable",
		sizeof(FDlgEdgeOrphan_FormatHumanReadable),
		alignof(FDlgEdgeOrphan_FormatHumanReadable),
		Z_Construct_UScriptStruct_FDlgEdgeOrphan_FormatHumanReadable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgEdgeOrphan_FormatHumanReadable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgEdgeOrphan_FormatHumanReadable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgEdgeOrphan_FormatHumanReadable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDlgEdgeOrphan_FormatHumanReadable()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDlgEdgeOrphan_FormatHumanReadable_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DlgSystemEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DlgEdgeOrphan_FormatHumanReadable"), sizeof(FDlgEdgeOrphan_FormatHumanReadable), Get_Z_Construct_UScriptStruct_FDlgEdgeOrphan_FormatHumanReadable_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDlgEdgeOrphan_FormatHumanReadable_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDlgEdgeOrphan_FormatHumanReadable_Hash() { return 1823723529U; }
class UScriptStruct* FDlgNodeContext_FormatHumanReadable::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DLGSYSTEMEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FDlgNodeContext_FormatHumanReadable_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDlgNodeContext_FormatHumanReadable, Z_Construct_UPackage__Script_DlgSystemEditor(), TEXT("DlgNodeContext_FormatHumanReadable"), sizeof(FDlgNodeContext_FormatHumanReadable), Get_Z_Construct_UScriptStruct_FDlgNodeContext_FormatHumanReadable_Hash());
	}
	return Singleton;
}
template<> DLGSYSTEMEDITOR_API UScriptStruct* StaticStruct<FDlgNodeContext_FormatHumanReadable>()
{
	return FDlgNodeContext_FormatHumanReadable::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDlgNodeContext_FormatHumanReadable(FDlgNodeContext_FormatHumanReadable::StaticStruct, TEXT("/Script/DlgSystemEditor"), TEXT("DlgNodeContext_FormatHumanReadable"), false, nullptr, nullptr);
static struct FScriptStruct_DlgSystemEditor_StaticRegisterNativesFDlgNodeContext_FormatHumanReadable
{
	FScriptStruct_DlgSystemEditor_StaticRegisterNativesFDlgNodeContext_FormatHumanReadable()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DlgNodeContext_FormatHumanReadable")),new UScriptStruct::TCppStructOps<FDlgNodeContext_FormatHumanReadable>);
	}
} ScriptStruct_DlgSystemEditor_StaticRegisterNativesFDlgNodeContext_FormatHumanReadable;
	struct Z_Construct_UScriptStruct_FDlgNodeContext_FormatHumanReadable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildNodeIndices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChildNodeIndices;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ChildNodeIndices_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentNodeIndices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ParentNodeIndices;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ParentNodeIndices_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgNodeContext_FormatHumanReadable_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Commandlets/DlgHumanReadableTextCommandlet.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDlgNodeContext_FormatHumanReadable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDlgNodeContext_FormatHumanReadable>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgNodeContext_FormatHumanReadable_Statics::NewProp_ChildNodeIndices_MetaData[] = {
		{ "ModuleRelativePath", "Private/Commandlets/DlgHumanReadableTextCommandlet.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDlgNodeContext_FormatHumanReadable_Statics::NewProp_ChildNodeIndices = { "ChildNodeIndices", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDlgNodeContext_FormatHumanReadable, ChildNodeIndices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgNodeContext_FormatHumanReadable_Statics::NewProp_ChildNodeIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgNodeContext_FormatHumanReadable_Statics::NewProp_ChildNodeIndices_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDlgNodeContext_FormatHumanReadable_Statics::NewProp_ChildNodeIndices_Inner = { "ChildNodeIndices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgNodeContext_FormatHumanReadable_Statics::NewProp_ParentNodeIndices_MetaData[] = {
		{ "ModuleRelativePath", "Private/Commandlets/DlgHumanReadableTextCommandlet.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDlgNodeContext_FormatHumanReadable_Statics::NewProp_ParentNodeIndices = { "ParentNodeIndices", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDlgNodeContext_FormatHumanReadable, ParentNodeIndices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgNodeContext_FormatHumanReadable_Statics::NewProp_ParentNodeIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgNodeContext_FormatHumanReadable_Statics::NewProp_ParentNodeIndices_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDlgNodeContext_FormatHumanReadable_Statics::NewProp_ParentNodeIndices_Inner = { "ParentNodeIndices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDlgNodeContext_FormatHumanReadable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgNodeContext_FormatHumanReadable_Statics::NewProp_ChildNodeIndices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgNodeContext_FormatHumanReadable_Statics::NewProp_ChildNodeIndices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgNodeContext_FormatHumanReadable_Statics::NewProp_ParentNodeIndices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgNodeContext_FormatHumanReadable_Statics::NewProp_ParentNodeIndices_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDlgNodeContext_FormatHumanReadable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystemEditor,
		nullptr,
		&NewStructOps,
		"DlgNodeContext_FormatHumanReadable",
		sizeof(FDlgNodeContext_FormatHumanReadable),
		alignof(FDlgNodeContext_FormatHumanReadable),
		Z_Construct_UScriptStruct_FDlgNodeContext_FormatHumanReadable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgNodeContext_FormatHumanReadable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgNodeContext_FormatHumanReadable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgNodeContext_FormatHumanReadable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDlgNodeContext_FormatHumanReadable()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDlgNodeContext_FormatHumanReadable_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DlgSystemEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DlgNodeContext_FormatHumanReadable"), sizeof(FDlgNodeContext_FormatHumanReadable), Get_Z_Construct_UScriptStruct_FDlgNodeContext_FormatHumanReadable_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDlgNodeContext_FormatHumanReadable_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDlgNodeContext_FormatHumanReadable_Hash() { return 109414559U; }
	void UDlgHumanReadableTextCommandlet::StaticRegisterNativesUDlgHumanReadableTextCommandlet()
	{
	}
	UClass* Z_Construct_UClass_UDlgHumanReadableTextCommandlet_NoRegister()
	{
		return UDlgHumanReadableTextCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UDlgHumanReadableTextCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDlgHumanReadableTextCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystemEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgHumanReadableTextCommandlet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Commandlets/DlgHumanReadableTextCommandlet.h" },
		{ "ModuleRelativePath", "Private/Commandlets/DlgHumanReadableTextCommandlet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDlgHumanReadableTextCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgHumanReadableTextCommandlet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDlgHumanReadableTextCommandlet_Statics::ClassParams = {
		&UDlgHumanReadableTextCommandlet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UDlgHumanReadableTextCommandlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgHumanReadableTextCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDlgHumanReadableTextCommandlet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDlgHumanReadableTextCommandlet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDlgHumanReadableTextCommandlet, 533953127);
	template<> DLGSYSTEMEDITOR_API UClass* StaticClass<UDlgHumanReadableTextCommandlet>()
	{
		return UDlgHumanReadableTextCommandlet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDlgHumanReadableTextCommandlet(Z_Construct_UClass_UDlgHumanReadableTextCommandlet, &UDlgHumanReadableTextCommandlet::StaticClass, TEXT("/Script/DlgSystemEditor"), TEXT("UDlgHumanReadableTextCommandlet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDlgHumanReadableTextCommandlet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
