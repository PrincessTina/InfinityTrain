// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystem/Public/DlgTextArgument.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDlgTextArgument() {}
// Cross Module References
	DLGSYSTEM_API UEnum* Z_Construct_UEnum_DlgSystem_EDlgTextArgumentType();
	UPackage* Z_Construct_UPackage__Script_DlgSystem();
	DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgTextArgument();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgTextArgumentCustom_NoRegister();
// End Cross Module References
	static UEnum* EDlgTextArgumentType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DlgSystem_EDlgTextArgumentType, Z_Construct_UPackage__Script_DlgSystem(), TEXT("EDlgTextArgumentType"));
		}
		return Singleton;
	}
	template<> DLGSYSTEM_API UEnum* StaticEnum<EDlgTextArgumentType>()
	{
		return EDlgTextArgumentType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDlgTextArgumentType(EDlgTextArgumentType_StaticEnum, TEXT("/Script/DlgSystem"), TEXT("EDlgTextArgumentType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DlgSystem_EDlgTextArgumentType_Hash() { return 3275937108U; }
	UEnum* Z_Construct_UEnum_DlgSystem_EDlgTextArgumentType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DlgSystem();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDlgTextArgumentType"), 0, Get_Z_Construct_UEnum_DlgSystem_EDlgTextArgumentType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDlgTextArgumentType::DisplayName", (int64)EDlgTextArgumentType::DisplayName },
				{ "EDlgTextArgumentType::Gender", (int64)EDlgTextArgumentType::Gender },
				{ "EDlgTextArgumentType::DialogueInt", (int64)EDlgTextArgumentType::DialogueInt },
				{ "EDlgTextArgumentType::DialogueFloat", (int64)EDlgTextArgumentType::DialogueFloat },
				{ "EDlgTextArgumentType::ClassInt", (int64)EDlgTextArgumentType::ClassInt },
				{ "EDlgTextArgumentType::ClassFloat", (int64)EDlgTextArgumentType::ClassFloat },
				{ "EDlgTextArgumentType::ClassText", (int64)EDlgTextArgumentType::ClassText },
				{ "EDlgTextArgumentType::Custom", (int64)EDlgTextArgumentType::Custom },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ClassFloat.Comment", "// Gets the value from the Participant Float Variable\n" },
				{ "ClassFloat.DisplayName", "Class Float Variable" },
				{ "ClassFloat.Name", "EDlgTextArgumentType::ClassFloat" },
				{ "ClassFloat.ToolTip", "Gets the value from the Participant Float Variable" },
				{ "ClassInt.Comment", "// Gets the value from the Participant Int Variable\n" },
				{ "ClassInt.DisplayName", "Class Int Variable" },
				{ "ClassInt.Name", "EDlgTextArgumentType::ClassInt" },
				{ "ClassInt.ToolTip", "Gets the value from the Participant Int Variable" },
				{ "ClassText.Comment", "// Gets the value from the Participant Text Variable\n" },
				{ "ClassText.DisplayName", "Class Text Variable" },
				{ "ClassText.Name", "EDlgTextArgumentType::ClassText" },
				{ "ClassText.ToolTip", "Gets the value from the Participant Text Variable" },
				{ "Comment", "// Argument type, which defines both the type of the argument and the way the system will acquire the value\n// NOTE: the values are out of order here for backwards compatibility\n" },
				{ "Custom.Comment", "// User Defined Text Argument, calls GetText on the custom text argument object.\n//\n// 1. Create a new Blueprint derived from DlgTextArgumentCustom (or DlgTextArgumentCustomHideCategories)\n// 2. Override GetText\n" },
				{ "Custom.DisplayName", "Custom Text Argument" },
				{ "Custom.Name", "EDlgTextArgumentType::Custom" },
				{ "Custom.ToolTip", "User Defined Text Argument, calls GetText on the custom text argument object.\n\n1. Create a new Blueprint derived from DlgTextArgumentCustom (or DlgTextArgumentCustomHideCategories)\n2. Override GetText" },
				{ "DialogueFloat.Comment", "// Calls GetFloatValue on the Participant\n" },
				{ "DialogueFloat.DisplayName", "Dialogue Float Value" },
				{ "DialogueFloat.Name", "EDlgTextArgumentType::DialogueFloat" },
				{ "DialogueFloat.ToolTip", "Calls GetFloatValue on the Participant" },
				{ "DialogueInt.Comment", "// Calls GetIntValue on the Participant\n" },
				{ "DialogueInt.DisplayName", "Dialogue Int Value" },
				{ "DialogueInt.Name", "EDlgTextArgumentType::DialogueInt" },
				{ "DialogueInt.ToolTip", "Calls GetIntValue on the Participant" },
				{ "DisplayName.Comment", "// Calls GetParticipantDisplayName on the Participant\n" },
				{ "DisplayName.DisplayName", "Participant Display Name" },
				{ "DisplayName.Name", "EDlgTextArgumentType::DisplayName" },
				{ "DisplayName.ToolTip", "Calls GetParticipantDisplayName on the Participant" },
				{ "Gender.Comment", "// Calls GetParticipantGender on the Participant\n" },
				{ "Gender.DisplayName", "Participant Gender" },
				{ "Gender.Name", "EDlgTextArgumentType::Gender" },
				{ "Gender.ToolTip", "Calls GetParticipantGender on the Participant" },
				{ "ModuleRelativePath", "Public/DlgTextArgument.h" },
				{ "ToolTip", "Argument type, which defines both the type of the argument and the way the system will acquire the value\nNOTE: the values are out of order here for backwards compatibility" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DlgSystem,
				nullptr,
				"EDlgTextArgumentType",
				"EDlgTextArgumentType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FDlgTextArgument::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DLGSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FDlgTextArgument_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDlgTextArgument, Z_Construct_UPackage__Script_DlgSystem(), TEXT("DlgTextArgument"), sizeof(FDlgTextArgument), Get_Z_Construct_UScriptStruct_FDlgTextArgument_Hash());
	}
	return Singleton;
}
template<> DLGSYSTEM_API UScriptStruct* StaticStruct<FDlgTextArgument>()
{
	return FDlgTextArgument::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDlgTextArgument(FDlgTextArgument::StaticStruct, TEXT("/Script/DlgSystem"), TEXT("DlgTextArgument"), false, nullptr, nullptr);
static struct FScriptStruct_DlgSystem_StaticRegisterNativesFDlgTextArgument
{
	FScriptStruct_DlgSystem_StaticRegisterNativesFDlgTextArgument()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DlgTextArgument")),new UScriptStruct::TCppStructOps<FDlgTextArgument>);
	}
} ScriptStruct_DlgSystem_StaticRegisterNativesFDlgTextArgument;
	struct Z_Construct_UScriptStruct_FDlgTextArgument_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTextArgument_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomTextArgument;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VariableName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_VariableName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticipantName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTextArgument_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * An argument is a variable to extend node texts with dynamic values runtime\n * It can be inserted to the FText, the same way FText::Format works\n * See: https://docs.unrealengine.com/en-us/Gameplay/Localization/Formatting\n */" },
		{ "ModuleRelativePath", "Public/DlgTextArgument.h" },
		{ "ToolTip", "An argument is a variable to extend node texts with dynamic values runtime\nIt can be inserted to the FText, the same way FText::Format works\nSee: https://docs.unrealengine.com/en-us/Gameplay/Localization/Formatting" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDlgTextArgument_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDlgTextArgument>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTextArgument_Statics::NewProp_CustomTextArgument_MetaData[] = {
		{ "Category", "Dialogue|TextArgument" },
		{ "Comment", "// User Defined Text Argument, calls GetText on the custom text argument object.\n//\n// 1. Create a new Blueprint derived from DlgTextArgumentCustom (or DlgTextArgumentCustomHideCategories)\n// 2. Override GetText\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DlgTextArgument.h" },
		{ "ToolTip", "User Defined Text Argument, calls GetText on the custom text argument object.\n\n1. Create a new Blueprint derived from DlgTextArgumentCustom (or DlgTextArgumentCustomHideCategories)\n2. Override GetText" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDlgTextArgument_Statics::NewProp_CustomTextArgument = { "CustomTextArgument", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDlgTextArgument, CustomTextArgument), Z_Construct_UClass_UDlgTextArgumentCustom_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTextArgument_Statics::NewProp_CustomTextArgument_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTextArgument_Statics::NewProp_CustomTextArgument_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTextArgument_Statics::NewProp_VariableName_MetaData[] = {
		{ "Category", "Dialogue|TextArgument" },
		{ "ModuleRelativePath", "Public/DlgTextArgument.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDlgTextArgument_Statics::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDlgTextArgument, VariableName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTextArgument_Statics::NewProp_VariableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTextArgument_Statics::NewProp_VariableName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTextArgument_Statics::NewProp_ParticipantName_MetaData[] = {
		{ "Category", "Dialogue|TextArgument" },
		{ "ModuleRelativePath", "Public/DlgTextArgument.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDlgTextArgument_Statics::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDlgTextArgument, ParticipantName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTextArgument_Statics::NewProp_ParticipantName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTextArgument_Statics::NewProp_ParticipantName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTextArgument_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Dialogue|TextArgument" },
		{ "ModuleRelativePath", "Public/DlgTextArgument.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDlgTextArgument_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDlgTextArgument, Type), Z_Construct_UEnum_DlgSystem_EDlgTextArgumentType, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTextArgument_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTextArgument_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDlgTextArgument_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgTextArgument_Statics::NewProp_DisplayString_MetaData[] = {
		{ "Category", "Dialogue|TextArgument" },
		{ "ModuleRelativePath", "Public/DlgTextArgument.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDlgTextArgument_Statics::NewProp_DisplayString = { "DisplayString", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDlgTextArgument, DisplayString), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTextArgument_Statics::NewProp_DisplayString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTextArgument_Statics::NewProp_DisplayString_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDlgTextArgument_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTextArgument_Statics::NewProp_CustomTextArgument,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTextArgument_Statics::NewProp_VariableName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTextArgument_Statics::NewProp_ParticipantName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTextArgument_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTextArgument_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgTextArgument_Statics::NewProp_DisplayString,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDlgTextArgument_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystem,
		nullptr,
		&NewStructOps,
		"DlgTextArgument",
		sizeof(FDlgTextArgument),
		alignof(FDlgTextArgument),
		Z_Construct_UScriptStruct_FDlgTextArgument_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTextArgument_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgTextArgument_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgTextArgument_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDlgTextArgument()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDlgTextArgument_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DlgSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DlgTextArgument"), sizeof(FDlgTextArgument), Get_Z_Construct_UScriptStruct_FDlgTextArgument_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDlgTextArgument_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDlgTextArgument_Hash() { return 932264854U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
