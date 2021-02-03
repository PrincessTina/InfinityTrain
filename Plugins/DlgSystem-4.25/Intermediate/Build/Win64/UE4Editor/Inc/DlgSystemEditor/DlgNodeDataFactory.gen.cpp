// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystemEditor/Private/Factories/DlgNodeDataFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDlgNodeDataFactory() {}
// Cross Module References
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDlgNodeDataFactory_NoRegister();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDlgNodeDataFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_DlgSystemEditor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNodeData_NoRegister();
// End Cross Module References
	void UDlgNodeDataFactory::StaticRegisterNativesUDlgNodeDataFactory()
	{
	}
	UClass* Z_Construct_UClass_UDlgNodeDataFactory_NoRegister()
	{
		return UDlgNodeDataFactory::StaticClass();
	}
	struct Z_Construct_UClass_UDlgNodeDataFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ParentClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDlgNodeDataFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystemEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgNodeDataFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/DlgNodeDataFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/DlgNodeDataFactory.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgNodeDataFactory_Statics::NewProp_ParentClass_MetaData[] = {
		{ "Comment", "// Holds the template of the class we are building\n" },
		{ "ModuleRelativePath", "Private/Factories/DlgNodeDataFactory.h" },
		{ "ToolTip", "Holds the template of the class we are building" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDlgNodeDataFactory_Statics::NewProp_ParentClass = { "ParentClass", nullptr, (EPropertyFlags)0x0044000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDlgNodeDataFactory, ParentClass), Z_Construct_UClass_UDlgNodeData_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UDlgNodeDataFactory_Statics::NewProp_ParentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgNodeDataFactory_Statics::NewProp_ParentClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDlgNodeDataFactory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgNodeDataFactory_Statics::NewProp_ParentClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDlgNodeDataFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgNodeDataFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDlgNodeDataFactory_Statics::ClassParams = {
		&UDlgNodeDataFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDlgNodeDataFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDlgNodeDataFactory_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDlgNodeDataFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgNodeDataFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDlgNodeDataFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDlgNodeDataFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDlgNodeDataFactory, 2019627988);
	template<> DLGSYSTEMEDITOR_API UClass* StaticClass<UDlgNodeDataFactory>()
	{
		return UDlgNodeDataFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDlgNodeDataFactory(Z_Construct_UClass_UDlgNodeDataFactory, &UDlgNodeDataFactory::StaticClass, TEXT("/Script/DlgSystemEditor"), TEXT("UDlgNodeDataFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDlgNodeDataFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
