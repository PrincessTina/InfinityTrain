// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGuid;
class UDlgNode;
 class UObject;
class UDlgDialogue;
class UDlgNode_SpeechSequence;
class UObject;
class UTexture2D;
class UDlgNodeData;
class UDialogueWave;
class USoundBase;
class USoundWave;
struct FDlgEdgeData;
struct FDlgEdge;
struct FDlgCondition;
#ifdef DLGSYSTEM_DlgContext_generated_h
#error "DlgContext.generated.h already included, missing '#pragma once' in DlgContext.h"
#endif
#define DLGSYSTEM_DlgContext_generated_h

#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgContext_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDlgEdgeData_Statics; \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__bSatisfied() { return STRUCT_OFFSET(FDlgEdgeData, bSatisfied); } \
	FORCEINLINE static uint32 __PPO__Edge() { return STRUCT_OFFSET(FDlgEdgeData, Edge); }


template<> DLGSYSTEM_API UScriptStruct* StaticStruct<struct FDlgEdgeData>();

#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgContext_h_81_SPARSE_DATA
#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgContext_h_81_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetContextString); \
	DECLARE_FUNCTION(execWasNodeGUIDVisitedInThisContext); \
	DECLARE_FUNCTION(execWasNodeIndexVisitedInThisContext); \
	DECLARE_FUNCTION(execGetMutableNodeFromGUID); \
	DECLARE_FUNCTION(execGetMutableNodeFromIndex); \
	DECLARE_FUNCTION(execGetParticipants); \
	DECLARE_FUNCTION(execGetDialoguePathName); \
	DECLARE_FUNCTION(execGetDialogueGUID); \
	DECLARE_FUNCTION(execGetDialogueName); \
	DECLARE_FUNCTION(execGetDialogue); \
	DECLARE_FUNCTION(execGetVisitedNodeGUIDs); \
	DECLARE_FUNCTION(execGetVisitedNodeIndices); \
	DECLARE_FUNCTION(execGetNodeIndexForGUID); \
	DECLARE_FUNCTION(execGetNodeGUIDForIndex); \
	DECLARE_FUNCTION(execIsValidNodeGUID); \
	DECLARE_FUNCTION(execIsValidNodeIndex); \
	DECLARE_FUNCTION(execGetMutableActiveNodeAsSpeechSequence); \
	DECLARE_FUNCTION(execGetMutableActiveNode); \
	DECLARE_FUNCTION(execGetActiveNodeGUID); \
	DECLARE_FUNCTION(execGetActiveNodeIndex); \
	DECLARE_FUNCTION(execGetParticipantsMap); \
	DECLARE_FUNCTION(execGetMutableParticipant); \
	DECLARE_FUNCTION(execGetActiveNodeParticipantDisplayName); \
	DECLARE_FUNCTION(execGetActiveNodeParticipantName); \
	DECLARE_FUNCTION(execGetActiveNodeParticipant); \
	DECLARE_FUNCTION(execGetActiveNodeParticipantIcon); \
	DECLARE_FUNCTION(execGetActiveNodeData); \
	DECLARE_FUNCTION(execGetActiveNodeGenericData); \
	DECLARE_FUNCTION(execGetActiveNodeVoiceDialogueWave); \
	DECLARE_FUNCTION(execGetActiveNodeVoiceSoundBase); \
	DECLARE_FUNCTION(execGetActiveNodeVoiceSoundWave); \
	DECLARE_FUNCTION(execGetActiveNodeSpeakerState); \
	DECLARE_FUNCTION(execGetActiveNodeText); \
	DECLARE_FUNCTION(execIsOptionConnectedToEndNode); \
	DECLARE_FUNCTION(execIsOptionConnectedToVisitedNode); \
	DECLARE_FUNCTION(execGetAllOptionsArray); \
	DECLARE_FUNCTION(execGetOptionFromAll); \
	DECLARE_FUNCTION(execGetOptionSpeakerStateFromAll); \
	DECLARE_FUNCTION(execIsOptionSatisfied); \
	DECLARE_FUNCTION(execGetOptionTextFromAll); \
	DECLARE_FUNCTION(execIsValidAllOptionIndex); \
	DECLARE_FUNCTION(execGetAllOptionsNum); \
	DECLARE_FUNCTION(execGetOptionsArray); \
	DECLARE_FUNCTION(execGetOption); \
	DECLARE_FUNCTION(execGetOptionEnterConditions); \
	DECLARE_FUNCTION(execGetOptionSpeakerState); \
	DECLARE_FUNCTION(execGetOptionText); \
	DECLARE_FUNCTION(execIsValidOptionIndex); \
	DECLARE_FUNCTION(execGetOptionsNum); \
	DECLARE_FUNCTION(execHasDialogueEnded); \
	DECLARE_FUNCTION(execReevaluateOptions); \
	DECLARE_FUNCTION(execReevaluateChildren); \
	DECLARE_FUNCTION(execChooseOptionBasedOnAllOptionIndex); \
	DECLARE_FUNCTION(execChooseChildBasedOnAllOptionIndex); \
	DECLARE_FUNCTION(execChooseSpeechSequenceOptionFromReplicated); \
	DECLARE_FUNCTION(execChooseOption); \
	DECLARE_FUNCTION(execChooseChild); \
	DECLARE_FUNCTION(execOnRep_SerializedParticipants);


