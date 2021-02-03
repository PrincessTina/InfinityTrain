// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UWorld;
struct FGuid; struct FDlgHistory;
 struct FDlgObjectsArray;
class UDlgDialogue;
class UDlgContext;
struct FGuid;
#ifdef DLGSYSTEM_DlgManager_generated_h
#error "DlgManager.generated.h already included, missing '#pragma once' in DlgManager.h"
#endif
#define DLGSYSTEM_DlgManager_generated_h

#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgManager_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDlgObjectsArray_Statics; \
	static class UScriptStruct* StaticStruct();


template<> DLGSYSTEM_API UScriptStruct* StaticStruct<struct FDlgObjectsArray>();

#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgManager_h_32_SPARSE_DATA
#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgManager_h_32_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClearDialoguePersistentWorldContextObject); \
	DECLARE_FUNCTION(execSetDialoguePersistentWorldContextObject); \
	DECLARE_FUNCTION(execGetDialogueWorld); \
	DECLARE_FUNCTION(execUnregisterDialogueConsoleCommands); \
	DECLARE_FUNCTION(execRegisterDialogueConsoleCommands); \
	DECLARE_FUNCTION(execGetAllDialoguesEventNames); \
	DECLARE_FUNCTION(execGetAllDialoguesConditionNames); \
	DECLARE_FUNCTION(execGetAllDialoguesNameNames); \
	DECLARE_FUNCTION(execGetAllDialoguesBoolNames); \
	DECLARE_FUNCTION(execGetAllDialoguesFloatNames); \
	DECLARE_FUNCTION(execGetAllDialoguesIntNames); \
	DECLARE_FUNCTION(execGetAllDialoguesSpeakerStates); \
	DECLARE_FUNCTION(execGetAllDialoguesParticipantNames); \
	DECLARE_FUNCTION(execIsObjectANodeData); \
	DECLARE_FUNCTION(execIsObjectACustomTextArgument); \
	DECLARE_FUNCTION(execIsObjectACustomCondition); \
	DECLARE_FUNCTION(execIsObjectACustomEvent); \
	DECLARE_FUNCTION(execDoesObjectImplementDialogueParticipantInterface); \
	DECLARE_FUNCTION(execGetDialogueHistory); \
	DECLARE_FUNCTION(execClearDialogueHistory); \
	DECLARE_FUNCTION(execSetDialogueHistory); \
	DECLARE_FUNCTION(execGetAllObjectsMapWithDialogueParticipantInterface); \
	DECLARE_FUNCTION(execGetAllObjectsWithDialogueParticipantInterface); \
	DECLARE_FUNCTION(execStartDialogue4); \
	DECLARE_FUNCTION(execStartDialogue3); \
	DECLARE_FUNCTION(execStartDialogue2); \
	DECLARE_FUNCTION(execStartMonologue); \
	DECLARE_FUNCTION(execResumeDialogueFromNodeGUID); \
	DECLARE_FUNCTION(execResumeDialogueFromNodeIndex); \
	DECLARE_FUNCTION(execCanStartDialogue); \
	DECLARE_FUNCTION(execStartDialogue); \
	DECLARE_FUNCTION(execStartDialogueWithDefaultParticipants);


#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgManager_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClearDialoguePersistentWorldContextObject); \
	DECLARE_FUNCTION(execSetDialoguePersistentWorldContextObject); \
	DECLARE_FUNCTION(execGetDialogueWorld); \
	DECLARE_FUNCTION(execUnregisterDialogueConsoleCommands); \
	DECLARE_FUNCTION(execRegisterDialogueConsoleCommands); \
	DECLARE_FUNCTION(execGetAllDialoguesEventNames); \
	DECLARE_FUNCTION(execGetAllDialoguesConditionNames); \
	DECLARE_FUNCTION(execGetAllDialoguesNameNames); \
	DECLARE_FUNCTION(execGetAllDialoguesBoolNames); \
	DECLARE_FUNCTION(execGetAllDialoguesFloatNames); \
	DECLARE_FUNCTION(execGetAllDialoguesIntNames); \
	DECLARE_FUNCTION(execGetAllDialoguesSpeakerStates); \
	DECLARE_FUNCTION(execGetAllDialoguesParticipantNames); \
	DECLARE_FUNCTION(execIsObjectANodeData); \
	DECLARE_FUNCTION(execIsObjectACustomTextArgument); \
	DECLARE_FUNCTION(execIsObjectACustomCondition); \
	DECLARE_FUNCTION(execIsObjectACustomEvent); \
	DECLARE_FUNCTION(execDoesObjectImplementDialogueParticipantInterface); \
	DECLARE_FUNCTION(execGetDialogueHistory); \
	DECLARE_FUNCTION(execClearDialogueHistory); \
	DECLARE_FUNCTION(execSetDialogueHistory); \
	DECLARE_FUNCTION(execGetAllObjectsMapWithDialogueParticipantInterface); \
	DECLARE_FUNCTION(execGetAllObjectsWithDialogueParticipantInterface); \
	DECLARE_FUNCTION(execStartDialogue4); \
	DECLARE_FUNCTION(execStartDialogue3); \
	DECLARE_FUNCTION(execStartDialogue2); \
	DECLARE_FUNCTION(execStartMonologue); \
	DECLARE_FUNCTION(execResumeDialogueFromNodeGUID); \
	DECLARE_FUNCTION(execResumeDialogueFromNodeIndex); \
	DECLARE_FUNCTION(execCanStartDialogue); \
	DECLARE_FUNCTION(execStartDialogue); \
	DECLARE_FUNCTION(execStartDialogueWithDefaultParticipants);


#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgManager_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDlgManager(); \
	friend struct Z_Construct_UClass_UDlgManager_Statics; \
public: \
	DECLARE_CLASS(UDlgManager, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DlgSystem"), NO_API) \
	DECLARE_SERIALIZER(UDlgManager)


#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgManager_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUDlgManager(); \
	friend struct Z_Construct_UClass_UDlgManager_Statics; \
public: \
	DECLARE_CLASS(UDlgManager, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DlgSystem"), NO_API) \
	DECLARE_SERIALIZER(UDlgManager)


#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgManager_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDlgManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDlgManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDlgManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDlgManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDlgManager(UDlgManager&&); \
	NO_API UDlgManager(const UDlgManager&); \
public:


#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgManager_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDlgManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDlgManager(UDlgManager&&); \
	NO_API UDlgManager(const UDlgManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDlgManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDlgManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDlgManager)


#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgManager_h_32_PRIVATE_PROPERTY_OFFSET
#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgManager_h_29_PROLOG
#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgManager_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgManager_h_32_PRIVATE_PROPERTY_OFFSET \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgManager_h_32_SPARSE_DATA \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgManager_h_32_RPC_WRAPPERS \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgManager_h_32_INCLASS \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgManager_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgManager_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgManager_h_32_PRIVATE_PROPERTY_OFFSET \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgManager_h_32_SPARSE_DATA \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgManager_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgManager_h_32_INCLASS_NO_PURE_DECLS \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgManager_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DLGSYSTEM_API UClass* StaticClass<class UDlgManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
