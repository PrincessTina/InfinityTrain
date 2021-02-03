// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystem/Public/DlgEdge.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDlgEdge() {}
// Cross Module References
	DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgEdge();
	UPackage* Z_Construct_UPackage__Script_DlgSystem();
	DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgTextArgument();
	DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgCondition();
// End Cross Module References
class UScriptStruct* FDlgEdge::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DLGSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FDlgEdge_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDlgEdge, Z_Construct_UPackage__Script_DlgSystem(), TEXT("DlgEdge"), sizeof(FDlgEdge), Get_Z_Construct_UScriptStruct_FDlgEdge_Hash());
	}
	return Singleton;
}
template<> DLGSYSTEM_API UScriptStruct* StaticStruct<FDlgEdge>()
{
	return FDlgEdge::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDlgEdge(FDlgEdge::StaticStruct, TEXT("/Script/DlgSystem"), TEXT("DlgEdge"), false, nullptr, nullptr);
static struct FScriptStruct_DlgSystem_StaticRegisterNativesFDlgEdge
{
	FScriptStruct_DlgSystem_StaticRegisterNativesFDlgEdge()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DlgEdge")),new UScriptStruct::TCppStructOps<FDlgEdge>);
	}
} ScriptStruct_DlgSystem_StaticRegisterNativesFDlgEdge;
	struct Z_Construct_UScriptStruct_FDlgEdge_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextArguments_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TextArguments;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextArguments_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Text;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIncludeInAllOptionListIfUnsatisfied_MetaData[];
#endif
		static void NewProp_bIncludeInAllOptionListIfUnsatisfied_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeInAllOptionListIfUnsatisfied;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeakerState_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SpeakerState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Conditions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Conditions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Conditions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgEdge_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The representation of a child in a node. Defined by a TargetIndex which points to the index array in the Dialogue.Nodes\n */" },
		{ "ModuleRelativePath", "Public/DlgEdge.h" },
		{ "ToolTip", "The representation of a child in a node. Defined by a TargetIndex which points to the index array in the Dialogue.Nodes" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDlgEdge_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDlgEdge>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgEdge_Statics::NewProp_TextArguments_MetaData[] = {
		{ "Category", "Dialogue|Edge" },
		{ "Comment", "// If you want replaceable portions inside your Text nodes just add {identifier} inside it and set the value it should have at runtime.\n" },
		{ "ModuleRelativePath", "Public/DlgEdge.h" },
		{ "ToolTip", "If you want replaceable portions inside your Text nodes just add {identifier} inside it and set the value it should have at runtime." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDlgEdge_Statics::NewProp_TextArguments = { "TextArguments", nullptr, (EPropertyFlags)0x0020088000000055, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDlgEdge, TextArguments), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgEdge_Statics::NewProp_TextArguments_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgEdge_Statics::NewProp_TextArguments_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDlgEdge_Statics::NewProp_TextArguments_Inner = { "TextArguments", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDlgTextArgument, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgEdge_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "Dialogue|Edge" },
		{ "Comment", "// Text associated with the child, can be used for user choices\n" },
		{ "ModuleRelativePath", "Public/DlgEdge.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "Text associated with the child, can be used for user choices" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDlgEdge_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDlgEdge, Text), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgEdge_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgEdge_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgEdge_Statics::NewProp_bIncludeInAllOptionListIfUnsatisfied_MetaData[] = {
		{ "Category", "Dialogue|Edge" },
		{ "Comment", "// Set this to false in order to skip this edge in the AllChildren array (which lists both satisfied and not satisfied player choices\n" },
		{ "ModuleRelativePath", "Public/DlgEdge.h" },
		{ "ToolTip", "Set this to false in order to skip this edge in the AllChildren array (which lists both satisfied and not satisfied player choices" },
	};
#endif
	void Z_Construct_UScriptStruct_FDlgEdge_Statics::NewProp_bIncludeInAllOptionListIfUnsatisfied_SetBit(void* Obj)
	{
		((FDlgEdge*)Obj)->bIncludeInAllOptionListIfUnsatisfied = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDlgEdge_Statics::NewProp_bIncludeInAllOptionListIfUnsatisfied = { "bIncludeInAllOptionListIfUnsatisfied", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDlgEdge), &Z_Construct_UScriptStruct_FDlgEdge_Statics::NewProp_bIncludeInAllOptionListIfUnsatisfied_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgEdge_Statics::NewProp_bIncludeInAllOptionListIfUnsatisfied_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgEdge_Statics::NewProp_bIncludeInAllOptionListIfUnsatisfied_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgEdge_Statics::NewProp_SpeakerState_MetaData[] = {
		{ "Category", "Dialogue|Edge" },
		{ "Comment", "// Player emotion/state attached to this player choice\n" },
		{ "ModuleRelativePath", "Public/DlgEdge.h" },
		{ "ToolTip", "Player emotion/state attached to this player choice" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDlgEdge_Statics::NewProp_SpeakerState = { "SpeakerState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDlgEdge, SpeakerState), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgEdge_Statics::NewProp_SpeakerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgEdge_Statics::NewProp_SpeakerState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgEdge_Statics::NewProp_Conditions_MetaData[] = {
		{ "Category", "Dialogue|Edge" },
		{ "Comment", "// Required but not sufficient conditions - target node's enter conditions are checked too\n" },
		{ "ModuleRelativePath", "Public/DlgEdge.h" },
		{ "ToolTip", "Required but not sufficient conditions - target node's enter conditions are checked too" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDlgEdge_Statics::NewProp_Conditions = { "Conditions", nullptr, (EPropertyFlags)0x0010008000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDlgEdge, Conditions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgEdge_Statics::NewProp_Conditions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgEdge_Statics::NewProp_Conditions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDlgEdge_Statics::NewProp_Conditions_Inner = { "Conditions", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDlgCondition, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgEdge_Statics::NewProp_TargetIndex_MetaData[] = {
		{ "Category", "Dialogue|Edge" },
		{ "ClampMin", "-1" },
		{ "Comment", "// Index of the node in the Nodes TArray of the dialogue this edge is leading to\n" },
		{ "ModuleRelativePath", "Public/DlgEdge.h" },
		{ "ToolTip", "Index of the node in the Nodes TArray of the dialogue this edge is leading to" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDlgEdge_Statics::NewProp_TargetIndex = { "TargetIndex", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDlgEdge, TargetIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgEdge_Statics::NewProp_TargetIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgEdge_Statics::NewProp_TargetIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDlgEdge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgEdge_Statics::NewProp_TextArguments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgEdge_Statics::NewProp_TextArguments_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgEdge_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgEdge_Statics::NewProp_bIncludeInAllOptionListIfUnsatisfied,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgEdge_Statics::NewProp_SpeakerState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgEdge_Statics::NewProp_Conditions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgEdge_Statics::NewProp_Conditions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgEdge_Statics::NewProp_TargetIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDlgEdge_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystem,
		nullptr,
		&NewStructOps,
		"DlgEdge",
		sizeof(FDlgEdge),
		alignof(FDlgEdge),
		Z_Construct_UScriptStruct_FDlgEdge_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgEdge_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgEdge_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgEdge_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDlgEdge()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDlgEdge_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DlgSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DlgEdge"), sizeof(FDlgEdge), Get_Z_Construct_UScriptStruct_FDlgEdge_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDlgEdge_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDlgEdge_Hash() { return 1881409809U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
