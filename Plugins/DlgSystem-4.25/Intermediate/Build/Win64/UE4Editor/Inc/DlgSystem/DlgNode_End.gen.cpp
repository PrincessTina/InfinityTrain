// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystem/Public/Nodes/DlgNode_End.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDlgNode_End() {}
// Cross Module References
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNode_End_NoRegister();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNode_End();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNode();
	UPackage* Z_Construct_UPackage__Script_DlgSystem();
// End Cross Module References
	void UDlgNode_End::StaticRegisterNativesUDlgNode_End()
	{
	}
	UClass* Z_Construct_UClass_UDlgNode_End_NoRegister()
	{
		return UDlgNode_End::StaticClass();
	}
	struct Z_Construct_UClass_UDlgNode_End_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDlgNode_End_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDlgNode,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgNode_End_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Dialogue" },
		{ "Comment", "/**\n * Node ending the Dialogue.\n * Does not have text, if it is entered the Dialogue is over.\n * Events and enter conditions are taken into account.\n */" },
		{ "IncludePath", "Nodes/DlgNode_End.h" },
		{ "ModuleRelativePath", "Public/Nodes/DlgNode_End.h" },
		{ "ToolTip", "Node ending the Dialogue.\nDoes not have text, if it is entered the Dialogue is over.\nEvents and enter conditions are taken into account." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDlgNode_End_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgNode_End>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDlgNode_End_Statics::ClassParams = {
		&UDlgNode_End::StaticClass,
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
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDlgNode_End_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgNode_End_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDlgNode_End()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDlgNode_End_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDlgNode_End, 1696565074);
	template<> DLGSYSTEM_API UClass* StaticClass<UDlgNode_End>()
	{
		return UDlgNode_End::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDlgNode_End(Z_Construct_UClass_UDlgNode_End, &UDlgNode_End::StaticClass, TEXT("/Script/DlgSystem"), TEXT("UDlgNode_End"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDlgNode_End);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
