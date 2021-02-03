// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystemEditor/Private/DialogueEditor/Nodes/DialogueGraphNode_Base.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueGraphNode_Base() {}
// Cross Module References
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueGraphNode_Base_NoRegister();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueGraphNode_Base();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
	UPackage* Z_Construct_UPackage__Script_DlgSystemEditor();
// End Cross Module References
	void UDialogueGraphNode_Base::StaticRegisterNativesUDialogueGraphNode_Base()
	{
	}
	UClass* Z_Construct_UClass_UDialogueGraphNode_Base_NoRegister()
	{
		return UDialogueGraphNode_Base::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueGraphNode_Base_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueGraphNode_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystemEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueGraphNode_Base_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Represents the base class representation of the dialogue graph nodes.\n * Each dialogue graph node has only one input/output pin. And each pin can be linked to multiple nodes.\n */" },
		{ "IncludePath", "DialogueEditor/Nodes/DialogueGraphNode_Base.h" },
		{ "ModuleRelativePath", "Private/DialogueEditor/Nodes/DialogueGraphNode_Base.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Represents the base class representation of the dialogue graph nodes.\nEach dialogue graph node has only one input/output pin. And each pin can be linked to multiple nodes." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueGraphNode_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueGraphNode_Base>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDialogueGraphNode_Base_Statics::ClassParams = {
		&UDialogueGraphNode_Base::StaticClass,
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
		0x000000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDialogueGraphNode_Base_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueGraphNode_Base_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDialogueGraphNode_Base()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDialogueGraphNode_Base_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDialogueGraphNode_Base, 2113888169);
	template<> DLGSYSTEMEDITOR_API UClass* StaticClass<UDialogueGraphNode_Base>()
	{
		return UDialogueGraphNode_Base::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDialogueGraphNode_Base(Z_Construct_UClass_UDialogueGraphNode_Base, &UDialogueGraphNode_Base::StaticClass, TEXT("/Script/DlgSystemEditor"), TEXT("UDialogueGraphNode_Base"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueGraphNode_Base);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
