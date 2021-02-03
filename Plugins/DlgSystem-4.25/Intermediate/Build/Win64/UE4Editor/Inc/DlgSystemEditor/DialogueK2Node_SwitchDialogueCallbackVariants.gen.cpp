// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystemEditor/Private/BlueprintNodes/DialogueK2Node_SwitchDialogueCallbackVariants.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueK2Node_SwitchDialogueCallbackVariants() {}
// Cross Module References
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackEvent_NoRegister();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackEvent();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback();
	UPackage* Z_Construct_UPackage__Script_DlgSystemEditor();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackCondition_NoRegister();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackCondition();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackFloatValue_NoRegister();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackFloatValue();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackIntValue_NoRegister();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackIntValue();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackBoolValue_NoRegister();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackBoolValue();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackNameValue_NoRegister();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackNameValue();
// End Cross Module References
	void UDialogueK2Node_SwitchDialogueCallbackEvent::StaticRegisterNativesUDialogueK2Node_SwitchDialogueCallbackEvent()
	{
	}
	UClass* Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackEvent_NoRegister()
	{
		return UDialogueK2Node_SwitchDialogueCallbackEvent::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackEvent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackEvent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystemEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackEvent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *   Subclasses for quicker access in blueprint\n *\x09 They just set and hide the type enum property of the parent\n */" },
		{ "IncludePath", "BlueprintNodes/DialogueK2Node_SwitchDialogueCallbackVariants.h" },
		{ "ModuleRelativePath", "Private/BlueprintNodes/DialogueK2Node_SwitchDialogueCallbackVariants.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Subclasses for quicker access in blueprint\n   They just set and hide the type enum property of the parent" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackEvent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueK2Node_SwitchDialogueCallbackEvent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackEvent_Statics::ClassParams = {
		&UDialogueK2Node_SwitchDialogueCallbackEvent::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackEvent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackEvent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackEvent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackEvent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDialogueK2Node_SwitchDialogueCallbackEvent, 1196266275);
	template<> DLGSYSTEMEDITOR_API UClass* StaticClass<UDialogueK2Node_SwitchDialogueCallbackEvent>()
	{
		return UDialogueK2Node_SwitchDialogueCallbackEvent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDialogueK2Node_SwitchDialogueCallbackEvent(Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackEvent, &UDialogueK2Node_SwitchDialogueCallbackEvent::StaticClass, TEXT("/Script/DlgSystemEditor"), TEXT("UDialogueK2Node_SwitchDialogueCallbackEvent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueK2Node_SwitchDialogueCallbackEvent);
	void UDialogueK2Node_SwitchDialogueCallbackCondition::StaticRegisterNativesUDialogueK2Node_SwitchDialogueCallbackCondition()
	{
	}
	UClass* Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackCondition_NoRegister()
	{
		return UDialogueK2Node_SwitchDialogueCallbackCondition::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackCondition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackCondition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystemEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackCondition_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintNodes/DialogueK2Node_SwitchDialogueCallbackVariants.h" },
		{ "ModuleRelativePath", "Private/BlueprintNodes/DialogueK2Node_SwitchDialogueCallbackVariants.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackCondition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueK2Node_SwitchDialogueCallbackCondition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackCondition_Statics::ClassParams = {
		&UDialogueK2Node_SwitchDialogueCallbackCondition::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackCondition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackCondition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackCondition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackCondition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDialogueK2Node_SwitchDialogueCallbackCondition, 2876926535);
	template<> DLGSYSTEMEDITOR_API UClass* StaticClass<UDialogueK2Node_SwitchDialogueCallbackCondition>()
	{
		return UDialogueK2Node_SwitchDialogueCallbackCondition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDialogueK2Node_SwitchDialogueCallbackCondition(Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackCondition, &UDialogueK2Node_SwitchDialogueCallbackCondition::StaticClass, TEXT("/Script/DlgSystemEditor"), TEXT("UDialogueK2Node_SwitchDialogueCallbackCondition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueK2Node_SwitchDialogueCallbackCondition);
	void UDialogueK2Node_SwitchDialogueCallbackFloatValue::StaticRegisterNativesUDialogueK2Node_SwitchDialogueCallbackFloatValue()
	{
	}
	UClass* Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackFloatValue_NoRegister()
	{
		return UDialogueK2Node_SwitchDialogueCallbackFloatValue::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackFloatValue_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackFloatValue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystemEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackFloatValue_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintNodes/DialogueK2Node_SwitchDialogueCallbackVariants.h" },
		{ "ModuleRelativePath", "Private/BlueprintNodes/DialogueK2Node_SwitchDialogueCallbackVariants.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackFloatValue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueK2Node_SwitchDialogueCallbackFloatValue>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackFloatValue_Statics::ClassParams = {
		&UDialogueK2Node_SwitchDialogueCallbackFloatValue::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackFloatValue_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackFloatValue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackFloatValue()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackFloatValue_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDialogueK2Node_SwitchDialogueCallbackFloatValue, 508758754);
	template<> DLGSYSTEMEDITOR_API UClass* StaticClass<UDialogueK2Node_SwitchDialogueCallbackFloatValue>()
	{
		return UDialogueK2Node_SwitchDialogueCallbackFloatValue::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDialogueK2Node_SwitchDialogueCallbackFloatValue(Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackFloatValue, &UDialogueK2Node_SwitchDialogueCallbackFloatValue::StaticClass, TEXT("/Script/DlgSystemEditor"), TEXT("UDialogueK2Node_SwitchDialogueCallbackFloatValue"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueK2Node_SwitchDialogueCallbackFloatValue);
	void UDialogueK2Node_SwitchDialogueCallbackIntValue::StaticRegisterNativesUDialogueK2Node_SwitchDialogueCallbackIntValue()
	{
	}
	UClass* Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackIntValue_NoRegister()
	{
		return UDialogueK2Node_SwitchDialogueCallbackIntValue::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackIntValue_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackIntValue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystemEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackIntValue_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintNodes/DialogueK2Node_SwitchDialogueCallbackVariants.h" },
		{ "ModuleRelativePath", "Private/BlueprintNodes/DialogueK2Node_SwitchDialogueCallbackVariants.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackIntValue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueK2Node_SwitchDialogueCallbackIntValue>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackIntValue_Statics::ClassParams = {
		&UDialogueK2Node_SwitchDialogueCallbackIntValue::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackIntValue_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackIntValue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackIntValue()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackIntValue_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDialogueK2Node_SwitchDialogueCallbackIntValue, 378607217);
	template<> DLGSYSTEMEDITOR_API UClass* StaticClass<UDialogueK2Node_SwitchDialogueCallbackIntValue>()
	{
		return UDialogueK2Node_SwitchDialogueCallbackIntValue::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDialogueK2Node_SwitchDialogueCallbackIntValue(Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackIntValue, &UDialogueK2Node_SwitchDialogueCallbackIntValue::StaticClass, TEXT("/Script/DlgSystemEditor"), TEXT("UDialogueK2Node_SwitchDialogueCallbackIntValue"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueK2Node_SwitchDialogueCallbackIntValue);
	void UDialogueK2Node_SwitchDialogueCallbackBoolValue::StaticRegisterNativesUDialogueK2Node_SwitchDialogueCallbackBoolValue()
	{
	}
	UClass* Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackBoolValue_NoRegister()
	{
		return UDialogueK2Node_SwitchDialogueCallbackBoolValue::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackBoolValue_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackBoolValue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystemEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackBoolValue_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintNodes/DialogueK2Node_SwitchDialogueCallbackVariants.h" },
		{ "ModuleRelativePath", "Private/BlueprintNodes/DialogueK2Node_SwitchDialogueCallbackVariants.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackBoolValue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueK2Node_SwitchDialogueCallbackBoolValue>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackBoolValue_Statics::ClassParams = {
		&UDialogueK2Node_SwitchDialogueCallbackBoolValue::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackBoolValue_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackBoolValue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackBoolValue()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackBoolValue_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDialogueK2Node_SwitchDialogueCallbackBoolValue, 252421638);
	template<> DLGSYSTEMEDITOR_API UClass* StaticClass<UDialogueK2Node_SwitchDialogueCallbackBoolValue>()
	{
		return UDialogueK2Node_SwitchDialogueCallbackBoolValue::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDialogueK2Node_SwitchDialogueCallbackBoolValue(Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackBoolValue, &UDialogueK2Node_SwitchDialogueCallbackBoolValue::StaticClass, TEXT("/Script/DlgSystemEditor"), TEXT("UDialogueK2Node_SwitchDialogueCallbackBoolValue"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueK2Node_SwitchDialogueCallbackBoolValue);
	void UDialogueK2Node_SwitchDialogueCallbackNameValue::StaticRegisterNativesUDialogueK2Node_SwitchDialogueCallbackNameValue()
	{
	}
	UClass* Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackNameValue_NoRegister()
	{
		return UDialogueK2Node_SwitchDialogueCallbackNameValue::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackNameValue_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackNameValue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystemEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackNameValue_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintNodes/DialogueK2Node_SwitchDialogueCallbackVariants.h" },
		{ "ModuleRelativePath", "Private/BlueprintNodes/DialogueK2Node_SwitchDialogueCallbackVariants.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackNameValue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueK2Node_SwitchDialogueCallbackNameValue>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackNameValue_Statics::ClassParams = {
		&UDialogueK2Node_SwitchDialogueCallbackNameValue::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackNameValue_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackNameValue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackNameValue()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackNameValue_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDialogueK2Node_SwitchDialogueCallbackNameValue, 1218311481);
	template<> DLGSYSTEMEDITOR_API UClass* StaticClass<UDialogueK2Node_SwitchDialogueCallbackNameValue>()
	{
		return UDialogueK2Node_SwitchDialogueCallbackNameValue::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDialogueK2Node_SwitchDialogueCallbackNameValue(Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackNameValue, &UDialogueK2Node_SwitchDialogueCallbackNameValue::StaticClass, TEXT("/Script/DlgSystemEditor"), TEXT("UDialogueK2Node_SwitchDialogueCallbackNameValue"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueK2Node_SwitchDialogueCallbackNameValue);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
