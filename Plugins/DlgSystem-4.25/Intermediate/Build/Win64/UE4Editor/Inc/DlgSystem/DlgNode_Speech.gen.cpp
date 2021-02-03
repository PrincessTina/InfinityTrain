// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystem/Public/Nodes/DlgNode_Speech.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDlgNode_Speech() {}
// Cross Module References
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNode_Speech_NoRegister();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNode_Speech();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNode();
	UPackage* Z_Construct_UPackage__Script_DlgSystem();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDialogueWave_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNodeData_NoRegister();
	DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgTextArgument();
// End Cross Module References
	DEFINE_FUNCTION(UDlgNode_Speech::execIsVirtualParent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsVirtualParent();
		P_NATIVE_END;
	}
	void UDlgNode_Speech::StaticRegisterNativesUDlgNode_Speech()
	{
		UClass* Class = UDlgNode_Speech::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsVirtualParent", &UDlgNode_Speech::execIsVirtualParent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDlgNode_Speech_IsVirtualParent_Statics
	{
		struct DlgNode_Speech_eventIsVirtualParent_Parms
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
	void Z_Construct_UFunction_UDlgNode_Speech_IsVirtualParent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgNode_Speech_eventIsVirtualParent_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDlgNode_Speech_IsVirtualParent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DlgNode_Speech_eventIsVirtualParent_Parms), &Z_Construct_UFunction_UDlgNode_Speech_IsVirtualParent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgNode_Speech_IsVirtualParent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgNode_Speech_IsVirtualParent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgNode_Speech_IsVirtualParent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// Is this node a virtual parent?\n" },
		{ "ModuleRelativePath", "Public/Nodes/DlgNode_Speech.h" },
		{ "ToolTip", "Is this node a virtual parent?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgNode_Speech_IsVirtualParent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgNode_Speech, nullptr, "IsVirtualParent", nullptr, nullptr, sizeof(DlgNode_Speech_eventIsVirtualParent_Parms), Z_Construct_UFunction_UDlgNode_Speech_IsVirtualParent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_Speech_IsVirtualParent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgNode_Speech_IsVirtualParent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_Speech_IsVirtualParent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgNode_Speech_IsVirtualParent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgNode_Speech_IsVirtualParent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDlgNode_Speech_NoRegister()
	{
		return UDlgNode_Speech::StaticClass();
	}
	struct Z_Construct_UClass_UDlgNode_Speech_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GenericData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GenericData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoiceDialogueWave_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VoiceDialogueWave;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoiceSoundWave_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VoiceSoundWave;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeakerState_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SpeakerState;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bVirtualParentFireDirectChildEnterEvents_MetaData[];
#endif
		static void NewProp_bVirtualParentFireDirectChildEnterEvents_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVirtualParentFireDirectChildEnterEvents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsVirtualParent_MetaData[];
#endif
		static void NewProp_bIsVirtualParent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsVirtualParent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDlgNode_Speech_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDlgNode,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDlgNode_Speech_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDlgNode_Speech_IsVirtualParent, "IsVirtualParent" }, // 3723927886
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgNode_Speech_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Dialogue" },
		{ "Comment", "/**\n * Normal dialogue node - someone says something.\n */" },
		{ "IncludePath", "Nodes/DlgNode_Speech.h" },
		{ "ModuleRelativePath", "Public/Nodes/DlgNode_Speech.h" },
		{ "ToolTip", "Normal dialogue node - someone says something." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_GenericData_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// Any generic object you would like\n// NOTE: You should probably use the NodeData\n" },
		{ "DlgSaveOnlyReference", "" },
		{ "ModuleRelativePath", "Public/Nodes/DlgNode_Speech.h" },
		{ "ToolTip", "Any generic object you would like\nNOTE: You should probably use the NodeData" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_GenericData = { "GenericData", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDlgNode_Speech, GenericData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_GenericData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_GenericData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_VoiceDialogueWave_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// Voice attached to this node. The Dialogue Wave variant. Only the first wave from the dialogue context array should be used.\n// NOTE: You should probably use the NodeData\n" },
		{ "DlgSaveOnlyReference", "" },
		{ "ModuleRelativePath", "Public/Nodes/DlgNode_Speech.h" },
		{ "ToolTip", "Voice attached to this node. The Dialogue Wave variant. Only the first wave from the dialogue context array should be used.\nNOTE: You should probably use the NodeData" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_VoiceDialogueWave = { "VoiceDialogueWave", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDlgNode_Speech, VoiceDialogueWave), Z_Construct_UClass_UDialogueWave_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_VoiceDialogueWave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_VoiceDialogueWave_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_VoiceSoundWave_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// Voice attached to this node. The Sound Wave variant.\n// NOTE: You should probably use the NodeData\n" },
		{ "DlgSaveOnlyReference", "" },
		{ "ModuleRelativePath", "Public/Nodes/DlgNode_Speech.h" },
		{ "ToolTip", "Voice attached to this node. The Sound Wave variant.\nNOTE: You should probably use the NodeData" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_VoiceSoundWave = { "VoiceSoundWave", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDlgNode_Speech, VoiceSoundWave), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_VoiceSoundWave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_VoiceSoundWave_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_NodeData_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// User Defined Custom Node data you can customize yourself with your own data types\n//\n// Create a new Blueprint derived from DlgNodeData (or DlgNodeDataHideCategories)\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Nodes/DlgNode_Speech.h" },
		{ "ToolTip", "User Defined Custom Node data you can customize yourself with your own data types\n\nCreate a new Blueprint derived from DlgNodeData (or DlgNodeDataHideCategories)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_NodeData = { "NodeData", nullptr, (EPropertyFlags)0x0022080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDlgNode_Speech, NodeData), Z_Construct_UClass_UDlgNodeData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_NodeData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_NodeData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_SpeakerState_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// State of the speaker attached to this node. Passed to the GetParticipantIcon function.\n" },
		{ "ModuleRelativePath", "Public/Nodes/DlgNode_Speech.h" },
		{ "ToolTip", "State of the speaker attached to this node. Passed to the GetParticipantIcon function." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_SpeakerState = { "SpeakerState", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDlgNode_Speech, SpeakerState), METADATA_PARAMS(Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_SpeakerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_SpeakerState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_TextArguments_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// If you want replaceable portions inside your Text nodes just add {identifier} inside it and set the value it should have at runtime.\n" },
		{ "ModuleRelativePath", "Public/Nodes/DlgNode_Speech.h" },
		{ "ToolTip", "If you want replaceable portions inside your Text nodes just add {identifier} inside it and set the value it should have at runtime." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_TextArguments = { "TextArguments", nullptr, (EPropertyFlags)0x0020088000000041, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDlgNode_Speech, TextArguments), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_TextArguments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_TextArguments_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_TextArguments_Inner = { "TextArguments", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDlgTextArgument, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// Text that will appear when this node participant name speaks to someone else.\n// If you want replaceable portions inside your Text nodes just add {identifier} inside it and set the value it should have at runtime.\n" },
		{ "ModuleRelativePath", "Public/Nodes/DlgNode_Speech.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "Text that will appear when this node participant name speaks to someone else.\nIf you want replaceable portions inside your Text nodes just add {identifier} inside it and set the value it should have at runtime." },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDlgNode_Speech, Text), METADATA_PARAMS(Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_bVirtualParentFireDirectChildEnterEvents_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// If true the first satisfied Direct Child of this Virtual Parent Node will fire its Enter Events after this node is entered (and fires its enter events).\n" },
		{ "ModuleRelativePath", "Public/Nodes/DlgNode_Speech.h" },
		{ "ToolTip", "If true the first satisfied Direct Child of this Virtual Parent Node will fire its Enter Events after this node is entered (and fires its enter events)." },
	};
#endif
	void Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_bVirtualParentFireDirectChildEnterEvents_SetBit(void* Obj)
	{
		((UDlgNode_Speech*)Obj)->bVirtualParentFireDirectChildEnterEvents = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_bVirtualParentFireDirectChildEnterEvents = { "bVirtualParentFireDirectChildEnterEvents", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDlgNode_Speech), &Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_bVirtualParentFireDirectChildEnterEvents_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_bVirtualParentFireDirectChildEnterEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_bVirtualParentFireDirectChildEnterEvents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_bIsVirtualParent_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// Make this Node act like a fake parent (proxy) to other child nodes (makes it get the granchildren).\n// On reevaluate children, it does not get the direct children but the children of the first satisfied direct child node (grandchildren).\n//\n// NOTE: It should have at least one satisfied child otherwise the Dialogue is terminated.\n// NOTE: The first satisfied direct child will be added to the visited history when this node is entered.\n// NOTE: Most Common usage for this is to make loops.\n" },
		{ "ModuleRelativePath", "Public/Nodes/DlgNode_Speech.h" },
		{ "ToolTip", "Make this Node act like a fake parent (proxy) to other child nodes (makes it get the granchildren).\nOn reevaluate children, it does not get the direct children but the children of the first satisfied direct child node (grandchildren).\n\nNOTE: It should have at least one satisfied child otherwise the Dialogue is terminated.\nNOTE: The first satisfied direct child will be added to the visited history when this node is entered.\nNOTE: Most Common usage for this is to make loops." },
	};
#endif
	void Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_bIsVirtualParent_SetBit(void* Obj)
	{
		((UDlgNode_Speech*)Obj)->bIsVirtualParent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_bIsVirtualParent = { "bIsVirtualParent", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDlgNode_Speech), &Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_bIsVirtualParent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_bIsVirtualParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_bIsVirtualParent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDlgNode_Speech_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_GenericData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_VoiceDialogueWave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_VoiceSoundWave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_NodeData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_SpeakerState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_TextArguments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_TextArguments_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_bVirtualParentFireDirectChildEnterEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgNode_Speech_Statics::NewProp_bIsVirtualParent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDlgNode_Speech_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgNode_Speech>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDlgNode_Speech_Statics::ClassParams = {
		&UDlgNode_Speech::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDlgNode_Speech_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDlgNode_Speech_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDlgNode_Speech_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgNode_Speech_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDlgNode_Speech()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDlgNode_Speech_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDlgNode_Speech, 1243811735);
	template<> DLGSYSTEM_API UClass* StaticClass<UDlgNode_Speech>()
	{
		return UDlgNode_Speech::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDlgNode_Speech(Z_Construct_UClass_UDlgNode_Speech, &UDlgNode_Speech::StaticClass, TEXT("/Script/DlgSystem"), TEXT("UDlgNode_Speech"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDlgNode_Speech);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
