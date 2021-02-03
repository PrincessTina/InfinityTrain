// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystemEditor/Private/DlgDialogueThumbnailRenderer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDlgDialogueThumbnailRenderer() {}
// Cross Module References
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDlgDialogueThumbnailRenderer_NoRegister();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDlgDialogueThumbnailRenderer();
	UNREALED_API UClass* Z_Construct_UClass_UDefaultSizedThumbnailRenderer();
	UPackage* Z_Construct_UPackage__Script_DlgSystemEditor();
// End Cross Module References
	void UDlgDialogueThumbnailRenderer::StaticRegisterNativesUDlgDialogueThumbnailRenderer()
	{
	}
	UClass* Z_Construct_UClass_UDlgDialogueThumbnailRenderer_NoRegister()
	{
		return UDlgDialogueThumbnailRenderer::StaticClass();
	}
	struct Z_Construct_UClass_UDlgDialogueThumbnailRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDlgDialogueThumbnailRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDefaultSizedThumbnailRenderer,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystemEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgDialogueThumbnailRenderer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Useful if you want to have fancy thumbnail previews.\n" },
		{ "IncludePath", "DlgDialogueThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Private/DlgDialogueThumbnailRenderer.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Useful if you want to have fancy thumbnail previews." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDlgDialogueThumbnailRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgDialogueThumbnailRenderer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDlgDialogueThumbnailRenderer_Statics::ClassParams = {
		&UDlgDialogueThumbnailRenderer::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDlgDialogueThumbnailRenderer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgDialogueThumbnailRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDlgDialogueThumbnailRenderer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDlgDialogueThumbnailRenderer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDlgDialogueThumbnailRenderer, 2962272302);
	template<> DLGSYSTEMEDITOR_API UClass* StaticClass<UDlgDialogueThumbnailRenderer>()
	{
		return UDlgDialogueThumbnailRenderer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDlgDialogueThumbnailRenderer(Z_Construct_UClass_UDlgDialogueThumbnailRenderer, &UDlgDialogueThumbnailRenderer::StaticClass, TEXT("/Script/DlgSystemEditor"), TEXT("UDlgDialogueThumbnailRenderer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDlgDialogueThumbnailRenderer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
