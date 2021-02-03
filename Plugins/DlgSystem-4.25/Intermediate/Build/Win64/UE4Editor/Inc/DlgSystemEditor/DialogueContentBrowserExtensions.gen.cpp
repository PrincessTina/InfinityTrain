// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystemEditor/Private/DialogueContentBrowserExtensions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueContentBrowserExtensions() {}
// Cross Module References
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueSearchFilter_NoRegister();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueSearchFilter();
	CONTENTBROWSER_API UClass* Z_Construct_UClass_UContentBrowserFrontEndFilterExtension();
	UPackage* Z_Construct_UPackage__Script_DlgSystemEditor();
// End Cross Module References
	void UDialogueSearchFilter::StaticRegisterNativesUDialogueSearchFilter()
	{
	}
	UClass* Z_Construct_UClass_UDialogueSearchFilter_NoRegister()
	{
		return UDialogueSearchFilter::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueSearchFilter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueSearchFilter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UContentBrowserFrontEndFilterExtension,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystemEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueSearchFilter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Register custom  filters with the content browser\n */" },
		{ "IncludePath", "DialogueContentBrowserExtensions.h" },
		{ "ModuleRelativePath", "Private/DialogueContentBrowserExtensions.h" },
		{ "ToolTip", "Register custom  filters with the content browser" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueSearchFilter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueSearchFilter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDialogueSearchFilter_Statics::ClassParams = {
		&UDialogueSearchFilter::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDialogueSearchFilter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueSearchFilter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDialogueSearchFilter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDialogueSearchFilter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDialogueSearchFilter, 730297534);
	template<> DLGSYSTEMEDITOR_API UClass* StaticClass<UDialogueSearchFilter>()
	{
		return UDialogueSearchFilter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDialogueSearchFilter(Z_Construct_UClass_UDialogueSearchFilter, &UDialogueSearchFilter::StaticClass, TEXT("/Script/DlgSystemEditor"), TEXT("UDialogueSearchFilter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueSearchFilter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
