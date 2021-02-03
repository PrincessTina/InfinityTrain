// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystem/Public/DlgTextArgumentCustom.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDlgTextArgumentCustom() {}
// Cross Module References
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgTextArgumentCustom_NoRegister();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgTextArgumentCustom();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgObject();
	UPackage* Z_Construct_UPackage__Script_DlgSystem();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgContext_NoRegister();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgTextArgumentCustomHideCategories_NoRegister();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgTextArgumentCustomHideCategories();
// End Cross Module References
	DEFINE_FUNCTION(UDlgTextArgumentCustom::execGetText)
	{
		P_GET_OBJECT(UDlgContext,Z_Param_Context);
		P_GET_OBJECT(UObject,Z_Param_Participant);
		P_GET_PROPERTY(FStrProperty,Z_Param_DisplayStringParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetText_Implementation(Z_Param_Context,Z_Param_Participant,Z_Param_DisplayStringParam);
		P_NATIVE_END;
	}
	static FName NAME_UDlgTextArgumentCustom_GetText = FName(TEXT("GetText"));
	FText UDlgTextArgumentCustom::GetText(const UDlgContext* Context, const UObject* Participant, const FString& DisplayStringParam)
	{
		DlgTextArgumentCustom_eventGetText_Parms Parms;
		Parms.Context=Context;
		Parms.Participant=Participant;
		Parms.DisplayStringParam=DisplayStringParam;
		ProcessEvent(FindFunctionChecked(NAME_UDlgTextArgumentCustom_GetText),&Parms);
		return Parms.ReturnValue;
	}
	void UDlgTextArgumentCustom::StaticRegisterNativesUDlgTextArgumentCustom()
	{
		UClass* Class = UDlgTextArgumentCustom::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetText", &UDlgTextArgumentCustom::execGetText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDlgTextArgumentCustom_GetText_Statics
	{
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayStringParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayStringParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Participant_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Participant;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Context;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDlgTextArgumentCustom_GetText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgTextArgumentCustom_eventGetText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgTextArgumentCustom_GetText_Statics::NewProp_DisplayStringParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDlgTextArgumentCustom_GetText_Statics::NewProp_DisplayStringParam = { "DisplayStringParam", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgTextArgumentCustom_eventGetText_Parms, DisplayStringParam), METADATA_PARAMS(Z_Construct_UFunction_UDlgTextArgumentCustom_GetText_Statics::NewProp_DisplayStringParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgTextArgumentCustom_GetText_Statics::NewProp_DisplayStringParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgTextArgumentCustom_GetText_Statics::NewProp_Participant_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgTextArgumentCustom_GetText_Statics::NewProp_Participant = { "Participant", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgTextArgumentCustom_eventGetText_Parms, Participant), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDlgTextArgumentCustom_GetText_Statics::NewProp_Participant_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgTextArgumentCustom_GetText_Statics::NewProp_Participant_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgTextArgumentCustom_GetText_Statics::NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgTextArgumentCustom_GetText_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgTextArgumentCustom_eventGetText_Parms, Context), Z_Construct_UClass_UDlgContext_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDlgTextArgumentCustom_GetText_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgTextArgumentCustom_GetText_Statics::NewProp_Context_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgTextArgumentCustom_GetText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgTextArgumentCustom_GetText_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgTextArgumentCustom_GetText_Statics::NewProp_DisplayStringParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgTextArgumentCustom_GetText_Statics::NewProp_Participant,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgTextArgumentCustom_GetText_Statics::NewProp_Context,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgTextArgumentCustom_GetText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/DlgTextArgumentCustom.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgTextArgumentCustom_GetText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgTextArgumentCustom, nullptr, "GetText", nullptr, nullptr, sizeof(DlgTextArgumentCustom_eventGetText_Parms), Z_Construct_UFunction_UDlgTextArgumentCustom_GetText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgTextArgumentCustom_GetText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgTextArgumentCustom_GetText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgTextArgumentCustom_GetText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgTextArgumentCustom_GetText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgTextArgumentCustom_GetText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDlgTextArgumentCustom_NoRegister()
	{
		return UDlgTextArgumentCustom::StaticClass();
	}
	struct Z_Construct_UClass_UDlgTextArgumentCustom_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDlgTextArgumentCustom_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDlgObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDlgTextArgumentCustom_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDlgTextArgumentCustom_GetText, "GetText" }, // 2023755590
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgTextArgumentCustom_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Default" },
		{ "BlueprintType", "true" },
		{ "Comment", "// Abstract base class for a custom text argument\n// Extend this class to define additional data you want to store\n//\n// 1. Override GetText\n// 2. Return the new Text for the specified text argument\n" },
		{ "HideCategories", "DoNotShow" },
		{ "IncludePath", "DlgTextArgumentCustom.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DlgTextArgumentCustom.h" },
		{ "ToolTip", "Abstract base class for a custom text argument\nExtend this class to define additional data you want to store\n\n1. Override GetText\n2. Return the new Text for the specified text argument" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDlgTextArgumentCustom_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgTextArgumentCustom>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDlgTextArgumentCustom_Statics::ClassParams = {
		&UDlgTextArgumentCustom::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDlgTextArgumentCustom_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgTextArgumentCustom_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDlgTextArgumentCustom()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDlgTextArgumentCustom_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDlgTextArgumentCustom, 3570751710);
	template<> DLGSYSTEM_API UClass* StaticClass<UDlgTextArgumentCustom>()
	{
		return UDlgTextArgumentCustom::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDlgTextArgumentCustom(Z_Construct_UClass_UDlgTextArgumentCustom, &UDlgTextArgumentCustom::StaticClass, TEXT("/Script/DlgSystem"), TEXT("UDlgTextArgumentCustom"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDlgTextArgumentCustom);
	void UDlgTextArgumentCustomHideCategories::StaticRegisterNativesUDlgTextArgumentCustomHideCategories()
	{
	}
	UClass* Z_Construct_UClass_UDlgTextArgumentCustomHideCategories_NoRegister()
	{
		return UDlgTextArgumentCustomHideCategories::StaticClass();
	}
	struct Z_Construct_UClass_UDlgTextArgumentCustomHideCategories_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDlgTextArgumentCustomHideCategories_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDlgTextArgumentCustom,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgTextArgumentCustomHideCategories_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Default" },
		{ "BlueprintType", "true" },
		{ "Comment", "// This is the same as UDlgTextArgumentCustom but it does NOT show the categories\n" },
		{ "HideCategories", "DoNotShow" },
		{ "IncludePath", "DlgTextArgumentCustom.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DlgTextArgumentCustom.h" },
		{ "ToolTip", "This is the same as UDlgTextArgumentCustom but it does NOT show the categories" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDlgTextArgumentCustomHideCategories_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgTextArgumentCustomHideCategories>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDlgTextArgumentCustomHideCategories_Statics::ClassParams = {
		&UDlgTextArgumentCustomHideCategories::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDlgTextArgumentCustomHideCategories_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgTextArgumentCustomHideCategories_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDlgTextArgumentCustomHideCategories()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDlgTextArgumentCustomHideCategories_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDlgTextArgumentCustomHideCategories, 706606754);
	template<> DLGSYSTEM_API UClass* StaticClass<UDlgTextArgumentCustomHideCategories>()
	{
		return UDlgTextArgumentCustomHideCategories::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDlgTextArgumentCustomHideCategories(Z_Construct_UClass_UDlgTextArgumentCustomHideCategories, &UDlgTextArgumentCustomHideCategories::StaticClass, TEXT("/Script/DlgSystem"), TEXT("UDlgTextArgumentCustomHideCategories"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDlgTextArgumentCustomHideCategories);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
