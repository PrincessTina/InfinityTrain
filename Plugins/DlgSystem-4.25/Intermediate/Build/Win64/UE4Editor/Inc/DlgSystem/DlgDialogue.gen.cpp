// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystem/Public/DlgDialogue.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDlgDialogue() {}
// Cross Module References
	DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgParticipantClass();
	UPackage* Z_Construct_UPackage__Script_DlgSystem();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgDialogue_NoRegister();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgDialogue();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNode_NoRegister();
	DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgParticipantData();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
// End Cross Module References
class UScriptStruct* FDlgParticipantClass::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DLGSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FDlgParticipantClass_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDlgParticipantClass, Z_Construct_UPackage__Script_DlgSystem(), TEXT("DlgParticipantClass"), sizeof(FDlgParticipantClass), Get_Z_Construct_UScriptStruct_FDlgParticipantClass_Hash());
	}
	return Singleton;
}
template<> DLGSYSTEM_API UScriptStruct* StaticStruct<FDlgParticipantClass>()
{
	return FDlgParticipantClass::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDlgParticipantClass(FDlgParticipantClass::StaticStruct, TEXT("/Script/DlgSystem"), TEXT("DlgParticipantClass"), false, nullptr, nullptr);
static struct FScriptStruct_DlgSystem_StaticRegisterNativesFDlgParticipantClass
{
	FScriptStruct_DlgSystem_StaticRegisterNativesFDlgParticipantClass()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DlgParticipantClass")),new UScriptStruct::TCppStructOps<FDlgParticipantClass>);
	}
} ScriptStruct_DlgSystem_StaticRegisterNativesFDlgParticipantClass;
	struct Z_Construct_UScriptStruct_FDlgParticipantClass_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticipantClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ParticipantClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticipantName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgParticipantClass_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Structure useful to cache all the names used by a participant\n" },
		{ "ModuleRelativePath", "Public/DlgDialogue.h" },
		{ "ToolTip", "Structure useful to cache all the names used by a participant" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDlgParticipantClass_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDlgParticipantClass>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgParticipantClass_Statics::NewProp_ParticipantClass_MetaData[] = {
		{ "Category", "Dialogue|Participant" },
		{ "Comment", "// The Participant Class corresponding for the ParticipantName\n// This is used to autocomplete and retrieve the Variables from that Class automatically when Using Class based Conditions/Events\n" },
		{ "ModuleRelativePath", "Public/DlgDialogue.h" },
		{ "MustImplement", "DlgDialogueParticipant" },
		{ "ToolTip", "The Participant Class corresponding for the ParticipantName\nThis is used to autocomplete and retrieve the Variables from that Class automatically when Using Class based Conditions/Events" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FDlgParticipantClass_Statics::NewProp_ParticipantClass = { "ParticipantClass", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDlgParticipantClass, ParticipantClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgParticipantClass_Statics::NewProp_ParticipantClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgParticipantClass_Statics::NewProp_ParticipantClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgParticipantClass_Statics::NewProp_ParticipantName_MetaData[] = {
		{ "Category", "Dialogue|Participant" },
		{ "Comment", "// The Name of the Participant Used inside this Dialogue\n" },
		{ "ModuleRelativePath", "Public/DlgDialogue.h" },
		{ "ToolTip", "The Name of the Participant Used inside this Dialogue" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDlgParticipantClass_Statics::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDlgParticipantClass, ParticipantName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgParticipantClass_Statics::NewProp_ParticipantName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgParticipantClass_Statics::NewProp_ParticipantName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDlgParticipantClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgParticipantClass_Statics::NewProp_ParticipantClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgParticipantClass_Statics::NewProp_ParticipantName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDlgParticipantClass_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystem,
		nullptr,
		&NewStructOps,
		"DlgParticipantClass",
		sizeof(FDlgParticipantClass),
		alignof(FDlgParticipantClass),
		Z_Construct_UScriptStruct_FDlgParticipantClass_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgParticipantClass_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgParticipantClass_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgParticipantClass_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDlgParticipantClass()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDlgParticipantClass_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DlgSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DlgParticipantClass"), sizeof(FDlgParticipantClass), Get_Z_Construct_UScriptStruct_FDlgParticipantClass_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDlgParticipantClass_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDlgParticipantClass_Hash() { return 1190822703U; }
	DEFINE_FUNCTION(UDlgDialogue::execGetMutableNodeFromGUID)
	{
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_NodeGUID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDlgNode**)Z_Param__Result=P_THIS->GetMutableNodeFromGUID(Z_Param_Out_NodeGUID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgDialogue::execGetMutableNodeFromIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDlgNode**)Z_Param__Result=P_THIS->GetMutableNodeFromIndex(Z_Param_NodeIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgDialogue::execGetNodeIndexForGUID)
	{
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_NodeGUID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNodeIndexForGUID(Z_Param_Out_NodeGUID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgDialogue::execGetNodeGUIDForIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGuid*)Z_Param__Result=P_THIS->GetNodeGUIDForIndex(Z_Param_NodeIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgDialogue::execIsValidNodeGUID)
	{
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_NodeGUID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsValidNodeGUID(Z_Param_Out_NodeGUID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgDialogue::execIsValidNodeIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsValidNodeIndex(Z_Param_NodeIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgDialogue::execGetMutableStartNode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDlgNode**)Z_Param__Result=P_THIS->GetMutableStartNode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgDialogue::execGetNodes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UDlgNode*>*)Z_Param__Result=P_THIS->GetNodes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgDialogue::execHasGUID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasGUID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgDialogue::execGetGUID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGuid*)Z_Param__Result=P_THIS->GetGUID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgDialogue::execGetDialogueFName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetDialogueFName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgDialogue::execGetDialogueName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetDialogueName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgDialogue::execGetDialogueVersion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetDialogueVersion();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgDialogue::execGetAllSpeakerStates)
	{
		P_GET_TSET_REF(FName,Z_Param_Out_OutSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllSpeakerStates(Z_Param_Out_OutSet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgDialogue::execGetClassTextNames)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
		P_GET_TSET_REF(FName,Z_Param_Out_OutSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetClassTextNames(Z_Param_ParticipantName,Z_Param_Out_OutSet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgDialogue::execGetClassNameNames)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
		P_GET_TSET_REF(FName,Z_Param_Out_OutSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetClassNameNames(Z_Param_ParticipantName,Z_Param_Out_OutSet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgDialogue::execGetClassBoolNames)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
		P_GET_TSET_REF(FName,Z_Param_Out_OutSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetClassBoolNames(Z_Param_ParticipantName,Z_Param_Out_OutSet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgDialogue::execGetClassFloatNames)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
		P_GET_TSET_REF(FName,Z_Param_Out_OutSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetClassFloatNames(Z_Param_ParticipantName,Z_Param_Out_OutSet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgDialogue::execGetClassIntNames)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
		P_GET_TSET_REF(FName,Z_Param_Out_OutSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetClassIntNames(Z_Param_ParticipantName,Z_Param_Out_OutSet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgDialogue::execGetNameNames)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
		P_GET_TSET_REF(FName,Z_Param_Out_OutSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetNameNames(Z_Param_ParticipantName,Z_Param_Out_OutSet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgDialogue::execGetBoolNames)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
		P_GET_TSET_REF(FName,Z_Param_Out_OutSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetBoolNames(Z_Param_ParticipantName,Z_Param_Out_OutSet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgDialogue::execGetFloatNames)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
		P_GET_TSET_REF(FName,Z_Param_Out_OutSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetFloatNames(Z_Param_ParticipantName,Z_Param_Out_OutSet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgDialogue::execGetIntNames)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
		P_GET_TSET_REF(FName,Z_Param_Out_OutSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetIntNames(Z_Param_ParticipantName,Z_Param_Out_OutSet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgDialogue::execGetCustomEvents)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
		P_GET_TSET_REF(UClass*,Z_Param_Out_OutSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetCustomEvents(Z_Param_ParticipantName,Z_Param_Out_OutSet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgDialogue::execGetEvents)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
		P_GET_TSET_REF(FName,Z_Param_Out_OutSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetEvents(Z_Param_ParticipantName,Z_Param_Out_OutSet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgDialogue::execGetConditions)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
		P_GET_TSET_REF(FName,Z_Param_Out_OutSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetConditions(Z_Param_ParticipantName,Z_Param_Out_OutSet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgDialogue::execGetParticipantClass)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UClass**)Z_Param__Result=P_THIS->GetParticipantClass(Z_Param_ParticipantName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgDialogue::execGetAllParticipantClasses)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FDlgParticipantClass>*)Z_Param__Result=P_THIS->GetAllParticipantClasses();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgDialogue::execGetAllParticipantNames)
	{
		P_GET_TSET_REF(FName,Z_Param_Out_OutSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllParticipantNames(Z_Param_Out_OutSet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgDialogue::execGetParticipantsNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetParticipantsNum();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgDialogue::execHasParticipant)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasParticipant(Z_Param_ParticipantName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDlgDialogue::execGetParticipantsData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FName,FDlgParticipantData>*)Z_Param__Result=P_THIS->GetParticipantsData();
		P_NATIVE_END;
	}
	void UDlgDialogue::StaticRegisterNativesUDlgDialogue()
	{
		UClass* Class = UDlgDialogue::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllParticipantClasses", &UDlgDialogue::execGetAllParticipantClasses },
			{ "GetAllParticipantNames", &UDlgDialogue::execGetAllParticipantNames },
			{ "GetAllSpeakerStates", &UDlgDialogue::execGetAllSpeakerStates },
			{ "GetBoolNames", &UDlgDialogue::execGetBoolNames },
			{ "GetClassBoolNames", &UDlgDialogue::execGetClassBoolNames },
			{ "GetClassFloatNames", &UDlgDialogue::execGetClassFloatNames },
			{ "GetClassIntNames", &UDlgDialogue::execGetClassIntNames },
			{ "GetClassNameNames", &UDlgDialogue::execGetClassNameNames },
			{ "GetClassTextNames", &UDlgDialogue::execGetClassTextNames },
			{ "GetConditions", &UDlgDialogue::execGetConditions },
			{ "GetCustomEvents", &UDlgDialogue::execGetCustomEvents },
			{ "GetDialogueFName", &UDlgDialogue::execGetDialogueFName },
			{ "GetDialogueName", &UDlgDialogue::execGetDialogueName },
			{ "GetDialogueVersion", &UDlgDialogue::execGetDialogueVersion },
			{ "GetEvents", &UDlgDialogue::execGetEvents },
			{ "GetFloatNames", &UDlgDialogue::execGetFloatNames },
			{ "GetGUID", &UDlgDialogue::execGetGUID },
			{ "GetIntNames", &UDlgDialogue::execGetIntNames },
			{ "GetMutableNodeFromGUID", &UDlgDialogue::execGetMutableNodeFromGUID },
			{ "GetMutableNodeFromIndex", &UDlgDialogue::execGetMutableNodeFromIndex },
			{ "GetMutableStartNode", &UDlgDialogue::execGetMutableStartNode },
			{ "GetNameNames", &UDlgDialogue::execGetNameNames },
			{ "GetNodeGUIDForIndex", &UDlgDialogue::execGetNodeGUIDForIndex },
			{ "GetNodeIndexForGUID", &UDlgDialogue::execGetNodeIndexForGUID },
			{ "GetNodes", &UDlgDialogue::execGetNodes },
			{ "GetParticipantClass", &UDlgDialogue::execGetParticipantClass },
			{ "GetParticipantsData", &UDlgDialogue::execGetParticipantsData },
			{ "GetParticipantsNum", &UDlgDialogue::execGetParticipantsNum },
			{ "HasGUID", &UDlgDialogue::execHasGUID },
			{ "HasParticipant", &UDlgDialogue::execHasParticipant },
			{ "IsValidNodeGUID", &UDlgDialogue::execIsValidNodeGUID },
			{ "IsValidNodeIndex", &UDlgDialogue::execIsValidNodeIndex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDlgDialogue_GetAllParticipantClasses_Statics
	{
		struct DlgDialogue_eventGetAllParticipantClasses_Parms
		{
			TArray<FDlgParticipantClass> ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetAllParticipantClasses_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDlgDialogue_GetAllParticipantClasses_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgDialogue_eventGetAllParticipantClasses_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetAllParticipantClasses_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetAllParticipantClasses_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDlgDialogue_GetAllParticipantClasses_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDlgParticipantClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogue_GetAllParticipantClasses_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetAllParticipantClasses_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetAllParticipantClasses_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetAllParticipantClasses_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/DlgDialogue.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogue_GetAllParticipantClasses_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogue, nullptr, "GetAllParticipantClasses", nullptr, nullptr, sizeof(DlgDialogue_eventGetAllParticipantClasses_Parms), Z_Construct_UFunction_UDlgDialogue_GetAllParticipantClasses_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetAllParticipantClasses_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetAllParticipantClasses_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetAllParticipantClasses_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogue_GetAllParticipantClasses()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgDialogue_GetAllParticipantClasses_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogue_GetAllParticipantNames_Statics
	{
		struct DlgDialogue_eventGetAllParticipantNames_Parms
		{
			TSet<FName> OutSet;
		};
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_OutSet;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OutSet_ElementProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UDlgDialogue_GetAllParticipantNames_Statics::NewProp_OutSet = { "OutSet", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgDialogue_eventGetAllParticipantNames_Parms, OutSet), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetAllParticipantNames_Statics::NewProp_OutSet_ElementProp = { "OutSet", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogue_GetAllParticipantNames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetAllParticipantNames_Statics::NewProp_OutSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetAllParticipantNames_Statics::NewProp_OutSet_ElementProp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetAllParticipantNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Gets all the keys (participant names) of the DlgData Map\n" },
		{ "ModuleRelativePath", "Public/DlgDialogue.h" },
		{ "ToolTip", "Gets all the keys (participant names) of the DlgData Map" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogue_GetAllParticipantNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogue, nullptr, "GetAllParticipantNames", nullptr, nullptr, sizeof(DlgDialogue_eventGetAllParticipantNames_Parms), Z_Construct_UFunction_UDlgDialogue_GetAllParticipantNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetAllParticipantNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetAllParticipantNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetAllParticipantNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogue_GetAllParticipantNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgDialogue_GetAllParticipantNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogue_GetAllSpeakerStates_Statics
	{
		struct DlgDialogue_eventGetAllSpeakerStates_Parms
		{
			TSet<FName> OutSet;
		};
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_OutSet;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OutSet_ElementProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UDlgDialogue_GetAllSpeakerStates_Statics::NewProp_OutSet = { "OutSet", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgDialogue_eventGetAllSpeakerStates_Parms, OutSet), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetAllSpeakerStates_Statics::NewProp_OutSet_ElementProp = { "OutSet", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogue_GetAllSpeakerStates_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetAllSpeakerStates_Statics::NewProp_OutSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetAllSpeakerStates_Statics::NewProp_OutSet_ElementProp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetAllSpeakerStates_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Gets all the SpeakerStates used inside this dialogue\n" },
		{ "ModuleRelativePath", "Public/DlgDialogue.h" },
		{ "ToolTip", "Gets all the SpeakerStates used inside this dialogue" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogue_GetAllSpeakerStates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogue, nullptr, "GetAllSpeakerStates", nullptr, nullptr, sizeof(DlgDialogue_eventGetAllSpeakerStates_Parms), Z_Construct_UFunction_UDlgDialogue_GetAllSpeakerStates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetAllSpeakerStates_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetAllSpeakerStates_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetAllSpeakerStates_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogue_GetAllSpeakerStates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgDialogue_GetAllSpeakerStates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogue_GetBoolNames_Statics
	{
		struct DlgDialogue_eventGetBoolNames_Parms
		{
			FName ParticipantName;
			TSet<FName> OutSet;
		};
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_OutSet;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OutSet_ElementProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UDlgDialogue_GetBoolNames_Statics::NewProp_OutSet = { "OutSet", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgDialogue_eventGetBoolNames_Parms, OutSet), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetBoolNames_Statics::NewProp_OutSet_ElementProp = { "OutSet", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetBoolNames_Statics::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgDialogue_eventGetBoolNames_Parms, ParticipantName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogue_GetBoolNames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetBoolNames_Statics::NewProp_OutSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetBoolNames_Statics::NewProp_OutSet_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetBoolNames_Statics::NewProp_ParticipantName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetBoolNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Gets the bool variable Names that correspond to the provided ParticipantName.\n" },
		{ "ModuleRelativePath", "Public/DlgDialogue.h" },
		{ "ToolTip", "Gets the bool variable Names that correspond to the provided ParticipantName." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogue_GetBoolNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogue, nullptr, "GetBoolNames", nullptr, nullptr, sizeof(DlgDialogue_eventGetBoolNames_Parms), Z_Construct_UFunction_UDlgDialogue_GetBoolNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetBoolNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetBoolNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetBoolNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogue_GetBoolNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgDialogue_GetBoolNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogue_GetClassBoolNames_Statics
	{
		struct DlgDialogue_eventGetClassBoolNames_Parms
		{
			FName ParticipantName;
			TSet<FName> OutSet;
		};
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_OutSet;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OutSet_ElementProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UDlgDialogue_GetClassBoolNames_Statics::NewProp_OutSet = { "OutSet", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgDialogue_eventGetClassBoolNames_Parms, OutSet), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetClassBoolNames_Statics::NewProp_OutSet_ElementProp = { "OutSet", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetClassBoolNames_Statics::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgDialogue_eventGetClassBoolNames_Parms, ParticipantName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogue_GetClassBoolNames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetClassBoolNames_Statics::NewProp_OutSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetClassBoolNames_Statics::NewProp_OutSet_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetClassBoolNames_Statics::NewProp_ParticipantName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetClassBoolNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Gets the bool variable Names that correspond to the UClass of the provided ParticipantName.\n" },
		{ "ModuleRelativePath", "Public/DlgDialogue.h" },
		{ "ToolTip", "Gets the bool variable Names that correspond to the UClass of the provided ParticipantName." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogue_GetClassBoolNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogue, nullptr, "GetClassBoolNames", nullptr, nullptr, sizeof(DlgDialogue_eventGetClassBoolNames_Parms), Z_Construct_UFunction_UDlgDialogue_GetClassBoolNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetClassBoolNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetClassBoolNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetClassBoolNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogue_GetClassBoolNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgDialogue_GetClassBoolNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogue_GetClassFloatNames_Statics
	{
		struct DlgDialogue_eventGetClassFloatNames_Parms
		{
			FName ParticipantName;
			TSet<FName> OutSet;
		};
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_OutSet;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OutSet_ElementProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UDlgDialogue_GetClassFloatNames_Statics::NewProp_OutSet = { "OutSet", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgDialogue_eventGetClassFloatNames_Parms, OutSet), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetClassFloatNames_Statics::NewProp_OutSet_ElementProp = { "OutSet", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetClassFloatNames_Statics::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgDialogue_eventGetClassFloatNames_Parms, ParticipantName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogue_GetClassFloatNames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetClassFloatNames_Statics::NewProp_OutSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetClassFloatNames_Statics::NewProp_OutSet_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetClassFloatNames_Statics::NewProp_ParticipantName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetClassFloatNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Gets the float variable Names that correspond to the UClass of the provided ParticipantName.\n" },
		{ "ModuleRelativePath", "Public/DlgDialogue.h" },
		{ "ToolTip", "Gets the float variable Names that correspond to the UClass of the provided ParticipantName." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogue_GetClassFloatNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogue, nullptr, "GetClassFloatNames", nullptr, nullptr, sizeof(DlgDialogue_eventGetClassFloatNames_Parms), Z_Construct_UFunction_UDlgDialogue_GetClassFloatNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetClassFloatNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetClassFloatNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetClassFloatNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogue_GetClassFloatNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgDialogue_GetClassFloatNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogue_GetClassIntNames_Statics
	{
		struct DlgDialogue_eventGetClassIntNames_Parms
		{
			FName ParticipantName;
			TSet<FName> OutSet;
		};
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_OutSet;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OutSet_ElementProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UDlgDialogue_GetClassIntNames_Statics::NewProp_OutSet = { "OutSet", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgDialogue_eventGetClassIntNames_Parms, OutSet), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetClassIntNames_Statics::NewProp_OutSet_ElementProp = { "OutSet", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetClassIntNames_Statics::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgDialogue_eventGetClassIntNames_Parms, ParticipantName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogue_GetClassIntNames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetClassIntNames_Statics::NewProp_OutSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetClassIntNames_Statics::NewProp_OutSet_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetClassIntNames_Statics::NewProp_ParticipantName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetClassIntNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Gets the int variable Names that correspond to the UClass of the provided ParticipantName.\n" },
		{ "ModuleRelativePath", "Public/DlgDialogue.h" },
		{ "ToolTip", "Gets the int variable Names that correspond to the UClass of the provided ParticipantName." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogue_GetClassIntNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogue, nullptr, "GetClassIntNames", nullptr, nullptr, sizeof(DlgDialogue_eventGetClassIntNames_Parms), Z_Construct_UFunction_UDlgDialogue_GetClassIntNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetClassIntNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetClassIntNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetClassIntNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogue_GetClassIntNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgDialogue_GetClassIntNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogue_GetClassNameNames_Statics
	{
		struct DlgDialogue_eventGetClassNameNames_Parms
		{
			FName ParticipantName;
			TSet<FName> OutSet;
		};
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_OutSet;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OutSet_ElementProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UDlgDialogue_GetClassNameNames_Statics::NewProp_OutSet = { "OutSet", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgDialogue_eventGetClassNameNames_Parms, OutSet), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetClassNameNames_Statics::NewProp_OutSet_ElementProp = { "OutSet", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetClassNameNames_Statics::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgDialogue_eventGetClassNameNames_Parms, ParticipantName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogue_GetClassNameNames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetClassNameNames_Statics::NewProp_OutSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetClassNameNames_Statics::NewProp_OutSet_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetClassNameNames_Statics::NewProp_ParticipantName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetClassNameNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Gets the name variable Names that correspond to the UClass of the provided ParticipantName.\n" },
		{ "ModuleRelativePath", "Public/DlgDialogue.h" },
		{ "ToolTip", "Gets the name variable Names that correspond to the UClass of the provided ParticipantName." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogue_GetClassNameNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogue, nullptr, "GetClassNameNames", nullptr, nullptr, sizeof(DlgDialogue_eventGetClassNameNames_Parms), Z_Construct_UFunction_UDlgDialogue_GetClassNameNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetClassNameNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetClassNameNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetClassNameNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogue_GetClassNameNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgDialogue_GetClassNameNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogue_GetClassTextNames_Statics
	{
		struct DlgDialogue_eventGetClassTextNames_Parms
		{
			FName ParticipantName;
			TSet<FName> OutSet;
		};
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_OutSet;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OutSet_ElementProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UDlgDialogue_GetClassTextNames_Statics::NewProp_OutSet = { "OutSet", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgDialogue_eventGetClassTextNames_Parms, OutSet), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetClassTextNames_Statics::NewProp_OutSet_ElementProp = { "OutSet", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetClassTextNames_Statics::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgDialogue_eventGetClassTextNames_Parms, ParticipantName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogue_GetClassTextNames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetClassTextNames_Statics::NewProp_OutSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetClassTextNames_Statics::NewProp_OutSet_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetClassTextNames_Statics::NewProp_ParticipantName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetClassTextNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Gets the FText variable Names that correspond to the UClass of the provided ParticipantName.\n" },
		{ "ModuleRelativePath", "Public/DlgDialogue.h" },
		{ "ToolTip", "Gets the FText variable Names that correspond to the UClass of the provided ParticipantName." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogue_GetClassTextNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogue, nullptr, "GetClassTextNames", nullptr, nullptr, sizeof(DlgDialogue_eventGetClassTextNames_Parms), Z_Construct_UFunction_UDlgDialogue_GetClassTextNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetClassTextNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetClassTextNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetClassTextNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogue_GetClassTextNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgDialogue_GetClassTextNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogue_GetConditions_Statics
	{
		struct DlgDialogue_eventGetConditions_Parms
		{
			FName ParticipantName;
			TSet<FName> OutSet;
		};
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_OutSet;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OutSet_ElementProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UDlgDialogue_GetConditions_Statics::NewProp_OutSet = { "OutSet", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgDialogue_eventGetConditions_Parms, OutSet), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetConditions_Statics::NewProp_OutSet_ElementProp = { "OutSet", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetConditions_Statics::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgDialogue_eventGetConditions_Parms, ParticipantName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogue_GetConditions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetConditions_Statics::NewProp_OutSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetConditions_Statics::NewProp_OutSet_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetConditions_Statics::NewProp_ParticipantName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetConditions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Gets the Condition Names that correspond to the provided ParticipantName.\n" },
		{ "ModuleRelativePath", "Public/DlgDialogue.h" },
		{ "ToolTip", "Gets the Condition Names that correspond to the provided ParticipantName." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogue_GetConditions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogue, nullptr, "GetConditions", nullptr, nullptr, sizeof(DlgDialogue_eventGetConditions_Parms), Z_Construct_UFunction_UDlgDialogue_GetConditions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetConditions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetConditions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetConditions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogue_GetConditions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgDialogue_GetConditions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogue_GetCustomEvents_Statics
	{
		struct DlgDialogue_eventGetCustomEvents_Parms
		{
			FName ParticipantName;
			TSet<UClass*> OutSet;
		};
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_OutSet;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_OutSet_ElementProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UDlgDialogue_GetCustomEvents_Statics::NewProp_OutSet = { "OutSet", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgDialogue_eventGetCustomEvents_Parms, OutSet), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDlgDialogue_GetCustomEvents_Statics::NewProp_OutSet_ElementProp = { "OutSet", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetCustomEvents_Statics::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgDialogue_eventGetCustomEvents_Parms, ParticipantName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogue_GetCustomEvents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetCustomEvents_Statics::NewProp_OutSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetCustomEvents_Statics::NewProp_OutSet_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetCustomEvents_Statics::NewProp_ParticipantName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetCustomEvents_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Gets the Custom Events UClasses that correspond to the provided ParticipantName.\n" },
		{ "ModuleRelativePath", "Public/DlgDialogue.h" },
		{ "ToolTip", "Gets the Custom Events UClasses that correspond to the provided ParticipantName." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogue_GetCustomEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogue, nullptr, "GetCustomEvents", nullptr, nullptr, sizeof(DlgDialogue_eventGetCustomEvents_Parms), Z_Construct_UFunction_UDlgDialogue_GetCustomEvents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetCustomEvents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetCustomEvents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetCustomEvents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogue_GetCustomEvents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgDialogue_GetCustomEvents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogue_GetDialogueFName_Statics
	{
		struct DlgDialogue_eventGetDialogueFName_Parms
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
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetDialogueFName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgDialogue_eventGetDialogueFName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogue_GetDialogueFName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetDialogueFName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetDialogueFName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Same as the GetDialogueName only it returns a FName.\n" },
		{ "ModuleRelativePath", "Public/DlgDialogue.h" },
		{ "ToolTip", "Same as the GetDialogueName only it returns a FName." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogue_GetDialogueFName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogue, nullptr, "GetDialogueFName", nullptr, nullptr, sizeof(DlgDialogue_eventGetDialogueFName_Parms), Z_Construct_UFunction_UDlgDialogue_GetDialogueFName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetDialogueFName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetDialogueFName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetDialogueFName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogue_GetDialogueFName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgDialogue_GetDialogueFName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogue_GetDialogueName_Statics
	{
		struct DlgDialogue_eventGetDialogueName_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDlgDialogue_GetDialogueName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgDialogue_eventGetDialogueName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogue_GetDialogueName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetDialogueName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetDialogueName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Gets/extracts the name (without extension) of the dialog from the uasset filename\n" },
		{ "ModuleRelativePath", "Public/DlgDialogue.h" },
		{ "ToolTip", "Gets/extracts the name (without extension) of the dialog from the uasset filename" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogue_GetDialogueName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogue, nullptr, "GetDialogueName", nullptr, nullptr, sizeof(DlgDialogue_eventGetDialogueName_Parms), Z_Construct_UFunction_UDlgDialogue_GetDialogueName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetDialogueName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetDialogueName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetDialogueName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogue_GetDialogueName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgDialogue_GetDialogueName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogue_GetDialogueVersion_Statics
	{
		struct DlgDialogue_eventGetDialogueVersion_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDlgDialogue_GetDialogueVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgDialogue_eventGetDialogueVersion_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogue_GetDialogueVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetDialogueVersion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetDialogueVersion_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/DlgDialogue.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogue_GetDialogueVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogue, nullptr, "GetDialogueVersion", nullptr, nullptr, sizeof(DlgDialogue_eventGetDialogueVersion_Parms), Z_Construct_UFunction_UDlgDialogue_GetDialogueVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetDialogueVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetDialogueVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetDialogueVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogue_GetDialogueVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgDialogue_GetDialogueVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogue_GetEvents_Statics
	{
		struct DlgDialogue_eventGetEvents_Parms
		{
			FName ParticipantName;
			TSet<FName> OutSet;
		};
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_OutSet;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OutSet_ElementProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UDlgDialogue_GetEvents_Statics::NewProp_OutSet = { "OutSet", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgDialogue_eventGetEvents_Parms, OutSet), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetEvents_Statics::NewProp_OutSet_ElementProp = { "OutSet", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetEvents_Statics::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgDialogue_eventGetEvents_Parms, ParticipantName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogue_GetEvents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetEvents_Statics::NewProp_OutSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetEvents_Statics::NewProp_OutSet_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetEvents_Statics::NewProp_ParticipantName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetEvents_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Gets the Event Names that correspond to the provided ParticipantName.\n" },
		{ "ModuleRelativePath", "Public/DlgDialogue.h" },
		{ "ToolTip", "Gets the Event Names that correspond to the provided ParticipantName." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogue_GetEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogue, nullptr, "GetEvents", nullptr, nullptr, sizeof(DlgDialogue_eventGetEvents_Parms), Z_Construct_UFunction_UDlgDialogue_GetEvents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetEvents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetEvents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetEvents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogue_GetEvents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgDialogue_GetEvents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogue_GetFloatNames_Statics
	{
		struct DlgDialogue_eventGetFloatNames_Parms
		{
			FName ParticipantName;
			TSet<FName> OutSet;
		};
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_OutSet;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OutSet_ElementProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UDlgDialogue_GetFloatNames_Statics::NewProp_OutSet = { "OutSet", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgDialogue_eventGetFloatNames_Parms, OutSet), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetFloatNames_Statics::NewProp_OutSet_ElementProp = { "OutSet", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetFloatNames_Statics::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgDialogue_eventGetFloatNames_Parms, ParticipantName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogue_GetFloatNames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetFloatNames_Statics::NewProp_OutSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetFloatNames_Statics::NewProp_OutSet_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetFloatNames_Statics::NewProp_ParticipantName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetFloatNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Gets the float variable Names that correspond to the provided ParticipantName.\n" },
		{ "ModuleRelativePath", "Public/DlgDialogue.h" },
		{ "ToolTip", "Gets the float variable Names that correspond to the provided ParticipantName." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogue_GetFloatNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogue, nullptr, "GetFloatNames", nullptr, nullptr, sizeof(DlgDialogue_eventGetFloatNames_Parms), Z_Construct_UFunction_UDlgDialogue_GetFloatNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetFloatNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetFloatNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetFloatNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogue_GetFloatNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgDialogue_GetFloatNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogue_GetGUID_Statics
	{
		struct DlgDialogue_eventGetGUID_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDlgDialogue_GetGUID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgDialogue_eventGetGUID_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogue_GetGUID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetGUID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetGUID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|GUID" },
		{ "Comment", "// Gets the unique identifier for this dialogue.\n" },
		{ "ModuleRelativePath", "Public/DlgDialogue.h" },
		{ "ToolTip", "Gets the unique identifier for this dialogue." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogue_GetGUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogue, nullptr, "GetGUID", nullptr, nullptr, sizeof(DlgDialogue_eventGetGUID_Parms), Z_Construct_UFunction_UDlgDialogue_GetGUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetGUID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetGUID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetGUID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogue_GetGUID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgDialogue_GetGUID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogue_GetIntNames_Statics
	{
		struct DlgDialogue_eventGetIntNames_Parms
		{
			FName ParticipantName;
			TSet<FName> OutSet;
		};
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_OutSet;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OutSet_ElementProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UDlgDialogue_GetIntNames_Statics::NewProp_OutSet = { "OutSet", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgDialogue_eventGetIntNames_Parms, OutSet), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetIntNames_Statics::NewProp_OutSet_ElementProp = { "OutSet", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetIntNames_Statics::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgDialogue_eventGetIntNames_Parms, ParticipantName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogue_GetIntNames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetIntNames_Statics::NewProp_OutSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetIntNames_Statics::NewProp_OutSet_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetIntNames_Statics::NewProp_ParticipantName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetIntNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Gets the int variable Names that correspond to the provided ParticipantName.\n" },
		{ "ModuleRelativePath", "Public/DlgDialogue.h" },
		{ "ToolTip", "Gets the int variable Names that correspond to the provided ParticipantName." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogue_GetIntNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogue, nullptr, "GetIntNames", nullptr, nullptr, sizeof(DlgDialogue_eventGetIntNames_Parms), Z_Construct_UFunction_UDlgDialogue_GetIntNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetIntNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetIntNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetIntNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogue_GetIntNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgDialogue_GetIntNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogue_GetMutableNodeFromGUID_Statics
	{
		struct DlgDialogue_eventGetMutableNodeFromGUID_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgDialogue_GetMutableNodeFromGUID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgDialogue_eventGetMutableNodeFromGUID_Parms, ReturnValue), Z_Construct_UClass_UDlgNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetMutableNodeFromGUID_Statics::NewProp_NodeGUID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDlgDialogue_GetMutableNodeFromGUID_Statics::NewProp_NodeGUID = { "NodeGUID", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgDialogue_eventGetMutableNodeFromGUID_Parms, NodeGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetMutableNodeFromGUID_Statics::NewProp_NodeGUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetMutableNodeFromGUID_Statics::NewProp_NodeGUID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogue_GetMutableNodeFromGUID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetMutableNodeFromGUID_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetMutableNodeFromGUID_Statics::NewProp_NodeGUID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetMutableNodeFromGUID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Data" },
		{ "DisplayName", "Get Node From GUID" },
		{ "ModuleRelativePath", "Public/DlgDialogue.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogue_GetMutableNodeFromGUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogue, nullptr, "GetMutableNodeFromGUID", nullptr, nullptr, sizeof(DlgDialogue_eventGetMutableNodeFromGUID_Parms), Z_Construct_UFunction_UDlgDialogue_GetMutableNodeFromGUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetMutableNodeFromGUID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetMutableNodeFromGUID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetMutableNodeFromGUID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogue_GetMutableNodeFromGUID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgDialogue_GetMutableNodeFromGUID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogue_GetMutableNodeFromIndex_Statics
	{
		struct DlgDialogue_eventGetMutableNodeFromIndex_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgDialogue_GetMutableNodeFromIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgDialogue_eventGetMutableNodeFromIndex_Parms, ReturnValue), Z_Construct_UClass_UDlgNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDlgDialogue_GetMutableNodeFromIndex_Statics::NewProp_NodeIndex = { "NodeIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgDialogue_eventGetMutableNodeFromIndex_Parms, NodeIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogue_GetMutableNodeFromIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetMutableNodeFromIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetMutableNodeFromIndex_Statics::NewProp_NodeIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetMutableNodeFromIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Gets the Node as a mutable pointer.\n" },
		{ "DisplayName", "Get Node From Index" },
		{ "ModuleRelativePath", "Public/DlgDialogue.h" },
		{ "ToolTip", "Gets the Node as a mutable pointer." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogue_GetMutableNodeFromIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogue, nullptr, "GetMutableNodeFromIndex", nullptr, nullptr, sizeof(DlgDialogue_eventGetMutableNodeFromIndex_Parms), Z_Construct_UFunction_UDlgDialogue_GetMutableNodeFromIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetMutableNodeFromIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetMutableNodeFromIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetMutableNodeFromIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogue_GetMutableNodeFromIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgDialogue_GetMutableNodeFromIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogue_GetMutableStartNode_Statics
	{
		struct DlgDialogue_eventGetMutableStartNode_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgDialogue_GetMutableStartNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgDialogue_eventGetMutableStartNode_Parms, ReturnValue), Z_Construct_UClass_UDlgNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogue_GetMutableStartNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetMutableStartNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetMutableStartNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Gets the Start Node as a mutable pointer.\n" },
		{ "DisplayName", "Get Start Node" },
		{ "ModuleRelativePath", "Public/DlgDialogue.h" },
		{ "ToolTip", "Gets the Start Node as a mutable pointer." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogue_GetMutableStartNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogue, nullptr, "GetMutableStartNode", nullptr, nullptr, sizeof(DlgDialogue_eventGetMutableStartNode_Parms), Z_Construct_UFunction_UDlgDialogue_GetMutableStartNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetMutableStartNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetMutableStartNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetMutableStartNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogue_GetMutableStartNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgDialogue_GetMutableStartNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogue_GetNameNames_Statics
	{
		struct DlgDialogue_eventGetNameNames_Parms
		{
			FName ParticipantName;
			TSet<FName> OutSet;
		};
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_OutSet;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OutSet_ElementProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UDlgDialogue_GetNameNames_Statics::NewProp_OutSet = { "OutSet", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgDialogue_eventGetNameNames_Parms, OutSet), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetNameNames_Statics::NewProp_OutSet_ElementProp = { "OutSet", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetNameNames_Statics::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgDialogue_eventGetNameNames_Parms, ParticipantName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogue_GetNameNames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetNameNames_Statics::NewProp_OutSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetNameNames_Statics::NewProp_OutSet_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetNameNames_Statics::NewProp_ParticipantName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetNameNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Gets the name variable Names that correspond to the provided ParticipantName.\n" },
		{ "ModuleRelativePath", "Public/DlgDialogue.h" },
		{ "ToolTip", "Gets the name variable Names that correspond to the provided ParticipantName." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogue_GetNameNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogue, nullptr, "GetNameNames", nullptr, nullptr, sizeof(DlgDialogue_eventGetNameNames_Parms), Z_Construct_UFunction_UDlgDialogue_GetNameNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetNameNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetNameNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetNameNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogue_GetNameNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgDialogue_GetNameNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogue_GetNodeGUIDForIndex_Statics
	{
		struct DlgDialogue_eventGetNodeGUIDForIndex_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDlgDialogue_GetNodeGUIDForIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgDialogue_eventGetNodeGUIDForIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDlgDialogue_GetNodeGUIDForIndex_Statics::NewProp_NodeIndex = { "NodeIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgDialogue_eventGetNodeGUIDForIndex_Parms, NodeIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogue_GetNodeGUIDForIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetNodeGUIDForIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetNodeGUIDForIndex_Statics::NewProp_NodeIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetNodeGUIDForIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Gets the GUID for the Node at NodeIndex\n" },
		{ "DisplayName", "Get Node GUID For Index" },
		{ "ModuleRelativePath", "Public/DlgDialogue.h" },
		{ "ToolTip", "Gets the GUID for the Node at NodeIndex" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogue_GetNodeGUIDForIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogue, nullptr, "GetNodeGUIDForIndex", nullptr, nullptr, sizeof(DlgDialogue_eventGetNodeGUIDForIndex_Parms), Z_Construct_UFunction_UDlgDialogue_GetNodeGUIDForIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetNodeGUIDForIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetNodeGUIDForIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetNodeGUIDForIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogue_GetNodeGUIDForIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgDialogue_GetNodeGUIDForIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogue_GetNodeIndexForGUID_Statics
	{
		struct DlgDialogue_eventGetNodeIndexForGUID_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDlgDialogue_GetNodeIndexForGUID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgDialogue_eventGetNodeIndexForGUID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetNodeIndexForGUID_Statics::NewProp_NodeGUID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDlgDialogue_GetNodeIndexForGUID_Statics::NewProp_NodeGUID = { "NodeGUID", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgDialogue_eventGetNodeIndexForGUID_Parms, NodeGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetNodeIndexForGUID_Statics::NewProp_NodeGUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetNodeIndexForGUID_Statics::NewProp_NodeGUID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogue_GetNodeIndexForGUID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetNodeIndexForGUID_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetNodeIndexForGUID_Statics::NewProp_NodeGUID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetNodeIndexForGUID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Gets the corresponding Node Index for the supplied NodeGUID\n// Returns -1 (INDEX_NONE) if the Node GUID does not exist.\n" },
		{ "DisplayName", "Get Node Index For GUID" },
		{ "ModuleRelativePath", "Public/DlgDialogue.h" },
		{ "ToolTip", "Gets the corresponding Node Index for the supplied NodeGUID\nReturns -1 (INDEX_NONE) if the Node GUID does not exist." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogue_GetNodeIndexForGUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogue, nullptr, "GetNodeIndexForGUID", nullptr, nullptr, sizeof(DlgDialogue_eventGetNodeIndexForGUID_Parms), Z_Construct_UFunction_UDlgDialogue_GetNodeIndexForGUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetNodeIndexForGUID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetNodeIndexForGUID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetNodeIndexForGUID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogue_GetNodeIndexForGUID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgDialogue_GetNodeIndexForGUID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogue_GetNodes_Statics
	{
		struct DlgDialogue_eventGetNodes_Parms
		{
			TArray<UDlgNode*> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetNodes_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDlgDialogue_GetNodes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgDialogue_eventGetNodes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetNodes_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetNodes_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgDialogue_GetNodes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDlgNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogue_GetNodes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetNodes_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetNodes_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetNodes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Gets all the nodes\n" },
		{ "ModuleRelativePath", "Public/DlgDialogue.h" },
		{ "ToolTip", "Gets all the nodes" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogue_GetNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogue, nullptr, "GetNodes", nullptr, nullptr, sizeof(DlgDialogue_eventGetNodes_Parms), Z_Construct_UFunction_UDlgDialogue_GetNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetNodes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetNodes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetNodes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogue_GetNodes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgDialogue_GetNodes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogue_GetParticipantClass_Statics
	{
		struct DlgDialogue_eventGetParticipantClass_Parms
		{
			FName ParticipantName;
			UClass* ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDlgDialogue_GetParticipantClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgDialogue_eventGetParticipantClass_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetParticipantClass_Statics::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgDialogue_eventGetParticipantClass_Parms, ParticipantName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogue_GetParticipantClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetParticipantClass_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetParticipantClass_Statics::NewProp_ParticipantName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetParticipantClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "/// EDITOR function, it only works if the participant class is setup in the ParticipantsClasses array\n" },
		{ "ModuleRelativePath", "Public/DlgDialogue.h" },
		{ "ToolTip", "EDITOR function, it only works if the participant class is setup in the ParticipantsClasses array" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogue_GetParticipantClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogue, nullptr, "GetParticipantClass", nullptr, nullptr, sizeof(DlgDialogue_eventGetParticipantClass_Parms), Z_Construct_UFunction_UDlgDialogue_GetParticipantClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetParticipantClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetParticipantClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetParticipantClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogue_GetParticipantClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgDialogue_GetParticipantClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogue_GetParticipantsData_Statics
	{
		struct DlgDialogue_eventGetParticipantsData_Parms
		{
			TMap<FName,FDlgParticipantData> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetParticipantsData_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UDlgDialogue_GetParticipantsData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgDialogue_eventGetParticipantsData_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetParticipantsData_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetParticipantsData_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_GetParticipantsData_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDlgDialogue_GetParticipantsData_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FDlgParticipantData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogue_GetParticipantsData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetParticipantsData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetParticipantsData_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetParticipantsData_Statics::NewProp_ReturnValue_ValueProp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetParticipantsData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Gets the Dialogue Data Map. It maps Participant Name => Participant Data\n" },
		{ "ModuleRelativePath", "Public/DlgDialogue.h" },
		{ "ToolTip", "Gets the Dialogue Data Map. It maps Participant Name => Participant Data" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogue_GetParticipantsData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogue, nullptr, "GetParticipantsData", nullptr, nullptr, sizeof(DlgDialogue_eventGetParticipantsData_Parms), Z_Construct_UFunction_UDlgDialogue_GetParticipantsData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetParticipantsData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetParticipantsData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetParticipantsData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogue_GetParticipantsData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgDialogue_GetParticipantsData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogue_GetParticipantsNum_Statics
	{
		struct DlgDialogue_eventGetParticipantsNum_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDlgDialogue_GetParticipantsNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgDialogue_eventGetParticipantsNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogue_GetParticipantsNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_GetParticipantsNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_GetParticipantsNum_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Gets the number of participants in the Dialogue Data Map.\n" },
		{ "ModuleRelativePath", "Public/DlgDialogue.h" },
		{ "ToolTip", "Gets the number of participants in the Dialogue Data Map." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogue_GetParticipantsNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogue, nullptr, "GetParticipantsNum", nullptr, nullptr, sizeof(DlgDialogue_eventGetParticipantsNum_Parms), Z_Construct_UFunction_UDlgDialogue_GetParticipantsNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetParticipantsNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_GetParticipantsNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_GetParticipantsNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogue_GetParticipantsNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgDialogue_GetParticipantsNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogue_HasGUID_Statics
	{
		struct DlgDialogue_eventHasGUID_Parms
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
	void Z_Construct_UFunction_UDlgDialogue_HasGUID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgDialogue_eventHasGUID_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDlgDialogue_HasGUID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DlgDialogue_eventHasGUID_Parms), &Z_Construct_UFunction_UDlgDialogue_HasGUID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogue_HasGUID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_HasGUID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_HasGUID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|GUID" },
		{ "ModuleRelativePath", "Public/DlgDialogue.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogue_HasGUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogue, nullptr, "HasGUID", nullptr, nullptr, sizeof(DlgDialogue_eventHasGUID_Parms), Z_Construct_UFunction_UDlgDialogue_HasGUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_HasGUID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_HasGUID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_HasGUID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogue_HasGUID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgDialogue_HasGUID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogue_HasParticipant_Statics
	{
		struct DlgDialogue_eventHasParticipant_Parms
		{
			FName ParticipantName;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDlgDialogue_HasParticipant_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgDialogue_eventHasParticipant_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDlgDialogue_HasParticipant_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DlgDialogue_eventHasParticipant_Parms), &Z_Construct_UFunction_UDlgDialogue_HasParticipant_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDlgDialogue_HasParticipant_Statics::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgDialogue_eventHasParticipant_Parms, ParticipantName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogue_HasParticipant_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_HasParticipant_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_HasParticipant_Statics::NewProp_ParticipantName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_HasParticipant_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Checks if the provided ParticipantName (SpeakerName) is a key in the Dialogue Data Map\n" },
		{ "ModuleRelativePath", "Public/DlgDialogue.h" },
		{ "ToolTip", "Checks if the provided ParticipantName (SpeakerName) is a key in the Dialogue Data Map" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogue_HasParticipant_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogue, nullptr, "HasParticipant", nullptr, nullptr, sizeof(DlgDialogue_eventHasParticipant_Parms), Z_Construct_UFunction_UDlgDialogue_HasParticipant_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_HasParticipant_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_HasParticipant_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_HasParticipant_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogue_HasParticipant()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgDialogue_HasParticipant_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogue_IsValidNodeGUID_Statics
	{
		struct DlgDialogue_eventIsValidNodeGUID_Parms
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
	void Z_Construct_UFunction_UDlgDialogue_IsValidNodeGUID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgDialogue_eventIsValidNodeGUID_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDlgDialogue_IsValidNodeGUID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DlgDialogue_eventIsValidNodeGUID_Parms), &Z_Construct_UFunction_UDlgDialogue_IsValidNodeGUID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_IsValidNodeGUID_Statics::NewProp_NodeGUID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDlgDialogue_IsValidNodeGUID_Statics::NewProp_NodeGUID = { "NodeGUID", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgDialogue_eventIsValidNodeGUID_Parms, NodeGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_IsValidNodeGUID_Statics::NewProp_NodeGUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_IsValidNodeGUID_Statics::NewProp_NodeGUID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogue_IsValidNodeGUID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_IsValidNodeGUID_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_IsValidNodeGUID_Statics::NewProp_NodeGUID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_IsValidNodeGUID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/DlgDialogue.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogue_IsValidNodeGUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogue, nullptr, "IsValidNodeGUID", nullptr, nullptr, sizeof(DlgDialogue_eventIsValidNodeGUID_Parms), Z_Construct_UFunction_UDlgDialogue_IsValidNodeGUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_IsValidNodeGUID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_IsValidNodeGUID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_IsValidNodeGUID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogue_IsValidNodeGUID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgDialogue_IsValidNodeGUID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDlgDialogue_IsValidNodeIndex_Statics
	{
		struct DlgDialogue_eventIsValidNodeIndex_Parms
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
	void Z_Construct_UFunction_UDlgDialogue_IsValidNodeIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgDialogue_eventIsValidNodeIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDlgDialogue_IsValidNodeIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DlgDialogue_eventIsValidNodeIndex_Parms), &Z_Construct_UFunction_UDlgDialogue_IsValidNodeIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDlgDialogue_IsValidNodeIndex_Statics::NewProp_NodeIndex = { "NodeIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgDialogue_eventIsValidNodeIndex_Parms, NodeIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgDialogue_IsValidNodeIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_IsValidNodeIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgDialogue_IsValidNodeIndex_Statics::NewProp_NodeIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgDialogue_IsValidNodeIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/DlgDialogue.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgDialogue_IsValidNodeIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgDialogue, nullptr, "IsValidNodeIndex", nullptr, nullptr, sizeof(DlgDialogue_eventIsValidNodeIndex_Parms), Z_Construct_UFunction_UDlgDialogue_IsValidNodeIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_IsValidNodeIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgDialogue_IsValidNodeIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgDialogue_IsValidNodeIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgDialogue_IsValidNodeIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgDialogue_IsValidNodeIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDlgDialogue_NoRegister()
	{
		return UDlgDialogue::StaticClass();
	}
	struct Z_Construct_UClass_UDlgDialogue_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DlgGraph_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DlgGraph;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodesGUIDToIndexMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_NodesGUIDToIndexMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NodesGUIDToIndexMap_Key_KeyProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NodesGUIDToIndexMap_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Nodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Nodes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Nodes_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Nodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StartNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllSpeakerStates_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_AllSpeakerStates;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AllSpeakerStates_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticipantsData_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ParticipantsData;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParticipantsData_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParticipantsData_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticipantsClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ParticipantsClasses;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParticipantsClasses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GUID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Version;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDlgDialogue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDlgDialogue_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDlgDialogue_GetAllParticipantClasses, "GetAllParticipantClasses" }, // 1373282377
		{ &Z_Construct_UFunction_UDlgDialogue_GetAllParticipantNames, "GetAllParticipantNames" }, // 2204897748
		{ &Z_Construct_UFunction_UDlgDialogue_GetAllSpeakerStates, "GetAllSpeakerStates" }, // 1087203501
		{ &Z_Construct_UFunction_UDlgDialogue_GetBoolNames, "GetBoolNames" }, // 346014552
		{ &Z_Construct_UFunction_UDlgDialogue_GetClassBoolNames, "GetClassBoolNames" }, // 3122270999
		{ &Z_Construct_UFunction_UDlgDialogue_GetClassFloatNames, "GetClassFloatNames" }, // 1536000934
		{ &Z_Construct_UFunction_UDlgDialogue_GetClassIntNames, "GetClassIntNames" }, // 199275035
		{ &Z_Construct_UFunction_UDlgDialogue_GetClassNameNames, "GetClassNameNames" }, // 3212587136
		{ &Z_Construct_UFunction_UDlgDialogue_GetClassTextNames, "GetClassTextNames" }, // 3826136590
		{ &Z_Construct_UFunction_UDlgDialogue_GetConditions, "GetConditions" }, // 3276000693
		{ &Z_Construct_UFunction_UDlgDialogue_GetCustomEvents, "GetCustomEvents" }, // 2866693832
		{ &Z_Construct_UFunction_UDlgDialogue_GetDialogueFName, "GetDialogueFName" }, // 2418453540
		{ &Z_Construct_UFunction_UDlgDialogue_GetDialogueName, "GetDialogueName" }, // 3122834579
		{ &Z_Construct_UFunction_UDlgDialogue_GetDialogueVersion, "GetDialogueVersion" }, // 3943215532
		{ &Z_Construct_UFunction_UDlgDialogue_GetEvents, "GetEvents" }, // 3654531605
		{ &Z_Construct_UFunction_UDlgDialogue_GetFloatNames, "GetFloatNames" }, // 1318766297
		{ &Z_Construct_UFunction_UDlgDialogue_GetGUID, "GetGUID" }, // 1981407210
		{ &Z_Construct_UFunction_UDlgDialogue_GetIntNames, "GetIntNames" }, // 3974222308
		{ &Z_Construct_UFunction_UDlgDialogue_GetMutableNodeFromGUID, "GetMutableNodeFromGUID" }, // 2722147744
		{ &Z_Construct_UFunction_UDlgDialogue_GetMutableNodeFromIndex, "GetMutableNodeFromIndex" }, // 1074055198
		{ &Z_Construct_UFunction_UDlgDialogue_GetMutableStartNode, "GetMutableStartNode" }, // 2569269820
		{ &Z_Construct_UFunction_UDlgDialogue_GetNameNames, "GetNameNames" }, // 1093611507
		{ &Z_Construct_UFunction_UDlgDialogue_GetNodeGUIDForIndex, "GetNodeGUIDForIndex" }, // 1682073382
		{ &Z_Construct_UFunction_UDlgDialogue_GetNodeIndexForGUID, "GetNodeIndexForGUID" }, // 2810414890
		{ &Z_Construct_UFunction_UDlgDialogue_GetNodes, "GetNodes" }, // 1903846827
		{ &Z_Construct_UFunction_UDlgDialogue_GetParticipantClass, "GetParticipantClass" }, // 3465151099
		{ &Z_Construct_UFunction_UDlgDialogue_GetParticipantsData, "GetParticipantsData" }, // 1408120904
		{ &Z_Construct_UFunction_UDlgDialogue_GetParticipantsNum, "GetParticipantsNum" }, // 4229327268
		{ &Z_Construct_UFunction_UDlgDialogue_HasGUID, "HasGUID" }, // 2022158758
		{ &Z_Construct_UFunction_UDlgDialogue_HasParticipant, "HasParticipant" }, // 3793177316
		{ &Z_Construct_UFunction_UDlgDialogue_IsValidNodeGUID, "IsValidNodeGUID" }, // 822503940
		{ &Z_Construct_UFunction_UDlgDialogue_IsValidNodeIndex, "IsValidNodeIndex" }, // 1296033997
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgDialogue_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *  Dialogue asset containing the static data of a dialogue\n *  Instances can be created in content browser\n *  Dialogues have a custom blueprint editor\n */" },
		{ "DisplayThumbnail", "true" },
		{ "IncludePath", "DlgDialogue.h" },
		{ "ModuleRelativePath", "Public/DlgDialogue.h" },
		{ "ToolTip", "Dialogue asset containing the static data of a dialogue\nInstances can be created in content browser\nDialogues have a custom blueprint editor" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgDialogue_Statics::NewProp_DlgGraph_MetaData[] = {
		{ "Comment", "// EdGraph based representation of the DlgDialogue class\n" },
		{ "DlgNoExport", "" },
		{ "ModuleRelativePath", "Public/DlgDialogue.h" },
		{ "ToolTip", "EdGraph based representation of the DlgDialogue class" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDlgDialogue_Statics::NewProp_DlgGraph = { "DlgGraph", nullptr, (EPropertyFlags)0x0020080800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDlgDialogue, DlgGraph), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDlgDialogue_Statics::NewProp_DlgGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgDialogue_Statics::NewProp_DlgGraph_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgDialogue_Statics::NewProp_NodesGUIDToIndexMap_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Maps Node GUID => Node Index\n" },
		{ "DisplayName", "Nodes GUID To Index Map" },
		{ "ModuleRelativePath", "Public/DlgDialogue.h" },
		{ "ToolTip", "Maps Node GUID => Node Index" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDlgDialogue_Statics::NewProp_NodesGUIDToIndexMap = { "NodesGUIDToIndexMap", nullptr, (EPropertyFlags)0x00200c0000020001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDlgDialogue, NodesGUIDToIndexMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDlgDialogue_Statics::NewProp_NodesGUIDToIndexMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgDialogue_Statics::NewProp_NodesGUIDToIndexMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDlgDialogue_Statics::NewProp_NodesGUIDToIndexMap_Key_KeyProp = { "NodesGUIDToIndexMap_Key", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDlgDialogue_Statics::NewProp_NodesGUIDToIndexMap_ValueProp = { "NodesGUIDToIndexMap", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgDialogue_Statics::NewProp_Nodes_MetaData[] = {
		{ "Comment", "// The new list of all nodes that belong to this Dialogue. Each nodes has children (edges) that have indices that point\n// to other nodes in this array.\n// NOTE: Add VisibleAnywhere to make it easier to debug\n" },
		{ "DlgWriteIndex", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DlgDialogue.h" },
		{ "ToolTip", "The new list of all nodes that belong to this Dialogue. Each nodes has children (edges) that have indices that point\nto other nodes in this array.\nNOTE: Add VisibleAnywhere to make it easier to debug" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDlgDialogue_Statics::NewProp_Nodes = { "Nodes", nullptr, (EPropertyFlags)0x00200c8000000048, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDlgDialogue, Nodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDlgDialogue_Statics::NewProp_Nodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgDialogue_Statics::NewProp_Nodes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgDialogue_Statics::NewProp_Nodes_Inner_MetaData[] = {
		{ "Comment", "// The new list of all nodes that belong to this Dialogue. Each nodes has children (edges) that have indices that point\n// to other nodes in this array.\n// NOTE: Add VisibleAnywhere to make it easier to debug\n" },
		{ "DlgWriteIndex", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DlgDialogue.h" },
		{ "ToolTip", "The new list of all nodes that belong to this Dialogue. Each nodes has children (edges) that have indices that point\nto other nodes in this array.\nNOTE: Add VisibleAnywhere to make it easier to debug" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDlgDialogue_Statics::NewProp_Nodes_Inner = { "Nodes", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDlgNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDlgDialogue_Statics::NewProp_Nodes_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgDialogue_Statics::NewProp_Nodes_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgDialogue_Statics::NewProp_StartNode_MetaData[] = {
		{ "Comment", "// Root node, Dialogue is started from the first child with satisfied condition (like the SelectorFirst node)\n// NOTE: Add VisibleAnywhere to make it easier to debug\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DlgDialogue.h" },
		{ "ToolTip", "Root node, Dialogue is started from the first child with satisfied condition (like the SelectorFirst node)\nNOTE: Add VisibleAnywhere to make it easier to debug" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDlgDialogue_Statics::NewProp_StartNode = { "StartNode", nullptr, (EPropertyFlags)0x0022080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDlgDialogue, StartNode), Z_Construct_UClass_UDlgNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDlgDialogue_Statics::NewProp_StartNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgDialogue_Statics::NewProp_StartNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgDialogue_Statics::NewProp_AllSpeakerStates_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// All the speaker states used inside this Dialogue.\n" },
		{ "DlgNoExport", "" },
		{ "ModuleRelativePath", "Public/DlgDialogue.h" },
		{ "ToolTip", "All the speaker states used inside this Dialogue." },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UDlgDialogue_Statics::NewProp_AllSpeakerStates = { "AllSpeakerStates", nullptr, (EPropertyFlags)0x00200c0000020001, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDlgDialogue, AllSpeakerStates), METADATA_PARAMS(Z_Construct_UClass_UDlgDialogue_Statics::NewProp_AllSpeakerStates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgDialogue_Statics::NewProp_AllSpeakerStates_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDlgDialogue_Statics::NewProp_AllSpeakerStates_ElementProp = { "AllSpeakerStates", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgDialogue_Statics::NewProp_ParticipantsData_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Gathered data about events/conditions for each participant (for bp nodes, suggestions, etc.)\n" },
		{ "DlgNoExport", "" },
		{ "ModuleRelativePath", "Public/DlgDialogue.h" },
		{ "ToolTip", "Gathered data about events/conditions for each participant (for bp nodes, suggestions, etc.)" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDlgDialogue_Statics::NewProp_ParticipantsData = { "ParticipantsData", nullptr, (EPropertyFlags)0x00200c0000020001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDlgDialogue, ParticipantsData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDlgDialogue_Statics::NewProp_ParticipantsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgDialogue_Statics::NewProp_ParticipantsData_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDlgDialogue_Statics::NewProp_ParticipantsData_Key_KeyProp = { "ParticipantsData_Key", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDlgDialogue_Statics::NewProp_ParticipantsData_ValueProp = { "ParticipantsData", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FDlgParticipantData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgDialogue_Statics::NewProp_ParticipantsClasses_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// All the Participants that require for you to define its UClass otherwise the auto completion/suggestion won't work in case you want to modify/check Class variables.\n" },
		{ "ModuleRelativePath", "Public/DlgDialogue.h" },
		{ "ToolTip", "All the Participants that require for you to define its UClass otherwise the auto completion/suggestion won't work in case you want to modify/check Class variables." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDlgDialogue_Statics::NewProp_ParticipantsClasses = { "ParticipantsClasses", nullptr, (EPropertyFlags)0x0020080000000041, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDlgDialogue, ParticipantsClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDlgDialogue_Statics::NewProp_ParticipantsClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgDialogue_Statics::NewProp_ParticipantsClasses_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDlgDialogue_Statics::NewProp_ParticipantsClasses_Inner = { "ParticipantsClasses", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDlgParticipantClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgDialogue_Statics::NewProp_GUID_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// The Unique identifier for each dialogue. This is used to uniquely identify a Dialogue, instead of it's name or path. Much more safer.\n" },
		{ "ModuleRelativePath", "Public/DlgDialogue.h" },
		{ "ToolTip", "The Unique identifier for each dialogue. This is used to uniquely identify a Dialogue, instead of it's name or path. Much more safer." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDlgDialogue_Statics::NewProp_GUID = { "GUID", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDlgDialogue, GUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UDlgDialogue_Statics::NewProp_GUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgDialogue_Statics::NewProp_GUID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgDialogue_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// The name of the dialog, only used for reference in the text file, as this must always match the .uasset file name and .dlg file name\n" },
		{ "ModuleRelativePath", "Public/DlgDialogue.h" },
		{ "ToolTip", "The name of the dialog, only used for reference in the text file, as this must always match the .uasset file name and .dlg file name" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDlgDialogue_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDlgDialogue, Name), METADATA_PARAMS(Z_Construct_UClass_UDlgDialogue_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgDialogue_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgDialogue_Statics::NewProp_Version_MetaData[] = {
		{ "Comment", "// Used to keep track of the version in text  file too, besides being written in the .uasset file.\n" },
		{ "ModuleRelativePath", "Public/DlgDialogue.h" },
		{ "ToolTip", "Used to keep track of the version in text  file too, besides being written in the .uasset file." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDlgDialogue_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDlgDialogue, Version), METADATA_PARAMS(Z_Construct_UClass_UDlgDialogue_Statics::NewProp_Version_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgDialogue_Statics::NewProp_Version_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDlgDialogue_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgDialogue_Statics::NewProp_DlgGraph,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgDialogue_Statics::NewProp_NodesGUIDToIndexMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgDialogue_Statics::NewProp_NodesGUIDToIndexMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgDialogue_Statics::NewProp_NodesGUIDToIndexMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgDialogue_Statics::NewProp_Nodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgDialogue_Statics::NewProp_Nodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgDialogue_Statics::NewProp_StartNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgDialogue_Statics::NewProp_AllSpeakerStates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgDialogue_Statics::NewProp_AllSpeakerStates_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgDialogue_Statics::NewProp_ParticipantsData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgDialogue_Statics::NewProp_ParticipantsData_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgDialogue_Statics::NewProp_ParticipantsData_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgDialogue_Statics::NewProp_ParticipantsClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgDialogue_Statics::NewProp_ParticipantsClasses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgDialogue_Statics::NewProp_GUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgDialogue_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgDialogue_Statics::NewProp_Version,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDlgDialogue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgDialogue>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDlgDialogue_Statics::ClassParams = {
		&UDlgDialogue::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDlgDialogue_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDlgDialogue_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDlgDialogue_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgDialogue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDlgDialogue()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDlgDialogue_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDlgDialogue, 4066017116);
	template<> DLGSYSTEM_API UClass* StaticClass<UDlgDialogue>()
	{
		return UDlgDialogue::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDlgDialogue(Z_Construct_UClass_UDlgDialogue, &UDlgDialogue::StaticClass, TEXT("/Script/DlgSystem"), TEXT("UDlgDialogue"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDlgDialogue);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UDlgDialogue)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
