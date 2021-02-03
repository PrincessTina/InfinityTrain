// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystemEditor/Private/Commandlets/DlgStatsCommandlet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDlgStatsCommandlet() {}
// Cross Module References
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDlgStatsCommandlet_NoRegister();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDlgStatsCommandlet();
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UPackage* Z_Construct_UPackage__Script_DlgSystemEditor();
// End Cross Module References
	void UDlgStatsCommandlet::StaticRegisterNativesUDlgStatsCommandlet()
	{
	}
	UClass* Z_Construct_UClass_UDlgStatsCommandlet_NoRegister()
	{
		return UDlgStatsCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UDlgStatsCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDlgStatsCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystemEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgStatsCommandlet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Commandlets/DlgStatsCommandlet.h" },
		{ "ModuleRelativePath", "Private/Commandlets/DlgStatsCommandlet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDlgStatsCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgStatsCommandlet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDlgStatsCommandlet_Statics::ClassParams = {
		&UDlgStatsCommandlet::StaticClass,
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
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UDlgStatsCommandlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgStatsCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDlgStatsCommandlet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDlgStatsCommandlet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDlgStatsCommandlet, 2833760439);
	template<> DLGSYSTEMEDITOR_API UClass* StaticClass<UDlgStatsCommandlet>()
	{
		return UDlgStatsCommandlet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDlgStatsCommandlet(Z_Construct_UClass_UDlgStatsCommandlet, &UDlgStatsCommandlet::StaticClass, TEXT("/Script/DlgSystemEditor"), TEXT("UDlgStatsCommandlet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDlgStatsCommandlet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
