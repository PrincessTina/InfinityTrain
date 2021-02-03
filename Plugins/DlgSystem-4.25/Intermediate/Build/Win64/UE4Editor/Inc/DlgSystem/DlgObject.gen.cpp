// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystem/Public/DlgObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDlgObject() {}
// Cross Module References
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgObject_NoRegister();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DlgSystem();
// End Cross Module References
	void UDlgObject::StaticRegisterNativesUDlgObject()
	{
	}
	UClass* Z_Construct_UClass_UDlgObject_NoRegister()
	{
		return UDlgObject::StaticClass();
	}
	struct Z_Construct_UClass_UDlgObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDlgObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgObject_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Default" },
		{ "ClassGroupNames", "Dialogue" },
		{ "Comment", "// Our Dialogue base object\n" },
		{ "HideCategories", "DoNotShow" },
		{ "IncludePath", "DlgObject.h" },
		{ "ModuleRelativePath", "Public/DlgObject.h" },
		{ "ToolTip", "Our Dialogue base object" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDlgObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDlgObject_Statics::ClassParams = {
		&UDlgObject::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDlgObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDlgObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDlgObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDlgObject, 3944534046);
	template<> DLGSYSTEM_API UClass* StaticClass<UDlgObject>()
	{
		return UDlgObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDlgObject(Z_Construct_UClass_UDlgObject, &UDlgObject::StaticClass, TEXT("/Script/DlgSystem"), TEXT("UDlgObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDlgObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
