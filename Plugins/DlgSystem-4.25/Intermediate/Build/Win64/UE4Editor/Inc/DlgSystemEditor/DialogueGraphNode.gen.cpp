// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystemEditor/Private/DialogueEditor/Nodes/DialogueGraphNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueGraphNode() {}
// Cross Module References
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueGraphNode_NoRegister();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueGraphNode();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueGraphNode_Base();
	UPackage* Z_Construct_UPackage__Script_DlgSystemEditor();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNode_NoRegister();
// End Cross Module References
	void UDialogueGraphNode::StaticRegisterNativesUDialogueGraphNode()
	{
	}
	UClass* Z_Construct_UClass_UDialogueGraphNode_NoRegister()
	{
		return UDialogueGraphNode::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueGraphNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeDepth_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NodeDepth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NodeIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogueNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DialogueNode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueGraphNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDialogueGraphNode_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystemEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueGraphNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DialogueEditor/Nodes/DialogueGraphNode.h" },
		{ "ModuleRelativePath", "Private/DialogueEditor/Nodes/DialogueGraphNode.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueGraphNode_Statics::NewProp_NodeDepth_MetaData[] = {
		{ "Comment", "// Indicates the distance from the start node. This is only set after the graph is compiled.\n" },
		{ "ModuleRelativePath", "Private/DialogueEditor/Nodes/DialogueGraphNode.h" },
		{ "ToolTip", "Indicates the distance from the start node. This is only set after the graph is compiled." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDialogueGraphNode_Statics::NewProp_NodeDepth = { "NodeDepth", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueGraphNode, NodeDepth), METADATA_PARAMS(Z_Construct_UClass_UDialogueGraphNode_Statics::NewProp_NodeDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueGraphNode_Statics::NewProp_NodeDepth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueGraphNode_Statics::NewProp_NodeIndex_MetaData[] = {
		{ "Category", "DialogueGraphNode" },
		{ "Comment", "/** The Dialogue Node index in the Dialogue (array) this represents. This is not relevant for the StartNode. */" },
		{ "ModuleRelativePath", "Private/DialogueEditor/Nodes/DialogueGraphNode.h" },
		{ "ToolTip", "The Dialogue Node index in the Dialogue (array) this represents. This is not relevant for the StartNode." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDialogueGraphNode_Statics::NewProp_NodeIndex = { "NodeIndex", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueGraphNode, NodeIndex), METADATA_PARAMS(Z_Construct_UClass_UDialogueGraphNode_Statics::NewProp_NodeIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueGraphNode_Statics::NewProp_NodeIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueGraphNode_Statics::NewProp_DialogueNode_MetaData[] = {
		{ "Category", "DialogueGraphNode" },
		{ "Comment", "/** The Dialogue Node this graph node references.  */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/DialogueEditor/Nodes/DialogueGraphNode.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The Dialogue Node this graph node references." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueGraphNode_Statics::NewProp_DialogueNode = { "DialogueNode", nullptr, (EPropertyFlags)0x0022080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueGraphNode, DialogueNode), Z_Construct_UClass_UDlgNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueGraphNode_Statics::NewProp_DialogueNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueGraphNode_Statics::NewProp_DialogueNode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogueGraphNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueGraphNode_Statics::NewProp_NodeDepth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueGraphNode_Statics::NewProp_NodeIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueGraphNode_Statics::NewProp_DialogueNode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueGraphNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueGraphNode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDialogueGraphNode_Statics::ClassParams = {
		&UDialogueGraphNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDialogueGraphNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueGraphNode_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDialogueGraphNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueGraphNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDialogueGraphNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDialogueGraphNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDialogueGraphNode, 1951936607);
	template<> DLGSYSTEMEDITOR_API UClass* StaticClass<UDialogueGraphNode>()
	{
		return UDialogueGraphNode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDialogueGraphNode(Z_Construct_UClass_UDialogueGraphNode, &UDialogueGraphNode::StaticClass, TEXT("/Script/DlgSystemEditor"), TEXT("UDialogueGraphNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueGraphNode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
