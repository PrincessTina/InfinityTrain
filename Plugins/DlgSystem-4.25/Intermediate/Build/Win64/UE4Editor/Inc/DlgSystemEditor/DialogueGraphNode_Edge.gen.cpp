// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystemEditor/Private/DialogueEditor/Nodes/DialogueGraphNode_Edge.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueGraphNode_Edge() {}
// Cross Module References
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueGraphNode_Edge_NoRegister();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueGraphNode_Edge();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueGraphNode_Base();
	UPackage* Z_Construct_UPackage__Script_DlgSystemEditor();
	DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgEdge();
// End Cross Module References
	void UDialogueGraphNode_Edge::StaticRegisterNativesUDialogueGraphNode_Edge()
	{
	}
	UClass* Z_Construct_UClass_UDialogueGraphNode_Edge_NoRegister()
	{
		return UDialogueGraphNode_Edge::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueGraphNode_Edge_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPrimaryEdge_MetaData[];
#endif
		static void NewProp_bIsPrimaryEdge_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPrimaryEdge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogueEdge_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DialogueEdge;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueGraphNode_Edge_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDialogueGraphNode_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystemEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueGraphNode_Edge_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Represents the graph node for edges, corresponds to the runtime FDlgEdge.\n * Allows us to have selectable edges.\n * This class has an additional constraint over the base class UDialogueGraphNode_Base such that the input and output pin\n * have only one connection (aka Pin.LinkedTo.Num() == 1 at all times) otherwise this does not make sense to simulate an Edge.\n */" },
		{ "IncludePath", "DialogueEditor/Nodes/DialogueGraphNode_Edge.h" },
		{ "ModuleRelativePath", "Private/DialogueEditor/Nodes/DialogueGraphNode_Edge.h" },
		{ "ToolTip", "Represents the graph node for edges, corresponds to the runtime FDlgEdge.\nAllows us to have selectable edges.\nThis class has an additional constraint over the base class UDialogueGraphNode_Base such that the input and output pin\nhave only one connection (aka Pin.LinkedTo.Num() == 1 at all times) otherwise this does not make sense to simulate an Edge." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueGraphNode_Edge_Statics::NewProp_bIsPrimaryEdge_MetaData[] = {
		{ "Comment", "/**\n\x09 * Is this a primary edge? Aka does this edge lead to a unique path to the ChildNode.\n\x09 * This is only set after the graph is compiled.\n\x09 */" },
		{ "ModuleRelativePath", "Private/DialogueEditor/Nodes/DialogueGraphNode_Edge.h" },
		{ "ToolTip", "Is this a primary edge? Aka does this edge lead to a unique path to the ChildNode.\nThis is only set after the graph is compiled." },
	};
#endif
	void Z_Construct_UClass_UDialogueGraphNode_Edge_Statics::NewProp_bIsPrimaryEdge_SetBit(void* Obj)
	{
		((UDialogueGraphNode_Edge*)Obj)->bIsPrimaryEdge = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDialogueGraphNode_Edge_Statics::NewProp_bIsPrimaryEdge = { "bIsPrimaryEdge", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDialogueGraphNode_Edge), &Z_Construct_UClass_UDialogueGraphNode_Edge_Statics::NewProp_bIsPrimaryEdge_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDialogueGraphNode_Edge_Statics::NewProp_bIsPrimaryEdge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueGraphNode_Edge_Statics::NewProp_bIsPrimaryEdge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueGraphNode_Edge_Statics::NewProp_DialogueEdge_MetaData[] = {
		{ "Category", "DialogueGraphNode" },
		{ "Comment", "/** The copy Dialogue Edge corresponding to this graph node. This belongs to the the Node of the Input Pin (GetParentNode) */" },
		{ "ModuleRelativePath", "Private/DialogueEditor/Nodes/DialogueGraphNode_Edge.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The copy Dialogue Edge corresponding to this graph node. This belongs to the the Node of the Input Pin (GetParentNode)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogueGraphNode_Edge_Statics::NewProp_DialogueEdge = { "DialogueEdge", nullptr, (EPropertyFlags)0x0040008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueGraphNode_Edge, DialogueEdge), Z_Construct_UScriptStruct_FDlgEdge, METADATA_PARAMS(Z_Construct_UClass_UDialogueGraphNode_Edge_Statics::NewProp_DialogueEdge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueGraphNode_Edge_Statics::NewProp_DialogueEdge_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogueGraphNode_Edge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueGraphNode_Edge_Statics::NewProp_bIsPrimaryEdge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueGraphNode_Edge_Statics::NewProp_DialogueEdge,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueGraphNode_Edge_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueGraphNode_Edge>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDialogueGraphNode_Edge_Statics::ClassParams = {
		&UDialogueGraphNode_Edge::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDialogueGraphNode_Edge_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueGraphNode_Edge_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDialogueGraphNode_Edge_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueGraphNode_Edge_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDialogueGraphNode_Edge()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDialogueGraphNode_Edge_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDialogueGraphNode_Edge, 3441814158);
	template<> DLGSYSTEMEDITOR_API UClass* StaticClass<UDialogueGraphNode_Edge>()
	{
		return UDialogueGraphNode_Edge::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDialogueGraphNode_Edge(Z_Construct_UClass_UDialogueGraphNode_Edge, &UDialogueGraphNode_Edge::StaticClass, TEXT("/Script/DlgSystemEditor"), TEXT("UDialogueGraphNode_Edge"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueGraphNode_Edge);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
