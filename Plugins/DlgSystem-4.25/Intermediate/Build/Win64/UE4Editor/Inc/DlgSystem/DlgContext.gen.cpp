// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystem/Public/DlgContext.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDlgContext() {}
// Cross Module References
	DLGSYSTEM_API UEnum* Z_Construct_UEnum_DlgSystem_EDlgValidateStatus();
	UPackage* Z_Construct_UPackage__Script_DlgSystem();
	DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgEdgeData();
	DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgEdge();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgContext_NoRegister();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgContext();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgObject();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNodeData_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDialogueWave_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgDialogue_NoRegister();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNode_NoRegister();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNode_SpeechSequence_NoRegister();
	DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgCondition();
// End Cross Module References
	static UEnum* EDlgValidateStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DlgSystem_EDlgValidateStatus, Z_Construct_UPackage__Script_DlgSystem(), TEXT("EDlgValidateStatus"));
		}
		return Singleton;
	}
	template<> DLGSYSTEM_API UEnum* StaticEnum<EDlgValidateStatus>()
	{
		return EDlgValidateStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDlgValidateStatus(EDlgValidateStatus_StaticEnum, TEXT("/Script/DlgSystem"), TEXT("EDlgValidateStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DlgSystem_EDlgValidateStatus_Hash() { return 2426288518U; }
	UEnum* Z_Construct_UEnum_DlgSystem_EDlgValidateStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DlgSystem();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDlgValidateStatus"), 0, Get_Z_Construct_UEnum_DlgSystem_EDlgValidateStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDlgValidateStatus::Valid", (int64)EDlgValidateStatus::Valid },
				{ "EDlgValidateStatus::ParticipantIsNull", (int64)EDlgValidateStatus::ParticipantIsNull },
				{ "EDlgValidateStatus::DialogueIsNull", (int64)EDlgValidateStatus::DialogueIsNull },
				{ "EDlgValidateStatus::ParticipantDoesNotImplementInterface", (int64)EDlgValidateStatus::ParticipantDoesNotImplementInterface },
				{ "EDlgValidateStatus::ParticipantIsABlueprintClassAndDoesNotImplementInterface", (int64)EDlgValidateStatus::ParticipantIsABlueprintClassAndDoesNotImplementInterface },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "DialogueIsNull.Name", "EDlgValidateStatus::DialogueIsNull" },
				{ "ModuleRelativePath", "Public/DlgContext.h" },
				{ "ParticipantDoesNotImplementInterface.Comment", "// Is an instance but does not implement the UDlgDialogueParticipant interface\n" },
				{ "ParticipantDoesNotImplementInterface.Name", "EDlgValidateStatus::ParticipantDoesNotImplementInterface" },
				{ "ParticipantDoesNotImplementInterface.ToolTip", "Is an instance but does not implement the UDlgDialogueParticipant interface" },
				{ "ParticipantIsABlueprintClassAndDoesNotImplementInterface.Comment", "// Is a blueprint class from the content browser and does not implement the UDlgDialogueParticipant interface\n" },
				{ "ParticipantIsABlueprintClassAndDoesNotImplementInterface.Name", "EDlgValidateStatus::ParticipantIsABlueprintClassAndDoesNotImplementInterface" },
				{ "ParticipantIsABlueprintClassAndDoesNotImplementInterface.ToolTip", "Is a blueprint class from the content browser and does not implement the UDlgDialogueParticipant interface" },
				{ "ParticipantIsNull.Comment", "// Either the participant or dialogue is invalid\n" },
				{ "ParticipantIsNull.Name", "EDlgValidateStatus::ParticipantIsNull" },
				{ "ParticipantIsNull.ToolTip", "Either the participant or dialogue is invalid" },
				{ "Valid.Name", "EDlgValidateStatus::Valid" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DlgSystem,
				nullptr,
				"EDlgValidateStatus",
				"EDlgValidateStatus",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FDlgEdgeData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DLGSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FDlgEdgeData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDlgEdgeData, Z_Construct_UPackage__Script_DlgSystem(), TEXT("DlgEdgeData"), sizeof(FDlgEdgeData), Get_Z_Construct_UScriptStruct_FDlgEdgeData_Hash());
	}
	return Singleton;
}
template<> DLGSYSTEM_API UScriptStruct* StaticStruct<FDlgEdgeData>()
{
	return FDlgEdgeData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDlgEdgeData(FDlgEdgeData::StaticStruct, TEXT("/Script/DlgSystem"), TEXT("DlgEdgeData"), false, nullptr, nullptr);
static struct FScriptStruct_DlgSystem_StaticRegisterNativesFDlgEdgeData
{
	FScriptStruct_DlgSystem_StaticRegisterNativesFDlgEdgeData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DlgEdgeData")),new UScriptStruct::TCppStructOps<FDlgEdgeData>);
	}
} ScriptStruct_DlgSystem_StaticRegisterNativesFDlgEdgeData;
	struct Z_Construct_UScriptStruct_FDlgEdgeData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Edge_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Edge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSatisfied_MetaData[];
