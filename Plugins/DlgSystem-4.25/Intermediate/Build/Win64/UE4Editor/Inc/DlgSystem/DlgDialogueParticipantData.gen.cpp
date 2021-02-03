// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystem/Public/DlgDialogueParticipantData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDlgDialogueParticipantData() {}
// Cross Module References
	DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgParticipantData();
	UPackage* Z_Construct_UPackage__Script_DlgSystem();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
class UScriptStruct* FDlgParticipantData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DLGSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FDlgParticipantData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDlgParticipantData, Z_Construct_UPackage__Script_DlgSystem(), TEXT("DlgParticipantData"), sizeof(FDlgParticipantData), Get_Z_Construct_UScriptStruct_FDlgParticipantData_Hash());
	}
	return Singleton;
}
template<> DLGSYSTEM_API UScriptStruct* StaticStruct<FDlgParticipantData>()
{
	return FDlgParticipantData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDlgParticipantData(FDlgParticipantData::StaticStruct, TEXT("/Script/DlgSystem"), TEXT("DlgParticipantData"), false, nullptr, nullptr);
static struct FScriptStruct_DlgSystem_StaticRegisterNativesFDlgParticipantData
{
	FScriptStruct_DlgSystem_StaticRegisterNativesFDlgParticipantData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DlgParticipantData")),new UScriptStruct::TCppStructOps<FDlgParticipantData>);
	}
} ScriptStruct_DlgSystem_StaticRegisterNativesFDlgParticipantData;
	struct Z_Construct_UScriptStruct_FDlgParticipantData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClassTextVariableNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_ClassTextVariableNames;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ClassTextVariableNames_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClassNameVariableNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_ClassNameVariableNames;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ClassNameVariableNames_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClassBoolVariableNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_ClassBoolVariableNames;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ClassBoolVariableNames_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClassFloatVariableNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_ClassFloatVariableNames;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ClassFloatVariableNames_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClassIntVariableNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_ClassIntVariableNames;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ClassIntVariableNames_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NameVariableNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_NameVariableNames;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NameVariableNames_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoolVariableNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_BoolVariableNames;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoolVariableNames_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatVariableNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_FloatVariableNames;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FloatVariableNames_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntVariableNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_IntVariableNames;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_IntVariableNames_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTextArguments_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_CustomTextArguments;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CustomTextArguments_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomEvents_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_CustomEvents;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CustomEvents_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Events_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_Events;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Events_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomConditions_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_CustomConditions;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CustomConditions_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Conditions_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_Conditions;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Conditions_ElementProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgParticipantData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Structure useful to cache all the names used by a participant\n" },
		{ "ModuleRelativePath", "Public/DlgDialogueParticipantData.h" },
		{ "ToolTip", "Structure useful to cache all the names used by a participant" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDlgParticipantData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_ClassTextVariableNames_MetaData[] = {
		{ "Category", "Dialogue|Participant" },
		{ "Comment", "// Class Texts used in a Dialogue\n" },
		{ "ModuleRelativePath", "Public/DlgDialogueParticipantData.h" },
		{ "ToolTip", "Class Texts used in a Dialogue" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_ClassTextVariableNames = { "ClassTextVariableNames", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDlgParticipantData, ClassTextVariableNames), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_ClassTextVariableNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_ClassTextVariableNames_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_ClassTextVariableNames_ElementProp = { "ClassTextVariableNames", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_ClassNameVariableNames_MetaData[] = {
		{ "Category", "Dialogue|Participant" },
		{ "Comment", "// Class Names used in a Dialogue\n" },
		{ "ModuleRelativePath", "Public/DlgDialogueParticipantData.h" },
		{ "ToolTip", "Class Names used in a Dialogue" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_ClassNameVariableNames = { "ClassNameVariableNames", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDlgParticipantData, ClassNameVariableNames), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_ClassNameVariableNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_ClassNameVariableNames_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_ClassNameVariableNames_ElementProp = { "ClassNameVariableNames", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_ClassBoolVariableNames_MetaData[] = {
		{ "Category", "Dialogue|Participant" },
		{ "Comment", "// Class Booleans used in a Dialogue\n" },
		{ "ModuleRelativePath", "Public/DlgDialogueParticipantData.h" },
		{ "ToolTip", "Class Booleans used in a Dialogue" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_ClassBoolVariableNames = { "ClassBoolVariableNames", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDlgParticipantData, ClassBoolVariableNames), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_ClassBoolVariableNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_ClassBoolVariableNames_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_ClassBoolVariableNames_ElementProp = { "ClassBoolVariableNames", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_ClassFloatVariableNames_MetaData[] = {
		{ "Category", "Dialogue|Participant" },
		{ "Comment", "// Class Floats used in a Dialogue\n" },
		{ "ModuleRelativePath", "Public/DlgDialogueParticipantData.h" },
		{ "ToolTip", "Class Floats used in a Dialogue" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_ClassFloatVariableNames = { "ClassFloatVariableNames", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDlgParticipantData, ClassFloatVariableNames), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_ClassFloatVariableNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_ClassFloatVariableNames_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_ClassFloatVariableNames_ElementProp = { "ClassFloatVariableNames", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_ClassIntVariableNames_MetaData[] = {
		{ "Category", "Dialogue|Participant" },
		{ "Comment", "// Class Integers used in a Dialogue\n" },
		{ "ModuleRelativePath", "Public/DlgDialogueParticipantData.h" },
		{ "ToolTip", "Class Integers used in a Dialogue" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_ClassIntVariableNames = { "ClassIntVariableNames", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDlgParticipantData, ClassIntVariableNames), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_ClassIntVariableNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_ClassIntVariableNames_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_ClassIntVariableNames_ElementProp = { "ClassIntVariableNames", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_NameVariableNames_MetaData[] = {
		{ "Category", "Dialogue|Participant" },
		{ "Comment", "// Names used in a Dialogue\n" },
		{ "ModuleRelativePath", "Public/DlgDialogueParticipantData.h" },
		{ "ToolTip", "Names used in a Dialogue" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_NameVariableNames = { "NameVariableNames", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDlgParticipantData, NameVariableNames), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_NameVariableNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_NameVariableNames_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_NameVariableNames_ElementProp = { "NameVariableNames", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_BoolVariableNames_MetaData[] = {
		{ "Category", "Dialogue|Participant" },
		{ "Comment", "// Booleans used in a Dialogue\n" },
		{ "ModuleRelativePath", "Public/DlgDialogueParticipantData.h" },
		{ "ToolTip", "Booleans used in a Dialogue" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_BoolVariableNames = { "BoolVariableNames", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDlgParticipantData, BoolVariableNames), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_BoolVariableNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_BoolVariableNames_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_BoolVariableNames_ElementProp = { "BoolVariableNames", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_FloatVariableNames_MetaData[] = {
		{ "Category", "Dialogue|Participant" },
		{ "Comment", "// Floats used in a Dialogue\n" },
		{ "ModuleRelativePath", "Public/DlgDialogueParticipantData.h" },
		{ "ToolTip", "Floats used in a Dialogue" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_FloatVariableNames = { "FloatVariableNames", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDlgParticipantData, FloatVariableNames), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_FloatVariableNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_FloatVariableNames_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_FloatVariableNames_ElementProp = { "FloatVariableNames", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_IntVariableNames_MetaData[] = {
		{ "Category", "Dialogue|Participant" },
		{ "Comment", "// Integers used in a Dialogue\n" },
		{ "ModuleRelativePath", "Public/DlgDialogueParticipantData.h" },
		{ "ToolTip", "Integers used in a Dialogue" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_IntVariableNames = { "IntVariableNames", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDlgParticipantData, IntVariableNames), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_IntVariableNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_IntVariableNames_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_IntVariableNames_ElementProp = { "IntVariableNames", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_CustomTextArguments_MetaData[] = {
		{ "Category", "Dialogue|Participant" },
		{ "Comment", "// Custom Events UClasses of type UDlgTextArgumentCustom\n" },
		{ "ModuleRelativePath", "Public/DlgDialogueParticipantData.h" },
		{ "ToolTip", "Custom Events UClasses of type UDlgTextArgumentCustom" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_CustomTextArguments = { "CustomTextArguments", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDlgParticipantData, CustomTextArguments), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_CustomTextArguments_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_CustomTextArguments_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_CustomTextArguments_ElementProp = { "CustomTextArguments", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_CustomEvents_MetaData[] = {
		{ "Category", "Dialogue|Participant" },
		{ "Comment", "// Custom Events UClasses of type UDlgEventCustom\n" },
		{ "ModuleRelativePath", "Public/DlgDialogueParticipantData.h" },
		{ "ToolTip", "Custom Events UClasses of type UDlgEventCustom" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_CustomEvents = { "CustomEvents", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDlgParticipantData, CustomEvents), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_CustomEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_CustomEvents_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_CustomEvents_ElementProp = { "CustomEvents", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_Events_MetaData[] = {
		{ "Category", "Dialogue|Participant" },
		{ "Comment", "// FName based events (aka events of type EDlgEventType)\n" },
		{ "ModuleRelativePath", "Public/DlgDialogueParticipantData.h" },
		{ "ToolTip", "FName based events (aka events of type EDlgEventType)" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_Events = { "Events", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDlgParticipantData, Events), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_Events_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_Events_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_Events_ElementProp = { "Events", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_CustomConditions_MetaData[] = {
		{ "Category", "Dialogue|Participant" },
		{ "Comment", "// Custom Conditions UClasses of type UDlgConditionCustom\n" },
		{ "ModuleRelativePath", "Public/DlgDialogueParticipantData.h" },
		{ "ToolTip", "Custom Conditions UClasses of type UDlgConditionCustom" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_CustomConditions = { "CustomConditions", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDlgParticipantData, CustomConditions), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_CustomConditions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_CustomConditions_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_CustomConditions_ElementProp = { "CustomConditions", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_Conditions_MetaData[] = {
		{ "Category", "Dialogue|Participant" },
		{ "Comment", "// FName based conditions (aka conditions of type EventCall).\n" },
		{ "ModuleRelativePath", "Public/DlgDialogueParticipantData.h" },
		{ "ToolTip", "FName based conditions (aka conditions of type EventCall)." },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_Conditions = { "Conditions", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDlgParticipantData, Conditions), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_Conditions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_Conditions_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_Conditions_ElementProp = { "Conditions", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDlgParticipantData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_ClassTextVariableNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_ClassTextVariableNames_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_ClassNameVariableNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_ClassNameVariableNames_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_ClassBoolVariableNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_ClassBoolVariableNames_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_ClassFloatVariableNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_ClassFloatVariableNames_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_ClassIntVariableNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_ClassIntVariableNames_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_NameVariableNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_NameVariableNames_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_BoolVariableNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_BoolVariableNames_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_FloatVariableNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_FloatVariableNames_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_IntVariableNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_IntVariableNames_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_CustomTextArguments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_CustomTextArguments_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_CustomEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_CustomEvents_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_Events,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_Events_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_CustomConditions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_CustomConditions_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_Conditions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewProp_Conditions_ElementProp,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDlgParticipantData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystem,
		nullptr,
		&NewStructOps,
		"DlgParticipantData",
		sizeof(FDlgParticipantData),
		alignof(FDlgParticipantData),
		Z_Construct_UScriptStruct_FDlgParticipantData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgParticipantData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgParticipantData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgParticipantData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDlgParticipantData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDlgParticipantData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DlgSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DlgParticipantData"), sizeof(FDlgParticipantData), Get_Z_Construct_UScriptStruct_FDlgParticipantData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDlgParticipantData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDlgParticipantData_Hash() { return 1705177683U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
