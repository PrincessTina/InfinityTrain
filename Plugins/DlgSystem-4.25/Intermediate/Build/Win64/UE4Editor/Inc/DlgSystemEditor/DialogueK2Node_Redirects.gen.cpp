// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystemEditor/Private/BlueprintNodes/DialogueK2Node_Redirects.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueK2Node_Redirects() {}
// Cross Module References
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDlgK2Node_Select_NoRegister();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDlgK2Node_Select();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueK2Node_Select();
	UPackage* Z_Construct_UPackage__Script_DlgSystemEditor();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDlgK2Node_SelectFloat_NoRegister();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDlgK2Node_SelectFloat();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueK2Node_SelectFloat();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallback_NoRegister();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallback();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackEvent_NoRegister();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackEvent();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackEvent();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackCondition_NoRegister();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackCondition();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackCondition();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackFloatValue_NoRegister();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackFloatValue();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackFloatValue();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackIntValue_NoRegister();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackIntValue();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackIntValue();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackBoolValue_NoRegister();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackBoolValue();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackBoolValue();
// End Cross Module References
	void UDlgK2Node_Select::StaticRegisterNativesUDlgK2Node_Select()
	{
	}
	UClass* Z_Construct_UClass_UDlgK2Node_Select_NoRegister()
	{
		return UDlgK2Node_Select::StaticClass();
	}
	struct Z_Construct_UClass_UDlgK2Node_Select_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDlgK2Node_Select_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDialogueK2Node_Select,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystemEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgK2Node_Select_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Selects\n" },
		{ "IncludePath", "BlueprintNodes/DialogueK2Node_Redirects.h" },
		{ "ModuleRelativePath", "Private/BlueprintNodes/DialogueK2Node_Redirects.h" },
		{ "ToolTip", "Selects" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDlgK2Node_Select_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgK2Node_Select>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDlgK2Node_Select_Statics::ClassParams = {
		&UDlgK2Node_Select::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDlgK2Node_Select_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgK2Node_Select_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDlgK2Node_Select()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDlgK2Node_Select_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDlgK2Node_Select, 2773194974);
	template<> DLGSYSTEMEDITOR_API UClass* StaticClass<UDlgK2Node_Select>()
	{
		return UDlgK2Node_Select::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDlgK2Node_Select(Z_Construct_UClass_UDlgK2Node_Select, &UDlgK2Node_Select::StaticClass, TEXT("/Script/DlgSystemEditor"), TEXT("UDlgK2Node_Select"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDlgK2Node_Select);
	void UDlgK2Node_SelectFloat::StaticRegisterNativesUDlgK2Node_SelectFloat()
	{
	}
	UClass* Z_Construct_UClass_UDlgK2Node_SelectFloat_NoRegister()
	{
		return UDlgK2Node_SelectFloat::StaticClass();
	}
	struct Z_Construct_UClass_UDlgK2Node_SelectFloat_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDlgK2Node_SelectFloat_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDialogueK2Node_SelectFloat,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystemEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgK2Node_SelectFloat_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintNodes/DialogueK2Node_Redirects.h" },
		{ "ModuleRelativePath", "Private/BlueprintNodes/DialogueK2Node_Redirects.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDlgK2Node_SelectFloat_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgK2Node_SelectFloat>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDlgK2Node_SelectFloat_Statics::ClassParams = {
		&UDlgK2Node_SelectFloat::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDlgK2Node_SelectFloat_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgK2Node_SelectFloat_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDlgK2Node_SelectFloat()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDlgK2Node_SelectFloat_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDlgK2Node_SelectFloat, 231002711);
	template<> DLGSYSTEMEDITOR_API UClass* StaticClass<UDlgK2Node_SelectFloat>()
	{
		return UDlgK2Node_SelectFloat::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDlgK2Node_SelectFloat(Z_Construct_UClass_UDlgK2Node_SelectFloat, &UDlgK2Node_SelectFloat::StaticClass, TEXT("/Script/DlgSystemEditor"), TEXT("UDlgK2Node_SelectFloat"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDlgK2Node_SelectFloat);
	void UDlgK2Node_SwitchDialogueCallback::StaticRegisterNativesUDlgK2Node_SwitchDialogueCallback()
	{
	}
	UClass* Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallback_NoRegister()
	{
		return UDlgK2Node_SwitchDialogueCallback::StaticClass();
	}
	struct Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallback_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallback_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystemEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallback_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Switches\n" },
		{ "IncludePath", "BlueprintNodes/DialogueK2Node_Redirects.h" },
		{ "ModuleRelativePath", "Private/BlueprintNodes/DialogueK2Node_Redirects.h" },
		{ "ToolTip", "Switches" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallback_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgK2Node_SwitchDialogueCallback>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallback_Statics::ClassParams = {
		&UDlgK2Node_SwitchDialogueCallback::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallback_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallback_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallback()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallback_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDlgK2Node_SwitchDialogueCallback, 140309159);
	template<> DLGSYSTEMEDITOR_API UClass* StaticClass<UDlgK2Node_SwitchDialogueCallback>()
	{
		return UDlgK2Node_SwitchDialogueCallback::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDlgK2Node_SwitchDialogueCallback(Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallback, &UDlgK2Node_SwitchDialogueCallback::StaticClass, TEXT("/Script/DlgSystemEditor"), TEXT("UDlgK2Node_SwitchDialogueCallback"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDlgK2Node_SwitchDialogueCallback);
	void UDlgK2Node_SwitchDialogueCallbackEvent::StaticRegisterNativesUDlgK2Node_SwitchDialogueCallbackEvent()
	{
	}
	UClass* Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackEvent_NoRegister()
	{
		return UDlgK2Node_SwitchDialogueCallbackEvent::StaticClass();
	}
	struct Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackEvent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackEvent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackEvent,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystemEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackEvent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintNodes/DialogueK2Node_Redirects.h" },
		{ "ModuleRelativePath", "Private/BlueprintNodes/DialogueK2Node_Redirects.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackEvent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgK2Node_SwitchDialogueCallbackEvent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackEvent_Statics::ClassParams = {
		&UDlgK2Node_SwitchDialogueCallbackEvent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackEvent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackEvent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackEvent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackEvent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDlgK2Node_SwitchDialogueCallbackEvent, 2842629178);
	template<> DLGSYSTEMEDITOR_API UClass* StaticClass<UDlgK2Node_SwitchDialogueCallbackEvent>()
	{
		return UDlgK2Node_SwitchDialogueCallbackEvent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDlgK2Node_SwitchDialogueCallbackEvent(Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackEvent, &UDlgK2Node_SwitchDialogueCallbackEvent::StaticClass, TEXT("/Script/DlgSystemEditor"), TEXT("UDlgK2Node_SwitchDialogueCallbackEvent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDlgK2Node_SwitchDialogueCallbackEvent);
	void UDlgK2Node_SwitchDialogueCallbackCondition::StaticRegisterNativesUDlgK2Node_SwitchDialogueCallbackCondition()
	{
	}
	UClass* Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackCondition_NoRegister()
	{
		return UDlgK2Node_SwitchDialogueCallbackCondition::StaticClass();
	}
	struct Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackCondition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackCondition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystemEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackCondition_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintNodes/DialogueK2Node_Redirects.h" },
		{ "ModuleRelativePath", "Private/BlueprintNodes/DialogueK2Node_Redirects.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackCondition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgK2Node_SwitchDialogueCallbackCondition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackCondition_Statics::ClassParams = {
		&UDlgK2Node_SwitchDialogueCallbackCondition::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackCondition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackCondition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackCondition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackCondition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDlgK2Node_SwitchDialogueCallbackCondition, 1615151281);
	template<> DLGSYSTEMEDITOR_API UClass* StaticClass<UDlgK2Node_SwitchDialogueCallbackCondition>()
	{
		return UDlgK2Node_SwitchDialogueCallbackCondition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDlgK2Node_SwitchDialogueCallbackCondition(Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackCondition, &UDlgK2Node_SwitchDialogueCallbackCondition::StaticClass, TEXT("/Script/DlgSystemEditor"), TEXT("UDlgK2Node_SwitchDialogueCallbackCondition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDlgK2Node_SwitchDialogueCallbackCondition);
	void UDlgK2Node_SwitchDialogueCallbackFloatValue::StaticRegisterNativesUDlgK2Node_SwitchDialogueCallbackFloatValue()
	{
	}
	UClass* Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackFloatValue_NoRegister()
	{
		return UDlgK2Node_SwitchDialogueCallbackFloatValue::StaticClass();
	}
	struct Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackFloatValue_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackFloatValue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackFloatValue,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystemEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackFloatValue_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintNodes/DialogueK2Node_Redirects.h" },
		{ "ModuleRelativePath", "Private/BlueprintNodes/DialogueK2Node_Redirects.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackFloatValue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgK2Node_SwitchDialogueCallbackFloatValue>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackFloatValue_Statics::ClassParams = {
		&UDlgK2Node_SwitchDialogueCallbackFloatValue::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackFloatValue_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackFloatValue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackFloatValue()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackFloatValue_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDlgK2Node_SwitchDialogueCallbackFloatValue, 2160879304);
	template<> DLGSYSTEMEDITOR_API UClass* StaticClass<UDlgK2Node_SwitchDialogueCallbackFloatValue>()
	{
		return UDlgK2Node_SwitchDialogueCallbackFloatValue::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDlgK2Node_SwitchDialogueCallbackFloatValue(Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackFloatValue, &UDlgK2Node_SwitchDialogueCallbackFloatValue::StaticClass, TEXT("/Script/DlgSystemEditor"), TEXT("UDlgK2Node_SwitchDialogueCallbackFloatValue"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDlgK2Node_SwitchDialogueCallbackFloatValue);
	void UDlgK2Node_SwitchDialogueCallbackIntValue::StaticRegisterNativesUDlgK2Node_SwitchDialogueCallbackIntValue()
	{
	}
	UClass* Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackIntValue_NoRegister()
	{
		return UDlgK2Node_SwitchDialogueCallbackIntValue::StaticClass();
	}
	struct Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackIntValue_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackIntValue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackIntValue,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystemEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackIntValue_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintNodes/DialogueK2Node_Redirects.h" },
		{ "ModuleRelativePath", "Private/BlueprintNodes/DialogueK2Node_Redirects.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackIntValue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgK2Node_SwitchDialogueCallbackIntValue>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackIntValue_Statics::ClassParams = {
		&UDlgK2Node_SwitchDialogueCallbackIntValue::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackIntValue_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackIntValue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackIntValue()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackIntValue_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDlgK2Node_SwitchDialogueCallbackIntValue, 1126857923);
	template<> DLGSYSTEMEDITOR_API UClass* StaticClass<UDlgK2Node_SwitchDialogueCallbackIntValue>()
	{
		return UDlgK2Node_SwitchDialogueCallbackIntValue::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDlgK2Node_SwitchDialogueCallbackIntValue(Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackIntValue, &UDlgK2Node_SwitchDialogueCallbackIntValue::StaticClass, TEXT("/Script/DlgSystemEditor"), TEXT("UDlgK2Node_SwitchDialogueCallbackIntValue"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDlgK2Node_SwitchDialogueCallbackIntValue);
	void UDlgK2Node_SwitchDialogueCallbackBoolValue::StaticRegisterNativesUDlgK2Node_SwitchDialogueCallbackBoolValue()
	{
	}
	UClass* Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackBoolValue_NoRegister()
	{
		return UDlgK2Node_SwitchDialogueCallbackBoolValue::StaticClass();
	}
	struct Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackBoolValue_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackBoolValue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackBoolValue,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystemEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackBoolValue_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintNodes/DialogueK2Node_Redirects.h" },
		{ "ModuleRelativePath", "Private/BlueprintNodes/DialogueK2Node_Redirects.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackBoolValue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgK2Node_SwitchDialogueCallbackBoolValue>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackBoolValue_Statics::ClassParams = {
		&UDlgK2Node_SwitchDialogueCallbackBoolValue::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackBoolValue_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackBoolValue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackBoolValue()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackBoolValue_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDlgK2Node_SwitchDialogueCallbackBoolValue, 2327018899);
	template<> DLGSYSTEMEDITOR_API UClass* StaticClass<UDlgK2Node_SwitchDialogueCallbackBoolValue>()
	{
		return UDlgK2Node_SwitchDialogueCallbackBoolValue::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDlgK2Node_SwitchDialogueCallbackBoolValue(Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackBoolValue, &UDlgK2Node_SwitchDialogueCallbackBoolValue::StaticClass, TEXT("/Script/DlgSystemEditor"), TEXT("UDlgK2Node_SwitchDialogueCallbackBoolValue"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDlgK2Node_SwitchDialogueCallbackBoolValue);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
