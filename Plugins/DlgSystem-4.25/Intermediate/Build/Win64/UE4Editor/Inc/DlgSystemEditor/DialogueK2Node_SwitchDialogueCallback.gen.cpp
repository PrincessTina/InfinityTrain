// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystemEditor/Private/BlueprintNodes/DialogueK2Node_SwitchDialogueCallback.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueK2Node_SwitchDialogueCallback() {}
// Cross Module References
	DLGSYSTEMEDITOR_API UEnum* Z_Construct_UEnum_DlgSystemEditor_EDlgDialogueCallback();
	UPackage* Z_Construct_UPackage__Script_DlgSystemEditor();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback_NoRegister();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_Switch();
// End Cross Module References
	static UEnum* EDlgDialogueCallback_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DlgSystemEditor_EDlgDialogueCallback, Z_Construct_UPackage__Script_DlgSystemEditor(), TEXT("EDlgDialogueCallback"));
		}
		return Singleton;
	}
	template<> DLGSYSTEMEDITOR_API UEnum* StaticEnum<EDlgDialogueCallback>()
	{
		return EDlgDialogueCallback_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDlgDialogueCallback(EDlgDialogueCallback_StaticEnum, TEXT("/Script/DlgSystemEditor"), TEXT("EDlgDialogueCallback"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DlgSystemEditor_EDlgDialogueCallback_Hash() { return 1509631475U; }
	UEnum* Z_Construct_UEnum_DlgSystemEditor_EDlgDialogueCallback()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DlgSystemEditor();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDlgDialogueCallback"), 0, Get_Z_Construct_UEnum_DlgSystemEditor_EDlgDialogueCallback_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDlgDialogueCallback::Event", (int64)EDlgDialogueCallback::Event },
				{ "EDlgDialogueCallback::Condition", (int64)EDlgDialogueCallback::Condition },
				{ "EDlgDialogueCallback::FloatValue", (int64)EDlgDialogueCallback::FloatValue },
				{ "EDlgDialogueCallback::IntValue", (int64)EDlgDialogueCallback::IntValue },
				{ "EDlgDialogueCallback::BoolValue", (int64)EDlgDialogueCallback::BoolValue },
				{ "EDlgDialogueCallback::NameValue", (int64)EDlgDialogueCallback::NameValue },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BoolValue.DisplayName", "Condition asking for a bool value" },
				{ "BoolValue.Name", "EDlgDialogueCallback::BoolValue" },
				{ "Condition.Comment", "/** Function call to check a condition */" },
				{ "Condition.DisplayName", "Dialogue Condition" },
				{ "Condition.Name", "EDlgDialogueCallback::Condition" },
				{ "Condition.ToolTip", "Function call to check a condition" },
				{ "Event.Comment", "/** Normal dialogue event during the conversation */" },
				{ "Event.DisplayName", "Dialogue Event" },
				{ "Event.Name", "EDlgDialogueCallback::Event" },
				{ "Event.ToolTip", "Normal dialogue event during the conversation" },
				{ "FloatValue.DisplayName", "Condition asking for a float value" },
				{ "FloatValue.Name", "EDlgDialogueCallback::FloatValue" },
				{ "IntValue.DisplayName", "Condition asking for an int value" },
				{ "IntValue.Name", "EDlgDialogueCallback::IntValue" },
				{ "ModuleRelativePath", "Private/BlueprintNodes/DialogueK2Node_SwitchDialogueCallback.h" },
				{ "NameValue.DisplayName", "Condition asking for a name value" },
				{ "NameValue.Name", "EDlgDialogueCallback::NameValue" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DlgSystemEditor,
				nullptr,
				"EDlgDialogueCallback",
				"EDlgDialogueCallback",
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
	void UDialogueK2Node_SwitchDialogueCallback::StaticRegisterNativesUDialogueK2Node_SwitchDialogueCallback()
	{
	}
	UClass* Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback_NoRegister()
	{
		return UDialogueK2Node_SwitchDialogueCallback::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CallbackType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CallbackType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CallbackType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialoguePinNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DialoguePinNames;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DialoguePinNames_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_Switch,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystemEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "BlueprintNodes/DialogueK2Node_SwitchDialogueCallback.h" },
		{ "ModuleRelativePath", "Private/BlueprintNodes/DialogueK2Node_SwitchDialogueCallback.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback_Statics::NewProp_CallbackType_MetaData[] = {
		{ "ModuleRelativePath", "Private/BlueprintNodes/DialogueK2Node_SwitchDialogueCallback.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback_Statics::NewProp_CallbackType = { "CallbackType", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueK2Node_SwitchDialogueCallback, CallbackType), Z_Construct_UEnum_DlgSystemEditor_EDlgDialogueCallback, METADATA_PARAMS(Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback_Statics::NewProp_CallbackType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback_Statics::NewProp_CallbackType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback_Statics::NewProp_CallbackType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback_Statics::NewProp_DialoguePinNames_MetaData[] = {
		{ "ModuleRelativePath", "Private/BlueprintNodes/DialogueK2Node_SwitchDialogueCallback.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback_Statics::NewProp_DialoguePinNames = { "DialoguePinNames", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueK2Node_SwitchDialogueCallback, DialoguePinNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback_Statics::NewProp_DialoguePinNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback_Statics::NewProp_DialoguePinNames_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback_Statics::NewProp_DialoguePinNames_Inner = { "DialoguePinNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback_Statics::NewProp_CallbackType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback_Statics::NewProp_CallbackType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback_Statics::NewProp_DialoguePinNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback_Statics::NewProp_DialoguePinNames_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueK2Node_SwitchDialogueCallback>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback_Statics::ClassParams = {
		&UDialogueK2Node_SwitchDialogueCallback::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDialogueK2Node_SwitchDialogueCallback, 1310001778);
	template<> DLGSYSTEMEDITOR_API UClass* StaticClass<UDialogueK2Node_SwitchDialogueCallback>()
	{
		return UDialogueK2Node_SwitchDialogueCallback::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDialogueK2Node_SwitchDialogueCallback(Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback, &UDialogueK2Node_SwitchDialogueCallback::StaticClass, TEXT("/Script/DlgSystemEditor"), TEXT("UDialogueK2Node_SwitchDialogueCallback"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueK2Node_SwitchDialogueCallback);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