#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgContext_h_81_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetContextString); \
	DECLARE_FUNCTION(execWasNodeGUIDVisitedInThisContext); \
	DECLARE_FUNCTION(execWasNodeIndexVisitedInThisContext); \
	DECLARE_FUNCTION(execGetMutableNodeFromGUID); \
	DECLARE_FUNCTION(execGetMutableNodeFromIndex); \
	DECLARE_FUNCTION(execGetParticipants); \
	DECLARE_FUNCTION(execGetDialoguePathName); \
	DECLARE_FUNCTION(execGetDialogueGUID); \
	DECLARE_FUNCTION(execGetDialogueName); \
	DECLARE_FUNCTION(execGetDialogue); \
	DECLARE_FUNCTION(execGetVisitedNodeGUIDs); \
	DECLARE_FUNCTION(execGetVisitedNodeIndices); \
	DECLARE_FUNCTION(execGetNodeIndexForGUID); \
	DECLARE_FUNCTION(execGetNodeGUIDForIndex); \
	DECLARE_FUNCTION(execIsValidNodeGUID); \
	DECLARE_FUNCTION(execIsValidNodeIndex); \
	DECLARE_FUNCTION(execGetMutableActiveNodeAsSpeechSequence); \
	DECLARE_FUNCTION(execGetMutableActiveNode); \
	DECLARE_FUNCTION(execGetActiveNodeGUID); \
	DECLARE_FUNCTION(execGetActiveNodeIndex); \
	DECLARE_FUNCTION(execGetParticipantsMap); \
	DECLARE_FUNCTION(execGetMutableParticipant); \
	DECLARE_FUNCTION(execGetActiveNodeParticipantDisplayName); \
	DECLARE_FUNCTION(execGetActiveNodeParticipantName); \
	DECLARE_FUNCTION(execGetActiveNodeParticipant); \
	DECLARE_FUNCTION(execGetActiveNodeParticipantIcon); \
	DECLARE_FUNCTION(execGetActiveNodeData); \
	DECLARE_FUNCTION(execGetActiveNodeGenericData); \
	DECLARE_FUNCTION(execGetActiveNodeVoiceDialogueWave); \
	DECLARE_FUNCTION(execGetActiveNodeVoiceSoundBase); \
	DECLARE_FUNCTION(execGetActiveNodeVoiceSoundWave); \
	DECLARE_FUNCTION(execGetActiveNodeSpeakerState); \
	DECLARE_FUNCTION(execGetActiveNodeText); \
	DECLARE_FUNCTION(execIsOptionConnectedToEndNode); \
	DECLARE_FUNCTION(execIsOptionConnectedToVisitedNode); \
	DECLARE_FUNCTION(execGetAllOptionsArray); \
	DECLARE_FUNCTION(execGetOptionFromAll); \
	DECLARE_FUNCTION(execGetOptionSpeakerStateFromAll); \
	DECLARE_FUNCTION(execIsOptionSatisfied); \
	DECLARE_FUNCTION(execGetOptionTextFromAll); \
	DECLARE_FUNCTION(execIsValidAllOptionIndex); \
	DECLARE_FUNCTION(execGetAllOptionsNum); \
	DECLARE_FUNCTION(execGetOptionsArray); \
	DECLARE_FUNCTION(execGetOption); \
	DECLARE_FUNCTION(execGetOptionEnterConditions); \
	DECLARE_FUNCTION(execGetOptionSpeakerState); \
	DECLARE_FUNCTION(execGetOptionText); \
	DECLARE_FUNCTION(execIsValidOptionIndex); \
	DECLARE_FUNCTION(execGetOptionsNum); \
	DECLARE_FUNCTION(execHasDialogueEnded); \
	DECLARE_FUNCTION(execReevaluateOptions); \
	DECLARE_FUNCTION(execReevaluateChildren); \
	DECLARE_FUNCTION(execChooseOptionBasedOnAllOptionIndex); \
	DECLARE_FUNCTION(execChooseChildBasedOnAllOptionIndex); \
	DECLARE_FUNCTION(execChooseSpeechSequenceOptionFromReplicated); \
	DECLARE_FUNCTION(execChooseOption); \
	DECLARE_FUNCTION(execChooseChild); \
	DECLARE_FUNCTION(execOnRep_SerializedParticipants);


