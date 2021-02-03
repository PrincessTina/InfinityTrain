// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystem/Public/DlgNodeData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDlgNodeData() {}
// Cross Module References
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNodeData_NoRegister();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNodeData();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgObject();
	UPackage* Z_Construct_UPackage__Script_DlgSystem();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNodeDataHideCategories_NoRegister();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNodeDataHideCategories();
// End Cross Module References
	void UDlgNodeData::StaticRegisterNativesUDlgNodeData()
	{
	}
	UClass* Z_Construct_UClass_UDlgNodeData_NoRegister()
	{
		return UDlgNodeData::StaticClass();
	}
	struct Z_Construct_UClass_UDlgNodeData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDlgNodeData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDlgObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgNodeData_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Default" },
		{ "BlueprintType", "true" },
		{ "Comment", "// Abstract base class for node data\n// Defining class via inheriting from UDlgNodeData outside of the plugin is possible both in Blueprint and C++\n// Extend this class to define additional data you want to store on your nodes\n" },
		{ "HideCategories", "DoNotShow" },
		{ "IncludePath", "DlgNodeData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DlgNodeData.h" },
		{ "ToolTip", "Abstract base class for node data\nDefining class via inheriting from UDlgNodeData outside of the plugin is possible both in Blueprint and C++\nExtend this class to define additional data you want to store on your nodes" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDlgNodeData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgNodeData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDlgNodeData_Statics::ClassParams = {
		&UDlgNodeData::StaticClass,
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
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDlgNodeData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgNodeData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDlgNodeData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDlgNodeData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDlgNodeData, 2455884390);
	template<> DLGSYSTEM_API UClass* StaticClass<UDlgNodeData>()
	{
		return UDlgNodeData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDlgNodeData(Z_Construct_UClass_UDlgNodeData, &UDlgNodeData::StaticClass, TEXT("/Script/DlgSystem"), TEXT("UDlgNodeData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDlgNodeData);
	void UDlgNodeDataHideCategories::StaticRegisterNativesUDlgNodeDataHideCategories()
	{
	}
	UClass* Z_Construct_UClass_UDlgNodeDataHideCategories_NoRegister()
	{
		return UDlgNodeDataHideCategories::StaticClass();
	}
	struct Z_Construct_UClass_UDlgNodeDataHideCategories_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDlgNodeDataHideCategories_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDlgNodeData,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgNodeDataHideCategories_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Default" },
		{ "BlueprintType", "true" },
		{ "Comment", "// This is the same as UDlgNodeData but it does NOT show any categories\n" },
		{ "HideCategories", "DoNotShow" },
		{ "IncludePath", "DlgNodeData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DlgNodeData.h" },
		{ "ToolTip", "This is the same as UDlgNodeData but it does NOT show any categories" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDlgNodeDataHideCategories_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgNodeDataHideCategories>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDlgNodeDataHideCategories_Statics::ClassParams = {
		&UDlgNodeDataHideCategories::StaticClass,
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
		0x001030A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDlgNodeDataHideCategories_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgNodeDataHideCategories_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDlgNodeDataHideCategories()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDlgNodeDataHideCategories_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDlgNodeDataHideCategories, 156097326);
	template<> DLGSYSTEM_API UClass* StaticClass<UDlgNodeDataHideCategories>()
	{
		return UDlgNodeDataHideCategories::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDlgNodeDataHideCategories(Z_Construct_UClass_UDlgNodeDataHideCategories, &UDlgNodeDataHideCategories::StaticClass, TEXT("/Script/DlgSystem"), TEXT("UDlgNodeDataHideCategories"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDlgNodeDataHideCategories);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
