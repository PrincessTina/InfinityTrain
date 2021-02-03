// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystem/Public/DlgConditionCustom.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDlgConditionCustom() {}
// Cross Module References
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgConditionCustom_NoRegister();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgConditionCustom();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgObject();
	UPackage* Z_Construct_UPackage__Script_DlgSystem();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgContext_NoRegister();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgConditionCustomHideCategories_NoRegister();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgConditionCustomHideCategories();
// End Cross Module References
	DEFINE_FUNCTION(UDlgConditionCustom::execIsConditionMet)
	{
		P_GET_OBJECT(UDlgContext,Z_Param_Context);
		P_GET_OBJECT(UObject,Z_Param_Participant);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsConditionMet_Implementation(Z_Param_Context,Z_Param_Participant);
		P_NATIVE_END;
	}
	static FName NAME_UDlgConditionCustom_IsConditionMet = FName(TEXT("IsConditionMet"));
	bool UDlgConditionCustom::IsConditionMet(const UDlgContext* Context, const UObject* Participant)
	{
		DlgConditionCustom_eventIsConditionMet_Parms Parms;
		Parms.Context=Context;
		Parms.Participant=Participant;
		ProcessEvent(FindFunctionChecked(NAME_UDlgConditionCustom_IsConditionMet),&Parms);
		return !!Parms.ReturnValue;
	}
	void UDlgConditionCustom::StaticRegisterNativesUDlgConditionCustom()
	{
		UClass* Class = UDlgConditionCustom::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsConditionMet", &UDlgConditionCustom::execIsConditionMet },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDlgConditionCustom_IsConditionMet_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
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
	void Z_Construct_UFunction_UDlgConditionCustom_IsConditionMet_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgConditionCustom_eventIsConditionMet_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDlgConditionCustom_IsConditionMet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DlgConditionCustom_eventIsConditionMet_Parms), &Z_Construct_UFunction_UDlgConditionCustom_IsConditionMet_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgConditionCustom_IsConditionMet_Statics::NewProp_Participant_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgConditionCustom_IsConditionMet_Statics::NewProp_Participant = { "Participant", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgConditionCustom_eventIsConditionMet_Parms, Participant), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDlgConditionCustom_IsConditionMet_Statics::NewProp_Participant_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgConditionCustom_IsConditionMet_Statics::NewProp_Participant_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgConditionCustom_IsConditionMet_Statics::NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgConditionCustom_IsConditionMet_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgConditionCustom_eventIsConditionMet_Parms, Context), Z_Construct_UClass_UDlgContext_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDlgConditionCustom_IsConditionMet_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgConditionCustom_IsConditionMet_Statics::NewProp_Context_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgConditionCustom_IsConditionMet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgConditionCustom_IsConditionMet_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgConditionCustom_IsConditionMet_Statics::NewProp_Participant,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgConditionCustom_IsConditionMet_Statics::NewProp_Context,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgConditionCustom_IsConditionMet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Checks if the condition is met\n" },
		{ "ModuleRelativePath", "Public/DlgConditionCustom.h" },
		{ "ToolTip", "Checks if the condition is met" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgConditionCustom_IsConditionMet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgConditionCustom, nullptr, "IsConditionMet", nullptr, nullptr, sizeof(DlgConditionCustom_eventIsConditionMet_Parms), Z_Construct_UFunction_UDlgConditionCustom_IsConditionMet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgConditionCustom_IsConditionMet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgConditionCustom_IsConditionMet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgConditionCustom_IsConditionMet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgConditionCustom_IsConditionMet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgConditionCustom_IsConditionMet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDlgConditionCustom_NoRegister()
	{
		return UDlgConditionCustom::StaticClass();
	}
	struct Z_Construct_UClass_UDlgConditionCustom_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDlgConditionCustom_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDlgObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDlgConditionCustom_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDlgConditionCustom_IsConditionMet, "IsConditionMet" }, // 3631052188
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgConditionCustom_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Default" },
		{ "BlueprintType", "true" },
		{ "Comment", "// Abstract base class for a custom condition\n// Extend this class to define additional data you want to store\n//\n// 1. Override IsConditionMet\n// 2. Return true if you want the condition to succeed or false otherwise\n" },
		{ "HideCategories", "DoNotShow" },
		{ "IncludePath", "DlgConditionCustom.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DlgConditionCustom.h" },
		{ "ToolTip", "Abstract base class for a custom condition\nExtend this class to define additional data you want to store\n\n1. Override IsConditionMet\n2. Return true if you want the condition to succeed or false otherwise" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDlgConditionCustom_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgConditionCustom>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDlgConditionCustom_Statics::ClassParams = {
		&UDlgConditionCustom::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDlgConditionCustom_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgConditionCustom_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDlgConditionCustom()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDlgConditionCustom_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDlgConditionCustom, 2266757951);
	template<> DLGSYSTEM_API UClass* StaticClass<UDlgConditionCustom>()
	{
		return UDlgConditionCustom::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDlgConditionCustom(Z_Construct_UClass_UDlgConditionCustom, &UDlgConditionCustom::StaticClass, TEXT("/Script/DlgSystem"), TEXT("UDlgConditionCustom"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDlgConditionCustom);
	void UDlgConditionCustomHideCategories::StaticRegisterNativesUDlgConditionCustomHideCategories()
	{
	}
	UClass* Z_Construct_UClass_UDlgConditionCustomHideCategories_NoRegister()
	{
		return UDlgConditionCustomHideCategories::StaticClass();
	}
	struct Z_Construct_UClass_UDlgConditionCustomHideCategories_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDlgConditionCustomHideCategories_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDlgConditionCustom,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgConditionCustomHideCategories_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Default" },
		{ "BlueprintType", "true" },
		{ "Comment", "// This is the same as UDlgConditionCustom but it does NOT show the categories\n" },
		{ "HideCategories", "DoNotShow" },
		{ "IncludePath", "DlgConditionCustom.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DlgConditionCustom.h" },
		{ "ToolTip", "This is the same as UDlgConditionCustom but it does NOT show the categories" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDlgConditionCustomHideCategories_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgConditionCustomHideCategories>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDlgConditionCustomHideCategories_Statics::ClassParams = {
		&UDlgConditionCustomHideCategories::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDlgConditionCustomHideCategories_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgConditionCustomHideCategories_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDlgConditionCustomHideCategories()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDlgConditionCustomHideCategories_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDlgConditionCustomHideCategories, 3232722063);
	template<> DLGSYSTEM_API UClass* StaticClass<UDlgConditionCustomHideCategories>()
	{
		return UDlgConditionCustomHideCategories::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDlgConditionCustomHideCategories(Z_Construct_UClass_UDlgConditionCustomHideCategories, &UDlgConditionCustomHideCategories::StaticClass, TEXT("/Script/DlgSystem"), TEXT("UDlgConditionCustomHideCategories"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDlgConditionCustomHideCategories);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
