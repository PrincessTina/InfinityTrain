// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystem/Public/DlgEventCustom.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDlgEventCustom() {}
// Cross Module References
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgEventCustom_NoRegister();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgEventCustom();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgObject();
	UPackage* Z_Construct_UPackage__Script_DlgSystem();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgContext_NoRegister();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgEventCustomHideCategories_NoRegister();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgEventCustomHideCategories();
// End Cross Module References
	DEFINE_FUNCTION(UDlgEventCustom::execEnterEvent)
	{
		P_GET_OBJECT(UDlgContext,Z_Param_Context);
		P_GET_OBJECT(UObject,Z_Param_Participant);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnterEvent_Implementation(Z_Param_Context,Z_Param_Participant);
		P_NATIVE_END;
	}
	static FName NAME_UDlgEventCustom_EnterEvent = FName(TEXT("EnterEvent"));
	void UDlgEventCustom::EnterEvent(UDlgContext* Context, UObject* Participant)
	{
		DlgEventCustom_eventEnterEvent_Parms Parms;
		Parms.Context=Context;
		Parms.Participant=Participant;
		ProcessEvent(FindFunctionChecked(NAME_UDlgEventCustom_EnterEvent),&Parms);
	}
	void UDlgEventCustom::StaticRegisterNativesUDlgEventCustom()
	{
		UClass* Class = UDlgEventCustom::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnterEvent", &UDlgEventCustom::execEnterEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDlgEventCustom_EnterEvent_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Participant;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Context;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgEventCustom_EnterEvent_Statics::NewProp_Participant = { "Participant", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgEventCustom_eventEnterEvent_Parms, Participant), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDlgEventCustom_EnterEvent_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgEventCustom_eventEnterEvent_Parms, Context), Z_Construct_UClass_UDlgContext_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgEventCustom_EnterEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgEventCustom_EnterEvent_Statics::NewProp_Participant,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgEventCustom_EnterEvent_Statics::NewProp_Context,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgEventCustom_EnterEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Called when the event is triggered.\n" },
		{ "DisplayName", "Enter" },
		{ "ModuleRelativePath", "Public/DlgEventCustom.h" },
		{ "ToolTip", "Called when the event is triggered." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgEventCustom_EnterEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgEventCustom, nullptr, "EnterEvent", nullptr, nullptr, sizeof(DlgEventCustom_eventEnterEvent_Parms), Z_Construct_UFunction_UDlgEventCustom_EnterEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgEventCustom_EnterEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgEventCustom_EnterEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgEventCustom_EnterEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgEventCustom_EnterEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgEventCustom_EnterEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDlgEventCustom_NoRegister()
	{
		return UDlgEventCustom::StaticClass();
	}
	struct Z_Construct_UClass_UDlgEventCustom_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDlgEventCustom_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDlgObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDlgEventCustom_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDlgEventCustom_EnterEvent, "EnterEvent" }, // 32279569
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgEventCustom_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Default" },
		{ "BlueprintType", "true" },
		{ "Comment", "// Abstract base class for a custom event\n// Extend this class to define additional data you want to store\n//\n// 1. Override EnterEvent\n" },
		{ "HideCategories", "DoNotShow" },
		{ "IncludePath", "DlgEventCustom.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DlgEventCustom.h" },
		{ "ToolTip", "Abstract base class for a custom event\nExtend this class to define additional data you want to store\n\n1. Override EnterEvent" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDlgEventCustom_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgEventCustom>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDlgEventCustom_Statics::ClassParams = {
		&UDlgEventCustom::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDlgEventCustom_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgEventCustom_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDlgEventCustom()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDlgEventCustom_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDlgEventCustom, 1210121088);
	template<> DLGSYSTEM_API UClass* StaticClass<UDlgEventCustom>()
	{
		return UDlgEventCustom::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDlgEventCustom(Z_Construct_UClass_UDlgEventCustom, &UDlgEventCustom::StaticClass, TEXT("/Script/DlgSystem"), TEXT("UDlgEventCustom"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDlgEventCustom);
	void UDlgEventCustomHideCategories::StaticRegisterNativesUDlgEventCustomHideCategories()
	{
	}
	UClass* Z_Construct_UClass_UDlgEventCustomHideCategories_NoRegister()
	{
		return UDlgEventCustomHideCategories::StaticClass();
	}
	struct Z_Construct_UClass_UDlgEventCustomHideCategories_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDlgEventCustomHideCategories_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDlgEventCustom,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgEventCustomHideCategories_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Default" },
		{ "BlueprintType", "true" },
		{ "Comment", "// This is the same as UDlgEventCustom but it does NOT show the categories\n" },
		{ "HideCategories", "DoNotShow" },
		{ "IncludePath", "DlgEventCustom.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DlgEventCustom.h" },
		{ "ToolTip", "This is the same as UDlgEventCustom but it does NOT show the categories" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDlgEventCustomHideCategories_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgEventCustomHideCategories>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDlgEventCustomHideCategories_Statics::ClassParams = {
		&UDlgEventCustomHideCategories::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDlgEventCustomHideCategories_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgEventCustomHideCategories_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDlgEventCustomHideCategories()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDlgEventCustomHideCategories_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDlgEventCustomHideCategories, 2050610657);
	template<> DLGSYSTEM_API UClass* StaticClass<UDlgEventCustomHideCategories>()
	{
		return UDlgEventCustomHideCategories::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDlgEventCustomHideCategories(Z_Construct_UClass_UDlgEventCustomHideCategories, &UDlgEventCustomHideCategories::StaticClass, TEXT("/Script/DlgSystem"), TEXT("UDlgEventCustomHideCategories"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDlgEventCustomHideCategories);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
