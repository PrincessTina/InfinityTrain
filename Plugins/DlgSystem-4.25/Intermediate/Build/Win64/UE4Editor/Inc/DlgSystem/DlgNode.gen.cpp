// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystem/Public/Nodes/DlgNode.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDlgNode() {}
// Cross Module References
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNode_NoRegister();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNode();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DlgSystem();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgEdge();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNodeData_NoRegister();
	DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgCondition();
	DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgEvent();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDialogueWave_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
	DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgTextArgument();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDlgNode::execGetNodeData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDlgNodeData**)Z_Param__Result=P_THIS->GetNodeData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgNode::execGetNodeGenericData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->GetNodeGenericData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgNode::execGetSpeakerState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetSpeakerState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgNode::execGetNodeVoiceDialogueWave)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDialogueWave**)Z_Param__Result=P_THIS->GetNodeVoiceDialogueWave();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgNode::execGetNodeVoiceSoundBase)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USoundBase**)Z_Param__Result=P_THIS->GetNodeVoiceSoundBase();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgNode::execGetNodeVoiceSoundWave)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USoundWave**)Z_Param__Result=P_THIS->GetNodeVoiceSoundWave();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgNode::execGetNodeUnformattedText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetNodeUnformattedText();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgNode::execGetCheckChildrenOnEvaluation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCheckChildrenOnEvaluation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgNode::execGetNodeText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetNodeText();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgNode::execGetTextArguments)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FDlgTextArgument>*)Z_Param__Result=P_THIS->GetTextArguments();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgNode::execGetNodeChildAt)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_EdgeIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDlgEdge*)Z_Param__Result=P_THIS->GetNodeChildAt(Z_Param_EdgeIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgNode::execGetNumNodeChildren)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumNodeChildren();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgNode::execGetNodeChildren)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FDlgEdge>*)Z_Param__Result=P_THIS->GetNodeChildren();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgNode::execGetNodeEnterEvents)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FDlgEvent>*)Z_Param__Result=P_THIS->GetNodeEnterEvents();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgNode::execHasAnyEnterEvents)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasAnyEnterEvents();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgNode::execGetNodeEnterConditions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FDlgCondition>*)Z_Param__Result=P_THIS->GetNodeEnterConditions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgNode::execHasAnyEnterConditions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasAnyEnterConditions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgNode::execGetNodeParticipantName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetNodeParticipantName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgNode::execHasGUID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasGUID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgNode::execGetGUID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGuid*)Z_Param__Result=P_THIS->GetGUID();
		P_NATIVE_END;
	}
	void UDlgNode::StaticRegisterNativesUDlgNode()
	{
		UClass* Class = UDlgNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCheckChildrenOnEvaluation", &UDlgNode::execGetCheckChildrenOnEvaluation },
			{ "GetGUID", &UDlgNode::execGetGUID },
			{ "GetNodeChildAt", &UDlgNode::execGetNodeChildAt },
			{ "GetNodeChildren", &UDlgNode::execGetNodeChildren },
			{ "GetNodeData", &UDlgNode::execGetNodeData },
			{ "GetNodeEnterConditions", &UDlgNode::execGetNodeEnterConditions },
			{ "GetNodeEnterEvents", &UDlgNode::execGetNodeEnterEvents },
			{ "GetNodeGenericData", &UDlgNode::execGetNodeGenericData },
			{ "GetNodeParticipantName", &UDlgNode::execGetNodeParticipantName },
			{ "GetNodeText", &UDlgNode::execGetNodeText },
			{ "GetNodeUnformattedText", &UDlgNode::execGetNodeUnformattedText },
			{ "GetNodeVoiceDialogueWave", &UDlgNode::execGetNodeVoiceDialogueWave },
			{ "GetNodeVoiceSoundBase", &UDlgNode::execGetNodeVoiceSoundBase },
			{ "GetNodeVoiceSoundWave", &UDlgNode::execGetNodeVoiceSoundWave },
			{ "GetNumNodeChildren", &UDlgNode::execGetNumNodeChildren },
			{ "GetSpeakerState", &UDlgNode::execGetSpeakerState },
			{ "GetTextArguments", &UDlgNode::execGetTextArguments },
			{ "HasAnyEnterConditions", &UDlgNode::execHasAnyEnterConditions },
			{ "HasAnyEnterEvents", &UDlgNode::execHasAnyEnterEvents },
			{ "HasGUID", &UDlgNode::execHasGUID },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDlgNode_GetCheckChildrenOnEvaluation_Statics
	{
		struct DlgNode_eventGetCheckChildrenOnEvaluation_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDlgNode_GetCheckChildrenOnEvaluation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgNode_eventGetCheckChildrenOnEvaluation_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDlgNode_GetCheckChildrenOnEvaluation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DlgNode_eventGetCheckChildrenOnEvaluation_Parms), &Z_Construct_UFunction_UDlgNode_GetCheckChildrenOnEvaluation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgNode_GetCheckChildrenOnEvaluation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgNode_GetCheckChildrenOnEvaluation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgNode_GetCheckChildrenOnEvaluation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Node" },
		{ "ModuleRelativePath", "Public/Nodes/DlgNode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgNode_GetCheckChildrenOnEvaluation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgNode, nullptr, "GetCheckChildrenOnEvaluation", nullptr, nullptr, sizeof(DlgNode_eventGetCheckChildrenOnEvaluation_Parms), Z_Construct_UFunction_UDlgNode_GetCheckChildrenOnEvaluation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_GetCheckChildrenOnEvaluation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgNode_GetCheckChildrenOnEvaluation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_GetCheckChildrenOnEvaluation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgNode_GetCheckChildrenOnEvaluation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgNode_GetCheckChildrenOnEvaluation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgNode_GetGUID_Statics
	{
		struct DlgNode_eventGetGUID_Parms
		{
			FGuid ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDlgNode_GetGUID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgNode_eventGetGUID_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgNode_GetGUID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgNode_GetGUID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgNode_GetGUID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "//\n// Getters/Setters:\n//\n" },
		{ "ModuleRelativePath", "Public/Nodes/DlgNode.h" },
		{ "ToolTip", "Getters/Setters:" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgNode_GetGUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgNode, nullptr, "GetGUID", nullptr, nullptr, sizeof(DlgNode_eventGetGUID_Parms), Z_Construct_UFunction_UDlgNode_GetGUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_GetGUID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgNode_GetGUID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_GetGUID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgNode_GetGUID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgNode_GetGUID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgNode_GetNodeChildAt_Statics
	{
		struct DlgNode_eventGetNodeChildAt_Parms
		{
			int32 EdgeIndex;
			FDlgEdge ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EdgeIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgNode_GetNodeChildAt_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDlgNode_GetNodeChildAt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008008000582, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgNode_eventGetNodeChildAt_Parms, ReturnValue), Z_Construct_UScriptStruct_FDlgEdge, METADATA_PARAMS(Z_Construct_UFunction_UDlgNode_GetNodeChildAt_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_GetNodeChildAt_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDlgNode_GetNodeChildAt_Statics::NewProp_EdgeIndex = { "EdgeIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgNode_eventGetNodeChildAt_Parms, EdgeIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgNode_GetNodeChildAt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgNode_GetNodeChildAt_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgNode_GetNodeChildAt_Statics::NewProp_EdgeIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgNode_GetNodeChildAt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Node" },
		{ "ModuleRelativePath", "Public/Nodes/DlgNode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgNode_GetNodeChildAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgNode, nullptr, "GetNodeChildAt", nullptr, nullptr, sizeof(DlgNode_eventGetNodeChildAt_Parms), Z_Construct_UFunction_UDlgNode_GetNodeChildAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_GetNodeChildAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgNode_GetNodeChildAt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_GetNodeChildAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgNode_GetNodeChildAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgNode_GetNodeChildAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgNode_GetNodeChildren_Statics
	{
		struct DlgNode_eventGetNodeChildren_Parms
		{
			TArray<FDlgEdge> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgNode_GetNodeChildren_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDlgNode_GetNodeChildren_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008008000582, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgNode_eventGetNodeChildren_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDlgNode_GetNodeChildren_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_GetNodeChildren_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDlgNode_GetNodeChildren_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDlgEdge, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgNode_GetNodeChildren_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgNode_GetNodeChildren_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgNode_GetNodeChildren_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgNode_GetNodeChildren_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "/// Gets this nodes children (edges) as a const/mutable array\n" },
		{ "ModuleRelativePath", "Public/Nodes/DlgNode.h" },
		{ "ToolTip", "Gets this nodes children (edges) as a const/mutable array" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgNode_GetNodeChildren_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgNode, nullptr, "GetNodeChildren", nullptr, nullptr, sizeof(DlgNode_eventGetNodeChildren_Parms), Z_Construct_UFunction_UDlgNode_GetNodeChildren_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_GetNodeChildren_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgNode_GetNodeChildren_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_GetNodeChildren_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgNode_GetNodeChildren()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgNode_GetNodeChildren_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgNode_GetNodeData_Statics
	{
		struct DlgNode_eventGetNodeData_Parms
		{
			UDlgNodeData* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgNode_GetNodeData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgNode_eventGetNodeData_Parms, ReturnValue), Z_Construct_UClass_UDlgNodeData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgNode_GetNodeData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgNode_GetNodeData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgNode_GetNodeData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Node" },
		{ "ModuleRelativePath", "Public/Nodes/DlgNode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgNode_GetNodeData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgNode, nullptr, "GetNodeData", nullptr, nullptr, sizeof(DlgNode_eventGetNodeData_Parms), Z_Construct_UFunction_UDlgNode_GetNodeData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_GetNodeData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgNode_GetNodeData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_GetNodeData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgNode_GetNodeData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgNode_GetNodeData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgNode_GetNodeEnterConditions_Statics
	{
		struct DlgNode_eventGetNodeEnterConditions_Parms
		{
			TArray<FDlgCondition> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgNode_GetNodeEnterConditions_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDlgNode_GetNodeEnterConditions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008008000582, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgNode_eventGetNodeEnterConditions_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDlgNode_GetNodeEnterConditions_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_GetNodeEnterConditions_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDlgNode_GetNodeEnterConditions_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDlgCondition, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgNode_GetNodeEnterConditions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgNode_GetNodeEnterConditions_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgNode_GetNodeEnterConditions_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgNode_GetNodeEnterConditions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Node" },
		{ "ModuleRelativePath", "Public/Nodes/DlgNode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgNode_GetNodeEnterConditions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgNode, nullptr, "GetNodeEnterConditions", nullptr, nullptr, sizeof(DlgNode_eventGetNodeEnterConditions_Parms), Z_Construct_UFunction_UDlgNode_GetNodeEnterConditions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_GetNodeEnterConditions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgNode_GetNodeEnterConditions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_GetNodeEnterConditions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgNode_GetNodeEnterConditions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgNode_GetNodeEnterConditions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgNode_GetNodeEnterEvents_Statics
	{
		struct DlgNode_eventGetNodeEnterEvents_Parms
		{
			TArray<FDlgEvent> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgNode_GetNodeEnterEvents_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDlgNode_GetNodeEnterEvents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008008000582, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgNode_eventGetNodeEnterEvents_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDlgNode_GetNodeEnterEvents_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_GetNodeEnterEvents_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDlgNode_GetNodeEnterEvents_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDlgEvent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgNode_GetNodeEnterEvents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgNode_GetNodeEnterEvents_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgNode_GetNodeEnterEvents_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgNode_GetNodeEnterEvents_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Node" },
		{ "ModuleRelativePath", "Public/Nodes/DlgNode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgNode_GetNodeEnterEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgNode, nullptr, "GetNodeEnterEvents", nullptr, nullptr, sizeof(DlgNode_eventGetNodeEnterEvents_Parms), Z_Construct_UFunction_UDlgNode_GetNodeEnterEvents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_GetNodeEnterEvents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgNode_GetNodeEnterEvents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_GetNodeEnterEvents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgNode_GetNodeEnterEvents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgNode_GetNodeEnterEvents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgNode_GetNodeGenericData_Statics
	{
		struct DlgNode_eventGetNodeGenericData_Parms
		{
			UObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgNode_GetNodeGenericData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgNode_eventGetNodeGenericData_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgNode_GetNodeGenericData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgNode_GetNodeGenericData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgNode_GetNodeGenericData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// Gets the generic data asset of this Node.\n" },
		{ "ModuleRelativePath", "Public/Nodes/DlgNode.h" },
		{ "ToolTip", "Gets the generic data asset of this Node." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgNode_GetNodeGenericData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgNode, nullptr, "GetNodeGenericData", nullptr, nullptr, sizeof(DlgNode_eventGetNodeGenericData_Parms), Z_Construct_UFunction_UDlgNode_GetNodeGenericData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_GetNodeGenericData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgNode_GetNodeGenericData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_GetNodeGenericData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgNode_GetNodeGenericData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgNode_GetNodeGenericData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgNode_GetNodeParticipantName_Statics
	{
		struct DlgNode_eventGetNodeParticipantName_Parms
		{
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgNode_GetNodeParticipantName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgNode_eventGetNodeParticipantName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgNode_GetNodeParticipantName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgNode_GetNodeParticipantName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgNode_GetNodeParticipantName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "//\n// For the ParticipantName\n//\n" },
		{ "ModuleRelativePath", "Public/Nodes/DlgNode.h" },
		{ "ToolTip", "For the ParticipantName" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgNode_GetNodeParticipantName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgNode, nullptr, "GetNodeParticipantName", nullptr, nullptr, sizeof(DlgNode_eventGetNodeParticipantName_Parms), Z_Construct_UFunction_UDlgNode_GetNodeParticipantName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_GetNodeParticipantName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgNode_GetNodeParticipantName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_GetNodeParticipantName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgNode_GetNodeParticipantName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgNode_GetNodeParticipantName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgNode_GetNodeText_Statics
	{
		struct DlgNode_eventGetNodeText_Parms
		{
			FText ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgNode_GetNodeText_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDlgNode_GetNodeText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgNode_eventGetNodeText_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UDlgNode_GetNodeText_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_GetNodeText_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgNode_GetNodeText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgNode_GetNodeText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgNode_GetNodeText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// Gets the Text of this Node. This can be the final formatted string.\n" },
		{ "ModuleRelativePath", "Public/Nodes/DlgNode.h" },
		{ "ToolTip", "Gets the Text of this Node. This can be the final formatted string." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgNode_GetNodeText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgNode, nullptr, "GetNodeText", nullptr, nullptr, sizeof(DlgNode_eventGetNodeText_Parms), Z_Construct_UFunction_UDlgNode_GetNodeText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_GetNodeText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgNode_GetNodeText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_GetNodeText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgNode_GetNodeText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgNode_GetNodeText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgNode_GetNodeUnformattedText_Statics
	{
		struct DlgNode_eventGetNodeUnformattedText_Parms
		{
			FText ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgNode_GetNodeUnformattedText_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDlgNode_GetNodeUnformattedText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgNode_eventGetNodeUnformattedText_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UDlgNode_GetNodeUnformattedText_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_GetNodeUnformattedText_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgNode_GetNodeUnformattedText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgNode_GetNodeUnformattedText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgNode_GetNodeUnformattedText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "/**\n\x09 * Gets the Raw unformatted Text of this Node. Usually the same as GetNodeText but in case the node supports formatted string this\n\x09 * is the raw form with all the arguments intact. To get the text arguments call GetTextArguments.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/DlgNode.h" },
		{ "ToolTip", "Gets the Raw unformatted Text of this Node. Usually the same as GetNodeText but in case the node supports formatted string this\nis the raw form with all the arguments intact. To get the text arguments call GetTextArguments." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgNode_GetNodeUnformattedText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgNode, nullptr, "GetNodeUnformattedText", nullptr, nullptr, sizeof(DlgNode_eventGetNodeUnformattedText_Parms), Z_Construct_UFunction_UDlgNode_GetNodeUnformattedText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_GetNodeUnformattedText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgNode_GetNodeUnformattedText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_GetNodeUnformattedText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgNode_GetNodeUnformattedText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgNode_GetNodeUnformattedText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgNode_GetNodeVoiceDialogueWave_Statics
	{
		struct DlgNode_eventGetNodeVoiceDialogueWave_Parms
		{
			UDialogueWave* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgNode_GetNodeVoiceDialogueWave_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgNode_eventGetNodeVoiceDialogueWave_Parms, ReturnValue), Z_Construct_UClass_UDialogueWave_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgNode_GetNodeVoiceDialogueWave_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgNode_GetNodeVoiceDialogueWave_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgNode_GetNodeVoiceDialogueWave_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// Gets the voice of this Node as a DialogueWave. Only the first Dialogue context in the wave should be used.\n" },
		{ "ModuleRelativePath", "Public/Nodes/DlgNode.h" },
		{ "ToolTip", "Gets the voice of this Node as a DialogueWave. Only the first Dialogue context in the wave should be used." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgNode_GetNodeVoiceDialogueWave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgNode, nullptr, "GetNodeVoiceDialogueWave", nullptr, nullptr, sizeof(DlgNode_eventGetNodeVoiceDialogueWave_Parms), Z_Construct_UFunction_UDlgNode_GetNodeVoiceDialogueWave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_GetNodeVoiceDialogueWave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgNode_GetNodeVoiceDialogueWave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_GetNodeVoiceDialogueWave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgNode_GetNodeVoiceDialogueWave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgNode_GetNodeVoiceDialogueWave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgNode_GetNodeVoiceSoundBase_Statics
	{
		struct DlgNode_eventGetNodeVoiceSoundBase_Parms
		{
			USoundBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgNode_GetNodeVoiceSoundBase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgNode_eventGetNodeVoiceSoundBase_Parms, ReturnValue), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgNode_GetNodeVoiceSoundBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgNode_GetNodeVoiceSoundBase_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgNode_GetNodeVoiceSoundBase_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// Gets the voice of this Node as a SoundWave.\n" },
		{ "ModuleRelativePath", "Public/Nodes/DlgNode.h" },
		{ "ToolTip", "Gets the voice of this Node as a SoundWave." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgNode_GetNodeVoiceSoundBase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgNode, nullptr, "GetNodeVoiceSoundBase", nullptr, nullptr, sizeof(DlgNode_eventGetNodeVoiceSoundBase_Parms), Z_Construct_UFunction_UDlgNode_GetNodeVoiceSoundBase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_GetNodeVoiceSoundBase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgNode_GetNodeVoiceSoundBase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_GetNodeVoiceSoundBase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgNode_GetNodeVoiceSoundBase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgNode_GetNodeVoiceSoundBase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgNode_GetNodeVoiceSoundWave_Statics
	{
		struct DlgNode_eventGetNodeVoiceSoundWave_Parms
		{
			USoundWave* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgNode_GetNodeVoiceSoundWave_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgNode_eventGetNodeVoiceSoundWave_Parms, ReturnValue), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgNode_GetNodeVoiceSoundWave_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgNode_GetNodeVoiceSoundWave_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgNode_GetNodeVoiceSoundWave_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// Gets the voice of this Node as a SoundWave.\n" },
		{ "ModuleRelativePath", "Public/Nodes/DlgNode.h" },
		{ "ToolTip", "Gets the voice of this Node as a SoundWave." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgNode_GetNodeVoiceSoundWave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgNode, nullptr, "GetNodeVoiceSoundWave", nullptr, nullptr, sizeof(DlgNode_eventGetNodeVoiceSoundWave_Parms), Z_Construct_UFunction_UDlgNode_GetNodeVoiceSoundWave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_GetNodeVoiceSoundWave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgNode_GetNodeVoiceSoundWave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_GetNodeVoiceSoundWave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgNode_GetNodeVoiceSoundWave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgNode_GetNodeVoiceSoundWave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgNode_GetNumNodeChildren_Statics
	{
		struct DlgNode_eventGetNumNodeChildren_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDlgNode_GetNumNodeChildren_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgNode_eventGetNumNodeChildren_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgNode_GetNumNodeChildren_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgNode_GetNumNodeChildren_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgNode_GetNumNodeChildren_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Node" },
		{ "ModuleRelativePath", "Public/Nodes/DlgNode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgNode_GetNumNodeChildren_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgNode, nullptr, "GetNumNodeChildren", nullptr, nullptr, sizeof(DlgNode_eventGetNumNodeChildren_Parms), Z_Construct_UFunction_UDlgNode_GetNumNodeChildren_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_GetNumNodeChildren_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgNode_GetNumNodeChildren_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_GetNumNodeChildren_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgNode_GetNumNodeChildren()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgNode_GetNumNodeChildren_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgNode_GetSpeakerState_Statics
	{
		struct DlgNode_eventGetSpeakerState_Parms
		{
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgNode_GetSpeakerState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgNode_eventGetSpeakerState_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgNode_GetSpeakerState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgNode_GetSpeakerState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgNode_GetSpeakerState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// Gets the speaker state ordered to this node (can be used e.g. for icon selection)\n" },
		{ "ModuleRelativePath", "Public/Nodes/DlgNode.h" },
		{ "ToolTip", "Gets the speaker state ordered to this node (can be used e.g. for icon selection)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgNode_GetSpeakerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgNode, nullptr, "GetSpeakerState", nullptr, nullptr, sizeof(DlgNode_eventGetSpeakerState_Parms), Z_Construct_UFunction_UDlgNode_GetSpeakerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_GetSpeakerState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgNode_GetSpeakerState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_GetSpeakerState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgNode_GetSpeakerState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgNode_GetSpeakerState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgNode_GetTextArguments_Statics
	{
		struct DlgNode_eventGetTextArguments_Parms
		{
			TArray<FDlgTextArgument> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgNode_GetTextArguments_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDlgNode_GetTextArguments_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008008000582, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgNode_eventGetTextArguments_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDlgNode_GetTextArguments_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_GetTextArguments_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDlgNode_GetTextArguments_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDlgTextArgument, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgNode_GetTextArguments_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgNode_GetTextArguments_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgNode_GetTextArguments_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgNode_GetTextArguments_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// Gets the text arguments for this Node (if any). Used for FText::Format\n" },
		{ "ModuleRelativePath", "Public/Nodes/DlgNode.h" },
		{ "ToolTip", "Gets the text arguments for this Node (if any). Used for FText::Format" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgNode_GetTextArguments_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgNode, nullptr, "GetTextArguments", nullptr, nullptr, sizeof(DlgNode_eventGetTextArguments_Parms), Z_Construct_UFunction_UDlgNode_GetTextArguments_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_GetTextArguments_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgNode_GetTextArguments_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_GetTextArguments_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgNode_GetTextArguments()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgNode_GetTextArguments_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgNode_HasAnyEnterConditions_Statics
	{
		struct DlgNode_eventHasAnyEnterConditions_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDlgNode_HasAnyEnterConditions_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgNode_eventHasAnyEnterConditions_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDlgNode_HasAnyEnterConditions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DlgNode_eventHasAnyEnterConditions_Parms), &Z_Construct_UFunction_UDlgNode_HasAnyEnterConditions_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgNode_HasAnyEnterConditions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgNode_HasAnyEnterConditions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgNode_HasAnyEnterConditions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "//\n// For the EnterConditions\n//\n" },
		{ "ModuleRelativePath", "Public/Nodes/DlgNode.h" },
		{ "ToolTip", "For the EnterConditions" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgNode_HasAnyEnterConditions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgNode, nullptr, "HasAnyEnterConditions", nullptr, nullptr, sizeof(DlgNode_eventHasAnyEnterConditions_Parms), Z_Construct_UFunction_UDlgNode_HasAnyEnterConditions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_HasAnyEnterConditions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgNode_HasAnyEnterConditions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_HasAnyEnterConditions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgNode_HasAnyEnterConditions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgNode_HasAnyEnterConditions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgNode_HasAnyEnterEvents_Statics
	{
		struct DlgNode_eventHasAnyEnterEvents_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDlgNode_HasAnyEnterEvents_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgNode_eventHasAnyEnterEvents_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDlgNode_HasAnyEnterEvents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DlgNode_eventHasAnyEnterEvents_Parms), &Z_Construct_UFunction_UDlgNode_HasAnyEnterEvents_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgNode_HasAnyEnterEvents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgNode_HasAnyEnterEvents_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgNode_HasAnyEnterEvents_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "//\n// For the EnterEvents\n//\n" },
		{ "ModuleRelativePath", "Public/Nodes/DlgNode.h" },
		{ "ToolTip", "For the EnterEvents" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgNode_HasAnyEnterEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgNode, nullptr, "HasAnyEnterEvents", nullptr, nullptr, sizeof(DlgNode_eventHasAnyEnterEvents_Parms), Z_Construct_UFunction_UDlgNode_HasAnyEnterEvents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_HasAnyEnterEvents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgNode_HasAnyEnterEvents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_HasAnyEnterEvents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgNode_HasAnyEnterEvents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgNode_HasAnyEnterEvents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgNode_HasGUID_Statics
	{
		struct DlgNode_eventHasGUID_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDlgNode_HasGUID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgNode_eventHasGUID_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDlgNode_HasGUID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DlgNode_eventHasGUID_Parms), &Z_Construct_UFunction_UDlgNode_HasGUID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgNode_HasGUID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgNode_HasGUID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgNode_HasGUID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Node" },
		{ "ModuleRelativePath", "Public/Nodes/DlgNode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgNode_HasGUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgNode, nullptr, "HasGUID", nullptr, nullptr, sizeof(DlgNode_eventHasGUID_Parms), Z_Construct_UFunction_UDlgNode_HasGUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_HasGUID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgNode_HasGUID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_HasGUID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgNode_HasGUID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgNode_HasGUID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDlgNode_NoRegister()
	{
		return UDlgNode::StaticClass();
	}
	struct Z_Construct_UClass_UDlgNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Children_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Children;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Children_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeGUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NodeGUID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnterEvents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EnterEvents;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EnterEvents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnterConditions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EnterConditions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EnterConditions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCheckChildrenOnEvaluation_MetaData[];
#endif
		static void NewProp_bCheckChildrenOnEvaluation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCheckChildrenOnEvaluation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OwnerName;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GraphNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GraphNode;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDlgNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDlgNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDlgNode_GetCheckChildrenOnEvaluation, "GetCheckChildrenOnEvaluation" }, // 3509746967
		{ &Z_Construct_UFunction_UDlgNode_GetGUID, "GetGUID" }, // 1735713536
		{ &Z_Construct_UFunction_UDlgNode_GetNodeChildAt, "GetNodeChildAt" }, // 3094879050
		{ &Z_Construct_UFunction_UDlgNode_GetNodeChildren, "GetNodeChildren" }, // 1940712305
		{ &Z_Construct_UFunction_UDlgNode_GetNodeData, "GetNodeData" }, // 1279271441
		{ &Z_Construct_UFunction_UDlgNode_GetNodeEnterConditions, "GetNodeEnterConditions" }, // 3082621835
		{ &Z_Construct_UFunction_UDlgNode_GetNodeEnterEvents, "GetNodeEnterEvents" }, // 275448953
		{ &Z_Construct_UFunction_UDlgNode_GetNodeGenericData, "GetNodeGenericData" }, // 1606525819
		{ &Z_Construct_UFunction_UDlgNode_GetNodeParticipantName, "GetNodeParticipantName" }, // 3247241659
		{ &Z_Construct_UFunction_UDlgNode_GetNodeText, "GetNodeText" }, // 1319132976
		{ &Z_Construct_UFunction_UDlgNode_GetNodeUnformattedText, "GetNodeUnformattedText" }, // 3496876477
		{ &Z_Construct_UFunction_UDlgNode_GetNodeVoiceDialogueWave, "GetNodeVoiceDialogueWave" }, // 785306566
		{ &Z_Construct_UFunction_UDlgNode_GetNodeVoiceSoundBase, "GetNodeVoiceSoundBase" }, // 244533723
		{ &Z_Construct_UFunction_UDlgNode_GetNodeVoiceSoundWave, "GetNodeVoiceSoundWave" }, // 3227984856
		{ &Z_Construct_UFunction_UDlgNode_GetNumNodeChildren, "GetNumNodeChildren" }, // 3051557860
		{ &Z_Construct_UFunction_UDlgNode_GetSpeakerState, "GetSpeakerState" }, // 1577309045
		{ &Z_Construct_UFunction_UDlgNode_GetTextArguments, "GetTextArguments" }, // 3794634600
		{ &Z_Construct_UFunction_UDlgNode_HasAnyEnterConditions, "HasAnyEnterConditions" }, // 3090299228
		{ &Z_Construct_UFunction_UDlgNode_HasAnyEnterEvents, "HasAnyEnterEvents" }, // 947690550
		{ &Z_Construct_UFunction_UDlgNode_HasGUID, "HasGUID" }, // 1495080637
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Dialogue" },
		{ "Comment", "/**\n *  Abstract base class for Dialogue nodes\n *  Depending on the implementation in the child class the dialogue node can contain one or more lines of one or more participants,\n *  or simply some logic to go on in the UDlgNode graph\n */" },
		{ "IncludePath", "Nodes/DlgNode.h" },
		{ "ModuleRelativePath", "Public/Nodes/DlgNode.h" },
		{ "ToolTip", "Abstract base class for Dialogue nodes\nDepending on the implementation in the child class the dialogue node can contain one or more lines of one or more participants,\nor simply some logic to go on in the UDlgNode graph" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgNode_Statics::NewProp_Children_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// Edges that point to Children of this Node\n" },
		{ "ModuleRelativePath", "Public/Nodes/DlgNode.h" },
		{ "ToolTip", "Edges that point to Children of this Node" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDlgNode_Statics::NewProp_Children = { "Children", nullptr, (EPropertyFlags)0x00200c8000020041, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDlgNode, Children), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDlgNode_Statics::NewProp_Children_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgNode_Statics::NewProp_Children_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDlgNode_Statics::NewProp_Children_Inner = { "Children", nullptr, (EPropertyFlags)0x0000008000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDlgEdge, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgNode_Statics::NewProp_NodeGUID_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// The Unique identifier for each Node. This is much safer than a Node Index.\n// Compile/Save Asset to generate this\n" },
		{ "ModuleRelativePath", "Public/Nodes/DlgNode.h" },
		{ "ToolTip", "The Unique identifier for each Node. This is much safer than a Node Index.\nCompile/Save Asset to generate this" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDlgNode_Statics::NewProp_NodeGUID = { "NodeGUID", nullptr, (EPropertyFlags)0x00200c0000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDlgNode, NodeGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UDlgNode_Statics::NewProp_NodeGUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgNode_Statics::NewProp_NodeGUID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgNode_Statics::NewProp_EnterEvents_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// Events fired when the node is reached in the dialogue\n" },
		{ "ModuleRelativePath", "Public/Nodes/DlgNode.h" },
		{ "ToolTip", "Events fired when the node is reached in the dialogue" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDlgNode_Statics::NewProp_EnterEvents = { "EnterEvents", nullptr, (EPropertyFlags)0x0020088000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDlgNode, EnterEvents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDlgNode_Statics::NewProp_EnterEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgNode_Statics::NewProp_EnterEvents_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDlgNode_Statics::NewProp_EnterEvents_Inner = { "EnterEvents", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDlgEvent, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgNode_Statics::NewProp_EnterConditions_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// Conditions necessary to enter this node\n" },
		{ "ModuleRelativePath", "Public/Nodes/DlgNode.h" },
		{ "ToolTip", "Conditions necessary to enter this node" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDlgNode_Statics::NewProp_EnterConditions = { "EnterConditions", nullptr, (EPropertyFlags)0x0020088000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDlgNode, EnterConditions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDlgNode_Statics::NewProp_EnterConditions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgNode_Statics::NewProp_EnterConditions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDlgNode_Statics::NewProp_EnterConditions_Inner = { "EnterConditions", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDlgCondition, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgNode_Statics::NewProp_bCheckChildrenOnEvaluation_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "/**\n\x09 *  If it is set the node is only satisfied if at least one of its children is\n\x09 *  Should not be used if entering this node can modify the condition results of its children.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/DlgNode.h" },
		{ "ToolTip", "If it is set the node is only satisfied if at least one of its children is\nShould not be used if entering this node can modify the condition results of its children." },
	};
#endif
	void Z_Construct_UClass_UDlgNode_Statics::NewProp_bCheckChildrenOnEvaluation_SetBit(void* Obj)
	{
		((UDlgNode*)Obj)->bCheckChildrenOnEvaluation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDlgNode_Statics::NewProp_bCheckChildrenOnEvaluation = { "bCheckChildrenOnEvaluation", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDlgNode), &Z_Construct_UClass_UDlgNode_Statics::NewProp_bCheckChildrenOnEvaluation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDlgNode_Statics::NewProp_bCheckChildrenOnEvaluation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgNode_Statics::NewProp_bCheckChildrenOnEvaluation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgNode_Statics::NewProp_OwnerName_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// Name of a participant (speaker) associated with this node.\n" },
		{ "DisplayName", "Participant Name" },
		{ "ModuleRelativePath", "Public/Nodes/DlgNode.h" },
		{ "ToolTip", "Name of a participant (speaker) associated with this node." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDlgNode_Statics::NewProp_OwnerName = { "OwnerName", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDlgNode, OwnerName), METADATA_PARAMS(Z_Construct_UClass_UDlgNode_Statics::NewProp_OwnerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgNode_Statics::NewProp_OwnerName_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgNode_Statics::NewProp_GraphNode_MetaData[] = {
		{ "Comment", "// Node's Graph representation, used to get position.\n" },
		{ "DlgNoExport", "" },
		{ "ModuleRelativePath", "Public/Nodes/DlgNode.h" },
		{ "ToolTip", "Node's Graph representation, used to get position." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDlgNode_Statics::NewProp_GraphNode = { "GraphNode", nullptr, (EPropertyFlags)0x0020080800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDlgNode, GraphNode), Z_Construct_UClass_UEdGraphNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDlgNode_Statics::NewProp_GraphNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgNode_Statics::NewProp_GraphNode_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDlgNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgNode_Statics::NewProp_Children,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgNode_Statics::NewProp_Children_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgNode_Statics::NewProp_NodeGUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgNode_Statics::NewProp_EnterEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgNode_Statics::NewProp_EnterEvents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgNode_Statics::NewProp_EnterConditions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgNode_Statics::NewProp_EnterConditions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgNode_Statics::NewProp_bCheckChildrenOnEvaluation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgNode_Statics::NewProp_OwnerName,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgNode_Statics::NewProp_GraphNode,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDlgNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgNode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDlgNode_Statics::ClassParams = {
		&UDlgNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDlgNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDlgNode_Statics::PropPointers),
		0,
		0x009010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDlgNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDlgNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDlgNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDlgNode, 4218742698);
	template<> DLGSYSTEM_API UClass* StaticClass<UDlgNode>()
	{
		return UDlgNode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDlgNode(Z_Construct_UClass_UDlgNode, &UDlgNode::StaticClass, TEXT("/Script/DlgSystem"), TEXT("UDlgNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDlgNode);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UDlgNode)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
