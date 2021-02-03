// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DLGSYSTEM_DlgSystemSettings_generated_h
#error "DlgSystemSettings.generated.h already included, missing '#pragma once' in DlgSystemSettings.h"
#endif
#define DLGSYSTEM_DlgSystemSettings_generated_h

#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgSystemSettings_h_120_SPARSE_DATA
#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgSystemSettings_h_120_RPC_WRAPPERS
#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgSystemSettings_h_120_RPC_WRAPPERS_NO_PURE_DECLS
#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgSystemSettings_h_120_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDlgSystemSettings(); \
	friend struct Z_Construct_UClass_UDlgSystemSettings_Statics; \
public: \
	DECLARE_CLASS(UDlgSystemSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/DlgSystem"), NO_API) \
	DECLARE_SERIALIZER(UDlgSystemSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgSystemSettings_h_120_INCLASS \
private: \
	static void StaticRegisterNativesUDlgSystemSettings(); \
	friend struct Z_Construct_UClass_UDlgSystemSettings_Statics; \
public: \
	DECLARE_CLASS(UDlgSystemSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/DlgSystem"), NO_API) \
	DECLARE_SERIALIZER(UDlgSystemSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgSystemSettings_h_120_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDlgSystemSettings(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDlgSystemSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDlgSystemSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDlgSystemSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDlgSystemSettings(UDlgSystemSettings&&); \
	NO_API UDlgSystemSettings(const UDlgSystemSettings&); \
public:


#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgSystemSettings_h_120_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDlgSystemSettings(UDlgSystemSettings&&); \
	NO_API UDlgSystemSettings(const UDlgSystemSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDlgSystemSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDlgSystemSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDlgSystemSettings)


#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgSystemSettings_h_120_PRIVATE_PROPERTY_OFFSET
#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgSystemSettings_h_117_PROLOG
#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgSystemSettings_h_120_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgSystemSettings_h_120_PRIVATE_PROPERTY_OFFSET \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgSystemSettings_h_120_SPARSE_DATA \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgSystemSettings_h_120_RPC_WRAPPERS \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgSystemSettings_h_120_INCLASS \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgSystemSettings_h_120_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgSystemSettings_h_120_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgSystemSettings_h_120_PRIVATE_PROPERTY_OFFSET \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgSystemSettings_h_120_SPARSE_DATA \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgSystemSettings_h_120_RPC_WRAPPERS_NO_PURE_DECLS \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgSystemSettings_h_120_INCLASS_NO_PURE_DECLS \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgSystemSettings_h_120_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DLGSYSTEM_API UClass* StaticClass<class UDlgSystemSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgSystemSettings_h


#define FOREACH_ENUM_EDLGCLASSPICKERDISPLAYMODE(op) \
	op(EDlgClassPickerDisplayMode::DefaultView) \
	op(EDlgClassPickerDisplayMode::TreeView) \
	op(EDlgClassPickerDisplayMode::ListView) 

enum class EDlgClassPickerDisplayMode : uint8;
template<> DLGSYSTEM_API UEnum* StaticEnum<EDlgClassPickerDisplayMode>();

#define FOREACH_ENUM_EDLGTEXTNAMESPACELOCALIZATION(op) \
	op(EDlgTextNamespaceLocalization::Ignore) \
	op(EDlgTextNamespaceLocalization::PerDialogue) \
	op(EDlgTextNamespaceLocalization::WithPrefixPerDialogue) \
	op(EDlgTextNamespaceLocalization::Global) 

enum class EDlgTextNamespaceLocalization : uint8;
template<> DLGSYSTEM_API UEnum* StaticEnum<EDlgTextNamespaceLocalization>();

#define FOREACH_ENUM_EDLGTEXTINPUTKEYFORNEWLINE(op) \
	op(EDlgTextInputKeyForNewLine::Enter) \
	op(EDlgTextInputKeyForNewLine::ShiftPlusEnter) 

enum class EDlgTextInputKeyForNewLine : uint8;
template<> DLGSYSTEM_API UEnum* StaticEnum<EDlgTextInputKeyForNewLine>();

#define FOREACH_ENUM_EDLGSPEAKERSTATEVISIBILITY(op) \
	op(EDlgSpeakerStateVisibility::HideAll) \
	op(EDlgSpeakerStateVisibility::ShowOnEdge) \
	op(EDlgSpeakerStateVisibility::ShowOnNode) \
	op(EDlgSpeakerStateVisibility::ShowOnNodeAndEdge) 

enum class EDlgSpeakerStateVisibility : uint8;
template<> DLGSYSTEM_API UEnum* StaticEnum<EDlgSpeakerStateVisibility>();

#define FOREACH_ENUM_EDLGVOICEDISPLAYEDFIELDS(op) \
	op(EDlgVoiceDisplayedFields::None) \
	op(EDlgVoiceDisplayedFields::SoundWave) \
	op(EDlgVoiceDisplayedFields::DialogueWave) \
	op(EDlgVoiceDisplayedFields::SoundWaveAndDialogueWave) 

enum class EDlgVoiceDisplayedFields : uint8;
template<> DLGSYSTEM_API UEnum* StaticEnum<EDlgVoiceDisplayedFields>();

#define FOREACH_ENUM_EDLGDIALOGUETEXTFORMAT(op) \
	op(EDlgDialogueTextFormat::None) \
	op(EDlgDialogueTextFormat::All) \
	op(EDlgDialogueTextFormat::DialogueDEPRECATED) \
	op(EDlgDialogueTextFormat::StartTextFormats) \
	op(EDlgDialogueTextFormat::JSON) \
	op(EDlgDialogueTextFormat::NumTextFormats) 

enum class EDlgDialogueTextFormat : uint8;
template<> DLGSYSTEM_API UEnum* StaticEnum<EDlgDialogueTextFormat>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
