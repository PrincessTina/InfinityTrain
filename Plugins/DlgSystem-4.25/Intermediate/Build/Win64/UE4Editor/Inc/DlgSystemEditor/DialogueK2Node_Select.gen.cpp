// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystemEditor/Private/BlueprintNodes/DialogueK2Node_Select.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueK2Node_Select() {}
// Cross Module References
	DLGSYSTEMEDITOR_API UEnum* Z_Construct_UEnum_DlgSystemEditor_EDlgVariableType();
	UPackage* Z_Construct_UPackage__Script_DlgSystemEditor();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueK2Node_Select_NoRegister();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueK2Node_Select();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueK2Node_SelectFloat_NoRegister();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueK2Node_SelectFloat();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueK2Node_SelectName_NoRegister();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueK2Node_SelectName();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueK2Node_SelectOnSpeakerState_NoRegister();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueK2Node_SelectOnSpeakerState();
// End Cross Module References
	static UEnum* EDlgVariableType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DlgSystemEditor_EDlgVariableType, Z_Construct_UPackage__Script_DlgSystemEditor(), TEXT("EDlgVariableType"));
		}
		return Singleton;
	}
	template<> DLGSYSTEMEDITOR_API UEnum* StaticEnum<EDlgVariableType>()
	{
		return EDlgVariableType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDlgVariableType(EDlgVariableType_StaticEnum, TEXT("/Script/DlgSystemEditor"), TEXT("EDlgVariableType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DlgSystemEditor_EDlgVariableType_Hash() { return 170697327U; }
	UEnum* Z_Construct_UEnum_DlgSystemEditor_EDlgVariableType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DlgSystemEditor();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDlgVariableType"), 0, Get_Z_Construct_UEnum_DlgSystemEditor_EDlgVariableType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDlgVariableType::Float", (int64)EDlgVariableType::Float },
				{ "EDlgVariableType::Int", (int64)EDlgVariableType::Int },
				{ "EDlgVariableType::Name", (int64)EDlgVariableType::Name },
				{ "EDlgVariableType::SpeakerState", (int64)EDlgVariableType::SpeakerState },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Float.DisplayName", "Dialogue Float Variable" },
				{ "Float.Name", "EDlgVariableType::Float" },
				{ "Int.DisplayName", "Dialogue Int Variable" },
				{ "Int.Name", "EDlgVariableType::Int" },
				{ "ModuleRelativePath", "Private/BlueprintNodes/DialogueK2Node_Select.h" },
				{ "Name.DisplayName", "Dialogue Name Variable" },
				{ "Name.Name", "EDlgVariableType::Name" },
				{ "SpeakerState.DisplayName", "Dialogue Speaker State" },
				{ "SpeakerState.Name", "EDlgVariableType::SpeakerState" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DlgSystemEditor,
				nullptr,
				"EDlgVariableType",
				"EDlgVariableType",
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
	void UDialogueK2Node_Select::StaticRegisterNativesUDialogueK2Node_Select()
	{
	}
	UClass* Z_Construct_UClass_UDialogueK2Node_Select_NoRegister()
	{
		return UDialogueK2Node_Select::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueK2Node_Select_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReconstructNode_MetaData[];
#endif
		static void NewProp_bReconstructNode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReconstructNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VariablePinType_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_VariablePinType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VariableType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_VariableType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VariableType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PinNames;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PinNames_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueK2Node_Select_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystemEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueK2Node_Select_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Select BlueprintNode Based on UK2Node_Select\n */" },
		{ "IncludePath", "BlueprintNodes/DialogueK2Node_Select.h" },
		{ "Keywords", "Ternary If" },
		{ "ModuleRelativePath", "Private/BlueprintNodes/DialogueK2Node_Select.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Select BlueprintNode Based on UK2Node_Select" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueK2Node_Select_Statics::NewProp_bReconstructNode_MetaData[] = {
		{ "Comment", "/** Whether we need to reconstruct the node after the pins have changed */" },
		{ "ModuleRelativePath", "Private/BlueprintNodes/DialogueK2Node_Select.h" },
		{ "ToolTip", "Whether we need to reconstruct the node after the pins have changed" },
	};
#endif
	void Z_Construct_UClass_UDialogueK2Node_Select_Statics::NewProp_bReconstructNode_SetBit(void* Obj)
	{
		((UDialogueK2Node_Select*)Obj)->bReconstructNode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDialogueK2Node_Select_Statics::NewProp_bReconstructNode = { "bReconstructNode", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDialogueK2Node_Select), &Z_Construct_UClass_UDialogueK2Node_Select_Statics::NewProp_bReconstructNode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDialogueK2Node_Select_Statics::NewProp_bReconstructNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueK2Node_Select_Statics::NewProp_bReconstructNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueK2Node_Select_Statics::NewProp_VariablePinType_MetaData[] = {
		{ "Comment", "// The pin type of this select\n" },
		{ "ModuleRelativePath", "Private/BlueprintNodes/DialogueK2Node_Select.h" },
		{ "ToolTip", "The pin type of this select" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDialogueK2Node_Select_Statics::NewProp_VariablePinType = { "VariablePinType", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueK2Node_Select, VariablePinType), METADATA_PARAMS(Z_Construct_UClass_UDialogueK2Node_Select_Statics::NewProp_VariablePinType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueK2Node_Select_Statics::NewProp_VariablePinType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueK2Node_Select_Statics::NewProp_VariableType_MetaData[] = {
		{ "ModuleRelativePath", "Private/BlueprintNodes/DialogueK2Node_Select.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDialogueK2Node_Select_Statics::NewProp_VariableType = { "VariableType", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueK2Node_Select, VariableType), Z_Construct_UEnum_DlgSystemEditor_EDlgVariableType, METADATA_PARAMS(Z_Construct_UClass_UDialogueK2Node_Select_Statics::NewProp_VariableType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueK2Node_Select_Statics::NewProp_VariableType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDialogueK2Node_Select_Statics::NewProp_VariableType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueK2Node_Select_Statics::NewProp_PinNames_MetaData[] = {
		{ "Comment", "/** List of the current entries (Pin Names) based on owner dialogue name and on all dialogues */" },
		{ "ModuleRelativePath", "Private/BlueprintNodes/DialogueK2Node_Select.h" },
		{ "ToolTip", "List of the current entries (Pin Names) based on owner dialogue name and on all dialogues" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDialogueK2Node_Select_Statics::NewProp_PinNames = { "PinNames", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueK2Node_Select, PinNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDialogueK2Node_Select_Statics::NewProp_PinNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueK2Node_Select_Statics::NewProp_PinNames_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDialogueK2Node_Select_Statics::NewProp_PinNames_Inner = { "PinNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogueK2Node_Select_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueK2Node_Select_Statics::NewProp_bReconstructNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueK2Node_Select_Statics::NewProp_VariablePinType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueK2Node_Select_Statics::NewProp_VariableType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueK2Node_Select_Statics::NewProp_VariableType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueK2Node_Select_Statics::NewProp_PinNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueK2Node_Select_Statics::NewProp_PinNames_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueK2Node_Select_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueK2Node_Select>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDialogueK2Node_Select_Statics::ClassParams = {
		&UDialogueK2Node_Select::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDialogueK2Node_Select_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueK2Node_Select_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDialogueK2Node_Select_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueK2Node_Select_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDialogueK2Node_Select()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDialogueK2Node_Select_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDialogueK2Node_Select, 1357368816);
	template<> DLGSYSTEMEDITOR_API UClass* StaticClass<UDialogueK2Node_Select>()
	{
		return UDialogueK2Node_Select::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDialogueK2Node_Select(Z_Construct_UClass_UDialogueK2Node_Select, &UDialogueK2Node_Select::StaticClass, TEXT("/Script/DlgSystemEditor"), TEXT("UDialogueK2Node_Select"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueK2Node_Select);
	void UDialogueK2Node_SelectFloat::StaticRegisterNativesUDialogueK2Node_SelectFloat()
	{
	}
	UClass* Z_Construct_UClass_UDialogueK2Node_SelectFloat_NoRegister()
	{
		return UDialogueK2Node_SelectFloat::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueK2Node_SelectFloat_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueK2Node_SelectFloat_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDialogueK2Node_Select,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystemEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueK2Node_SelectFloat_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *  Float variant\n */" },
		{ "IncludePath", "BlueprintNodes/DialogueK2Node_Select.h" },
		{ "Keywords", "Ternary If" },
		{ "ModuleRelativePath", "Private/BlueprintNodes/DialogueK2Node_Select.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Float variant" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueK2Node_SelectFloat_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueK2Node_SelectFloat>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDialogueK2Node_SelectFloat_Statics::ClassParams = {
		&UDialogueK2Node_SelectFloat::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDialogueK2Node_SelectFloat_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueK2Node_SelectFloat_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDialogueK2Node_SelectFloat()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDialogueK2Node_SelectFloat_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDialogueK2Node_SelectFloat, 2101573083);
	template<> DLGSYSTEMEDITOR_API UClass* StaticClass<UDialogueK2Node_SelectFloat>()
	{
		return UDialogueK2Node_SelectFloat::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDialogueK2Node_SelectFloat(Z_Construct_UClass_UDialogueK2Node_SelectFloat, &UDialogueK2Node_SelectFloat::StaticClass, TEXT("/Script/DlgSystemEditor"), TEXT("UDialogueK2Node_SelectFloat"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueK2Node_SelectFloat);
	void UDialogueK2Node_SelectName::StaticRegisterNativesUDialogueK2Node_SelectName()
	{
	}
	UClass* Z_Construct_UClass_UDialogueK2Node_SelectName_NoRegister()
	{
		return UDialogueK2Node_SelectName::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueK2Node_SelectName_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueK2Node_SelectName_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDialogueK2Node_Select,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystemEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueK2Node_SelectName_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *  Name variant\n */" },
		{ "IncludePath", "BlueprintNodes/DialogueK2Node_Select.h" },
		{ "Keywords", "Ternary If" },
		{ "ModuleRelativePath", "Private/BlueprintNodes/DialogueK2Node_Select.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Name variant" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueK2Node_SelectName_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueK2Node_SelectName>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDialogueK2Node_SelectName_Statics::ClassParams = {
		&UDialogueK2Node_SelectName::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDialogueK2Node_SelectName_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueK2Node_SelectName_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDialogueK2Node_SelectName()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDialogueK2Node_SelectName_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDialogueK2Node_SelectName, 2736056434);
	template<> DLGSYSTEMEDITOR_API UClass* StaticClass<UDialogueK2Node_SelectName>()
	{
		return UDialogueK2Node_SelectName::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDialogueK2Node_SelectName(Z_Construct_UClass_UDialogueK2Node_SelectName, &UDialogueK2Node_SelectName::StaticClass, TEXT("/Script/DlgSystemEditor"), TEXT("UDialogueK2Node_SelectName"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueK2Node_SelectName);
	void UDialogueK2Node_SelectOnSpeakerState::StaticRegisterNativesUDialogueK2Node_SelectOnSpeakerState()
	{
	}
	UClass* Z_Construct_UClass_UDialogueK2Node_SelectOnSpeakerState_NoRegister()
	{
		return UDialogueK2Node_SelectOnSpeakerState::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueK2Node_SelectOnSpeakerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueK2Node_SelectOnSpeakerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDialogueK2Node_Select,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystemEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueK2Node_SelectOnSpeakerState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *  SpeakerState variant\n */" },
		{ "IncludePath", "BlueprintNodes/DialogueK2Node_Select.h" },
		{ "Keywords", "Ternary If" },
		{ "ModuleRelativePath", "Private/BlueprintNodes/DialogueK2Node_Select.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "SpeakerState variant" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueK2Node_SelectOnSpeakerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueK2Node_SelectOnSpeakerState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDialogueK2Node_SelectOnSpeakerState_Statics::ClassParams = {
		&UDialogueK2Node_SelectOnSpeakerState::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDialogueK2Node_SelectOnSpeakerState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueK2Node_SelectOnSpeakerState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDialogueK2Node_SelectOnSpeakerState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDialogueK2Node_SelectOnSpeakerState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDialogueK2Node_SelectOnSpeakerState, 3660659147);
	template<> DLGSYSTEMEDITOR_API UClass* StaticClass<UDialogueK2Node_SelectOnSpeakerState>()
	{
		return UDialogueK2Node_SelectOnSpeakerState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDialogueK2Node_SelectOnSpeakerState(Z_Construct_UClass_UDialogueK2Node_SelectOnSpeakerState, &UDialogueK2Node_SelectOnSpeakerState::StaticClass, TEXT("/Script/DlgSystemEditor"), TEXT("UDialogueK2Node_SelectOnSpeakerState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueK2Node_SelectOnSpeakerState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
