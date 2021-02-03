// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGuid;
class UDlgNode;
class UObject;
struct FDlgParticipantClass;
 struct FDlgParticipantData;
#ifdef DLGSYSTEM_DlgDialogue_generated_h
#error "DlgDialogue.generated.h already included, missing '#pragma once' in DlgDialogue.h"
#endif
#define DLGSYSTEM_DlgDialogue_generated_h

#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgDialogue_h_50_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDlgParticipantClass_Statics; \
	static class UScriptStruct* StaticStruct();


template<> DLGSYSTEM_API UScriptStruct* StaticStruct<struct FDlgParticipantClass>();

#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgDialogue_h_72_SPARSE_DATA
#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgDialogue_h_72_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMutableNodeFromGUID); \
	DECLARE_FUNCTION(execGetMutableNodeFromIndex); \
	DECLARE_FUNCTION(execGetNodeIndexForGUID); \
	DECLARE_FUNCTION(execGetNodeGUIDForIndex); \
	DECLARE_FUNCTION(execIsValidNodeGUID); \
	DECLARE_FUNCTION(execIsValidNodeIndex); \
	DECLARE_FUNCTION(execGetMutableStartNode); \
	DECLARE_FUNCTION(execGetNodes); \
	DECLARE_FUNCTION(execHasGUID); \
	DECLARE_FUNCTION(execGetGUID); \
	DECLARE_FUNCTION(execGetDialogueFName); \
	DECLARE_FUNCTION(execGetDialogueName); \
	DECLARE_FUNCTION(execGetDialogueVersion); \
	DECLARE_FUNCTION(execGetAllSpeakerStates); \
	DECLARE_FUNCTION(execGetClassTextNames); \
	DECLARE_FUNCTION(execGetClassNameNames); \
	DECLARE_FUNCTION(execGetClassBoolNames); \
	DECLARE_FUNCTION(execGetClassFloatNames); \
	DECLARE_FUNCTION(execGetClassIntNames); \
	DECLARE_FUNCTION(execGetNameNames); \
	DECLARE_FUNCTION(execGetBoolNames); \
	DECLARE_FUNCTION(execGetFloatNames); \
	DECLARE_FUNCTION(execGetIntNames); \
	DECLARE_FUNCTION(execGetCustomEvents); \
	DECLARE_FUNCTION(execGetEvents); \
	DECLARE_FUNCTION(execGetConditions); \
	DECLARE_FUNCTION(execGetParticipantClass); \
	DECLARE_FUNCTION(execGetAllParticipantClasses); \
	DECLARE_FUNCTION(execGetAllParticipantNames); \
	DECLARE_FUNCTION(execGetParticipantsNum); \
	DECLARE_FUNCTION(execHasParticipant); \
	DECLARE_FUNCTION(execGetParticipantsData);


#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgDialogue_h_72_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMutableNodeFromGUID); \
	DECLARE_FUNCTION(execGetMutableNodeFromIndex); \
	DECLARE_FUNCTION(execGetNodeIndexForGUID); \
	DECLARE_FUNCTION(execGetNodeGUIDForIndex); \
	DECLARE_FUNCTION(execIsValidNodeGUID); \
	DECLARE_FUNCTION(execIsValidNodeIndex); \
	DECLARE_FUNCTION(execGetMutableStartNode); \
	DECLARE_FUNCTION(execGetNodes); \
	DECLARE_FUNCTION(execHasGUID); \
	DECLARE_FUNCTION(execGetGUID); \
	DECLARE_FUNCTION(execGetDialogueFName); \
	DECLARE_FUNCTION(execGetDialogueName); \
	DECLARE_FUNCTION(execGetDialogueVersion); \
	DECLARE_FUNCTION(execGetAllSpeakerStates); \
	DECLARE_FUNCTION(execGetClassTextNames); \
	DECLARE_FUNCTION(execGetClassNameNames); \
	DECLARE_FUNCTION(execGetClassBoolNames); \
	DECLARE_FUNCTION(execGetClassFloatNames); \
	DECLARE_FUNCTION(execGetClassIntNames); \
	DECLARE_FUNCTION(execGetNameNames); \
	DECLARE_FUNCTION(execGetBoolNames); \
	DECLARE_FUNCTION(execGetFloatNames); \
	DECLARE_FUNCTION(execGetIntNames); \
	DECLARE_FUNCTION(execGetCustomEvents); \
	DECLARE_FUNCTION(execGetEvents); \
	DECLARE_FUNCTION(execGetConditions); \
	DECLARE_FUNCTION(execGetParticipantClass); \
	DECLARE_FUNCTION(execGetAllParticipantClasses); \
	DECLARE_FUNCTION(execGetAllParticipantNames); \
	DECLARE_FUNCTION(execGetParticipantsNum); \
	DECLARE_FUNCTION(execHasParticipant); \
	DECLARE_FUNCTION(execGetParticipantsData);


