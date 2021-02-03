// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystemEditor/Private/Factories/DlgDialogueFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDlgDialogueFactory() {}
// Cross Module References
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDlgDialogueFactory_NoRegister();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDlgDialogueFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_DlgSystemEditor();
// End Cross Module References
	void UDlgDialogueFactory::StaticRegisterNativesUDlgDialogueFactory()
	{
	}
	UClass* Z_Construct_UClass_UDlgDialogueFactory_NoRegister()
	{
		return UDlgDialogueFactory::StaticClass();
	}
	struct Z_Construct_UClass_UDlgDialogueFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDlgDialogueFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystemEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgDialogueFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Factory for dialogues. Editor does the magic here, without this class,\n * you won't have the right click \"Dialog System\" -> \"Dialogue\"\n */" },
		{ "IncludePath", "Factories/DlgDialogueFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/DlgDialogueFactory.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Factory for dialogues. Editor does the magic here, without this class,\nyou won't have the right click \"Dialog System\" -> \"Dialogue\"" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDlgDialogueFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgDialogueFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDlgDialogueFactory_Statics::ClassParams = {
		&UDlgDialogueFactory::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDlgDialogueFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgDialogueFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDlgDialogueFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDlgDialogueFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDlgDialogueFactory, 3175703621);
	template<> DLGSYSTEMEDITOR_API UClass* StaticClass<UDlgDialogueFactory>()
	{
		return UDlgDialogueFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDlgDialogueFactory(Z_Construct_UClass_UDlgDialogueFactory, &UDlgDialogueFactory::StaticClass, TEXT("/Script/DlgSystemEditor"), TEXT("UDlgDialogueFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDlgDialogueFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
