// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystem/Public/DlgSystemSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDlgSystemSettings() {}
// Cross Module References
	DLGSYSTEM_API UEnum* Z_Construct_UEnum_DlgSystem_EDlgClassPickerDisplayMode();
	UPackage* Z_Construct_UPackage__Script_DlgSystem();
	DLGSYSTEM_API UEnum* Z_Construct_UEnum_DlgSystem_EDlgTextNamespaceLocalization();
	DLGSYSTEM_API UEnum* Z_Construct_UEnum_DlgSystem_EDlgTextInputKeyForNewLine();
	DLGSYSTEM_API UEnum* Z_Construct_UEnum_DlgSystem_EDlgSpeakerStateVisibility();
	DLGSYSTEM_API UEnum* Z_Construct_UEnum_DlgSystem_EDlgVoiceDisplayedFields();
	DLGSYSTEM_API UEnum* Z_Construct_UEnum_DlgSystem_EDlgDialogueTextFormat();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgSystemSettings_NoRegister();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgSystemSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDeveloperSettings();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EHorizontalAlignment();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	DLGSYSTEM_API UEnum* Z_Construct_UEnum_DlgSystem_ENYLoggerLogLevel();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	static UEnum* EDlgClassPickerDisplayMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DlgSystem_EDlgClassPickerDisplayMode, Z_Construct_UPackage__Script_DlgSystem(), TEXT("EDlgClassPickerDisplayMode"));
		}
		return Singleton;
	}
	template<> DLGSYSTEM_API UEnum* StaticEnum<EDlgClassPickerDisplayMode>()
	{
		return EDlgClassPickerDisplayMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDlgClassPickerDisplayMode(EDlgClassPickerDisplayMode_StaticEnum, TEXT("/Script/DlgSystem"), TEXT("EDlgClassPickerDisplayMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DlgSystem_EDlgClassPickerDisplayMode_Hash() { return 520097022U; }
	UEnum* Z_Construct_UEnum_DlgSystem_EDlgClassPickerDisplayMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DlgSystem();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDlgClassPickerDisplayMode"), 0, Get_Z_Construct_UEnum_DlgSystem_EDlgClassPickerDisplayMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDlgClassPickerDisplayMode::DefaultView", (int64)EDlgClassPickerDisplayMode::DefaultView },
				{ "EDlgClassPickerDisplayMode::TreeView", (int64)EDlgClassPickerDisplayMode::TreeView },
				{ "EDlgClassPickerDisplayMode::ListView", (int64)EDlgClassPickerDisplayMode::ListView },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "DefaultView.Comment", "// Default will choose what view mode based on if in Viewer or Picker mode.\n" },
				{ "DefaultView.Name", "EDlgClassPickerDisplayMode::DefaultView" },
				{ "DefaultView.ToolTip", "Default will choose what view mode based on if in Viewer or Picker mode." },
				{ "ListView.Comment", "// Displays all classes as a list.\n" },
				{ "ListView.Name", "EDlgClassPickerDisplayMode::ListView" },
				{ "ListView.ToolTip", "Displays all classes as a list." },
				{ "ModuleRelativePath", "Public/DlgSystemSettings.h" },
				{ "TreeView.Comment", "// Displays all classes as a tree.\n" },
				{ "TreeView.Name", "EDlgClassPickerDisplayMode::TreeView" },
				{ "TreeView.ToolTip", "Displays all classes as a tree." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DlgSystem,
				nullptr,
				"EDlgClassPickerDisplayMode",
				"EDlgClassPickerDisplayMode",
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
	static UEnum* EDlgTextNamespaceLocalization_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DlgSystem_EDlgTextNamespaceLocalization, Z_Construct_UPackage__Script_DlgSystem(), TEXT("EDlgTextNamespaceLocalization"));
		}
		return Singleton;
	}
	template<> DLGSYSTEM_API UEnum* StaticEnum<EDlgTextNamespaceLocalization>()
	{
		return EDlgTextNamespaceLocalization_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDlgTextNamespaceLocalization(EDlgTextNamespaceLocalization_StaticEnum, TEXT("/Script/DlgSystem"), TEXT("EDlgTextNamespaceLocalization"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DlgSystem_EDlgTextNamespaceLocalization_Hash() { return 27627336U; }
	UEnum* Z_Construct_UEnum_DlgSystem_EDlgTextNamespaceLocalization()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DlgSystem();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDlgTextNamespaceLocalization"), 0, Get_Z_Construct_UEnum_DlgSystem_EDlgTextNamespaceLocalization_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDlgTextNamespaceLocalization::Ignore", (int64)EDlgTextNamespaceLocalization::Ignore },
				{ "EDlgTextNamespaceLocalization::PerDialogue", (int64)EDlgTextNamespaceLocalization::PerDialogue },
				{ "EDlgTextNamespaceLocalization::WithPrefixPerDialogue", (int64)EDlgTextNamespaceLocalization::WithPrefixPerDialogue },
				{ "EDlgTextNamespaceLocalization::Global", (int64)EDlgTextNamespaceLocalization::Global },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "// Defines how the overriden namespace will be set\n" },
				{ "Global.Comment", "// The system sets the Namespace for Text fields for each dialogue into the same value. Unique keys are also generated.\n" },
				{ "Global.DisplayName", "Global Namespace" },
				{ "Global.Name", "EDlgTextNamespaceLocalization::Global" },
				{ "Global.ToolTip", "The system sets the Namespace for Text fields for each dialogue into the same value. Unique keys are also generated." },
				{ "Ignore.Comment", "// The system does not modify the Namespace and Key values of the Text fields.\n" },
				{ "Ignore.DisplayName", "Ignore" },
				{ "Ignore.Name", "EDlgTextNamespaceLocalization::Ignore" },
				{ "Ignore.ToolTip", "The system does not modify the Namespace and Key values of the Text fields." },
				{ "ModuleRelativePath", "Public/DlgSystemSettings.h" },
				{ "PerDialogue.Comment", "// The system sets the Namespace for Text fields for each dialogue separately. Unique keys are also generated.\n" },
				{ "PerDialogue.DisplayName", "Namespace Per Dialogue (DialogueName)" },
				{ "PerDialogue.Name", "EDlgTextNamespaceLocalization::PerDialogue" },
				{ "PerDialogue.ToolTip", "The system sets the Namespace for Text fields for each dialogue separately. Unique keys are also generated." },
				{ "ToolTip", "Defines how the overriden namespace will be set" },
				{ "WithPrefixPerDialogue.Comment", "// Same as PerDialogue only we will have a prefix set\n" },
				{ "WithPrefixPerDialogue.DisplayName", "Prefix + Namespace Per Dialogue (Prefix.DialogueName)" },
				{ "WithPrefixPerDialogue.Name", "EDlgTextNamespaceLocalization::WithPrefixPerDialogue" },
				{ "WithPrefixPerDialogue.ToolTip", "Same as PerDialogue only we will have a prefix set" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DlgSystem,
				nullptr,
				"EDlgTextNamespaceLocalization",
				"EDlgTextNamespaceLocalization",
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
	static UEnum* EDlgTextInputKeyForNewLine_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DlgSystem_EDlgTextInputKeyForNewLine, Z_Construct_UPackage__Script_DlgSystem(), TEXT("EDlgTextInputKeyForNewLine"));
		}
		return Singleton;
	}
	template<> DLGSYSTEM_API UEnum* StaticEnum<EDlgTextInputKeyForNewLine>()
	{
		return EDlgTextInputKeyForNewLine_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDlgTextInputKeyForNewLine(EDlgTextInputKeyForNewLine_StaticEnum, TEXT("/Script/DlgSystem"), TEXT("EDlgTextInputKeyForNewLine"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DlgSystem_EDlgTextInputKeyForNewLine_Hash() { return 1661293815U; }
	UEnum* Z_Construct_UEnum_DlgSystem_EDlgTextInputKeyForNewLine()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DlgSystem();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDlgTextInputKeyForNewLine"), 0, Get_Z_Construct_UEnum_DlgSystem_EDlgTextInputKeyForNewLine_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDlgTextInputKeyForNewLine::Enter", (int64)EDlgTextInputKeyForNewLine::Enter },
				{ "EDlgTextInputKeyForNewLine::ShiftPlusEnter", (int64)EDlgTextInputKeyForNewLine::ShiftPlusEnter },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "// Defines what key combination to press to add a new line to an FText\n" },
				{ "Enter.Comment", "// Press 'Enter' to add a new line.\n" },
				{ "Enter.DisplayName", "Enter" },
				{ "Enter.Name", "EDlgTextInputKeyForNewLine::Enter" },
				{ "Enter.ToolTip", "Press 'Enter' to add a new line." },
				{ "ModuleRelativePath", "Public/DlgSystemSettings.h" },
				{ "ShiftPlusEnter.Comment", "// Preset 'Shift + Enter' to add a new line. (like in blueprints)\n" },
				{ "ShiftPlusEnter.DisplayName", "Shift + Enter" },
				{ "ShiftPlusEnter.Name", "EDlgTextInputKeyForNewLine::ShiftPlusEnter" },
				{ "ShiftPlusEnter.ToolTip", "Preset 'Shift + Enter' to add a new line. (like in blueprints)" },
				{ "ToolTip", "Defines what key combination to press to add a new line to an FText" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DlgSystem,
				nullptr,
				"EDlgTextInputKeyForNewLine",
				"EDlgTextInputKeyForNewLine",
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
	static UEnum* EDlgSpeakerStateVisibility_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DlgSystem_EDlgSpeakerStateVisibility, Z_Construct_UPackage__Script_DlgSystem(), TEXT("EDlgSpeakerStateVisibility"));
		}
		return Singleton;
	}
	template<> DLGSYSTEM_API UEnum* StaticEnum<EDlgSpeakerStateVisibility>()
	{
		return EDlgSpeakerStateVisibility_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDlgSpeakerStateVisibility(EDlgSpeakerStateVisibility_StaticEnum, TEXT("/Script/DlgSystem"), TEXT("EDlgSpeakerStateVisibility"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DlgSystem_EDlgSpeakerStateVisibility_Hash() { return 2350767955U; }
	UEnum* Z_Construct_UEnum_DlgSystem_EDlgSpeakerStateVisibility()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DlgSystem();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDlgSpeakerStateVisibility"), 0, Get_Z_Construct_UEnum_DlgSystem_EDlgSpeakerStateVisibility_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDlgSpeakerStateVisibility::HideAll", (int64)EDlgSpeakerStateVisibility::HideAll },
				{ "EDlgSpeakerStateVisibility::ShowOnEdge", (int64)EDlgSpeakerStateVisibility::ShowOnEdge },
				{ "EDlgSpeakerStateVisibility::ShowOnNode", (int64)EDlgSpeakerStateVisibility::ShowOnNode },
				{ "EDlgSpeakerStateVisibility::ShowOnNodeAndEdge", (int64)EDlgSpeakerStateVisibility::ShowOnNodeAndEdge },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "// Defines the visibility of the SpeakerState values\n" },
				{ "HideAll.Comment", "// No visibility fields are displayed.\n" },
				{ "HideAll.DisplayName", "Hide All" },
				{ "HideAll.Name", "EDlgSpeakerStateVisibility::HideAll" },
				{ "HideAll.ToolTip", "No visibility fields are displayed." },
				{ "ModuleRelativePath", "Public/DlgSystemSettings.h" },
				{ "ShowOnEdge.Comment", "// Only display the SoundWave voice fields.\n" },
				{ "ShowOnEdge.DisplayName", "Show On Edge" },
				{ "ShowOnEdge.Name", "EDlgSpeakerStateVisibility::ShowOnEdge" },
				{ "ShowOnEdge.ToolTip", "Only display the SoundWave voice fields." },
				{ "ShowOnNode.Comment", "// Only display the DialogueWave voice fields.\n" },
				{ "ShowOnNode.DisplayName", "Show On Node" },
				{ "ShowOnNode.Name", "EDlgSpeakerStateVisibility::ShowOnNode" },
				{ "ShowOnNode.ToolTip", "Only display the DialogueWave voice fields." },
				{ "ShowOnNodeAndEdge.Comment", "// Display both SoundWave and DialogueWave fields.\n" },
				{ "ShowOnNodeAndEdge.DisplayName", "Show On Both (Edge + Node)" },
				{ "ShowOnNodeAndEdge.Name", "EDlgSpeakerStateVisibility::ShowOnNodeAndEdge" },
				{ "ShowOnNodeAndEdge.ToolTip", "Display both SoundWave and DialogueWave fields." },
				{ "ToolTip", "Defines the visibility of the SpeakerState values" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DlgSystem,
				nullptr,
				"EDlgSpeakerStateVisibility",
				"EDlgSpeakerStateVisibility",
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
	static UEnum* EDlgVoiceDisplayedFields_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DlgSystem_EDlgVoiceDisplayedFields, Z_Construct_UPackage__Script_DlgSystem(), TEXT("EDlgVoiceDisplayedFields"));
		}
		return Singleton;
	}
	template<> DLGSYSTEM_API UEnum* StaticEnum<EDlgVoiceDisplayedFields>()
	{
		return EDlgVoiceDisplayedFields_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDlgVoiceDisplayedFields(EDlgVoiceDisplayedFields_StaticEnum, TEXT("/Script/DlgSystem"), TEXT("EDlgVoiceDisplayedFields"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DlgSystem_EDlgVoiceDisplayedFields_Hash() { return 1238401504U; }
	UEnum* Z_Construct_UEnum_DlgSystem_EDlgVoiceDisplayedFields()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DlgSystem();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDlgVoiceDisplayedFields"), 0, Get_Z_Construct_UEnum_DlgSystem_EDlgVoiceDisplayedFields_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDlgVoiceDisplayedFields::None", (int64)EDlgVoiceDisplayedFields::None },
				{ "EDlgVoiceDisplayedFields::SoundWave", (int64)EDlgVoiceDisplayedFields::SoundWave },
				{ "EDlgVoiceDisplayedFields::DialogueWave", (int64)EDlgVoiceDisplayedFields::DialogueWave },
				{ "EDlgVoiceDisplayedFields::SoundWaveAndDialogueWave", (int64)EDlgVoiceDisplayedFields::SoundWaveAndDialogueWave },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "// Defines the displayed properties of the voice fields.\n" },
				{ "DialogueWave.Comment", "// Only display the DialogueWave voice fields.\n" },
				{ "DialogueWave.DisplayName", "Dialogue Wave" },
				{ "DialogueWave.Name", "EDlgVoiceDisplayedFields::DialogueWave" },
				{ "DialogueWave.ToolTip", "Only display the DialogueWave voice fields." },
				{ "ModuleRelativePath", "Public/DlgSystemSettings.h" },
				{ "None.Comment", "// No Voice fields are displayed.\n" },
				{ "None.DisplayName", "No Voice" },
				{ "None.Name", "EDlgVoiceDisplayedFields::None" },
				{ "None.ToolTip", "No Voice fields are displayed." },
				{ "SoundWave.Comment", "// Only display the SoundWave voice fields.\n" },
				{ "SoundWave.DisplayName", "Sound Wave" },
				{ "SoundWave.Name", "EDlgVoiceDisplayedFields::SoundWave" },
				{ "SoundWave.ToolTip", "Only display the SoundWave voice fields." },
				{ "SoundWaveAndDialogueWave.Comment", "// Display both SoundWave and DialogueWave fields.\n" },
				{ "SoundWaveAndDialogueWave.DisplayName", "Sound Wave & Dialogue Wave" },
				{ "SoundWaveAndDialogueWave.Name", "EDlgVoiceDisplayedFields::SoundWaveAndDialogueWave" },
				{ "SoundWaveAndDialogueWave.ToolTip", "Display both SoundWave and DialogueWave fields." },
				{ "ToolTip", "Defines the displayed properties of the voice fields." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DlgSystem,
				nullptr,
				"EDlgVoiceDisplayedFields",
				"EDlgVoiceDisplayedFields",
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
	static UEnum* EDlgDialogueTextFormat_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DlgSystem_EDlgDialogueTextFormat, Z_Construct_UPackage__Script_DlgSystem(), TEXT("EDlgDialogueTextFormat"));
		}
		return Singleton;
	}
	template<> DLGSYSTEM_API UEnum* StaticEnum<EDlgDialogueTextFormat>()
	{
		return EDlgDialogueTextFormat_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDlgDialogueTextFormat(EDlgDialogueTextFormat_StaticEnum, TEXT("/Script/DlgSystem"), TEXT("EDlgDialogueTextFormat"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DlgSystem_EDlgDialogueTextFormat_Hash() { return 1177475817U; }
	UEnum* Z_Construct_UEnum_DlgSystem_EDlgDialogueTextFormat()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DlgSystem();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDlgDialogueTextFormat"), 0, Get_Z_Construct_UEnum_DlgSystem_EDlgDialogueTextFormat_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDlgDialogueTextFormat::None", (int64)EDlgDialogueTextFormat::None },
				{ "EDlgDialogueTextFormat::All", (int64)EDlgDialogueTextFormat::All },
				{ "EDlgDialogueTextFormat::DialogueDEPRECATED", (int64)EDlgDialogueTextFormat::DialogueDEPRECATED },
				{ "EDlgDialogueTextFormat::StartTextFormats", (int64)EDlgDialogueTextFormat::StartTextFormats },
				{ "EDlgDialogueTextFormat::JSON", (int64)EDlgDialogueTextFormat::JSON },
				{ "EDlgDialogueTextFormat::NumTextFormats", (int64)EDlgDialogueTextFormat::NumTextFormats },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "All.Comment", "// Output all text formats, mostly used for debugging\n" },
				{ "All.Hidden", "" },
				{ "All.Name", "EDlgDialogueTextFormat::All" },
				{ "All.ToolTip", "Output all text formats, mostly used for debugging" },
				{ "Comment", "// Defines the format of the Dialogue text\n" },
				{ "DialogueDEPRECATED.Comment", "// DEPRECATED. The own Dialogue Text format. DEPRECATED.\n// NOTE: this format is deprecated AND in the next version it will be removed\n" },
				{ "DialogueDEPRECATED.Hidden", "" },
				{ "DialogueDEPRECATED.Name", "EDlgDialogueTextFormat::DialogueDEPRECATED" },
				{ "DialogueDEPRECATED.ToolTip", "DEPRECATED. The own Dialogue Text format. DEPRECATED.\nNOTE: this format is deprecated AND in the next version it will be removed" },
				{ "JSON.Comment", "// The JSON format.\n" },
				{ "JSON.DisplayName", "JSON" },
				{ "JSON.Name", "EDlgDialogueTextFormat::JSON" },
				{ "JSON.ToolTip", "The JSON format." },
				{ "ModuleRelativePath", "Public/DlgSystemSettings.h" },
				{ "None.Comment", "// No Text Format used.\n" },
				{ "None.DisplayName", "No Text Format" },
				{ "None.Name", "EDlgDialogueTextFormat::None" },
				{ "None.ToolTip", "No Text Format used." },
				{ "NumTextFormats.Comment", "// Hidden, represents the number of text formats */\n" },
				{ "NumTextFormats.Hidden", "" },
				{ "NumTextFormats.Name", "EDlgDialogueTextFormat::NumTextFormats" },
				{ "NumTextFormats.ToolTip", "Hidden, represents the number of text formats */" },
				{ "StartTextFormats.Comment", "// Hidden represents the start of the text formats index\n" },
				{ "StartTextFormats.Hidden", "" },
				{ "StartTextFormats.Name", "EDlgDialogueTextFormat::StartTextFormats" },
				{ "StartTextFormats.ToolTip", "Hidden represents the start of the text formats index" },
				{ "ToolTip", "Defines the format of the Dialogue text" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DlgSystem,
				nullptr,
				"EDlgDialogueTextFormat",
				"EDlgDialogueTextFormat",
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
	void UDlgSystemSettings::StaticRegisterNativesUDlgSystemSettings()
	{
	}
	UClass* Z_Construct_UClass_UDlgSystemSettings_NoRegister()
	{
		return UDlgSystemSettings::StaticClass();
	}
	struct Z_Construct_UClass_UDlgSystemSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffsetBetweenRowsY_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OffsetBetweenRowsY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffsetBetweenColumnsX_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OffsetBetweenColumnsX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WireSecondaryEdgeColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WireSecondaryEdgeColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WirePrimaryEdgeColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WirePrimaryEdgeColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawSecondaryEdges_MetaData[];
#endif
		static void NewProp_bDrawSecondaryEdges_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawSecondaryEdges;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawPrimaryEdges_MetaData[];
#endif
		static void NewProp_bDrawPrimaryEdges_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawPrimaryEdges;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowPrimarySecondaryEdges_MetaData[];
#endif
		static void NewProp_bShowPrimarySecondaryEdges_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowPrimarySecondaryEdges;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WireHoveredColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WireHoveredColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WireWithConditionsColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WireWithConditionsColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowDifferentColorForConditionWires_MetaData[];
#endif
		static void NewProp_bShowDifferentColorForConditionWires_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowDifferentColorForConditionWires;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WireBaseColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WireBaseColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowEdgeHasConditionsIcon_MetaData[];
#endif
		static void NewProp_bShowEdgeHasConditionsIcon_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowEdgeHasConditionsIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWireDrawBubbles_MetaData[];
#endif
		static void NewProp_bWireDrawBubbles_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWireDrawBubbles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WireThickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WireThickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DescriptionSpeakerHorizontalAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DescriptionSpeakerHorizontalAlignment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DescriptionSpeakerMargin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DescriptionSpeakerMargin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BorderHoveredBackgroundColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BorderHoveredBackgroundColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BorderBackgroundColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BorderBackgroundColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeechSequenceNodeColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpeechSequenceNodeColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectorRandomNodeColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SelectorRandomNodeColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectorFirstNodeColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SelectorFirstNodeColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VirtualParentNodeColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VirtualParentNodeColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndNodeColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndNodeColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootNodeColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RootNodeColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeechNodeColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpeechNodeColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowHasGenericDataIcon_MetaData[];
#endif
		static void NewProp_bShowHasGenericDataIcon_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowHasGenericDataIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowHasVoiceIcon_MetaData[];
#endif
		static void NewProp_bShowHasVoiceIcon_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowHasVoiceIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowHasEnterEventsIcon_MetaData[];
#endif
		static void NewProp_bShowHasEnterEventsIcon_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowHasEnterEventsIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowHasEnterConditionsIcon_MetaData[];
#endif
		static void NewProp_bShowHasEnterConditionsIcon_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowHasEnterConditionsIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitleHorizontalAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TitleHorizontalAlignment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DescriptionTextMargin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DescriptionTextMargin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DescriptionWrapTextAt_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DescriptionWrapTextAt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowExternalURLsToolbar_MetaData[];
#endif
		static void NewProp_bShowExternalURLsToolbar_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowExternalURLsToolbar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHideEmptyDialogueBrowserCategories_MetaData[];
#endif
		static void NewProp_bHideEmptyDialogueBrowserCategories_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideEmptyDialogueBrowserCategories;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpenMessageLogLevelsHigherThan_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OpenMessageLogLevelsHigherThan;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OpenMessageLogLevelsHigherThan_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RedirectMessageLogLevelsHigherThan_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RedirectMessageLogLevelsHigherThan;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RedirectMessageLogLevelsHigherThan_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableOutputLog_MetaData[];
#endif
		static void NewProp_bEnableOutputLog_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableOutputLog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMessageLogOpen_MetaData[];
#endif
		static void NewProp_bMessageLogOpen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMessageLogOpen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMessageLogMirrorToOutputLog_MetaData[];
#endif
		static void NewProp_bMessageLogMirrorToOutputLog_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMessageLogMirrorToOutputLog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableMessageLog_MetaData[];
#endif
		static void NewProp_bEnableMessageLog_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableMessageLog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalizationRemapSourceStringsToTexts_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_LocalizationRemapSourceStringsToTexts;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LocalizationRemapSourceStringsToTexts_Key_KeyProp;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_LocalizationRemapSourceStringsToTexts_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalizationIgnoredStrings_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_LocalizationIgnoredStrings;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LocalizationIgnoredStrings_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogueTextPrefixNamespaceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DialogueTextPrefixNamespaceName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogueTextGlobalNamespaceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DialogueTextGlobalNamespaceName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogueTextNamespaceLocalization_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DialogueTextNamespaceLocalization;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DialogueTextNamespaceLocalization_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultTextEdgeToNormalNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DefaultTextEdgeToNormalNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultTextEdgeToEndNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DefaultTextEdgeToEndNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSetDefaultEdgeTextOnFirstChildOnly_MetaData[];
#endif
		static void NewProp_bSetDefaultEdgeTextOnFirstChildOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSetDefaultEdgeTextOnFirstChildOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSetDefaultEdgeTexts_MetaData[];
#endif
		static void NewProp_bSetDefaultEdgeTexts_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSetDefaultEdgeTexts;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalTextFormatFileExtensionsToLookFor_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_AdditionalTextFormatFileExtensionsToLookFor;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AdditionalTextFormatFileExtensionsToLookFor_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBatchOnlyInGameDialogues_MetaData[];
#endif
		static void NewProp_bBatchOnlyInGameDialogues_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBatchOnlyInGameDialogues;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClassPickerDisplayMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ClassPickerDisplayMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ClassPickerDisplayMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlacklistedReflectionClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BlacklistedReflectionClasses;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BlacklistedReflectionClasses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowAdvancedChildren_MetaData[];
#endif
		static void NewProp_bShowAdvancedChildren_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowAdvancedChildren;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowGenericData_MetaData[];
#endif
		static void NewProp_bShowGenericData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowGenericData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogueDisplayedVoiceFields_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DialogueDisplayedVoiceFields;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DialogueDisplayedVoiceFields_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogueSpeakerStateVisibility_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DialogueSpeakerStateVisibility;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DialogueSpeakerStateVisibility_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowNodeData_MetaData[];
#endif
		static void NewProp_bShowNodeData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowNodeData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoSetDefaultParticipantClasses_MetaData[];
#endif
		static void NewProp_bAutoSetDefaultParticipantClasses_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoSetDefaultParticipantClasses;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogueTextInputKeyForNewLine_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DialogueTextInputKeyForNewLine;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DialogueTextInputKeyForNewLine_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogueTextFormat_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DialogueTextFormat;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DialogueTextFormat_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRegisterDialogueConsoleCommandsAutomatically_MetaData[];
#endif
		static void NewProp_bRegisterDialogueConsoleCommandsAutomatically_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRegisterDialogueConsoleCommandsAutomatically;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bClearDialogueHistoryAutomatically_MetaData[];
#endif
		static void NewProp_bClearDialogueHistoryAutomatically_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClearDialogueHistoryAutomatically;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDlgSystemSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgSystemSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// UDeveloperSettings classes are auto discovered https://wiki.unrealengine.com/CustomSettings\n" },
		{ "DisplayName", "Dialogue System Settings" },
		{ "IncludePath", "DlgSystemSettings.h" },
		{ "ModuleRelativePath", "Public/DlgSystemSettings.h" },
		{ "ToolTip", "UDeveloperSettings classes are auto discovered https:wiki.unrealengine.com/CustomSettings" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_OffsetBetweenRowsY_MetaData[] = {
		{ "Category", "Position" },
		{ "Comment", "// The offset on the Y axis (up/down) to use when automatically positioning nodes.\n" },
		{ "ModuleRelativePath", "Public/DlgSystemSettings.h" },
		{ "ToolTip", "The offset on the Y axis (up/down) to use when automatically positioning nodes." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_OffsetBetweenRowsY = { "OffsetBetweenRowsY", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDlgSystemSettings, OffsetBetweenRowsY), METADATA_PARAMS(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_OffsetBetweenRowsY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_OffsetBetweenRowsY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_OffsetBetweenColumnsX_MetaData[] = {
		{ "Category", "Position" },
		{ "Comment", "// The offset on the X axis (left/right) to use when automatically positioning nodes.\n" },
		{ "ModuleRelativePath", "Public/DlgSystemSettings.h" },
		{ "ToolTip", "The offset on the X axis (left/right) to use when automatically positioning nodes." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_OffsetBetweenColumnsX = { "OffsetBetweenColumnsX", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDlgSystemSettings, OffsetBetweenColumnsX), METADATA_PARAMS(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_OffsetBetweenColumnsX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_OffsetBetweenColumnsX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_WireSecondaryEdgeColor_MetaData[] = {
		{ "Category", "Graph Edge Color" },
		{ "Comment", "// The Color of the wire when the edge is secondary.\n" },
		{ "ModuleRelativePath", "Public/DlgSystemSettings.h" },
		{ "ToolTip", "The Color of the wire when the edge is secondary." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_WireSecondaryEdgeColor = { "WireSecondaryEdgeColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDlgSystemSettings, WireSecondaryEdgeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_WireSecondaryEdgeColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_WireSecondaryEdgeColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_WirePrimaryEdgeColor_MetaData[] = {
		{ "Category", "Graph Edge Color" },
		{ "Comment", "// The Color of the wire when the edge is primary.\n" },
		{ "ModuleRelativePath", "Public/DlgSystemSettings.h" },
		{ "ToolTip", "The Color of the wire when the edge is primary." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_WirePrimaryEdgeColor = { "WirePrimaryEdgeColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDlgSystemSettings, WirePrimaryEdgeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_WirePrimaryEdgeColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_WirePrimaryEdgeColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bDrawSecondaryEdges_MetaData[] = {
		{ "Category", "Graph Edge" },
		{ "Comment", "// Should we draw the secondary edges?\n" },
		{ "ModuleRelativePath", "Public/DlgSystemSettings.h" },
		{ "ToolTip", "Should we draw the secondary edges?" },
	};
#endif
	void Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bDrawSecondaryEdges_SetBit(void* Obj)
	{
		((UDlgSystemSettings*)Obj)->bDrawSecondaryEdges = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bDrawSecondaryEdges = { "bDrawSecondaryEdges", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDlgSystemSettings), &Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bDrawSecondaryEdges_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bDrawSecondaryEdges_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bDrawSecondaryEdges_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bDrawPrimaryEdges_MetaData[] = {
		{ "Category", "Graph Edge" },
		{ "Comment", "// Should we draw the primary edges?\n" },
		{ "ModuleRelativePath", "Public/DlgSystemSettings.h" },
		{ "ToolTip", "Should we draw the primary edges?" },
	};
#endif
	void Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bDrawPrimaryEdges_SetBit(void* Obj)
	{
		((UDlgSystemSettings*)Obj)->bDrawPrimaryEdges = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bDrawPrimaryEdges = { "bDrawPrimaryEdges", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDlgSystemSettings), &Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bDrawPrimaryEdges_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bDrawPrimaryEdges_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bDrawPrimaryEdges_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bShowPrimarySecondaryEdges_MetaData[] = {
		{ "Category", "Graph Edge" },
		{ "Comment", "// Is the the viewing of primary/secondary edges enabled?\n" },
		{ "ModuleRelativePath", "Public/DlgSystemSettings.h" },
		{ "ToolTip", "Is the the viewing of primary/secondary edges enabled?" },
	};
#endif
	void Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bShowPrimarySecondaryEdges_SetBit(void* Obj)
	{
		((UDlgSystemSettings*)Obj)->bShowPrimarySecondaryEdges = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bShowPrimarySecondaryEdges = { "bShowPrimarySecondaryEdges", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDlgSystemSettings), &Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bShowPrimarySecondaryEdges_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bShowPrimarySecondaryEdges_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bShowPrimarySecondaryEdges_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_WireHoveredColor_MetaData[] = {
		{ "Category", "Graph Edge Color" },
		{ "Comment", "// The color of the wire when hovered over\n" },
		{ "ModuleRelativePath", "Public/DlgSystemSettings.h" },
		{ "ToolTip", "The color of the wire when hovered over" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_WireHoveredColor = { "WireHoveredColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDlgSystemSettings, WireHoveredColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_WireHoveredColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_WireHoveredColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_WireWithConditionsColor_MetaData[] = {
		{ "Category", "Graph Edge Color" },
		{ "Comment", "// The color of the wire if the edge has any conditions.\n" },
		{ "ModuleRelativePath", "Public/DlgSystemSettings.h" },
		{ "ToolTip", "The color of the wire if the edge has any conditions." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_WireWithConditionsColor = { "WireWithConditionsColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDlgSystemSettings, WireWithConditionsColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_WireWithConditionsColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_WireWithConditionsColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bShowDifferentColorForConditionWires_MetaData[] = {
		{ "Category", "Graph Edge Color" },
		{ "Comment", "// Does the wire use the condition color (if it has conditions) in the normal mode?\n" },
		{ "ModuleRelativePath", "Public/DlgSystemSettings.h" },
		{ "ToolTip", "Does the wire use the condition color (if it has conditions) in the normal mode?" },
	};
#endif
	void Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bShowDifferentColorForConditionWires_SetBit(void* Obj)
	{
		((UDlgSystemSettings*)Obj)->bShowDifferentColorForConditionWires = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bShowDifferentColorForConditionWires = { "bShowDifferentColorForConditionWires", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDlgSystemSettings), &Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bShowDifferentColorForConditionWires_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bShowDifferentColorForConditionWires_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bShowDifferentColorForConditionWires_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_WireBaseColor_MetaData[] = {
		{ "Category", "Graph Edge Color" },
		{ "Comment", "// The base color of the wire.\n" },
		{ "ModuleRelativePath", "Public/DlgSystemSettings.h" },
		{ "ToolTip", "The base color of the wire." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_WireBaseColor = { "WireBaseColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDlgSystemSettings, WireBaseColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_WireBaseColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_WireBaseColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bShowEdgeHasConditionsIcon_MetaData[] = {
		{ "Category", "Graph Edge" },
		{ "Comment", "// To show or not the condition icon in the case the edge has any conditions defined on it.\n" },
		{ "ModuleRelativePath", "Public/DlgSystemSettings.h" },
		{ "ToolTip", "To show or not the condition icon in the case the edge has any conditions defined on it." },
	};
#endif
	void Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bShowEdgeHasConditionsIcon_SetBit(void* Obj)
	{
		((UDlgSystemSettings*)Obj)->bShowEdgeHasConditionsIcon = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bShowEdgeHasConditionsIcon = { "bShowEdgeHasConditionsIcon", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDlgSystemSettings), &Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bShowEdgeHasConditionsIcon_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bShowEdgeHasConditionsIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bShowEdgeHasConditionsIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bWireDrawBubbles_MetaData[] = {
		{ "Category", "Graph Edge" },
		{ "Comment", "// Flag indicating to draw the bubbles of the wire or not.\n" },
		{ "ModuleRelativePath", "Public/DlgSystemSettings.h" },
		{ "ToolTip", "Flag indicating to draw the bubbles of the wire or not." },
	};
#endif
	void Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bWireDrawBubbles_SetBit(void* Obj)
	{
		((UDlgSystemSettings*)Obj)->bWireDrawBubbles = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bWireDrawBubbles = { "bWireDrawBubbles", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDlgSystemSettings), &Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bWireDrawBubbles_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bWireDrawBubbles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bWireDrawBubbles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_WireThickness_MetaData[] = {
		{ "Category", "Graph Edge" },
		{ "Comment", "// The wire thickness of the connections between nodes.\n" },
		{ "ModuleRelativePath", "Public/DlgSystemSettings.h" },
		{ "ToolTip", "The wire thickness of the connections between nodes." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_WireThickness = { "WireThickness", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDlgSystemSettings, WireThickness), METADATA_PARAMS(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_WireThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_WireThickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_DescriptionSpeakerHorizontalAlignment_MetaData[] = {
		{ "Category", "Graph Node Speech Sequence" },
		{ "Comment", "// The horizontal alignment of the Speaker in case the node is a speech sequence.\n" },
		{ "ModuleRelativePath", "Public/DlgSystemSettings.h" },
		{ "ToolTip", "The horizontal alignment of the Speaker in case the node is a speech sequence." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_DescriptionSpeakerHorizontalAlignment = { "DescriptionSpeakerHorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDlgSystemSettings, DescriptionSpeakerHorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_DescriptionSpeakerHorizontalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_DescriptionSpeakerHorizontalAlignment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_DescriptionSpeakerMargin_MetaData[] = {
		{ "Category", "Graph Node Speech Sequence" },
		{ "Comment", "// The amount of blank space left around the edges of the speaker text area in case of speech sequence nodes.\n" },
		{ "ModuleRelativePath", "Public/DlgSystemSettings.h" },
		{ "ToolTip", "The amount of blank space left around the edges of the speaker text area in case of speech sequence nodes." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_DescriptionSpeakerMargin = { "DescriptionSpeakerMargin", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDlgSystemSettings, DescriptionSpeakerMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_DescriptionSpeakerMargin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_DescriptionSpeakerMargin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_BorderHoveredBackgroundColor_MetaData[] = {
		{ "Category", "Graph Node Color" },
		{ "Comment", "// The background color of the node borders when hovered over\n" },
		{ "ModuleRelativePath", "Public/DlgSystemSettings.h" },
		{ "ToolTip", "The background color of the node borders when hovered over" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_BorderHoveredBackgroundColor = { "BorderHoveredBackgroundColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDlgSystemSettings, BorderHoveredBackgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_BorderHoveredBackgroundColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_BorderHoveredBackgroundColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_BorderBackgroundColor_MetaData[] = {
		{ "Category", "Graph Node Color" },
		{ "Comment", "// The background color of the node borders.\n" },
		{ "ModuleRelativePath", "Public/DlgSystemSettings.h" },
		{ "ToolTip", "The background color of the node borders." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_BorderBackgroundColor = { "BorderBackgroundColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDlgSystemSettings, BorderBackgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_BorderBackgroundColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_BorderBackgroundColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_SpeechSequenceNodeColor_MetaData[] = {
		{ "Category", "Graph Node Color" },
		{ "Comment", "// The background color of the selector random node.\n" },
		{ "ModuleRelativePath", "Public/DlgSystemSettings.h" },
		{ "ToolTip", "The background color of the selector random node." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_SpeechSequenceNodeColor = { "SpeechSequenceNodeColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDlgSystemSettings, SpeechSequenceNodeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_SpeechSequenceNodeColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_SpeechSequenceNodeColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_SelectorRandomNodeColor_MetaData[] = {
		{ "Category", "Graph Node Color" },
		{ "Comment", "// The background color of the selector random node.\n" },
		{ "ModuleRelativePath", "Public/DlgSystemSettings.h" },
		{ "ToolTip", "The background color of the selector random node." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_SelectorRandomNodeColor = { "SelectorRandomNodeColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDlgSystemSettings, SelectorRandomNodeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_SelectorRandomNodeColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_SelectorRandomNodeColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_SelectorFirstNodeColor_MetaData[] = {
		{ "Category", "Graph Node Color" },
		{ "Comment", "// The background color of the selector first node.\n" },
		{ "ModuleRelativePath", "Public/DlgSystemSettings.h" },
		{ "ToolTip", "The background color of the selector first node." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_SelectorFirstNodeColor = { "SelectorFirstNodeColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDlgSystemSettings, SelectorFirstNodeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_SelectorFirstNodeColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_SelectorFirstNodeColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_VirtualParentNodeColor_MetaData[] = {
		{ "Category", "Graph Node Color" },
		{ "Comment", "// The background color of the virtual parent node.\n" },
		{ "ModuleRelativePath", "Public/DlgSystemSettings.h" },
		{ "ToolTip", "The background color of the virtual parent node." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_VirtualParentNodeColor = { "VirtualParentNodeColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDlgSystemSettings, VirtualParentNodeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_VirtualParentNodeColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_VirtualParentNodeColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_EndNodeColor_MetaData[] = {
		{ "Category", "Graph Node Color" },
		{ "Comment", "// The background color of the end node.\n" },
		{ "ModuleRelativePath", "Public/DlgSystemSettings.h" },
		{ "ToolTip", "The background color of the end node." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_EndNodeColor = { "EndNodeColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDlgSystemSettings, EndNodeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_EndNodeColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_EndNodeColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_RootNodeColor_MetaData[] = {
		{ "Category", "Graph Node Color" },
		{ "Comment", "// The background color of the root node.\n" },
		{ "ModuleRelativePath", "Public/DlgSystemSettings.h" },
		{ "ToolTip", "The background color of the root node." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_RootNodeColor = { "RootNodeColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDlgSystemSettings, RootNodeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_RootNodeColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_RootNodeColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_SpeechNodeColor_MetaData[] = {
		{ "Category", "Graph Node Color" },
		{ "Comment", "// The background color of the normal speech node. */\n" },
		{ "ModuleRelativePath", "Public/DlgSystemSettings.h" },
		{ "ToolTip", "The background color of the normal speech node. */" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_SpeechNodeColor = { "SpeechNodeColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDlgSystemSettings, SpeechNodeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_SpeechNodeColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_SpeechNodeColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bShowHasGenericDataIcon_MetaData[] = {
		{ "Category", "Graph Node" },
		{ "Comment", "// To show or not the voice icon in the case the node has any voice members set\n" },
		{ "ModuleRelativePath", "Public/DlgSystemSettings.h" },
		{ "ToolTip", "To show or not the voice icon in the case the node has any voice members set" },
	};
#endif
	void Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bShowHasGenericDataIcon_SetBit(void* Obj)
	{
		((UDlgSystemSettings*)Obj)->bShowHasGenericDataIcon = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bShowHasGenericDataIcon = { "bShowHasGenericDataIcon", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDlgSystemSettings), &Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bShowHasGenericDataIcon_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bShowHasGenericDataIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bShowHasGenericDataIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bShowHasVoiceIcon_MetaData[] = {
		{ "Category", "Graph Node" },
		{ "Comment", "// To show or not the voice icon in the case the node has any voice members set\n" },
		{ "ModuleRelativePath", "Public/DlgSystemSettings.h" },
		{ "ToolTip", "To show or not the voice icon in the case the node has any voice members set" },
	};
#endif
	void Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bShowHasVoiceIcon_SetBit(void* Obj)
	{
		((UDlgSystemSettings*)Obj)->bShowHasVoiceIcon = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bShowHasVoiceIcon = { "bShowHasVoiceIcon", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDlgSystemSettings), &Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bShowHasVoiceIcon_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bShowHasVoiceIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bShowHasVoiceIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bShowHasEnterEventsIcon_MetaData[] = {
		{ "Category", "Graph Node" },
		{ "Comment", "// To show or not the event icon in the case the node has any enter events defined on it.\n" },
		{ "ModuleRelativePath", "Public/DlgSystemSettings.h" },
		{ "ToolTip", "To show or not the event icon in the case the node has any enter events defined on it." },
	};
#endif
	void Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bShowHasEnterEventsIcon_SetBit(void* Obj)
	{
		((UDlgSystemSettings*)Obj)->bShowHasEnterEventsIcon = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bShowHasEnterEventsIcon = { "bShowHasEnterEventsIcon", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDlgSystemSettings), &Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bShowHasEnterEventsIcon_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bShowHasEnterEventsIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bShowHasEnterEventsIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bShowHasEnterConditionsIcon_MetaData[] = {
		{ "Category", "Graph Node" },
		{ "Comment", "// To show or not the condition icon in the case the node has any enter conditions defined on it.\n" },
		{ "ModuleRelativePath", "Public/DlgSystemSettings.h" },
		{ "ToolTip", "To show or not the condition icon in the case the node has any enter conditions defined on it." },
	};
#endif
	void Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bShowHasEnterConditionsIcon_SetBit(void* Obj)
	{
		((UDlgSystemSettings*)Obj)->bShowHasEnterConditionsIcon = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bShowHasEnterConditionsIcon = { "bShowHasEnterConditionsIcon", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDlgSystemSettings), &Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bShowHasEnterConditionsIcon_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bShowHasEnterConditionsIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bShowHasEnterConditionsIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_TitleHorizontalAlignment_MetaData[] = {
		{ "Category", "Graph Node" },
		{ "Comment", "// The horizontal alignment of the graph node title and icon\n" },
		{ "ModuleRelativePath", "Public/DlgSystemSettings.h" },
		{ "ToolTip", "The horizontal alignment of the graph node title and icon" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_TitleHorizontalAlignment = { "TitleHorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDlgSystemSettings, TitleHorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_TitleHorizontalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_TitleHorizontalAlignment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_DescriptionTextMargin_MetaData[] = {
		{ "Category", "Graph Node" },
		{ "Comment", "// The amount of blank space left around the edges of the description text area.\n" },
		{ "ModuleRelativePath", "Public/DlgSystemSettings.h" },
		{ "ToolTip", "The amount of blank space left around the edges of the description text area." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_DescriptionTextMargin = { "DescriptionTextMargin", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDlgSystemSettings, DescriptionTextMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_DescriptionTextMargin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_DescriptionTextMargin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_DescriptionWrapTextAt_MetaData[] = {
		{ "Category", "Graph Node" },
		{ "Comment", "// Whether the description text wraps onto a new line when it's length exceeds this width;\n// Tf this value is zero or negative, no wrapping occurs.\n" },
		{ "ModuleRelativePath", "Public/DlgSystemSettings.h" },
		{ "ToolTip", "Whether the description text wraps onto a new line when it's length exceeds this width;\nTf this value is zero or negative, no wrapping occurs." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_DescriptionWrapTextAt = { "DescriptionWrapTextAt", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDlgSystemSettings, DescriptionWrapTextAt), METADATA_PARAMS(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_DescriptionWrapTextAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_DescriptionWrapTextAt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bShowExternalURLsToolbar_MetaData[] = {
		{ "Category", "External URLs" },
		{ "Comment", "// Should the external URLs toolbar be displayed\n" },
		{ "ModuleRelativePath", "Public/DlgSystemSettings.h" },
		{ "ToolTip", "Should the external URLs toolbar be displayed" },
	};
#endif
	void Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bShowExternalURLsToolbar_SetBit(void* Obj)
	{
		((UDlgSystemSettings*)Obj)->bShowExternalURLsToolbar = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bShowExternalURLsToolbar = { "bShowExternalURLsToolbar", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDlgSystemSettings), &Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bShowExternalURLsToolbar_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bShowExternalURLsToolbar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bShowExternalURLsToolbar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bHideEmptyDialogueBrowserCategories_MetaData[] = {
		{ "Category", "Browser" },
		{ "Comment", "// Should we hide the categories in the Dialogue browser that do not have any children?\n" },
		{ "ModuleRelativePath", "Public/DlgSystemSettings.h" },
		{ "ToolTip", "Should we hide the categories in the Dialogue browser that do not have any children?" },
	};
#endif
	void Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bHideEmptyDialogueBrowserCategories_SetBit(void* Obj)
	{
		((UDlgSystemSettings*)Obj)->bHideEmptyDialogueBrowserCategories = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bHideEmptyDialogueBrowserCategories = { "bHideEmptyDialogueBrowserCategories", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDlgSystemSettings), &Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bHideEmptyDialogueBrowserCategories_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bHideEmptyDialogueBrowserCategories_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bHideEmptyDialogueBrowserCategories_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_OpenMessageLogLevelsHigherThan_MetaData[] = {
		{ "Category", "Logger" },
		{ "Comment", "// All the log levels messages that will open the message log window if bMessageLogOpen is true\n// NOTE: A value of  ENYLoggerLogLevel::NoLogging means all log levels will be opened if bMessageLogOpen is true\n" },
		{ "ModuleRelativePath", "Public/DlgSystemSettings.h" },
		{ "ToolTip", "All the log levels messages that will open the message log window if bMessageLogOpen is true\nNOTE: A value of  ENYLoggerLogLevel::NoLogging means all log levels will be opened if bMessageLogOpen is true" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_OpenMessageLogLevelsHigherThan = { "OpenMessageLogLevelsHigherThan", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDlgSystemSettings, OpenMessageLogLevelsHigherThan), Z_Construct_UEnum_DlgSystem_ENYLoggerLogLevel, METADATA_PARAMS(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_OpenMessageLogLevelsHigherThan_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_OpenMessageLogLevelsHigherThan_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_OpenMessageLogLevelsHigherThan_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_RedirectMessageLogLevelsHigherThan_MetaData[] = {
		{ "Category", "Logger" },
		{ "Comment", "// By default the message log does not support debug output, latest is info.\n// For the sake of sanity we redirect all levels higher than RedirectMessageLogLevelsHigherThan to the output log\n// even if the output log is disabled.\n// So that not to output for example debug output to the message log only to the output log.\n// NOTE: A value of ENYLoggerLogLevel::NoLogging means no log level will get redirected\n" },
		{ "ModuleRelativePath", "Public/DlgSystemSettings.h" },
		{ "ToolTip", "By default the message log does not support debug output, latest is info.\nFor the sake of sanity we redirect all levels higher than RedirectMessageLogLevelsHigherThan to the output log\neven if the output log is disabled.\nSo that not to output for example debug output to the message log only to the output log.\nNOTE: A value of ENYLoggerLogLevel::NoLogging means no log level will get redirected" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_RedirectMessageLogLevelsHigherThan = { "RedirectMessageLogLevelsHigherThan", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDlgSystemSettings, RedirectMessageLogLevelsHigherThan), Z_Construct_UEnum_DlgSystem_ENYLoggerLogLevel, METADATA_PARAMS(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_RedirectMessageLogLevelsHigherThan_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_RedirectMessageLogLevelsHigherThan_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_RedirectMessageLogLevelsHigherThan_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bEnableOutputLog_MetaData[] = {
		{ "Comment", "// NOTE: Not editable is intended so that not to allow the user to disable logging completely\n" },
		{ "ModuleRelativePath", "Public/DlgSystemSettings.h" },
		{ "ToolTip", "NOTE: Not editable is intended so that not to allow the user to disable logging completely" },
	};
#endif
	void Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bEnableOutputLog_SetBit(void* Obj)
	{
		((UDlgSystemSettings*)Obj)->bEnableOutputLog = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bEnableOutputLog = { "bEnableOutputLog", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDlgSystemSettings), &Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bEnableOutputLog_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bEnableOutputLog_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bEnableOutputLog_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bMessageLogOpen_MetaData[] = {
		{ "Category", "Logger" },
		{ "Comment", "// Opens the message log in front of the user if messages are displayed\n// See OpenMessageLogLevelsHigherThan for the filter\n" },
		{ "ModuleRelativePath", "Public/DlgSystemSettings.h" },
		{ "ToolTip", "Opens the message log in front of the user if messages are displayed\nSee OpenMessageLogLevelsHigherThan for the filter" },
	};
#endif
	void Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bMessageLogOpen_SetBit(void* Obj)
	{
		((UDlgSystemSettings*)Obj)->bMessageLogOpen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bMessageLogOpen = { "bMessageLogOpen", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDlgSystemSettings), &Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bMessageLogOpen_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bMessageLogOpen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bMessageLogOpen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bMessageLogMirrorToOutputLog_MetaData[] = {
		{ "Category", "Logger" },
		{ "Comment", "// Should the message log mirror the message with the output log, used even if the output log is disabled.\n" },
		{ "ModuleRelativePath", "Public/DlgSystemSettings.h" },
		{ "ToolTip", "Should the message log mirror the message with the output log, used even if the output log is disabled." },
	};
#endif
	void Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bMessageLogMirrorToOutputLog_SetBit(void* Obj)
	{
		((UDlgSystemSettings*)Obj)->bMessageLogMirrorToOutputLog = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bMessageLogMirrorToOutputLog = { "bMessageLogMirrorToOutputLog", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDlgSystemSettings), &Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bMessageLogMirrorToOutputLog_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bMessageLogMirrorToOutputLog_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bMessageLogMirrorToOutputLog_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bEnableMessageLog_MetaData[] = {
		{ "Category", "Logger" },
		{ "Comment", "// Enables the message log to output info/errors/warnings to it\n" },
		{ "ModuleRelativePath", "Public/DlgSystemSettings.h" },
		{ "ToolTip", "Enables the message log to output info/errors/warnings to it" },
	};
#endif
	void Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bEnableMessageLog_SetBit(void* Obj)
	{
		((UDlgSystemSettings*)Obj)->bEnableMessageLog = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bEnableMessageLog = { "bEnableMessageLog", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDlgSystemSettings), &Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bEnableMessageLog_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bEnableMessageLog_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bEnableMessageLog_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_LocalizationRemapSourceStringsToTexts_MetaData[] = {
		{ "Category", "Localization" },
		{ "Comment", "// Map used to remap some SourceStrings texts found in the dialogues with a new Text value/namespace/key\n// Key: SourceString we are searching for\n// Value: Text replacement. NOTE: if the text value is usually not empty\n" },
		{ "DisplayName", "Remap Source Strings to Texts" },
		{ "ModuleRelativePath", "Public/DlgSystemSettings.h" },
		{ "ToolTip", "Map used to remap some SourceStrings texts found in the dialogues with a new Text value/namespace/key\nKey: SourceString we are searching for\nValue: Text replacement. NOTE: if the text value is usually not empty" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_LocalizationRemapSourceStringsToTexts = { "LocalizationRemapSourceStringsToTexts", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDlgSystemSettings, LocalizationRemapSourceStringsToTexts), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_LocalizationRemapSourceStringsToTexts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_LocalizationRemapSourceStringsToTexts_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_LocalizationRemapSourceStringsToTexts_Key_KeyProp = { "LocalizationRemapSourceStringsToTexts_Key", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_LocalizationRemapSourceStringsToTexts_ValueProp = { "LocalizationRemapSourceStringsToTexts", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_LocalizationIgnoredStrings_MetaData[] = {
		{ "Category", "Localization" },
		{ "Comment", "// Additional Array of source strings that this system won't overwrite the namespace or key for\n" },
		{ "DisplayName", "Ignored Strings" },
		{ "ModuleRelativePath", "Public/DlgSystemSettings.h" },
		{ "ToolTip", "Additional Array of source strings that this system won't overwrite the namespace or key for" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_LocalizationIgnoredStrings = { "LocalizationIgnoredStrings", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDlgSystemSettings, LocalizationIgnoredStrings), METADATA_PARAMS(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_LocalizationIgnoredStrings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_LocalizationIgnoredStrings_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_LocalizationIgnoredStrings_ElementProp = { "LocalizationIgnoredStrings", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_DialogueTextPrefixNamespaceName_MetaData[] = {
		{ "Category", "Localization" },
		{ "Comment", "// Depending on TextLocalizationMode it can be used as the prefix for all dialogues namespace name\n// Only used for WithPrefixPerDialogue\n" },
		{ "DisplayName", "Text Namespace Name Prefix" },
		{ "ModuleRelativePath", "Public/DlgSystemSettings.h" },
		{ "ToolTip", "Depending on TextLocalizationMode it can be used as the prefix for all dialogues namespace name\nOnly used for WithPrefixPerDialogue" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_DialogueTextPrefixNamespaceName = { "DialogueTextPrefixNamespaceName", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDlgSystemSettings, DialogueTextPrefixNamespaceName), METADATA_PARAMS(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_DialogueTextPrefixNamespaceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_DialogueTextPrefixNamespaceName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_DialogueTextGlobalNamespaceName_MetaData[] = {
		{ "Category", "Localization" },
		{ "Comment", "// Depending on TextLocalizationMode it can be used as the namespace for all dialogue\n// Only used for GlobalNamespace\n" },
		{ "DisplayName", "Text Global Namespace Name" },
		{ "ModuleRelativePath", "Public/DlgSystemSettings.h" },
		{ "ToolTip", "Depending on TextLocalizationMode it can be used as the namespace for all dialogue\nOnly used for GlobalNamespace" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_DialogueTextGlobalNamespaceName = { "DialogueTextGlobalNamespaceName", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDlgSystemSettings, DialogueTextGlobalNamespaceName), METADATA_PARAMS(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_DialogueTextGlobalNamespaceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_DialogueTextGlobalNamespaceName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_DialogueTextNamespaceLocalization_MetaData[] = {
		{ "Category", "Localization" },
		{ "Comment", "// Defines what the system should do with Text Namespaces for localization\n" },
		{ "DisplayName", "Text Namespace" },
		{ "ModuleRelativePath", "Public/DlgSystemSettings.h" },
		{ "ToolTip", "Defines what the system should do with Text Namespaces for localization" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_DialogueTextNamespaceLocalization = { "DialogueTextNamespaceLocalization", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDlgSystemSettings, DialogueTextNamespaceLocalization), Z_Construct_UEnum_DlgSystem_EDlgTextNamespaceLocalization, METADATA_PARAMS(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_DialogueTextNamespaceLocalization_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_DialogueTextNamespaceLocalization_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_DialogueTextNamespaceLocalization_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_DefaultTextEdgeToNormalNode_MetaData[] = {
		{ "Category", "Default Texts" },
		{ "Comment", "// Default text that appears on empty edges texts that lead to a normal node (not an end node).\n" },
		{ "DisplayName", "Edge Text To Normal Node" },
		{ "ModuleRelativePath", "Public/DlgSystemSettings.h" },
		{ "ToolTip", "Default text that appears on empty edges texts that lead to a normal node (not an end node)." },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_DefaultTextEdgeToNormalNode = { "DefaultTextEdgeToNormalNode", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDlgSystemSettings, DefaultTextEdgeToNormalNode), METADATA_PARAMS(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_DefaultTextEdgeToNormalNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_DefaultTextEdgeToNormalNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_DefaultTextEdgeToEndNode_MetaData[] = {
		{ "Category", "Default Texts" },
		{ "Comment", "// Default text that appears on empty edges that lead to an end node\n" },
		{ "DisplayName", "Edge Text To End Node" },
		{ "ModuleRelativePath", "Public/DlgSystemSettings.h" },
		{ "ToolTip", "Default text that appears on empty edges that lead to an end node" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_DefaultTextEdgeToEndNode = { "DefaultTextEdgeToEndNode", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDlgSystemSettings, DefaultTextEdgeToEndNode), METADATA_PARAMS(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_DefaultTextEdgeToEndNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_DefaultTextEdgeToEndNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bSetDefaultEdgeTextOnFirstChildOnly_MetaData[] = {
		{ "Category", "Default Texts" },
		{ "Comment", "// If true the default text will be only applied to the first child instead of all children from a node\n" },
		{ "DisplayName", "Set Default Edge Texts on First Child Only" },
		{ "ModuleRelativePath", "Public/DlgSystemSettings.h" },
		{ "ToolTip", "If true the default text will be only applied to the first child instead of all children from a node" },
	};
#endif
	void Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bSetDefaultEdgeTextOnFirstChildOnly_SetBit(void* Obj)
	{
		((UDlgSystemSettings*)Obj)->bSetDefaultEdgeTextOnFirstChildOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bSetDefaultEdgeTextOnFirstChildOnly = { "bSetDefaultEdgeTextOnFirstChildOnly", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDlgSystemSettings), &Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bSetDefaultEdgeTextOnFirstChildOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bSetDefaultEdgeTextOnFirstChildOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bSetDefaultEdgeTextOnFirstChildOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bSetDefaultEdgeTexts_MetaData[] = {
		{ "Category", "Default Texts" },
		{ "Comment", "// Should the dialogue system set the default texts on empty edges on save dialogue and when creating them?\n" },
		{ "DisplayName", "Set Default Edge Texts" },
		{ "ModuleRelativePath", "Public/DlgSystemSettings.h" },
		{ "ToolTip", "Should the dialogue system set the default texts on empty edges on save dialogue and when creating them?" },
	};
#endif
	void Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bSetDefaultEdgeTexts_SetBit(void* Obj)
	{
		((UDlgSystemSettings*)Obj)->bSetDefaultEdgeTexts = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bSetDefaultEdgeTexts = { "bSetDefaultEdgeTexts", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDlgSystemSettings), &Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bSetDefaultEdgeTexts_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bSetDefaultEdgeTexts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bSetDefaultEdgeTexts_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_AdditionalTextFormatFileExtensionsToLookFor_MetaData[] = {
		{ "Category", "Batch" },
		{ "Comment", "// Additional file extension to look for when doing operations with dialogue text formats, like: deleting/renaming.\n// NOTE: file extensions must start with a full stop\n" },
		{ "ModuleRelativePath", "Public/DlgSystemSettings.h" },
		{ "ToolTip", "Additional file extension to look for when doing operations with dialogue text formats, like: deleting/renaming.\nNOTE: file extensions must start with a full stop" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_AdditionalTextFormatFileExtensionsToLookFor = { "AdditionalTextFormatFileExtensionsToLookFor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDlgSystemSettings, AdditionalTextFormatFileExtensionsToLookFor), METADATA_PARAMS(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_AdditionalTextFormatFileExtensionsToLookFor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_AdditionalTextFormatFileExtensionsToLookFor_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_AdditionalTextFormatFileExtensionsToLookFor_ElementProp = { "AdditionalTextFormatFileExtensionsToLookFor", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bBatchOnlyInGameDialogues_MetaData[] = {
		{ "Category", "Batch" },
		{ "Comment", "// Should we only process batch dialogues that are only in the /Game folder.\n// This is used for saving all dialogues or deleting all text files.\n" },
		{ "ModuleRelativePath", "Public/DlgSystemSettings.h" },
		{ "ToolTip", "Should we only process batch dialogues that are only in the /Game folder.\nThis is used for saving all dialogues or deleting all text files." },
	};
#endif
	void Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bBatchOnlyInGameDialogues_SetBit(void* Obj)
	{
		((UDlgSystemSettings*)Obj)->bBatchOnlyInGameDialogues = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bBatchOnlyInGameDialogues = { "bBatchOnlyInGameDialogues", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDlgSystemSettings), &Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bBatchOnlyInGameDialogues_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bBatchOnlyInGameDialogues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bBatchOnlyInGameDialogues_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_ClassPickerDisplayMode_MetaData[] = {
		{ "Category", "Blueprint" },
		{ "Comment", "// How the Blueprint class pricker looks like\n" },
		{ "ModuleRelativePath", "Public/DlgSystemSettings.h" },
		{ "ToolTip", "How the Blueprint class pricker looks like" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_ClassPickerDisplayMode = { "ClassPickerDisplayMode", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDlgSystemSettings, ClassPickerDisplayMode), Z_Construct_UEnum_DlgSystem_EDlgClassPickerDisplayMode, METADATA_PARAMS(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_ClassPickerDisplayMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_ClassPickerDisplayMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_ClassPickerDisplayMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_BlacklistedReflectionClasses_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Any properties that belong to these classes won't be shown in the suggestion list when you use the reflection system (class variables).\n" },
		{ "ModuleRelativePath", "Public/DlgSystemSettings.h" },
		{ "ToolTip", "Any properties that belong to these classes won't be shown in the suggestion list when you use the reflection system (class variables)." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_BlacklistedReflectionClasses = { "BlacklistedReflectionClasses", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDlgSystemSettings, BlacklistedReflectionClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_BlacklistedReflectionClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_BlacklistedReflectionClasses_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_BlacklistedReflectionClasses_Inner = { "BlacklistedReflectionClasses", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bShowAdvancedChildren_MetaData[] = {
		{ "Category", "Dialogue Node Data" },
		{ "ModuleRelativePath", "Public/DlgSystemSettings.h" },
	};
#endif
	void Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bShowAdvancedChildren_SetBit(void* Obj)
	{
		((UDlgSystemSettings*)Obj)->bShowAdvancedChildren = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bShowAdvancedChildren = { "bShowAdvancedChildren", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDlgSystemSettings), &Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bShowAdvancedChildren_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bShowAdvancedChildren_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bShowAdvancedChildren_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bShowGenericData_MetaData[] = {
		{ "Category", "Dialogue Node Data" },
		{ "Comment", "// Generic data is an UObject* which can be assigned to nodes and can be asked from the active one\n" },
		{ "ModuleRelativePath", "Public/DlgSystemSettings.h" },
		{ "ToolTip", "Generic data is an UObject* which can be assigned to nodes and can be asked from the active one" },
	};
#endif
	void Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bShowGenericData_SetBit(void* Obj)
	{
		((UDlgSystemSettings*)Obj)->bShowGenericData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bShowGenericData = { "bShowGenericData", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDlgSystemSettings), &Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bShowGenericData_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bShowGenericData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bShowGenericData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_DialogueDisplayedVoiceFields_MetaData[] = {
		{ "Category", "Dialogue Node Data" },
		{ "Comment", "// What Voice fields to show in the Dialogue Editor, if any.\n" },
		{ "DisplayName", "Displayed Voice Fields" },
		{ "ModuleRelativePath", "Public/DlgSystemSettings.h" },
		{ "ToolTip", "What Voice fields to show in the Dialogue Editor, if any." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_DialogueDisplayedVoiceFields = { "DialogueDisplayedVoiceFields", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDlgSystemSettings, DialogueDisplayedVoiceFields), Z_Construct_UEnum_DlgSystem_EDlgVoiceDisplayedFields, METADATA_PARAMS(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_DialogueDisplayedVoiceFields_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_DialogueDisplayedVoiceFields_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_DialogueDisplayedVoiceFields_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_DialogueSpeakerStateVisibility_MetaData[] = {
		{ "Category", "Dialogue Node Data" },
		{ "Comment", "// Where to display the SpeakerState FName property\n" },
		{ "DisplayName", "SpeakerState Visibility" },
		{ "ModuleRelativePath", "Public/DlgSystemSettings.h" },
		{ "ToolTip", "Where to display the SpeakerState FName property" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_DialogueSpeakerStateVisibility = { "DialogueSpeakerStateVisibility", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDlgSystemSettings, DialogueSpeakerStateVisibility), Z_Construct_UEnum_DlgSystem_EDlgSpeakerStateVisibility, METADATA_PARAMS(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_DialogueSpeakerStateVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_DialogueSpeakerStateVisibility_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_DialogueSpeakerStateVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bShowNodeData_MetaData[] = {
		{ "Category", "Dialogue Node Data" },
		{ "Comment", "// Shows the NodeData that you can customize yourself\n" },
		{ "ModuleRelativePath", "Public/DlgSystemSettings.h" },
		{ "ToolTip", "Shows the NodeData that you can customize yourself" },
	};
#endif
	void Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bShowNodeData_SetBit(void* Obj)
	{
		((UDlgSystemSettings*)Obj)->bShowNodeData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bShowNodeData = { "bShowNodeData", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDlgSystemSettings), &Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bShowNodeData_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bShowNodeData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bShowNodeData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bAutoSetDefaultParticipantClasses_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// If true, ParticipantsClasses from each Dialogue will be set to the first Class that matches the ParticipantName\n// NOTE: This only sets the default for participant names that have only ONE participant class\n// NOTE: This does not work for the None Participant Name\n" },
		{ "ModuleRelativePath", "Public/DlgSystemSettings.h" },
		{ "ToolTip", "If true, ParticipantsClasses from each Dialogue will be set to the first Class that matches the ParticipantName\nNOTE: This only sets the default for participant names that have only ONE participant class\nNOTE: This does not work for the None Participant Name" },
	};
#endif
	void Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bAutoSetDefaultParticipantClasses_SetBit(void* Obj)
	{
		((UDlgSystemSettings*)Obj)->bAutoSetDefaultParticipantClasses = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bAutoSetDefaultParticipantClasses = { "bAutoSetDefaultParticipantClasses", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDlgSystemSettings), &Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bAutoSetDefaultParticipantClasses_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bAutoSetDefaultParticipantClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bAutoSetDefaultParticipantClasses_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_DialogueTextInputKeyForNewLine_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// What key combination to press to add a new line for FText fields in the Dialogue Editor.\n" },
		{ "DisplayName", "Text Input Key for NewLine" },
		{ "ModuleRelativePath", "Public/DlgSystemSettings.h" },
		{ "ToolTip", "What key combination to press to add a new line for FText fields in the Dialogue Editor." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_DialogueTextInputKeyForNewLine = { "DialogueTextInputKeyForNewLine", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDlgSystemSettings, DialogueTextInputKeyForNewLine), Z_Construct_UEnum_DlgSystem_EDlgTextInputKeyForNewLine, METADATA_PARAMS(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_DialogueTextInputKeyForNewLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_DialogueTextInputKeyForNewLine_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_DialogueTextInputKeyForNewLine_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_DialogueTextFormat_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// The dialogue text format used for saving and reloading from text files.\n" },
		{ "DisplayName", "Text Format" },
		{ "ModuleRelativePath", "Public/DlgSystemSettings.h" },
		{ "ToolTip", "The dialogue text format used for saving and reloading from text files." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_DialogueTextFormat = { "DialogueTextFormat", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDlgSystemSettings, DialogueTextFormat), Z_Construct_UEnum_DlgSystem_EDlgDialogueTextFormat, METADATA_PARAMS(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_DialogueTextFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_DialogueTextFormat_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_DialogueTextFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bRegisterDialogueConsoleCommandsAutomatically_MetaData[] = {
		{ "Category", "Runtime" },
		{ "Comment", "// If enabled this auto registers and unregisters the dialogue console commands on Begin Play\n// Calls RegisterDialogueConsoleCommands and UnregisterDialogueConsoleCommands\n" },
		{ "ModuleRelativePath", "Public/DlgSystemSettings.h" },
		{ "ToolTip", "If enabled this auto registers and unregisters the dialogue console commands on Begin Play\nCalls RegisterDialogueConsoleCommands and UnregisterDialogueConsoleCommands" },
	};
#endif
	void Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bRegisterDialogueConsoleCommandsAutomatically_SetBit(void* Obj)
	{
		((UDlgSystemSettings*)Obj)->bRegisterDialogueConsoleCommandsAutomatically = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bRegisterDialogueConsoleCommandsAutomatically = { "bRegisterDialogueConsoleCommandsAutomatically", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDlgSystemSettings), &Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bRegisterDialogueConsoleCommandsAutomatically_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bRegisterDialogueConsoleCommandsAutomatically_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bRegisterDialogueConsoleCommandsAutomatically_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bClearDialogueHistoryAutomatically_MetaData[] = {
		{ "Category", "Runtime" },
		{ "Comment", "// If enabled this clears the dialogue history automatically on Editor Start PIE and On Load New Map */\n// Calls ClearDialogueHistory\n" },
		{ "ModuleRelativePath", "Public/DlgSystemSettings.h" },
		{ "ToolTip", "If enabled this clears the dialogue history automatically on Editor Start PIE and On Load New Map */\nCalls ClearDialogueHistory" },
	};
#endif
	void Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bClearDialogueHistoryAutomatically_SetBit(void* Obj)
	{
		((UDlgSystemSettings*)Obj)->bClearDialogueHistoryAutomatically = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bClearDialogueHistoryAutomatically = { "bClearDialogueHistoryAutomatically", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDlgSystemSettings), &Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bClearDialogueHistoryAutomatically_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bClearDialogueHistoryAutomatically_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bClearDialogueHistoryAutomatically_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDlgSystemSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_OffsetBetweenRowsY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_OffsetBetweenColumnsX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_WireSecondaryEdgeColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_WirePrimaryEdgeColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bDrawSecondaryEdges,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bDrawPrimaryEdges,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bShowPrimarySecondaryEdges,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_WireHoveredColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_WireWithConditionsColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bShowDifferentColorForConditionWires,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_WireBaseColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bShowEdgeHasConditionsIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bWireDrawBubbles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_WireThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_DescriptionSpeakerHorizontalAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_DescriptionSpeakerMargin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_BorderHoveredBackgroundColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_BorderBackgroundColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_SpeechSequenceNodeColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_SelectorRandomNodeColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_SelectorFirstNodeColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_VirtualParentNodeColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_EndNodeColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_RootNodeColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_SpeechNodeColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bShowHasGenericDataIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bShowHasVoiceIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bShowHasEnterEventsIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bShowHasEnterConditionsIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_TitleHorizontalAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_DescriptionTextMargin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_DescriptionWrapTextAt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bShowExternalURLsToolbar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bHideEmptyDialogueBrowserCategories,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_OpenMessageLogLevelsHigherThan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_OpenMessageLogLevelsHigherThan_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_RedirectMessageLogLevelsHigherThan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_RedirectMessageLogLevelsHigherThan_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bEnableOutputLog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bMessageLogOpen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bMessageLogMirrorToOutputLog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bEnableMessageLog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_LocalizationRemapSourceStringsToTexts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_LocalizationRemapSourceStringsToTexts_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_LocalizationRemapSourceStringsToTexts_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_LocalizationIgnoredStrings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_LocalizationIgnoredStrings_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_DialogueTextPrefixNamespaceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_DialogueTextGlobalNamespaceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_DialogueTextNamespaceLocalization,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_DialogueTextNamespaceLocalization_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_DefaultTextEdgeToNormalNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_DefaultTextEdgeToEndNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bSetDefaultEdgeTextOnFirstChildOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bSetDefaultEdgeTexts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_AdditionalTextFormatFileExtensionsToLookFor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_AdditionalTextFormatFileExtensionsToLookFor_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bBatchOnlyInGameDialogues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_ClassPickerDisplayMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_ClassPickerDisplayMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_BlacklistedReflectionClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_BlacklistedReflectionClasses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bShowAdvancedChildren,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bShowGenericData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_DialogueDisplayedVoiceFields,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_DialogueDisplayedVoiceFields_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_DialogueSpeakerStateVisibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_DialogueSpeakerStateVisibility_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bShowNodeData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bAutoSetDefaultParticipantClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_DialogueTextInputKeyForNewLine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_DialogueTextInputKeyForNewLine_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_DialogueTextFormat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_DialogueTextFormat_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bRegisterDialogueConsoleCommandsAutomatically,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgSystemSettings_Statics::NewProp_bClearDialogueHistoryAutomatically,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDlgSystemSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgSystemSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDlgSystemSettings_Statics::ClassParams = {
		&UDlgSystemSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDlgSystemSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDlgSystemSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UDlgSystemSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgSystemSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDlgSystemSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDlgSystemSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDlgSystemSettings, 293712209);
	template<> DLGSYSTEM_API UClass* StaticClass<UDlgSystemSettings>()
	{
		return UDlgSystemSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDlgSystemSettings(Z_Construct_UClass_UDlgSystemSettings, &UDlgSystemSettings::StaticClass, TEXT("/Script/DlgSystem"), TEXT("UDlgSystemSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDlgSystemSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