#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgContext_h_81_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDlgContext(); \
	friend struct Z_Construct_UClass_UDlgContext_Statics; \
public: \
	DECLARE_CLASS(UDlgContext, UDlgObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DlgSystem"), NO_API) \
	DECLARE_SERIALIZER(UDlgContext) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Dialogue=NETFIELD_REP_START, \
		SerializedParticipants, \
		NETFIELD_REP_END=SerializedParticipants	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UDlgContext) \
public:


#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgContext_h_81_INCLASS \
private: \
	static void StaticRegisterNativesUDlgContext(); \
	friend struct Z_Construct_UClass_UDlgContext_Statics; \
public: \
	DECLARE_CLASS(UDlgContext, UDlgObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DlgSystem"), NO_API) \
	DECLARE_SERIALIZER(UDlgContext) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Dialogue=NETFIELD_REP_START, \
		SerializedParticipants, \
		NETFIELD_REP_END=SerializedParticipants	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UDlgContext) \
public:


#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgContext_h_81_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDlgContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDlgContext) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDlgContext); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDlgContext); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDlgContext(UDlgContext&&); \
	NO_API UDlgContext(const UDlgContext&); \
public:


#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgContext_h_81_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDlgContext(UDlgContext&&); \
	NO_API UDlgContext(const UDlgContext&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDlgContext); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDlgContext); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDlgContext)


#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgContext_h_81_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Dialogue() { return STRUCT_OFFSET(UDlgContext, Dialogue); } \
	FORCEINLINE static uint32 __PPO__SerializedParticipants() { return STRUCT_OFFSET(UDlgContext, SerializedParticipants); } \
	FORCEINLINE static uint32 __PPO__Participants() { return STRUCT_OFFSET(UDlgContext, Participants); }


#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgContext_h_78_PROLOG
#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgContext_h_81_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgContext_h_81_PRIVATE_PROPERTY_OFFSET \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgContext_h_81_SPARSE_DATA \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgContext_h_81_RPC_WRAPPERS \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgContext_h_81_INCLASS \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgContext_h_81_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgContext_h_81_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgContext_h_81_PRIVATE_PROPERTY_OFFSET \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgContext_h_81_SPARSE_DATA \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgContext_h_81_RPC_WRAPPERS_NO_PURE_DECLS \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgContext_h_81_INCLASS_NO_PURE_DECLS \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgContext_h_81_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DLGSYSTEM_API UClass* StaticClass<class UDlgContext>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgContext_h


#define FOREACH_ENUM_EDLGVALIDATESTATUS(op) \
	op(EDlgValidateStatus::Valid) \
	op(EDlgValidateStatus::ParticipantIsNull) \
	op(EDlgValidateStatus::DialogueIsNull) \
	op(EDlgValidateStatus::ParticipantDoesNotImplementInterface) \
	op(EDlgValidateStatus::ParticipantIsABlueprintClassAndDoesNotImplementInterface) 

enum class EDlgValidateStatus : uint8;
template<> DLGSYSTEM_API UEnum* StaticEnum<EDlgValidateStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