#endif
		static void NewProp_bSatisfied_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSatisfied;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgEdgeData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Used to store temporary state of edges\n// This represents a const version of an Edge\n" },
		{ "ModuleRelativePath", "Public/DlgContext.h" },
		{ "ToolTip", "Used to store temporary state of edges\nThis represents a const version of an Edge" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDlgEdgeData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDlgEdgeData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgEdgeData_Statics::NewProp_Edge_MetaData[] = {
		{ "Category", "Dialogue|Edge" },
		{ "ModuleRelativePath", "Public/DlgContext.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDlgEdgeData_Statics::NewProp_Edge = { "Edge", nullptr, (EPropertyFlags)0x0020088000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDlgEdgeData, Edge), Z_Construct_UScriptStruct_FDlgEdge, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgEdgeData_Statics::NewProp_Edge_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgEdgeData_Statics::NewProp_Edge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgEdgeData_Statics::NewProp_bSatisfied_MetaData[] = {
		{ "Category", "Dialogue|Edge" },
		{ "ModuleRelativePath", "Public/DlgContext.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDlgEdgeData_Statics::NewProp_bSatisfied_SetBit(void* Obj)
	{
		((FDlgEdgeData*)Obj)->bSatisfied = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDlgEdgeData_Statics::NewProp_bSatisfied = { "bSatisfied", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDlgEdgeData), &Z_Construct_UScriptStruct_FDlgEdgeData_Statics::NewProp_bSatisfied_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgEdgeData_Statics::NewProp_bSatisfied_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgEdgeData_Statics::NewProp_bSatisfied_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDlgEdgeData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgEdgeData_Statics::NewProp_Edge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgEdgeData_Statics::NewProp_bSatisfied,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDlgEdgeData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystem,
		nullptr,
		&NewStructOps,
		"DlgEdgeData",
		sizeof(FDlgEdgeData),
		alignof(FDlgEdgeData),
		Z_Construct_UScriptStruct_FDlgEdgeData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgEdgeData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgEdgeData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgEdgeData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDlgEdgeData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDlgEdgeData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DlgSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DlgEdgeData"), sizeof(FDlgEdgeData), Get_Z_Construct_UScriptStruct_FDlgEdgeData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDlgEdgeData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDlgEdgeData_Hash() { return 2713392350U; }
	DEFINE_FUNCTION(UDlgContext::execGetContextString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetContextString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execWasNodeGUIDVisitedInThisContext)
	{
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_NodeGUID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->WasNodeGUIDVisitedInThisContext(Z_Param_Out_NodeGUID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execWasNodeIndexVisitedInThisContext)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->WasNodeIndexVisitedInThisContext(Z_Param_NodeIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execGetMutableNodeFromGUID)
	{
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_NodeGUID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDlgNode**)Z_Param__Result=P_THIS->GetMutableNodeFromGUID(Z_Param_Out_NodeGUID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execGetMutableNodeFromIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDlgNode**)Z_Param__Result=P_THIS->GetMutableNodeFromIndex(Z_Param_NodeIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execGetParticipants)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FName,UObject*>*)Z_Param__Result=P_THIS->GetParticipants();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execGetDialoguePathName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetDialoguePathName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execGetDialogueGUID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGuid*)Z_Param__Result=P_THIS->GetDialogueGUID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execGetDialogueName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetDialogueName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execGetDialogue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDlgDialogue**)Z_Param__Result=P_THIS->GetDialogue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execGetVisitedNodeGUIDs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSet<FGuid>*)Z_Param__Result=P_THIS->GetVisitedNodeGUIDs();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execGetVisitedNodeIndices)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSet<int32>*)Z_Param__Result=P_THIS->GetVisitedNodeIndices();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execGetNodeIndexForGUID)
	{
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_NodeGUID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNodeIndexForGUID(Z_Param_Out_NodeGUID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execGetNodeGUIDForIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGuid*)Z_Param__Result=P_THIS->GetNodeGUIDForIndex(Z_Param_NodeIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execIsValidNodeGUID)
	{
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_NodeGUID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsValidNodeGUID(Z_Param_Out_NodeGUID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execIsValidNodeIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsValidNodeIndex(Z_Param_NodeIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execGetMutableActiveNodeAsSpeechSequence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDlgNode_SpeechSequence**)Z_Param__Result=P_THIS->GetMutableActiveNodeAsSpeechSequence();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execGetMutableActiveNode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDlgNode**)Z_Param__Result=P_THIS->GetMutableActiveNode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execGetActiveNodeGUID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGuid*)Z_Param__Result=P_THIS->GetActiveNodeGUID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execGetActiveNodeIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetActiveNodeIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execGetParticipantsMap)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FName,UObject*>*)Z_Param__Result=P_THIS->GetParticipantsMap();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execGetMutableParticipant)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->GetMutableParticipant(Z_Param_ParticipantName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execGetActiveNodeParticipantDisplayName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetActiveNodeParticipantDisplayName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execGetActiveNodeParticipantName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetActiveNodeParticipantName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execGetActiveNodeParticipant)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->GetActiveNodeParticipant();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execGetActiveNodeParticipantIcon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=P_THIS->GetActiveNodeParticipantIcon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execGetActiveNodeData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDlgNodeData**)Z_Param__Result=P_THIS->GetActiveNodeData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execGetActiveNodeGenericData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->GetActiveNodeGenericData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execGetActiveNodeVoiceDialogueWave)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDialogueWave**)Z_Param__Result=P_THIS->GetActiveNodeVoiceDialogueWave();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execGetActiveNodeVoiceSoundBase)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USoundBase**)Z_Param__Result=P_THIS->GetActiveNodeVoiceSoundBase();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execGetActiveNodeVoiceSoundWave)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USoundWave**)Z_Param__Result=P_THIS->GetActiveNodeVoiceSoundWave();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execGetActiveNodeSpeakerState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetActiveNodeSpeakerState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execGetActiveNodeText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetActiveNodeText();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execIsOptionConnectedToEndNode)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_UBOOL(Z_Param_bIndexSkipsUnsatisfiedEdges);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsOptionConnectedToEndNode(Z_Param_Index,Z_Param_bIndexSkipsUnsatisfiedEdges);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execIsOptionConnectedToVisitedNode)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_UBOOL(Z_Param_bLocalHistory);
		P_GET_UBOOL(Z_Param_bIndexSkipsUnsatisfiedEdges);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsOptionConnectedToVisitedNode(Z_Param_Index,Z_Param_bLocalHistory,Z_Param_bIndexSkipsUnsatisfiedEdges);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execGetAllOptionsArray)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FDlgEdgeData>*)Z_Param__Result=P_THIS->GetAllOptionsArray();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execGetOptionFromAll)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDlgEdgeData*)Z_Param__Result=P_THIS->GetOptionFromAll(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execGetOptionSpeakerStateFromAll)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetOptionSpeakerStateFromAll(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execIsOptionSatisfied)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsOptionSatisfied(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execGetOptionTextFromAll)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetOptionTextFromAll(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execIsValidAllOptionIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsValidAllOptionIndex(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execGetAllOptionsNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAllOptionsNum();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execGetOptionsArray)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FDlgEdge>*)Z_Param__Result=P_THIS->GetOptionsArray();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execGetOption)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_OptionIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDlgEdge*)Z_Param__Result=P_THIS->GetOption(Z_Param_OptionIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execGetOptionEnterConditions)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_OptionIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FDlgCondition>*)Z_Param__Result=P_THIS->GetOptionEnterConditions(Z_Param_OptionIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execGetOptionSpeakerState)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_OptionIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetOptionSpeakerState(Z_Param_OptionIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execGetOptionText)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_OptionIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetOptionText(Z_Param_OptionIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execIsValidOptionIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_OptionIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsValidOptionIndex(Z_Param_OptionIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execGetOptionsNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetOptionsNum();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execHasDialogueEnded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasDialogueEnded();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execReevaluateOptions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ReevaluateOptions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execReevaluateChildren)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ReevaluateChildren();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execChooseOptionBasedOnAllOptionIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ChooseOptionBasedOnAllOptionIndex(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execChooseChildBasedOnAllOptionIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ChooseChildBasedOnAllOptionIndex(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execChooseSpeechSequenceOptionFromReplicated)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_OptionIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ChooseSpeechSequenceOptionFromReplicated(Z_Param_OptionIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execChooseOption)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_OptionIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ChooseOption(Z_Param_OptionIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execChooseChild)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_OptionIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ChooseChild(Z_Param_OptionIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgContext::execOnRep_SerializedParticipants)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_SerializedParticipants();
		P_NATIVE_END;
	}
	void UDlgContext::StaticRegisterNativesUDlgContext()
	{
		UClass* Class = UDlgContext::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChooseChild", &UDlgContext::execChooseChild },
			{ "ChooseChildBasedOnAllOptionIndex", &UDlgContext::execChooseChildBasedOnAllOptionIndex },
			{ "ChooseOption", &UDlgContext::execChooseOption },
			{ "ChooseOptionBasedOnAllOptionIndex", &UDlgContext::execChooseOptionBasedOnAllOptionIndex },
			{ "ChooseSpeechSequenceOptionFromReplicated", &UDlgContext::execChooseSpeechSequenceOptionFromReplicated },
			{ "GetActiveNodeData", &UDlgContext::execGetActiveNodeData },
			{ "GetActiveNodeGenericData", &UDlgContext::execGetActiveNodeGenericData },
			{ "GetActiveNodeGUID", &UDlgContext::execGetActiveNodeGUID },
			{ "GetActiveNodeIndex", &UDlgContext::execGetActiveNodeIndex },
			{ "GetActiveNodeParticipant", &UDlgContext::execGetActiveNodeParticipant },
			{ "GetActiveNodeParticipantDisplayName", &UDlgContext::execGetActiveNodeParticipantDisplayName },
			{ "GetActiveNodeParticipantIcon", &UDlgContext::execGetActiveNodeParticipantIcon },
			{ "GetActiveNodeParticipantName", &UDlgContext::execGetActiveNodeParticipantName },
			{ "GetActiveNodeSpeakerState", &UDlgContext::execGetActiveNodeSpeakerState },
			{ "GetActiveNodeText", &UDlgContext::execGetActiveNodeText },
			{ "GetActiveNodeVoiceDialogueWave", &UDlgContext::execGetActiveNodeVoiceDialogueWave },
			{ "GetActiveNodeVoiceSoundBase", &UDlgContext::execGetActiveNodeVoiceSoundBase },
			{ "GetActiveNodeVoiceSoundWave", &UDlgContext::execGetActiveNodeVoiceSoundWave },
			{ "GetAllOptionsArray", &UDlgContext::execGetAllOptionsArray },
			{ "GetAllOptionsNum", &UDlgContext::execGetAllOptionsNum },
			{ "GetContextString", &UDlgContext::execGetContextString },
			{ "GetDialogue", &UDlgContext::execGetDialogue },
			{ "GetDialogueGUID", &UDlgContext::execGetDialogueGUID },
			{ "GetDialogueName", &UDlgContext::execGetDialogueName },
			{ "GetDialoguePathName", &UDlgContext::execGetDialoguePathName },
			{ "GetMutableActiveNode", &UDlgContext::execGetMutableActiveNode },
			{ "GetMutableActiveNodeAsSpeechSequence", &UDlgContext::execGetMutableActiveNodeAsSpeechSequence },
			{ "GetMutableNodeFromGUID", &UDlgContext::execGetMutableNodeFromGUID },
			{ "GetMutableNodeFromIndex", &UDlgContext::execGetMutableNodeFromIndex },
			{ "GetMutableParticipant", &UDlgContext::execGetMutableParticipant },
			{ "GetNodeGUIDForIndex", &UDlgContext::execGetNodeGUIDForIndex },
			{ "GetNodeIndexForGUID", &UDlgContext::execGetNodeIndexForGUID },
			{ "GetOption", &UDlgContext::execGetOption },
			{ "GetOptionEnterConditions", &UDlgContext::execGetOptionEnterConditions },
			{ "GetOptionFromAll", &UDlgContext::execGetOptionFromAll },
			{ "GetOptionsArray", &UDlgContext::execGetOptionsArray },
			{ "GetOptionsNum", &UDlgContext::execGetOptionsNum },
			{ "GetOptionSpeakerState", &UDlgContext::execGetOptionSpeakerState },
			{ "GetOptionSpeakerStateFromAll", &UDlgContext::execGetOptionSpeakerStateFromAll },
			{ "GetOptionText", &UDlgContext::execGetOptionText },
			{ "GetOptionTextFromAll", &UDlgContext::execGetOptionTextFromAll },
			{ "GetParticipants", &UDlgContext::execGetParticipants },
			{ "GetParticipantsMap", &UDlgContext::execGetParticipantsMap },
			{ "GetVisitedNodeGUIDs", &UDlgContext::execGetVisitedNodeGUIDs },
			{ "GetVisitedNodeIndices", &UDlgContext::execGetVisitedNodeIndices },
			{ "HasDialogueEnded", &UDlgContext::execHasDialogueEnded },
			{ "IsOptionConnectedToEndNode", &UDlgContext::execIsOptionConnectedToEndNode },
			{ "IsOptionConnectedToVisitedNode", &UDlgContext::execIsOptionConnectedToVisitedNode },
			{ "IsOptionSatisfied", &UDlgContext::execIsOptionSatisfied },
			{ "IsValidAllOptionIndex", &UDlgContext::execIsValidAllOptionIndex },
			{ "IsValidNodeGUID", &UDlgContext::execIsValidNodeGUID },
			{ "IsValidNodeIndex", &UDlgContext::execIsValidNodeIndex },
			{ "IsValidOptionIndex", &UDlgContext::execIsValidOptionIndex },
			{ "OnRep_SerializedParticipants", &UDlgContext::execOnRep_SerializedParticipants },
			{ "ReevaluateChildren", &UDlgContext::execReevaluateChildren },
			{ "ReevaluateOptions", &UDlgContext::execReevaluateOptions },
			{ "WasNodeGUIDVisitedInThisContext", &UDlgContext::execWasNodeGUIDVisitedInThisContext },
			{ "WasNodeIndexVisitedInThisContext", &UDlgContext::execWasNodeIndexVisitedInThisContext },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDlgContext_ChooseChild_Statics
	{
		struct DlgContext_eventChooseChild_Parms
		{
			int32 OptionIndex;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OptionIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDlgContext_ChooseChild_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgContext_eventChooseChild_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDlgContext_ChooseChild_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DlgContext_eventChooseChild_Parms), &Z_Construct_UFunction_UDlgContext_ChooseChild_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDlgContext_ChooseChild_Statics::NewProp_OptionIndex = { "OptionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgContext_eventChooseChild_Parms, OptionIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_ChooseChild_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_ChooseChild_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_ChooseChild_Statics::NewProp_OptionIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_ChooseChild_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Control" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "ChooseChild has been deprecated in favour of ChooseOption" },
		{ "ModuleRelativePath", "Public/DlgContext.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_ChooseChild_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "ChooseChild", nullptr, nullptr, sizeof(DlgContext_eventChooseChild_Parms), Z_Construct_UFunction_UDlgContext_ChooseChild_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_ChooseChild_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_ChooseChild_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_ChooseChild_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_ChooseChild()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgContext_ChooseChild_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_ChooseChildBasedOnAllOptionIndex_Statics
	{
		struct DlgContext_eventChooseChildBasedOnAllOptionIndex_Parms
		{
			int32 Index;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDlgContext_ChooseChildBasedOnAllOptionIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgContext_eventChooseChildBasedOnAllOptionIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDlgContext_ChooseChildBasedOnAllOptionIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DlgContext_eventChooseChildBasedOnAllOptionIndex_Parms), &Z_Construct_UFunction_UDlgContext_ChooseChildBasedOnAllOptionIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDlgContext_ChooseChildBasedOnAllOptionIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgContext_eventChooseChildBasedOnAllOptionIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_ChooseChildBasedOnAllOptionIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_ChooseChildBasedOnAllOptionIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_ChooseChildBasedOnAllOptionIndex_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_ChooseChildBasedOnAllOptionIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Control|All" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "ChooseChildBasedOnAllOptionIndex has been deprecated in Favour of ChooseOptionBasedOnAllOptionIndex" },
		{ "ModuleRelativePath", "Public/DlgContext.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_ChooseChildBasedOnAllOptionIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "ChooseChildBasedOnAllOptionIndex", nullptr, nullptr, sizeof(DlgContext_eventChooseChildBasedOnAllOptionIndex_Parms), Z_Construct_UFunction_UDlgContext_ChooseChildBasedOnAllOptionIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_ChooseChildBasedOnAllOptionIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_ChooseChildBasedOnAllOptionIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_ChooseChildBasedOnAllOptionIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_ChooseChildBasedOnAllOptionIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgContext_ChooseChildBasedOnAllOptionIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_ChooseOption_Statics
	{
		struct DlgContext_eventChooseOption_Parms
		{
			int32 OptionIndex;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OptionIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDlgContext_ChooseOption_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgContext_eventChooseOption_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDlgContext_ChooseOption_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DlgContext_eventChooseOption_Parms), &Z_Construct_UFunction_UDlgContext_ChooseOption_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDlgContext_ChooseOption_Statics::NewProp_OptionIndex = { "OptionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgContext_eventChooseOption_Parms, OptionIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_ChooseOption_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_ChooseOption_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_ChooseOption_Statics::NewProp_OptionIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_ChooseOption_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Control" },
		{ "Comment", "/**\n\x09* Chooses the option with index OptionIndex of the active node index and it enters that node.\n\x09* Typically called based on user input.\n\x09* NOTICE: If the return value is false the dialogue is over and the context should be dropped\n\x09*\n\x09* @return true if the dialogue did not end, false otherwise\n\x09*/" },
		{ "ModuleRelativePath", "Public/DlgContext.h" },
		{ "ToolTip", "Chooses the option with index OptionIndex of the active node index and it enters that node.\nTypically called based on user input.\nNOTICE: If the return value is false the dialogue is over and the context should be dropped\n\n@return true if the dialogue did not end, false otherwise" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_ChooseOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "ChooseOption", nullptr, nullptr, sizeof(DlgContext_eventChooseOption_Parms), Z_Construct_UFunction_UDlgContext_ChooseOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_ChooseOption_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_ChooseOption_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_ChooseOption_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_ChooseOption()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgContext_ChooseOption_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_ChooseOptionBasedOnAllOptionIndex_Statics
	{
		struct DlgContext_eventChooseOptionBasedOnAllOptionIndex_Parms
		{
			int32 Index;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDlgContext_ChooseOptionBasedOnAllOptionIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgContext_eventChooseOptionBasedOnAllOptionIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDlgContext_ChooseOptionBasedOnAllOptionIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DlgContext_eventChooseOptionBasedOnAllOptionIndex_Parms), &Z_Construct_UFunction_UDlgContext_ChooseOptionBasedOnAllOptionIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDlgContext_ChooseOptionBasedOnAllOptionIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgContext_eventChooseOptionBasedOnAllOptionIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_ChooseOptionBasedOnAllOptionIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_ChooseOptionBasedOnAllOptionIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_ChooseOptionBasedOnAllOptionIndex_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_ChooseOptionBasedOnAllOptionIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Control|All" },
		{ "Comment", "/**\n\x09 *  Exactly as ChooseChild but expects an index from the AllOptions array\n\x09 *  If the index is invalid or the selected edge is not satisfied the call fails\n\x09 */" },
		{ "ModuleRelativePath", "Public/DlgContext.h" },
		{ "ToolTip", "Exactly as ChooseChild but expects an index from the AllOptions array\nIf the index is invalid or the selected edge is not satisfied the call fails" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_ChooseOptionBasedOnAllOptionIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "ChooseOptionBasedOnAllOptionIndex", nullptr, nullptr, sizeof(DlgContext_eventChooseOptionBasedOnAllOptionIndex_Parms), Z_Construct_UFunction_UDlgContext_ChooseOptionBasedOnAllOptionIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_ChooseOptionBasedOnAllOptionIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_ChooseOptionBasedOnAllOptionIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_ChooseOptionBasedOnAllOptionIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_ChooseOptionBasedOnAllOptionIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgContext_ChooseOptionBasedOnAllOptionIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_ChooseSpeechSequenceOptionFromReplicated_Statics
	{
		struct DlgContext_eventChooseSpeechSequenceOptionFromReplicated_Parms
		{
			int32 OptionIndex;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OptionIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDlgContext_ChooseSpeechSequenceOptionFromReplicated_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgContext_eventChooseSpeechSequenceOptionFromReplicated_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDlgContext_ChooseSpeechSequenceOptionFromReplicated_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DlgContext_eventChooseSpeechSequenceOptionFromReplicated_Parms), &Z_Construct_UFunction_UDlgContext_ChooseSpeechSequenceOptionFromReplicated_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDlgContext_ChooseSpeechSequenceOptionFromReplicated_Statics::NewProp_OptionIndex = { "OptionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgContext_eventChooseSpeechSequenceOptionFromReplicated_Parms, OptionIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_ChooseSpeechSequenceOptionFromReplicated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_ChooseSpeechSequenceOptionFromReplicated_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_ChooseSpeechSequenceOptionFromReplicated_Statics::NewProp_OptionIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_ChooseSpeechSequenceOptionFromReplicated_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Control" },
		{ "Comment", "/**\n\x09 * Chooses the option with OptionIndex that is replicated\n\x09 * NOTE: the ActiveNodeIndex must be a speech sequence node, otherwise the dialogue will end\n\x09 *\n\x09 * @return true if the dialogue did not end, false otherwise\n\x09 */" },
		{ "ModuleRelativePath", "Public/DlgContext.h" },
		{ "ToolTip", "Chooses the option with OptionIndex that is replicated\nNOTE: the ActiveNodeIndex must be a speech sequence node, otherwise the dialogue will end\n\n@return true if the dialogue did not end, false otherwise" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_ChooseSpeechSequenceOptionFromReplicated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "ChooseSpeechSequenceOptionFromReplicated", nullptr, nullptr, sizeof(DlgContext_eventChooseSpeechSequenceOptionFromReplicated_Parms), Z_Construct_UFunction_UDlgContext_ChooseSpeechSequenceOptionFromReplicated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_ChooseSpeechSequenceOptionFromReplicated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_ChooseSpeechSequenceOptionFromReplicated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_ChooseSpeechSequenceOptionFromReplicated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_ChooseSpeechSequenceOptionFromReplicated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgContext_ChooseSpeechSequenceOptionFromReplicated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_GetActiveNodeData_Statics
	{
		struct DlgContext_eventGetActiveNodeData_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgContext_GetActiveNodeData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgContext_eventGetActiveNodeData_Parms, ReturnValue), Z_Construct_UClass_UDlgNodeData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_GetActiveNodeData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetActiveNodeData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetActiveNodeData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|ActiveNode" },
		{ "ModuleRelativePath", "Public/DlgContext.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_GetActiveNodeData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "GetActiveNodeData", nullptr, nullptr, sizeof(DlgContext_eventGetActiveNodeData_Parms), Z_Construct_UFunction_UDlgContext_GetActiveNodeData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetActiveNodeData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetActiveNodeData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetActiveNodeData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_GetActiveNodeData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgContext_GetActiveNodeData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_GetActiveNodeGenericData_Statics
	{
		struct DlgContext_eventGetActiveNodeGenericData_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgContext_GetActiveNodeGenericData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgContext_eventGetActiveNodeGenericData_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_GetActiveNodeGenericData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetActiveNodeGenericData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetActiveNodeGenericData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|ActiveNode" },
		{ "ModuleRelativePath", "Public/DlgContext.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_GetActiveNodeGenericData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "GetActiveNodeGenericData", nullptr, nullptr, sizeof(DlgContext_eventGetActiveNodeGenericData_Parms), Z_Construct_UFunction_UDlgContext_GetActiveNodeGenericData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetActiveNodeGenericData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetActiveNodeGenericData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetActiveNodeGenericData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_GetActiveNodeGenericData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgContext_GetActiveNodeGenericData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_GetActiveNodeGUID_Statics
	{
		struct DlgContext_eventGetActiveNodeGUID_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDlgContext_GetActiveNodeGUID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgContext_eventGetActiveNodeGUID_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_GetActiveNodeGUID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetActiveNodeGUID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetActiveNodeGUID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|ActiveNode" },
		{ "ModuleRelativePath", "Public/DlgContext.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_GetActiveNodeGUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "GetActiveNodeGUID", nullptr, nullptr, sizeof(DlgContext_eventGetActiveNodeGUID_Parms), Z_Construct_UFunction_UDlgContext_GetActiveNodeGUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetActiveNodeGUID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetActiveNodeGUID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetActiveNodeGUID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_GetActiveNodeGUID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgContext_GetActiveNodeGUID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_GetActiveNodeIndex_Statics
	{
		struct DlgContext_eventGetActiveNodeIndex_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDlgContext_GetActiveNodeIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgContext_eventGetActiveNodeIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_GetActiveNodeIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetActiveNodeIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetActiveNodeIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|ActiveNode" },
		{ "ModuleRelativePath", "Public/DlgContext.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_GetActiveNodeIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "GetActiveNodeIndex", nullptr, nullptr, sizeof(DlgContext_eventGetActiveNodeIndex_Parms), Z_Construct_UFunction_UDlgContext_GetActiveNodeIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetActiveNodeIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetActiveNodeIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetActiveNodeIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_GetActiveNodeIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgContext_GetActiveNodeIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipant_Statics
	{
		struct DlgContext_eventGetActiveNodeParticipant_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipant_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgContext_eventGetActiveNodeParticipant_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipant_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipant_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipant_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|ActiveNode" },
		{ "Comment", "// Gets the Object associated with the active node participant name (owner name).\n" },
		{ "ModuleRelativePath", "Public/DlgContext.h" },
		{ "ToolTip", "Gets the Object associated with the active node participant name (owner name)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipant_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "GetActiveNodeParticipant", nullptr, nullptr, sizeof(DlgContext_eventGetActiveNodeParticipant_Parms), Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipant_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipant_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipant_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipant_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipant()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipant_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantDisplayName_Statics
	{
		struct DlgContext_eventGetActiveNodeParticipantDisplayName_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgContext_eventGetActiveNodeParticipantDisplayName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantDisplayName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantDisplayName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantDisplayName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|ActiveNode" },
		{ "Comment", "// Gets the active participant display name\n" },
		{ "ModuleRelativePath", "Public/DlgContext.h" },
		{ "ToolTip", "Gets the active participant display name" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "GetActiveNodeParticipantDisplayName", nullptr, nullptr, sizeof(DlgContext_eventGetActiveNodeParticipantDisplayName_Parms), Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantDisplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantDisplayName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantIcon_Statics
	{
		struct DlgContext_eventGetActiveNodeParticipantIcon_Parms
		{
			UTexture2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantIcon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgContext_eventGetActiveNodeParticipantIcon_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantIcon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantIcon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantIcon_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|ActiveNode" },
		{ "Comment", "// Gets the Icon associated with the active node participant name (owner name).\n" },
		{ "ModuleRelativePath", "Public/DlgContext.h" },
		{ "ToolTip", "Gets the Icon associated with the active node participant name (owner name)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "GetActiveNodeParticipantIcon", nullptr, nullptr, sizeof(DlgContext_eventGetActiveNodeParticipantIcon_Parms), Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantIcon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantIcon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantIcon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantIcon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantIcon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantName_Statics
	{
		struct DlgContext_eventGetActiveNodeParticipantName_Parms
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
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgContext_eventGetActiveNodeParticipantName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|ActiveNode" },
		{ "Comment", "// Gets the active node participant name (owner name).\n" },
		{ "ModuleRelativePath", "Public/DlgContext.h" },
		{ "ToolTip", "Gets the active node participant name (owner name)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "GetActiveNodeParticipantName", nullptr, nullptr, sizeof(DlgContext_eventGetActiveNodeParticipantName_Parms), Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_GetActiveNodeSpeakerState_Statics
	{
		struct DlgContext_eventGetActiveNodeSpeakerState_Parms
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
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgContext_GetActiveNodeSpeakerState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgContext_eventGetActiveNodeSpeakerState_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_GetActiveNodeSpeakerState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetActiveNodeSpeakerState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetActiveNodeSpeakerState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|ActiveNode" },
		{ "Comment", "// Gets the SpeakerState of the active node index\n" },
		{ "ModuleRelativePath", "Public/DlgContext.h" },
		{ "ToolTip", "Gets the SpeakerState of the active node index" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_GetActiveNodeSpeakerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "GetActiveNodeSpeakerState", nullptr, nullptr, sizeof(DlgContext_eventGetActiveNodeSpeakerState_Parms), Z_Construct_UFunction_UDlgContext_GetActiveNodeSpeakerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetActiveNodeSpeakerState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetActiveNodeSpeakerState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetActiveNodeSpeakerState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_GetActiveNodeSpeakerState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgContext_GetActiveNodeSpeakerState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_GetActiveNodeText_Statics
	{
		struct DlgContext_eventGetActiveNodeText_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetActiveNodeText_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDlgContext_GetActiveNodeText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgContext_eventGetActiveNodeText_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetActiveNodeText_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetActiveNodeText_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_GetActiveNodeText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetActiveNodeText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetActiveNodeText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|ActiveNode" },
		{ "Comment", "// Gets the Text of the active node index\n" },
		{ "ModuleRelativePath", "Public/DlgContext.h" },
		{ "ToolTip", "Gets the Text of the active node index" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_GetActiveNodeText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "GetActiveNodeText", nullptr, nullptr, sizeof(DlgContext_eventGetActiveNodeText_Parms), Z_Construct_UFunction_UDlgContext_GetActiveNodeText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetActiveNodeText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetActiveNodeText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetActiveNodeText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_GetActiveNodeText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgContext_GetActiveNodeText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceDialogueWave_Statics
	{
		struct DlgContext_eventGetActiveNodeVoiceDialogueWave_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceDialogueWave_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgContext_eventGetActiveNodeVoiceDialogueWave_Parms, ReturnValue), Z_Construct_UClass_UDialogueWave_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceDialogueWave_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceDialogueWave_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceDialogueWave_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|ActiveNode" },
		{ "Comment", "// Gets the Voice as a Dialogue Wave of the active node index\n" },
		{ "ModuleRelativePath", "Public/DlgContext.h" },
		{ "ToolTip", "Gets the Voice as a Dialogue Wave of the active node index" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceDialogueWave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "GetActiveNodeVoiceDialogueWave", nullptr, nullptr, sizeof(DlgContext_eventGetActiveNodeVoiceDialogueWave_Parms), Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceDialogueWave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceDialogueWave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceDialogueWave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceDialogueWave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceDialogueWave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceDialogueWave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceSoundBase_Statics
	{
		struct DlgContext_eventGetActiveNodeVoiceSoundBase_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceSoundBase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgContext_eventGetActiveNodeVoiceSoundBase_Parms, ReturnValue), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceSoundBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceSoundBase_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceSoundBase_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|ActiveNode" },
		{ "Comment", "// Same as GetActiveNodeVoiceSoundWave but this just returns the variable without casting it\n// to a USoundWave\n" },
		{ "ModuleRelativePath", "Public/DlgContext.h" },
		{ "ToolTip", "Same as GetActiveNodeVoiceSoundWave but this just returns the variable without casting it\nto a USoundWave" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceSoundBase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "GetActiveNodeVoiceSoundBase", nullptr, nullptr, sizeof(DlgContext_eventGetActiveNodeVoiceSoundBase_Parms), Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceSoundBase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceSoundBase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceSoundBase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceSoundBase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceSoundBase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceSoundBase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceSoundWave_Statics
	{
		struct DlgContext_eventGetActiveNodeVoiceSoundWave_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceSoundWave_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgContext_eventGetActiveNodeVoiceSoundWave_Parms, ReturnValue), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceSoundWave_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceSoundWave_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceSoundWave_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|ActiveNode" },
		{ "Comment", "// Gets the Voice as a Sound Wave of the active node index\n// This will get cast to USoundWave from a USoundBase\n" },
		{ "ModuleRelativePath", "Public/DlgContext.h" },
		{ "ToolTip", "Gets the Voice as a Sound Wave of the active node index\nThis will get cast to USoundWave from a USoundBase" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceSoundWave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "GetActiveNodeVoiceSoundWave", nullptr, nullptr, sizeof(DlgContext_eventGetActiveNodeVoiceSoundWave_Parms), Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceSoundWave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceSoundWave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceSoundWave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceSoundWave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceSoundWave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceSoundWave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_GetAllOptionsArray_Statics
	{
		struct DlgContext_eventGetAllOptionsArray_Parms
		{
			TArray<FDlgEdgeData> ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetAllOptionsArray_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDlgContext_GetAllOptionsArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008008000582, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgContext_eventGetAllOptionsArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetAllOptionsArray_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetAllOptionsArray_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDlgContext_GetAllOptionsArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDlgEdgeData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_GetAllOptionsArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetAllOptionsArray_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetAllOptionsArray_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetAllOptionsArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Options|All" },
		{ "Comment", "// Gets all edges (both satisfied and unsatisfied)\n" },
		{ "ModuleRelativePath", "Public/DlgContext.h" },
		{ "ToolTip", "Gets all edges (both satisfied and unsatisfied)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_GetAllOptionsArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "GetAllOptionsArray", nullptr, nullptr, sizeof(DlgContext_eventGetAllOptionsArray_Parms), Z_Construct_UFunction_UDlgContext_GetAllOptionsArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetAllOptionsArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetAllOptionsArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetAllOptionsArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_GetAllOptionsArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgContext_GetAllOptionsArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_GetAllOptionsNum_Statics
	{
		struct DlgContext_eventGetAllOptionsNum_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDlgContext_GetAllOptionsNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgContext_eventGetAllOptionsNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_GetAllOptionsNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetAllOptionsNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetAllOptionsNum_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Options|All" },
		{ "Comment", "// Gets the number of options (both satisfied and unsatisfied ones are counted)\n" },
		{ "ModuleRelativePath", "Public/DlgContext.h" },
		{ "ToolTip", "Gets the number of options (both satisfied and unsatisfied ones are counted)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_GetAllOptionsNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "GetAllOptionsNum", nullptr, nullptr, sizeof(DlgContext_eventGetAllOptionsNum_Parms), Z_Construct_UFunction_UDlgContext_GetAllOptionsNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetAllOptionsNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetAllOptionsNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetAllOptionsNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_GetAllOptionsNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgContext_GetAllOptionsNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_GetContextString_Statics
	{
		struct DlgContext_eventGetContextString_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDlgContext_GetContextString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgContext_eventGetContextString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_GetContextString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetContextString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetContextString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Context" },
		{ "ModuleRelativePath", "Public/DlgContext.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_GetContextString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "GetContextString", nullptr, nullptr, sizeof(DlgContext_eventGetContextString_Parms), Z_Construct_UFunction_UDlgContext_GetContextString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetContextString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetContextString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetContextString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_GetContextString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgContext_GetContextString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_GetDialogue_Statics
	{
		struct DlgContext_eventGetDialogue_Parms
		{
			UDlgDialogue* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgContext_GetDialogue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgContext_eventGetDialogue_Parms, ReturnValue), Z_Construct_UClass_UDlgDialogue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_GetDialogue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetDialogue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetDialogue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Data" },
		{ "Comment", "// Helper methods to get some Dialogue properties\n" },
		{ "ModuleRelativePath", "Public/DlgContext.h" },
		{ "ToolTip", "Helper methods to get some Dialogue properties" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_GetDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "GetDialogue", nullptr, nullptr, sizeof(DlgContext_eventGetDialogue_Parms), Z_Construct_UFunction_UDlgContext_GetDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetDialogue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetDialogue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetDialogue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_GetDialogue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgContext_GetDialogue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_GetDialogueGUID_Statics
	{
		struct DlgContext_eventGetDialogueGUID_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDlgContext_GetDialogueGUID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgContext_eventGetDialogueGUID_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_GetDialogueGUID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetDialogueGUID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetDialogueGUID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Data" },
		{ "ModuleRelativePath", "Public/DlgContext.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_GetDialogueGUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "GetDialogueGUID", nullptr, nullptr, sizeof(DlgContext_eventGetDialogueGUID_Parms), Z_Construct_UFunction_UDlgContext_GetDialogueGUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetDialogueGUID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetDialogueGUID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetDialogueGUID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_GetDialogueGUID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgContext_GetDialogueGUID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_GetDialogueName_Statics
	{
		struct DlgContext_eventGetDialogueName_Parms
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
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgContext_GetDialogueName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgContext_eventGetDialogueName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_GetDialogueName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetDialogueName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetDialogueName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Data" },
		{ "ModuleRelativePath", "Public/DlgContext.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_GetDialogueName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "GetDialogueName", nullptr, nullptr, sizeof(DlgContext_eventGetDialogueName_Parms), Z_Construct_UFunction_UDlgContext_GetDialogueName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetDialogueName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetDialogueName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetDialogueName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_GetDialogueName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgContext_GetDialogueName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_GetDialoguePathName_Statics
	{
		struct DlgContext_eventGetDialoguePathName_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDlgContext_GetDialoguePathName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgContext_eventGetDialoguePathName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_GetDialoguePathName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetDialoguePathName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetDialoguePathName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Data" },
		{ "ModuleRelativePath", "Public/DlgContext.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_GetDialoguePathName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "GetDialoguePathName", nullptr, nullptr, sizeof(DlgContext_eventGetDialoguePathName_Parms), Z_Construct_UFunction_UDlgContext_GetDialoguePathName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetDialoguePathName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetDialoguePathName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetDialoguePathName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_GetDialoguePathName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgContext_GetDialoguePathName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_GetMutableActiveNode_Statics
	{
		struct DlgContext_eventGetMutableActiveNode_Parms
		{
			UDlgNode* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgContext_GetMutableActiveNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgContext_eventGetMutableActiveNode_Parms, ReturnValue), Z_Construct_UClass_UDlgNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_GetMutableActiveNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetMutableActiveNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetMutableActiveNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|ActiveNode" },
		{ "DisplayName", "Get Active Node" },
		{ "ModuleRelativePath", "Public/DlgContext.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_GetMutableActiveNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "GetMutableActiveNode", nullptr, nullptr, sizeof(DlgContext_eventGetMutableActiveNode_Parms), Z_Construct_UFunction_UDlgContext_GetMutableActiveNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetMutableActiveNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetMutableActiveNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetMutableActiveNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_GetMutableActiveNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgContext_GetMutableActiveNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_GetMutableActiveNodeAsSpeechSequence_Statics
	{
		struct DlgContext_eventGetMutableActiveNodeAsSpeechSequence_Parms
		{
			UDlgNode_SpeechSequence* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgContext_GetMutableActiveNodeAsSpeechSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgContext_eventGetMutableActiveNodeAsSpeechSequence_Parms, ReturnValue), Z_Construct_UClass_UDlgNode_SpeechSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_GetMutableActiveNodeAsSpeechSequence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetMutableActiveNodeAsSpeechSequence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetMutableActiveNodeAsSpeechSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|ActiveNode" },
		{ "Comment", "// Just a helper method for GetActiveNode that casts to UDlgNode_SpeechSequence\n" },
		{ "DisplayName", "Get Active Node As Speech Sequence" },
		{ "ModuleRelativePath", "Public/DlgContext.h" },
		{ "ToolTip", "Just a helper method for GetActiveNode that casts to UDlgNode_SpeechSequence" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_GetMutableActiveNodeAsSpeechSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "GetMutableActiveNodeAsSpeechSequence", nullptr, nullptr, sizeof(DlgContext_eventGetMutableActiveNodeAsSpeechSequence_Parms), Z_Construct_UFunction_UDlgContext_GetMutableActiveNodeAsSpeechSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetMutableActiveNodeAsSpeechSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetMutableActiveNodeAsSpeechSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetMutableActiveNodeAsSpeechSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_GetMutableActiveNodeAsSpeechSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgContext_GetMutableActiveNodeAsSpeechSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_GetMutableNodeFromGUID_Statics
	{
		struct DlgContext_eventGetMutableNodeFromGUID_Parms
		{
			FGuid NodeGUID;
			UDlgNode* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeGUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NodeGUID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgContext_GetMutableNodeFromGUID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgContext_eventGetMutableNodeFromGUID_Parms, ReturnValue), Z_Construct_UClass_UDlgNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetMutableNodeFromGUID_Statics::NewProp_NodeGUID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDlgContext_GetMutableNodeFromGUID_Statics::NewProp_NodeGUID = { "NodeGUID", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgContext_eventGetMutableNodeFromGUID_Parms, NodeGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetMutableNodeFromGUID_Statics::NewProp_NodeGUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetMutableNodeFromGUID_Statics::NewProp_NodeGUID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_GetMutableNodeFromGUID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetMutableNodeFromGUID_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetMutableNodeFromGUID_Statics::NewProp_NodeGUID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetMutableNodeFromGUID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Data" },
		{ "DisplayName", "Get Node From GUID" },
		{ "ModuleRelativePath", "Public/DlgContext.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_GetMutableNodeFromGUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "GetMutableNodeFromGUID", nullptr, nullptr, sizeof(DlgContext_eventGetMutableNodeFromGUID_Parms), Z_Construct_UFunction_UDlgContext_GetMutableNodeFromGUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetMutableNodeFromGUID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetMutableNodeFromGUID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetMutableNodeFromGUID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_GetMutableNodeFromGUID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgContext_GetMutableNodeFromGUID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_GetMutableNodeFromIndex_Statics
	{
		struct DlgContext_eventGetMutableNodeFromIndex_Parms
		{
			int32 NodeIndex;
			UDlgNode* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NodeIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgContext_GetMutableNodeFromIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgContext_eventGetMutableNodeFromIndex_Parms, ReturnValue), Z_Construct_UClass_UDlgNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDlgContext_GetMutableNodeFromIndex_Statics::NewProp_NodeIndex = { "NodeIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgContext_eventGetMutableNodeFromIndex_Parms, NodeIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_GetMutableNodeFromIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetMutableNodeFromIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetMutableNodeFromIndex_Statics::NewProp_NodeIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetMutableNodeFromIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Data" },
		{ "Comment", "// Gets the Node at the NodeIndex index\n" },
		{ "DisplayName", "Get Node From Index" },
		{ "ModuleRelativePath", "Public/DlgContext.h" },
		{ "ToolTip", "Gets the Node at the NodeIndex index" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_GetMutableNodeFromIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "GetMutableNodeFromIndex", nullptr, nullptr, sizeof(DlgContext_eventGetMutableNodeFromIndex_Parms), Z_Construct_UFunction_UDlgContext_GetMutableNodeFromIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetMutableNodeFromIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetMutableNodeFromIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetMutableNodeFromIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_GetMutableNodeFromIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgContext_GetMutableNodeFromIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_GetMutableParticipant_Statics
	{
		struct DlgContext_eventGetMutableParticipant_Parms
		{
			FName ParticipantName;
			UObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgContext_GetMutableParticipant_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgContext_eventGetMutableParticipant_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgContext_GetMutableParticipant_Statics::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgContext_eventGetMutableParticipant_Parms, ParticipantName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_GetMutableParticipant_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetMutableParticipant_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetMutableParticipant_Statics::NewProp_ParticipantName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetMutableParticipant_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Data" },
		{ "DisplayName", "Get Participant" },
		{ "ModuleRelativePath", "Public/DlgContext.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_GetMutableParticipant_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "GetMutableParticipant", nullptr, nullptr, sizeof(DlgContext_eventGetMutableParticipant_Parms), Z_Construct_UFunction_UDlgContext_GetMutableParticipant_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetMutableParticipant_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetMutableParticipant_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetMutableParticipant_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_GetMutableParticipant()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgContext_GetMutableParticipant_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_GetNodeGUIDForIndex_Statics
	{
		struct DlgContext_eventGetNodeGUIDForIndex_Parms
		{
			int32 NodeIndex;
			FGuid ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NodeIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDlgContext_GetNodeGUIDForIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgContext_eventGetNodeGUIDForIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDlgContext_GetNodeGUIDForIndex_Statics::NewProp_NodeIndex = { "NodeIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgContext_eventGetNodeGUIDForIndex_Parms, NodeIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_GetNodeGUIDForIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetNodeGUIDForIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetNodeGUIDForIndex_Statics::NewProp_NodeIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetNodeGUIDForIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Data" },
		{ "Comment", "// Gets the GUID for the Node at NodeIndex\n" },
		{ "DisplayName", "Get Node GUID For Index" },
		{ "ModuleRelativePath", "Public/DlgContext.h" },
		{ "ToolTip", "Gets the GUID for the Node at NodeIndex" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_GetNodeGUIDForIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "GetNodeGUIDForIndex", nullptr, nullptr, sizeof(DlgContext_eventGetNodeGUIDForIndex_Parms), Z_Construct_UFunction_UDlgContext_GetNodeGUIDForIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetNodeGUIDForIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetNodeGUIDForIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetNodeGUIDForIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_GetNodeGUIDForIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgContext_GetNodeGUIDForIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_GetNodeIndexForGUID_Statics
	{
		struct DlgContext_eventGetNodeIndexForGUID_Parms
		{
			FGuid NodeGUID;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeGUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NodeGUID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDlgContext_GetNodeIndexForGUID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgContext_eventGetNodeIndexForGUID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetNodeIndexForGUID_Statics::NewProp_NodeGUID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDlgContext_GetNodeIndexForGUID_Statics::NewProp_NodeGUID = { "NodeGUID", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgContext_eventGetNodeIndexForGUID_Parms, NodeGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetNodeIndexForGUID_Statics::NewProp_NodeGUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetNodeIndexForGUID_Statics::NewProp_NodeGUID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_GetNodeIndexForGUID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetNodeIndexForGUID_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetNodeIndexForGUID_Statics::NewProp_NodeGUID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetNodeIndexForGUID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Data" },
		{ "Comment", "// Gets the corresponding Node Index for the supplied NodeGUID\n// Returns -1 (INDEX_NONE) if the Node GUID does not exist.\n" },
		{ "DisplayName", "Get Node Index For GUID" },
		{ "ModuleRelativePath", "Public/DlgContext.h" },
		{ "ToolTip", "Gets the corresponding Node Index for the supplied NodeGUID\nReturns -1 (INDEX_NONE) if the Node GUID does not exist." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_GetNodeIndexForGUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "GetNodeIndexForGUID", nullptr, nullptr, sizeof(DlgContext_eventGetNodeIndexForGUID_Parms), Z_Construct_UFunction_UDlgContext_GetNodeIndexForGUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetNodeIndexForGUID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetNodeIndexForGUID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetNodeIndexForGUID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_GetNodeIndexForGUID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgContext_GetNodeIndexForGUID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_GetOption_Statics
	{
		struct DlgContext_eventGetOption_Parms
		{
			int32 OptionIndex;
			FDlgEdge ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OptionIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetOption_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDlgContext_GetOption_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008008000582, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgContext_eventGetOption_Parms, ReturnValue), Z_Construct_UScriptStruct_FDlgEdge, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetOption_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetOption_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDlgContext_GetOption_Statics::NewProp_OptionIndex = { "OptionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgContext_eventGetOption_Parms, OptionIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_GetOption_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetOption_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetOption_Statics::NewProp_OptionIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetOption_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Options|Satisfied" },
		{ "Comment", "// Gets the edge representing a player option from the satisfied options\n" },
		{ "ModuleRelativePath", "Public/DlgContext.h" },
		{ "ToolTip", "Gets the edge representing a player option from the satisfied options" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_GetOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "GetOption", nullptr, nullptr, sizeof(DlgContext_eventGetOption_Parms), Z_Construct_UFunction_UDlgContext_GetOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetOption_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetOption_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetOption_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_GetOption()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgContext_GetOption_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_GetOptionEnterConditions_Statics
	{
		struct DlgContext_eventGetOptionEnterConditions_Parms
		{
			int32 OptionIndex;
			TArray<FDlgCondition> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OptionIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetOptionEnterConditions_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDlgContext_GetOptionEnterConditions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008008000582, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgContext_eventGetOptionEnterConditions_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetOptionEnterConditions_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetOptionEnterConditions_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDlgContext_GetOptionEnterConditions_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDlgCondition, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDlgContext_GetOptionEnterConditions_Statics::NewProp_OptionIndex = { "OptionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgContext_eventGetOptionEnterConditions_Parms, OptionIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_GetOptionEnterConditions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetOptionEnterConditions_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetOptionEnterConditions_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetOptionEnterConditions_Statics::NewProp_OptionIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetOptionEnterConditions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Options|Satisfied" },
		{ "Comment", "// Gets the Enter Conditions of the (satisfied) edge with index OptionIndex\n// NOTE: This is just a helper method, you could have called GetOption\n" },
		{ "ModuleRelativePath", "Public/DlgContext.h" },
		{ "ToolTip", "Gets the Enter Conditions of the (satisfied) edge with index OptionIndex\nNOTE: This is just a helper method, you could have called GetOption" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_GetOptionEnterConditions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "GetOptionEnterConditions", nullptr, nullptr, sizeof(DlgContext_eventGetOptionEnterConditions_Parms), Z_Construct_UFunction_UDlgContext_GetOptionEnterConditions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetOptionEnterConditions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetOptionEnterConditions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetOptionEnterConditions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_GetOptionEnterConditions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgContext_GetOptionEnterConditions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_GetOptionFromAll_Statics
	{
		struct DlgContext_eventGetOptionFromAll_Parms
		{
			int32 Index;
			FDlgEdgeData ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetOptionFromAll_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDlgContext_GetOptionFromAll_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008008000582, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgContext_eventGetOptionFromAll_Parms, ReturnValue), Z_Construct_UScriptStruct_FDlgEdgeData, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetOptionFromAll_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetOptionFromAll_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDlgContext_GetOptionFromAll_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgContext_eventGetOptionFromAll_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_GetOptionFromAll_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetOptionFromAll_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetOptionFromAll_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetOptionFromAll_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Options|All" },
		{ "Comment", "// Gets the edge representing a player option from all options\n" },
		{ "ModuleRelativePath", "Public/DlgContext.h" },
		{ "ToolTip", "Gets the edge representing a player option from all options" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_GetOptionFromAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "GetOptionFromAll", nullptr, nullptr, sizeof(DlgContext_eventGetOptionFromAll_Parms), Z_Construct_UFunction_UDlgContext_GetOptionFromAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetOptionFromAll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetOptionFromAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetOptionFromAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_GetOptionFromAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgContext_GetOptionFromAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_GetOptionsArray_Statics
	{
		struct DlgContext_eventGetOptionsArray_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetOptionsArray_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDlgContext_GetOptionsArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008008000582, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgContext_eventGetOptionsArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetOptionsArray_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetOptionsArray_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDlgContext_GetOptionsArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDlgEdge, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_GetOptionsArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetOptionsArray_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetOptionsArray_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetOptionsArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Options|Satisfied" },
		{ "Comment", "// Gets all satisfied edges\n" },
		{ "ModuleRelativePath", "Public/DlgContext.h" },
		{ "ToolTip", "Gets all satisfied edges" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_GetOptionsArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "GetOptionsArray", nullptr, nullptr, sizeof(DlgContext_eventGetOptionsArray_Parms), Z_Construct_UFunction_UDlgContext_GetOptionsArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetOptionsArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetOptionsArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetOptionsArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_GetOptionsArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgContext_GetOptionsArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_GetOptionsNum_Statics
	{
		struct DlgContext_eventGetOptionsNum_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDlgContext_GetOptionsNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgContext_eventGetOptionsNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_GetOptionsNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetOptionsNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetOptionsNum_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Options|Satisfied" },
		{ "Comment", "// Gets the number of options with satisfied conditions (number of options)\n" },
		{ "ModuleRelativePath", "Public/DlgContext.h" },
		{ "ToolTip", "Gets the number of options with satisfied conditions (number of options)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_GetOptionsNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "GetOptionsNum", nullptr, nullptr, sizeof(DlgContext_eventGetOptionsNum_Parms), Z_Construct_UFunction_UDlgContext_GetOptionsNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetOptionsNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetOptionsNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetOptionsNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_GetOptionsNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgContext_GetOptionsNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_GetOptionSpeakerState_Statics
	{
		struct DlgContext_eventGetOptionSpeakerState_Parms
		{
			int32 OptionIndex;
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OptionIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgContext_GetOptionSpeakerState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgContext_eventGetOptionSpeakerState_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDlgContext_GetOptionSpeakerState_Statics::NewProp_OptionIndex = { "OptionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgContext_eventGetOptionSpeakerState_Parms, OptionIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_GetOptionSpeakerState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetOptionSpeakerState_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetOptionSpeakerState_Statics::NewProp_OptionIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetOptionSpeakerState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Options|Satisfied" },
		{ "Comment", "// Gets the SpeakerState of the (satisfied) edge with index OptionIndex\n// NOTE: This is just a helper method, you could have called GetOption\n" },
		{ "ModuleRelativePath", "Public/DlgContext.h" },
		{ "ToolTip", "Gets the SpeakerState of the (satisfied) edge with index OptionIndex\nNOTE: This is just a helper method, you could have called GetOption" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_GetOptionSpeakerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "GetOptionSpeakerState", nullptr, nullptr, sizeof(DlgContext_eventGetOptionSpeakerState_Parms), Z_Construct_UFunction_UDlgContext_GetOptionSpeakerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetOptionSpeakerState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetOptionSpeakerState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetOptionSpeakerState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_GetOptionSpeakerState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgContext_GetOptionSpeakerState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_GetOptionSpeakerStateFromAll_Statics
	{
		struct DlgContext_eventGetOptionSpeakerStateFromAll_Parms
		{
			int32 Index;
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgContext_GetOptionSpeakerStateFromAll_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgContext_eventGetOptionSpeakerStateFromAll_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDlgContext_GetOptionSpeakerStateFromAll_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgContext_eventGetOptionSpeakerStateFromAll_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_GetOptionSpeakerStateFromAll_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetOptionSpeakerStateFromAll_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetOptionSpeakerStateFromAll_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetOptionSpeakerStateFromAll_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Options|All" },
		{ "Comment", "// Gets the SpeakerState of the edge with index OptionIndex\n" },
		{ "ModuleRelativePath", "Public/DlgContext.h" },
		{ "ToolTip", "Gets the SpeakerState of the edge with index OptionIndex" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_GetOptionSpeakerStateFromAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "GetOptionSpeakerStateFromAll", nullptr, nullptr, sizeof(DlgContext_eventGetOptionSpeakerStateFromAll_Parms), Z_Construct_UFunction_UDlgContext_GetOptionSpeakerStateFromAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetOptionSpeakerStateFromAll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetOptionSpeakerStateFromAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetOptionSpeakerStateFromAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_GetOptionSpeakerStateFromAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgContext_GetOptionSpeakerStateFromAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_GetOptionText_Statics
	{
		struct DlgContext_eventGetOptionText_Parms
		{
			int32 OptionIndex;
			FText ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OptionIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetOptionText_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDlgContext_GetOptionText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgContext_eventGetOptionText_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetOptionText_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetOptionText_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDlgContext_GetOptionText_Statics::NewProp_OptionIndex = { "OptionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgContext_eventGetOptionText_Parms, OptionIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_GetOptionText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetOptionText_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetOptionText_Statics::NewProp_OptionIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetOptionText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Options|Satisfied" },
		{ "Comment", "// Gets the Text of the (satisfied) option with index OptionIndex\n// NOTE: This is just a helper method, you could have called GetOption\n" },
		{ "ModuleRelativePath", "Public/DlgContext.h" },
		{ "ToolTip", "Gets the Text of the (satisfied) option with index OptionIndex\nNOTE: This is just a helper method, you could have called GetOption" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_GetOptionText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "GetOptionText", nullptr, nullptr, sizeof(DlgContext_eventGetOptionText_Parms), Z_Construct_UFunction_UDlgContext_GetOptionText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetOptionText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetOptionText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetOptionText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_GetOptionText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgContext_GetOptionText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_GetOptionTextFromAll_Statics
	{
		struct DlgContext_eventGetOptionTextFromAll_Parms
		{
			int32 Index;
			FText ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetOptionTextFromAll_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDlgContext_GetOptionTextFromAll_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgContext_eventGetOptionTextFromAll_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetOptionTextFromAll_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetOptionTextFromAll_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDlgContext_GetOptionTextFromAll_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgContext_eventGetOptionTextFromAll_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_GetOptionTextFromAll_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetOptionTextFromAll_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetOptionTextFromAll_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetOptionTextFromAll_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Options|All" },
		{ "Comment", "// Gets the Text of an option from the all list, which includes the unsatisfied ones as well\n" },
		{ "ModuleRelativePath", "Public/DlgContext.h" },
		{ "ToolTip", "Gets the Text of an option from the all list, which includes the unsatisfied ones as well" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_GetOptionTextFromAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "GetOptionTextFromAll", nullptr, nullptr, sizeof(DlgContext_eventGetOptionTextFromAll_Parms), Z_Construct_UFunction_UDlgContext_GetOptionTextFromAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetOptionTextFromAll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetOptionTextFromAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetOptionTextFromAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_GetOptionTextFromAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgContext_GetOptionTextFromAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_GetParticipants_Statics
	{
		struct DlgContext_eventGetParticipants_Parms
		{
			TMap<FName,UObject*> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetParticipants_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UDlgContext_GetParticipants_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgContext_eventGetParticipants_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetParticipants_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetParticipants_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgContext_GetParticipants_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgContext_GetParticipants_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_GetParticipants_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetParticipants_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetParticipants_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetParticipants_Statics::NewProp_ReturnValue_ValueProp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetParticipants_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Data" },
		{ "ModuleRelativePath", "Public/DlgContext.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_GetParticipants_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "GetParticipants", nullptr, nullptr, sizeof(DlgContext_eventGetParticipants_Parms), Z_Construct_UFunction_UDlgContext_GetParticipants_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetParticipants_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetParticipants_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetParticipants_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_GetParticipants()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgContext_GetParticipants_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_GetParticipantsMap_Statics
	{
		struct DlgContext_eventGetParticipantsMap_Parms
		{
			TMap<FName,UObject*> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetParticipantsMap_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UDlgContext_GetParticipantsMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgContext_eventGetParticipantsMap_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetParticipantsMap_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetParticipantsMap_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgContext_GetParticipantsMap_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgContext_GetParticipantsMap_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_GetParticipantsMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetParticipantsMap_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetParticipantsMap_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetParticipantsMap_Statics::NewProp_ReturnValue_ValueProp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetParticipantsMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Data" },
		{ "ModuleRelativePath", "Public/DlgContext.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_GetParticipantsMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "GetParticipantsMap", nullptr, nullptr, sizeof(DlgContext_eventGetParticipantsMap_Parms), Z_Construct_UFunction_UDlgContext_GetParticipantsMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetParticipantsMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetParticipantsMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetParticipantsMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_GetParticipantsMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgContext_GetParticipantsMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_GetVisitedNodeGUIDs_Statics
	{
		struct DlgContext_eventGetVisitedNodeGUIDs_Parms
		{
			TSet<FGuid> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_ElementProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetVisitedNodeGUIDs_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UDlgContext_GetVisitedNodeGUIDs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgContext_eventGetVisitedNodeGUIDs_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetVisitedNodeGUIDs_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetVisitedNodeGUIDs_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDlgContext_GetVisitedNodeGUIDs_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_GetVisitedNodeGUIDs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetVisitedNodeGUIDs_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetVisitedNodeGUIDs_Statics::NewProp_ReturnValue_ElementProp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetVisitedNodeGUIDs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Context|History" },
		{ "Comment", "// Returns the GUIDs which were visited inside this single context. For global data check DlgMemory\n" },
		{ "ModuleRelativePath", "Public/DlgContext.h" },
		{ "ToolTip", "Returns the GUIDs which were visited inside this single context. For global data check DlgMemory" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_GetVisitedNodeGUIDs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "GetVisitedNodeGUIDs", nullptr, nullptr, sizeof(DlgContext_eventGetVisitedNodeGUIDs_Parms), Z_Construct_UFunction_UDlgContext_GetVisitedNodeGUIDs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetVisitedNodeGUIDs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetVisitedNodeGUIDs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetVisitedNodeGUIDs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_GetVisitedNodeGUIDs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgContext_GetVisitedNodeGUIDs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_GetVisitedNodeIndices_Statics
	{
		struct DlgContext_eventGetVisitedNodeIndices_Parms
		{
			TSet<int32> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue_ElementProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetVisitedNodeIndices_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UDlgContext_GetVisitedNodeIndices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgContext_eventGetVisitedNodeIndices_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetVisitedNodeIndices_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetVisitedNodeIndices_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDlgContext_GetVisitedNodeIndices_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_GetVisitedNodeIndices_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetVisitedNodeIndices_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_GetVisitedNodeIndices_Statics::NewProp_ReturnValue_ElementProp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_GetVisitedNodeIndices_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Context|History" },
		{ "Comment", "// Returns the indices which were visited inside this single context. For global data check DlgMemory\n// NOTE: You should use GetVisitedNodeGUIDs\n" },
		{ "ModuleRelativePath", "Public/DlgContext.h" },
		{ "ToolTip", "Returns the indices which were visited inside this single context. For global data check DlgMemory\nNOTE: You should use GetVisitedNodeGUIDs" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_GetVisitedNodeIndices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "GetVisitedNodeIndices", nullptr, nullptr, sizeof(DlgContext_eventGetVisitedNodeIndices_Parms), Z_Construct_UFunction_UDlgContext_GetVisitedNodeIndices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetVisitedNodeIndices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_GetVisitedNodeIndices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_GetVisitedNodeIndices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_GetVisitedNodeIndices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgContext_GetVisitedNodeIndices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_HasDialogueEnded_Statics
	{
		struct DlgContext_eventHasDialogueEnded_Parms
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
	void Z_Construct_UFunction_UDlgContext_HasDialogueEnded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgContext_eventHasDialogueEnded_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDlgContext_HasDialogueEnded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DlgContext_eventHasDialogueEnded_Parms), &Z_Construct_UFunction_UDlgContext_HasDialogueEnded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_HasDialogueEnded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_HasDialogueEnded_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_HasDialogueEnded_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Control" },
		{ "ModuleRelativePath", "Public/DlgContext.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_HasDialogueEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "HasDialogueEnded", nullptr, nullptr, sizeof(DlgContext_eventHasDialogueEnded_Parms), Z_Construct_UFunction_UDlgContext_HasDialogueEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_HasDialogueEnded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_HasDialogueEnded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_HasDialogueEnded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_HasDialogueEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgContext_HasDialogueEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_IsOptionConnectedToEndNode_Statics
	{
		struct DlgContext_eventIsOptionConnectedToEndNode_Parms
		{
			int32 Index;
			bool bIndexSkipsUnsatisfiedEdges;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bIndexSkipsUnsatisfiedEdges_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIndexSkipsUnsatisfiedEdges;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDlgContext_IsOptionConnectedToEndNode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgContext_eventIsOptionConnectedToEndNode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDlgContext_IsOptionConnectedToEndNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DlgContext_eventIsOptionConnectedToEndNode_Parms), &Z_Construct_UFunction_UDlgContext_IsOptionConnectedToEndNode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDlgContext_IsOptionConnectedToEndNode_Statics::NewProp_bIndexSkipsUnsatisfiedEdges_SetBit(void* Obj)
	{
		((DlgContext_eventIsOptionConnectedToEndNode_Parms*)Obj)->bIndexSkipsUnsatisfiedEdges = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDlgContext_IsOptionConnectedToEndNode_Statics::NewProp_bIndexSkipsUnsatisfiedEdges = { "bIndexSkipsUnsatisfiedEdges", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DlgContext_eventIsOptionConnectedToEndNode_Parms), &Z_Construct_UFunction_UDlgContext_IsOptionConnectedToEndNode_Statics::NewProp_bIndexSkipsUnsatisfiedEdges_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDlgContext_IsOptionConnectedToEndNode_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgContext_eventIsOptionConnectedToEndNode_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_IsOptionConnectedToEndNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_IsOptionConnectedToEndNode_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_IsOptionConnectedToEndNode_Statics::NewProp_bIndexSkipsUnsatisfiedEdges,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_IsOptionConnectedToEndNode_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_IsOptionConnectedToEndNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Data" },
		{ "Comment", "/**\n\x09*  Checks if the node is connected directly to an end node or not\n\x09*  Does not handle complicated logic - if the said node is a logical one it will still check that node, and not one\n\x09*  of its option\n\x09*\n\x09* @param Index  Index of the edge/player option to test\n\x09* @param bIndexSkipsUnsatisfiedEdges  Decides if the index is in the [0, GetOptionsNum()[ interval (if true), or in the [0, GetAllOptionsNum()[ (if false)\n\x09* @return true if the node is an end node\n\x09*/" },
		{ "CPP_Default_bIndexSkipsUnsatisfiedEdges", "true" },
		{ "ModuleRelativePath", "Public/DlgContext.h" },
		{ "ToolTip", "Checks if the node is connected directly to an end node or not\nDoes not handle complicated logic - if the said node is a logical one it will still check that node, and not one\nof its option\n\n@param Index  Index of the edge/player option to test\n@param bIndexSkipsUnsatisfiedEdges  Decides if the index is in the [0, GetOptionsNum()[ interval (if true), or in the [0, GetAllOptionsNum()[ (if false)\n@return true if the node is an end node" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_IsOptionConnectedToEndNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "IsOptionConnectedToEndNode", nullptr, nullptr, sizeof(DlgContext_eventIsOptionConnectedToEndNode_Parms), Z_Construct_UFunction_UDlgContext_IsOptionConnectedToEndNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_IsOptionConnectedToEndNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_IsOptionConnectedToEndNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_IsOptionConnectedToEndNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_IsOptionConnectedToEndNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgContext_IsOptionConnectedToEndNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_IsOptionConnectedToVisitedNode_Statics
	{
		struct DlgContext_eventIsOptionConnectedToVisitedNode_Parms
		{
			int32 Index;
			bool bLocalHistory;
			bool bIndexSkipsUnsatisfiedEdges;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bIndexSkipsUnsatisfiedEdges_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIndexSkipsUnsatisfiedEdges;
		static void NewProp_bLocalHistory_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLocalHistory;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDlgContext_IsOptionConnectedToVisitedNode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgContext_eventIsOptionConnectedToVisitedNode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDlgContext_IsOptionConnectedToVisitedNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DlgContext_eventIsOptionConnectedToVisitedNode_Parms), &Z_Construct_UFunction_UDlgContext_IsOptionConnectedToVisitedNode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDlgContext_IsOptionConnectedToVisitedNode_Statics::NewProp_bIndexSkipsUnsatisfiedEdges_SetBit(void* Obj)
	{
		((DlgContext_eventIsOptionConnectedToVisitedNode_Parms*)Obj)->bIndexSkipsUnsatisfiedEdges = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDlgContext_IsOptionConnectedToVisitedNode_Statics::NewProp_bIndexSkipsUnsatisfiedEdges = { "bIndexSkipsUnsatisfiedEdges", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DlgContext_eventIsOptionConnectedToVisitedNode_Parms), &Z_Construct_UFunction_UDlgContext_IsOptionConnectedToVisitedNode_Statics::NewProp_bIndexSkipsUnsatisfiedEdges_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDlgContext_IsOptionConnectedToVisitedNode_Statics::NewProp_bLocalHistory_SetBit(void* Obj)
	{
		((DlgContext_eventIsOptionConnectedToVisitedNode_Parms*)Obj)->bLocalHistory = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDlgContext_IsOptionConnectedToVisitedNode_Statics::NewProp_bLocalHistory = { "bLocalHistory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DlgContext_eventIsOptionConnectedToVisitedNode_Parms), &Z_Construct_UFunction_UDlgContext_IsOptionConnectedToVisitedNode_Statics::NewProp_bLocalHistory_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDlgContext_IsOptionConnectedToVisitedNode_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgContext_eventIsOptionConnectedToVisitedNode_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_IsOptionConnectedToVisitedNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_IsOptionConnectedToVisitedNode_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_IsOptionConnectedToVisitedNode_Statics::NewProp_bIndexSkipsUnsatisfiedEdges,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_IsOptionConnectedToVisitedNode_Statics::NewProp_bLocalHistory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_IsOptionConnectedToVisitedNode_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_IsOptionConnectedToVisitedNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Data" },
		{ "Comment", "/**\n\x09*  Checks if the node connected directly to one of the active player choices was already visited or not\n\x09*  Does not handle complicated logic - if the said node is a logical one it will still check that node, and not one\n\x09*  of its options\n\x09*\n\x09* @param Index  Index of the edge/player option to test\n\x09* @param bLocalHistory If true, only the history of this dialogue context is checked. If false, it is a global check\n\x09* @param bIndexSkipsUnsatisfiedEdges  Decides if the index is in the [0, GetOptionsNum()[ interval (if true), or in the [0, GetAllOptionsNum()[ (if false)\n\x09* @return true if the node was already IsOptionConnectedToVisitedNode\n\x09*/" },
		{ "CPP_Default_bIndexSkipsUnsatisfiedEdges", "true" },
		{ "CPP_Default_bLocalHistory", "false" },
		{ "ModuleRelativePath", "Public/DlgContext.h" },
		{ "ToolTip", "Checks if the node connected directly to one of the active player choices was already visited or not\nDoes not handle complicated logic - if the said node is a logical one it will still check that node, and not one\nof its options\n\n@param Index  Index of the edge/player option to test\n@param bLocalHistory If true, only the history of this dialogue context is checked. If false, it is a global check\n@param bIndexSkipsUnsatisfiedEdges  Decides if the index is in the [0, GetOptionsNum()[ interval (if true), or in the [0, GetAllOptionsNum()[ (if false)\n@return true if the node was already IsOptionConnectedToVisitedNode" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_IsOptionConnectedToVisitedNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "IsOptionConnectedToVisitedNode", nullptr, nullptr, sizeof(DlgContext_eventIsOptionConnectedToVisitedNode_Parms), Z_Construct_UFunction_UDlgContext_IsOptionConnectedToVisitedNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_IsOptionConnectedToVisitedNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_IsOptionConnectedToVisitedNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_IsOptionConnectedToVisitedNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_IsOptionConnectedToVisitedNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgContext_IsOptionConnectedToVisitedNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_IsOptionSatisfied_Statics
	{
		struct DlgContext_eventIsOptionSatisfied_Parms
		{
			int32 Index;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDlgContext_IsOptionSatisfied_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgContext_eventIsOptionSatisfied_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDlgContext_IsOptionSatisfied_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DlgContext_eventIsOptionSatisfied_Parms), &Z_Construct_UFunction_UDlgContext_IsOptionSatisfied_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDlgContext_IsOptionSatisfied_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgContext_eventIsOptionSatisfied_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_IsOptionSatisfied_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_IsOptionSatisfied_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_IsOptionSatisfied_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_IsOptionSatisfied_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Options|All" },
		{ "Comment", "// Is the option at Index satisfied? (Does it meet all the conditions)\n" },
		{ "ModuleRelativePath", "Public/DlgContext.h" },
		{ "ToolTip", "Is the option at Index satisfied? (Does it meet all the conditions)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_IsOptionSatisfied_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "IsOptionSatisfied", nullptr, nullptr, sizeof(DlgContext_eventIsOptionSatisfied_Parms), Z_Construct_UFunction_UDlgContext_IsOptionSatisfied_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_IsOptionSatisfied_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_IsOptionSatisfied_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_IsOptionSatisfied_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_IsOptionSatisfied()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgContext_IsOptionSatisfied_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_IsValidAllOptionIndex_Statics
	{
		struct DlgContext_eventIsValidAllOptionIndex_Parms
		{
			int32 Index;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDlgContext_IsValidAllOptionIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgContext_eventIsValidAllOptionIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDlgContext_IsValidAllOptionIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DlgContext_eventIsValidAllOptionIndex_Parms), &Z_Construct_UFunction_UDlgContext_IsValidAllOptionIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDlgContext_IsValidAllOptionIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgContext_eventIsValidAllOptionIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_IsValidAllOptionIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_IsValidAllOptionIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_IsValidAllOptionIndex_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_IsValidAllOptionIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Options|All" },
		{ "Comment", "// Is the Index valid index for both satisfied and unsatisfied conditions\n" },
		{ "ModuleRelativePath", "Public/DlgContext.h" },
		{ "ToolTip", "Is the Index valid index for both satisfied and unsatisfied conditions" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_IsValidAllOptionIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "IsValidAllOptionIndex", nullptr, nullptr, sizeof(DlgContext_eventIsValidAllOptionIndex_Parms), Z_Construct_UFunction_UDlgContext_IsValidAllOptionIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_IsValidAllOptionIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_IsValidAllOptionIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_IsValidAllOptionIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_IsValidAllOptionIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgContext_IsValidAllOptionIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_IsValidNodeGUID_Statics
	{
		struct DlgContext_eventIsValidNodeGUID_Parms
		{
			FGuid NodeGUID;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeGUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NodeGUID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDlgContext_IsValidNodeGUID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgContext_eventIsValidNodeGUID_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDlgContext_IsValidNodeGUID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DlgContext_eventIsValidNodeGUID_Parms), &Z_Construct_UFunction_UDlgContext_IsValidNodeGUID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_IsValidNodeGUID_Statics::NewProp_NodeGUID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDlgContext_IsValidNodeGUID_Statics::NewProp_NodeGUID = { "NodeGUID", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgContext_eventIsValidNodeGUID_Parms, NodeGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_IsValidNodeGUID_Statics::NewProp_NodeGUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_IsValidNodeGUID_Statics::NewProp_NodeGUID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_IsValidNodeGUID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_IsValidNodeGUID_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_IsValidNodeGUID_Statics::NewProp_NodeGUID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_IsValidNodeGUID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Data" },
		{ "ModuleRelativePath", "Public/DlgContext.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_IsValidNodeGUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "IsValidNodeGUID", nullptr, nullptr, sizeof(DlgContext_eventIsValidNodeGUID_Parms), Z_Construct_UFunction_UDlgContext_IsValidNodeGUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_IsValidNodeGUID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_IsValidNodeGUID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_IsValidNodeGUID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_IsValidNodeGUID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgContext_IsValidNodeGUID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_IsValidNodeIndex_Statics
	{
		struct DlgContext_eventIsValidNodeIndex_Parms
		{
			int32 NodeIndex;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NodeIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDlgContext_IsValidNodeIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgContext_eventIsValidNodeIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDlgContext_IsValidNodeIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DlgContext_eventIsValidNodeIndex_Parms), &Z_Construct_UFunction_UDlgContext_IsValidNodeIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDlgContext_IsValidNodeIndex_Statics::NewProp_NodeIndex = { "NodeIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgContext_eventIsValidNodeIndex_Parms, NodeIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_IsValidNodeIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_IsValidNodeIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_IsValidNodeIndex_Statics::NewProp_NodeIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_IsValidNodeIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Data" },
		{ "Comment", "//\n// Data\n//\n" },
		{ "ModuleRelativePath", "Public/DlgContext.h" },
		{ "ToolTip", "Data" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_IsValidNodeIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "IsValidNodeIndex", nullptr, nullptr, sizeof(DlgContext_eventIsValidNodeIndex_Parms), Z_Construct_UFunction_UDlgContext_IsValidNodeIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_IsValidNodeIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_IsValidNodeIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_IsValidNodeIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_IsValidNodeIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgContext_IsValidNodeIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_IsValidOptionIndex_Statics
	{
		struct DlgContext_eventIsValidOptionIndex_Parms
		{
			int32 OptionIndex;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OptionIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDlgContext_IsValidOptionIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgContext_eventIsValidOptionIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDlgContext_IsValidOptionIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DlgContext_eventIsValidOptionIndex_Parms), &Z_Construct_UFunction_UDlgContext_IsValidOptionIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDlgContext_IsValidOptionIndex_Statics::NewProp_OptionIndex = { "OptionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgContext_eventIsValidOptionIndex_Parms, OptionIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_IsValidOptionIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_IsValidOptionIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_IsValidOptionIndex_Statics::NewProp_OptionIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_IsValidOptionIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Options|Satisfied" },
		{ "Comment", "// Is the OptionIndex valid index for the satisfied conditions?\n" },
		{ "ModuleRelativePath", "Public/DlgContext.h" },
		{ "ToolTip", "Is the OptionIndex valid index for the satisfied conditions?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_IsValidOptionIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "IsValidOptionIndex", nullptr, nullptr, sizeof(DlgContext_eventIsValidOptionIndex_Parms), Z_Construct_UFunction_UDlgContext_IsValidOptionIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_IsValidOptionIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_IsValidOptionIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_IsValidOptionIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_IsValidOptionIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgContext_IsValidOptionIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_OnRep_SerializedParticipants_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_OnRep_SerializedParticipants_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\n// Own methods\n//\n" },
		{ "ModuleRelativePath", "Public/DlgContext.h" },
		{ "ToolTip", "Own methods" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_OnRep_SerializedParticipants_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "OnRep_SerializedParticipants", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_OnRep_SerializedParticipants_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_OnRep_SerializedParticipants_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_OnRep_SerializedParticipants()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgContext_OnRep_SerializedParticipants_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_ReevaluateChildren_Statics
	{
		struct DlgContext_eventReevaluateChildren_Parms
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
	void Z_Construct_UFunction_UDlgContext_ReevaluateChildren_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgContext_eventReevaluateChildren_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDlgContext_ReevaluateChildren_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DlgContext_eventReevaluateChildren_Parms), &Z_Construct_UFunction_UDlgContext_ReevaluateChildren_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_ReevaluateChildren_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_ReevaluateChildren_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_ReevaluateChildren_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Control" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "ReevaluateChildren has been deprecated in Favour of ReevaluateOptions" },
		{ "ModuleRelativePath", "Public/DlgContext.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_ReevaluateChildren_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "ReevaluateChildren", nullptr, nullptr, sizeof(DlgContext_eventReevaluateChildren_Parms), Z_Construct_UFunction_UDlgContext_ReevaluateChildren_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_ReevaluateChildren_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_ReevaluateChildren_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_ReevaluateChildren_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_ReevaluateChildren()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgContext_ReevaluateChildren_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_ReevaluateOptions_Statics
	{
		struct DlgContext_eventReevaluateOptions_Parms
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
	void Z_Construct_UFunction_UDlgContext_ReevaluateOptions_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgContext_eventReevaluateOptions_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDlgContext_ReevaluateOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DlgContext_eventReevaluateOptions_Parms), &Z_Construct_UFunction_UDlgContext_ReevaluateOptions_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_ReevaluateOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_ReevaluateOptions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_ReevaluateOptions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Control" },
		{ "Comment", "/**\n\x09 * Normally the options of the active node are checked only once, when the conversation enters the node.\n\x09 * If an option can appear/disappear real time in the middle of the conversation this function should be called manually each frame\n\x09 */" },
		{ "ModuleRelativePath", "Public/DlgContext.h" },
		{ "ToolTip", "Normally the options of the active node are checked only once, when the conversation enters the node.\nIf an option can appear/disappear real time in the middle of the conversation this function should be called manually each frame" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_ReevaluateOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "ReevaluateOptions", nullptr, nullptr, sizeof(DlgContext_eventReevaluateOptions_Parms), Z_Construct_UFunction_UDlgContext_ReevaluateOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_ReevaluateOptions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_ReevaluateOptions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_ReevaluateOptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_ReevaluateOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgContext_ReevaluateOptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_WasNodeGUIDVisitedInThisContext_Statics
	{
		struct DlgContext_eventWasNodeGUIDVisitedInThisContext_Parms
		{
			FGuid NodeGUID;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeGUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NodeGUID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDlgContext_WasNodeGUIDVisitedInThisContext_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgContext_eventWasNodeGUIDVisitedInThisContext_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDlgContext_WasNodeGUIDVisitedInThisContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DlgContext_eventWasNodeGUIDVisitedInThisContext_Parms), &Z_Construct_UFunction_UDlgContext_WasNodeGUIDVisitedInThisContext_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_WasNodeGUIDVisitedInThisContext_Statics::NewProp_NodeGUID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDlgContext_WasNodeGUIDVisitedInThisContext_Statics::NewProp_NodeGUID = { "NodeGUID", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgContext_eventWasNodeGUIDVisitedInThisContext_Parms, NodeGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_WasNodeGUIDVisitedInThisContext_Statics::NewProp_NodeGUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_WasNodeGUIDVisitedInThisContext_Statics::NewProp_NodeGUID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_WasNodeGUIDVisitedInThisContext_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_WasNodeGUIDVisitedInThisContext_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_WasNodeGUIDVisitedInThisContext_Statics::NewProp_NodeGUID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_WasNodeGUIDVisitedInThisContext_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Context|History" },
		{ "Comment", "// Was the node GUID visited in the lifetime of this context?\n" },
		{ "DisplayName", "Was Node GUID Visited In This Context" },
		{ "ModuleRelativePath", "Public/DlgContext.h" },
		{ "ToolTip", "Was the node GUID visited in the lifetime of this context?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_WasNodeGUIDVisitedInThisContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "WasNodeGUIDVisitedInThisContext", nullptr, nullptr, sizeof(DlgContext_eventWasNodeGUIDVisitedInThisContext_Parms), Z_Construct_UFunction_UDlgContext_WasNodeGUIDVisitedInThisContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_WasNodeGUIDVisitedInThisContext_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_WasNodeGUIDVisitedInThisContext_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_WasNodeGUIDVisitedInThisContext_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_WasNodeGUIDVisitedInThisContext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgContext_WasNodeGUIDVisitedInThisContext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgContext_WasNodeIndexVisitedInThisContext_Statics
	{
		struct DlgContext_eventWasNodeIndexVisitedInThisContext_Parms
		{
			int32 NodeIndex;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NodeIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDlgContext_WasNodeIndexVisitedInThisContext_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgContext_eventWasNodeIndexVisitedInThisContext_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDlgContext_WasNodeIndexVisitedInThisContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DlgContext_eventWasNodeIndexVisitedInThisContext_Parms), &Z_Construct_UFunction_UDlgContext_WasNodeIndexVisitedInThisContext_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDlgContext_WasNodeIndexVisitedInThisContext_Statics::NewProp_NodeIndex = { "NodeIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgContext_eventWasNodeIndexVisitedInThisContext_Parms, NodeIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgContext_WasNodeIndexVisitedInThisContext_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_WasNodeIndexVisitedInThisContext_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgContext_WasNodeIndexVisitedInThisContext_Statics::NewProp_NodeIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgContext_WasNodeIndexVisitedInThisContext_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Context|History" },
		{ "Comment", "// Was the node Index visited in the lifetime of this context?\n// NOTE: you should  most likely use WasNodeGUIDVisitedInThisContext\n" },
		{ "DisplayName", "Was Node Index Visited In This Context" },
		{ "ModuleRelativePath", "Public/DlgContext.h" },
		{ "ToolTip", "Was the node Index visited in the lifetime of this context?\nNOTE: you should  most likely use WasNodeGUIDVisitedInThisContext" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgContext_WasNodeIndexVisitedInThisContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgContext, nullptr, "WasNodeIndexVisitedInThisContext", nullptr, nullptr, sizeof(DlgContext_eventWasNodeIndexVisitedInThisContext_Parms), Z_Construct_UFunction_UDlgContext_WasNodeIndexVisitedInThisContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_WasNodeIndexVisitedInThisContext_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgContext_WasNodeIndexVisitedInThisContext_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgContext_WasNodeIndexVisitedInThisContext_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgContext_WasNodeIndexVisitedInThisContext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgContext_WasNodeIndexVisitedInThisContext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDlgContext_NoRegister()
	{
		return UDlgContext::StaticClass();
	}
	struct Z_Construct_UClass_UDlgContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Participants_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Participants;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Participants_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Participants_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SerializedParticipants_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SerializedParticipants;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SerializedParticipants_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Dialogue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDlgContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDlgObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDlgContext_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDlgContext_ChooseChild, "ChooseChild" }, // 500890662
		{ &Z_Construct_UFunction_UDlgContext_ChooseChildBasedOnAllOptionIndex, "ChooseChildBasedOnAllOptionIndex" }, // 3178788541
		{ &Z_Construct_UFunction_UDlgContext_ChooseOption, "ChooseOption" }, // 520604755
		{ &Z_Construct_UFunction_UDlgContext_ChooseOptionBasedOnAllOptionIndex, "ChooseOptionBasedOnAllOptionIndex" }, // 3696897826
		{ &Z_Construct_UFunction_UDlgContext_ChooseSpeechSequenceOptionFromReplicated, "ChooseSpeechSequenceOptionFromReplicated" }, // 699622709
		{ &Z_Construct_UFunction_UDlgContext_GetActiveNodeData, "GetActiveNodeData" }, // 946218428
		{ &Z_Construct_UFunction_UDlgContext_GetActiveNodeGenericData, "GetActiveNodeGenericData" }, // 3488586879
		{ &Z_Construct_UFunction_UDlgContext_GetActiveNodeGUID, "GetActiveNodeGUID" }, // 2000141290
		{ &Z_Construct_UFunction_UDlgContext_GetActiveNodeIndex, "GetActiveNodeIndex" }, // 2793958522
		{ &Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipant, "GetActiveNodeParticipant" }, // 1103188901
		{ &Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantDisplayName, "GetActiveNodeParticipantDisplayName" }, // 2781934251
		{ &Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantIcon, "GetActiveNodeParticipantIcon" }, // 92043855
		{ &Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantName, "GetActiveNodeParticipantName" }, // 3980136521
		{ &Z_Construct_UFunction_UDlgContext_GetActiveNodeSpeakerState, "GetActiveNodeSpeakerState" }, // 3889080700
		{ &Z_Construct_UFunction_UDlgContext_GetActiveNodeText, "GetActiveNodeText" }, // 4170721599
		{ &Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceDialogueWave, "GetActiveNodeVoiceDialogueWave" }, // 2092574196
		{ &Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceSoundBase, "GetActiveNodeVoiceSoundBase" }, // 4076281842
		{ &Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceSoundWave, "GetActiveNodeVoiceSoundWave" }, // 183597746
		{ &Z_Construct_UFunction_UDlgContext_GetAllOptionsArray, "GetAllOptionsArray" }, // 2240106601
		{ &Z_Construct_UFunction_UDlgContext_GetAllOptionsNum, "GetAllOptionsNum" }, // 2393646610
		{ &Z_Construct_UFunction_UDlgContext_GetContextString, "GetContextString" }, // 1867304272
		{ &Z_Construct_UFunction_UDlgContext_GetDialogue, "GetDialogue" }, // 2044464739
		{ &Z_Construct_UFunction_UDlgContext_GetDialogueGUID, "GetDialogueGUID" }, // 1030449251
		{ &Z_Construct_UFunction_UDlgContext_GetDialogueName, "GetDialogueName" }, // 1426815081
		{ &Z_Construct_UFunction_UDlgContext_GetDialoguePathName, "GetDialoguePathName" }, // 4229008655
		{ &Z_Construct_UFunction_UDlgContext_GetMutableActiveNode, "GetMutableActiveNode" }, // 3093945292
		{ &Z_Construct_UFunction_UDlgContext_GetMutableActiveNodeAsSpeechSequence, "GetMutableActiveNodeAsSpeechSequence" }, // 1522772233
		{ &Z_Construct_UFunction_UDlgContext_GetMutableNodeFromGUID, "GetMutableNodeFromGUID" }, // 942238872
		{ &Z_Construct_UFunction_UDlgContext_GetMutableNodeFromIndex, "GetMutableNodeFromIndex" }, // 102486011
		{ &Z_Construct_UFunction_UDlgContext_GetMutableParticipant, "GetMutableParticipant" }, // 3472148337
		{ &Z_Construct_UFunction_UDlgContext_GetNodeGUIDForIndex, "GetNodeGUIDForIndex" }, // 1380458460
		{ &Z_Construct_UFunction_UDlgContext_GetNodeIndexForGUID, "GetNodeIndexForGUID" }, // 148320504
		{ &Z_Construct_UFunction_UDlgContext_GetOption, "GetOption" }, // 912940336
		{ &Z_Construct_UFunction_UDlgContext_GetOptionEnterConditions, "GetOptionEnterConditions" }, // 990345188
		{ &Z_Construct_UFunction_UDlgContext_GetOptionFromAll, "GetOptionFromAll" }, // 4076771771
		{ &Z_Construct_UFunction_UDlgContext_GetOptionsArray, "GetOptionsArray" }, // 4022339320
		{ &Z_Construct_UFunction_UDlgContext_GetOptionsNum, "GetOptionsNum" }, // 3136606887
		{ &Z_Construct_UFunction_UDlgContext_GetOptionSpeakerState, "GetOptionSpeakerState" }, // 1227849146
		{ &Z_Construct_UFunction_UDlgContext_GetOptionSpeakerStateFromAll, "GetOptionSpeakerStateFromAll" }, // 1774845123
		{ &Z_Construct_UFunction_UDlgContext_GetOptionText, "GetOptionText" }, // 3480765582
		{ &Z_Construct_UFunction_UDlgContext_GetOptionTextFromAll, "GetOptionTextFromAll" }, // 631758386
		{ &Z_Construct_UFunction_UDlgContext_GetParticipants, "GetParticipants" }, // 1778974891
		{ &Z_Construct_UFunction_UDlgContext_GetParticipantsMap, "GetParticipantsMap" }, // 1580659960
		{ &Z_Construct_UFunction_UDlgContext_GetVisitedNodeGUIDs, "GetVisitedNodeGUIDs" }, // 1678997520
		{ &Z_Construct_UFunction_UDlgContext_GetVisitedNodeIndices, "GetVisitedNodeIndices" }, // 2427413829
		{ &Z_Construct_UFunction_UDlgContext_HasDialogueEnded, "HasDialogueEnded" }, // 131136885
		{ &Z_Construct_UFunction_UDlgContext_IsOptionConnectedToEndNode, "IsOptionConnectedToEndNode" }, // 1844414454
		{ &Z_Construct_UFunction_UDlgContext_IsOptionConnectedToVisitedNode, "IsOptionConnectedToVisitedNode" }, // 3218918185
		{ &Z_Construct_UFunction_UDlgContext_IsOptionSatisfied, "IsOptionSatisfied" }, // 1542472123
		{ &Z_Construct_UFunction_UDlgContext_IsValidAllOptionIndex, "IsValidAllOptionIndex" }, // 3399456316
		{ &Z_Construct_UFunction_UDlgContext_IsValidNodeGUID, "IsValidNodeGUID" }, // 1211561951
		{ &Z_Construct_UFunction_UDlgContext_IsValidNodeIndex, "IsValidNodeIndex" }, // 1063110533
		{ &Z_Construct_UFunction_UDlgContext_IsValidOptionIndex, "IsValidOptionIndex" }, // 1368550002
		{ &Z_Construct_UFunction_UDlgContext_OnRep_SerializedParticipants, "OnRep_SerializedParticipants" }, // 2602556008
		{ &Z_Construct_UFunction_UDlgContext_ReevaluateChildren, "ReevaluateChildren" }, // 41618782
		{ &Z_Construct_UFunction_UDlgContext_ReevaluateOptions, "ReevaluateOptions" }, // 3417100430
		{ &Z_Construct_UFunction_UDlgContext_WasNodeGUIDVisitedInThisContext, "WasNodeGUIDVisitedInThisContext" }, // 2729235217
		{ &Z_Construct_UFunction_UDlgContext_WasNodeIndexVisitedInThisContext, "WasNodeIndexVisitedInThisContext" }, // 3349369559
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgContext_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Default" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *  Class representing an active dialogue, can be used to gain information and to control it\n *  Should be controlled from Player Character/Player controller\n *  For starting a dialogue check UDlgManager - the proper function creates an UDlgContext for you\n *\n *  Call ChooseOption() if an option is selected\n *  If the return value is false the dialogue is over and the context should be dropped\n *  This abstract class contains the outer functionality only\n */" },
		{ "HideCategories", "DoNotShow" },
		{ "IncludePath", "DlgContext.h" },
		{ "ModuleRelativePath", "Public/DlgContext.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Class representing an active dialogue, can be used to gain information and to control it\nShould be controlled from Player Character/Player controller\nFor starting a dialogue check UDlgManager - the proper function creates an UDlgContext for you\n\nCall ChooseOption() if an option is selected\nIf the return value is false the dialogue is over and the context should be dropped\nThis abstract class contains the outer functionality only" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgContext_Statics::NewProp_Participants_MetaData[] = {
		{ "Comment", "// All object is expected to implement the IDlgDialogueParticipant interface\n// the key is the return value of IDlgDialogueParticipant::GetParticipantName()\n" },
		{ "ModuleRelativePath", "Public/DlgContext.h" },
		{ "ToolTip", "All object is expected to implement the IDlgDialogueParticipant interface\nthe key is the return value of IDlgDialogueParticipant::GetParticipantName()" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDlgContext_Statics::NewProp_Participants = { "Participants", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDlgContext, Participants), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDlgContext_Statics::NewProp_Participants_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgContext_Statics::NewProp_Participants_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDlgContext_Statics::NewProp_Participants_Key_KeyProp = { "Participants_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDlgContext_Statics::NewProp_Participants_ValueProp = { "Participants", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgContext_Statics::NewProp_SerializedParticipants_MetaData[] = {
		{ "Comment", "// Helper array to serialize to Participants map for clients as well\n" },
		{ "ModuleRelativePath", "Public/DlgContext.h" },
		{ "ToolTip", "Helper array to serialize to Participants map for clients as well" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDlgContext_Statics::NewProp_SerializedParticipants = { "SerializedParticipants", "OnRep_SerializedParticipants", (EPropertyFlags)0x0020080100000020, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDlgContext, SerializedParticipants), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDlgContext_Statics::NewProp_SerializedParticipants_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgContext_Statics::NewProp_SerializedParticipants_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDlgContext_Statics::NewProp_SerializedParticipants_Inner = { "SerializedParticipants", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgContext_Statics::NewProp_Dialogue_MetaData[] = {
		{ "Comment", "// Current Dialogue used in this context at runtime.\n" },
		{ "ModuleRelativePath", "Public/DlgContext.h" },
		{ "ToolTip", "Current Dialogue used in this context at runtime." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDlgContext_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0020080000000020, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDlgContext, Dialogue), Z_Construct_UClass_UDlgDialogue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDlgContext_Statics::NewProp_Dialogue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgContext_Statics::NewProp_Dialogue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDlgContext_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgContext_Statics::NewProp_Participants,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgContext_Statics::NewProp_Participants_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgContext_Statics::NewProp_Participants_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgContext_Statics::NewProp_SerializedParticipants,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgContext_Statics::NewProp_SerializedParticipants_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgContext_Statics::NewProp_Dialogue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDlgContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgContext>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDlgContext_Statics::ClassParams = {
		&UDlgContext::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDlgContext_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDlgContext_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDlgContext_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgContext_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDlgContext()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDlgContext_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDlgContext, 271810792);
	template<> DLGSYSTEM_API UClass* StaticClass<UDlgContext>()
	{
		return UDlgContext::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDlgContext(Z_Construct_UClass_UDlgContext, &UDlgContext::StaticClass, TEXT("/Script/DlgSystem"), TEXT("UDlgContext"), false, nullptr, nullptr, nullptr);

	void UDlgContext::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Dialogue(TEXT("Dialogue"));
		static const FName Name_SerializedParticipants(TEXT("SerializedParticipants"));

		const bool bIsValid = true
			&& Name_Dialogue == ClassReps[(int32)ENetFields_Private::Dialogue].Property->GetFName()
			&& Name_SerializedParticipants == ClassReps[(int32)ENetFields_Private::SerializedParticipants].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UDlgContext"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDlgContext);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