#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgDialogue_h_72_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UDlgDialogue, NO_API)


#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgDialogue_h_72_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDlgDialogue(); \
	friend struct Z_Construct_UClass_UDlgDialogue_Statics; \
public: \
	DECLARE_CLASS(UDlgDialogue, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DlgSystem"), NO_API) \
	DECLARE_SERIALIZER(UDlgDialogue) \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgDialogue_h_72_ARCHIVESERIALIZER


#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgDialogue_h_72_INCLASS \
private: \
	static void StaticRegisterNativesUDlgDialogue(); \
	friend struct Z_Construct_UClass_UDlgDialogue_Statics; \
public: \
	DECLARE_CLASS(UDlgDialogue, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DlgSystem"), NO_API) \
	DECLARE_SERIALIZER(UDlgDialogue) \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgDialogue_h_72_ARCHIVESERIALIZER


#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgDialogue_h_72_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDlgDialogue(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDlgDialogue) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDlgDialogue); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDlgDialogue); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDlgDialogue(UDlgDialogue&&); \
	NO_API UDlgDialogue(const UDlgDialogue&); \
public:


#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgDialogue_h_72_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDlgDialogue(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDlgDialogue(UDlgDialogue&&); \
	NO_API UDlgDialogue(const UDlgDialogue&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDlgDialogue); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDlgDialogue); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDlgDialogue)


#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgDialogue_h_72_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Version() { return STRUCT_OFFSET(UDlgDialogue, Version); } \
	FORCEINLINE static uint32 __PPO__Name() { return STRUCT_OFFSET(UDlgDialogue, Name); } \
	FORCEINLINE static uint32 __PPO__GUID() { return STRUCT_OFFSET(UDlgDialogue, GUID); } \
	FORCEINLINE static uint32 __PPO__ParticipantsClasses() { return STRUCT_OFFSET(UDlgDialogue, ParticipantsClasses); } \
	FORCEINLINE static uint32 __PPO__ParticipantsData() { return STRUCT_OFFSET(UDlgDialogue, ParticipantsData); } \
	FORCEINLINE static uint32 __PPO__AllSpeakerStates() { return STRUCT_OFFSET(UDlgDialogue, AllSpeakerStates); } \
	FORCEINLINE static uint32 __PPO__StartNode() { return STRUCT_OFFSET(UDlgDialogue, StartNode); } \
	FORCEINLINE static uint32 __PPO__Nodes() { return STRUCT_OFFSET(UDlgDialogue, Nodes); } \
	FORCEINLINE static uint32 __PPO__NodesGUIDToIndexMap() { return STRUCT_OFFSET(UDlgDialogue, NodesGUIDToIndexMap); }


#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgDialogue_h_69_PROLOG
#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgDialogue_h_72_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgDialogue_h_72_PRIVATE_PROPERTY_OFFSET \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgDialogue_h_72_SPARSE_DATA \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgDialogue_h_72_RPC_WRAPPERS \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgDialogue_h_72_INCLASS \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgDialogue_h_72_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgDialogue_h_72_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgDialogue_h_72_PRIVATE_PROPERTY_OFFSET \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgDialogue_h_72_SPARSE_DATA \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgDialogue_h_72_RPC_WRAPPERS_NO_PURE_DECLS \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgDialogue_h_72_INCLASS_NO_PURE_DECLS \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgDialogue_h_72_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DLGSYSTEM_API UClass* StaticClass<class UDlgDialogue>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgDialogue_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
