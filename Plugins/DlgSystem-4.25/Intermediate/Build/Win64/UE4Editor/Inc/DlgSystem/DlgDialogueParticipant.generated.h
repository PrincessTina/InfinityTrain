// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDlgContext;
class UTexture2D;
enum class ETextGender : uint8;
#ifdef DLGSYSTEM_DlgDialogueParticipant_generated_h
#error "DlgDialogueParticipant.generated.h already included, missing '#pragma once' in DlgDialogueParticipant.h"
#endif
#define DLGSYSTEM_DlgDialogueParticipant_generated_h

#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgDialogueParticipant_h_16_SPARSE_DATA
#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgDialogueParticipant_h_16_RPC_WRAPPERS \
	virtual bool ModifyNameValue_Implementation(FName ValueName, FName NameValue) { return false; }; \
	virtual bool ModifyBoolValue_Implementation(FName ValueName, bool bNewValue) { return false; }; \
	virtual bool ModifyIntValue_Implementation(FName ValueName, bool bDelta, int32 Value) { return false; }; \
	virtual bool ModifyFloatValue_Implementation(FName ValueName, bool bDelta, float Value) { return false; }; \
	virtual bool OnDialogueEvent_Implementation(UDlgContext* Context, FName EventName) { return false; }; \
	virtual FName GetNameValue_Implementation(FName ValueName) const { return NAME_None; }; \
	virtual bool GetBoolValue_Implementation(FName ValueName) const { return false; }; \
	virtual int32 GetIntValue_Implementation(FName ValueName) const { return 0; }; \
	virtual float GetFloatValue_Implementation(FName ValueName) const { return 0; }; \
	virtual bool CheckCondition_Implementation(const UDlgContext* Context, FName ConditionName) const { return false; }; \
	virtual UTexture2D* GetParticipantIcon_Implementation(FName ActiveSpeaker, FName ActiveSpeakerState) const { return NULL; }; \
	virtual ETextGender GetParticipantGender_Implementation() const { return (ETextGender)0; }; \
	virtual FText GetParticipantDisplayName_Implementation(FName ActiveSpeaker) const { return FText::GetEmpty(); }; \
	virtual FName GetParticipantName_Implementation() const { return NAME_None; }; \
 \
	DECLARE_FUNCTION(execModifyNameValue); \
	DECLARE_FUNCTION(execModifyBoolValue); \
	DECLARE_FUNCTION(execModifyIntValue); \
	DECLARE_FUNCTION(execModifyFloatValue); \
	DECLARE_FUNCTION(execOnDialogueEvent); \
	DECLARE_FUNCTION(execGetNameValue); \
	DECLARE_FUNCTION(execGetBoolValue); \
	DECLARE_FUNCTION(execGetIntValue); \
	DECLARE_FUNCTION(execGetFloatValue); \
	DECLARE_FUNCTION(execCheckCondition); \
	DECLARE_FUNCTION(execGetParticipantIcon); \
	DECLARE_FUNCTION(execGetParticipantGender); \
	DECLARE_FUNCTION(execGetParticipantDisplayName); \
	DECLARE_FUNCTION(execGetParticipantName);


#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgDialogueParticipant_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ModifyNameValue_Implementation(FName ValueName, FName NameValue) { return false; }; \
	virtual bool ModifyBoolValue_Implementation(FName ValueName, bool bNewValue) { return false; }; \
	virtual bool ModifyIntValue_Implementation(FName ValueName, bool bDelta, int32 Value) { return false; }; \
	virtual bool ModifyFloatValue_Implementation(FName ValueName, bool bDelta, float Value) { return false; }; \
	virtual bool OnDialogueEvent_Implementation(UDlgContext* Context, FName EventName) { return false; }; \
	virtual FName GetNameValue_Implementation(FName ValueName) const { return NAME_None; }; \
	virtual bool GetBoolValue_Implementation(FName ValueName) const { return false; }; \
	virtual int32 GetIntValue_Implementation(FName ValueName) const { return 0; }; \
	virtual float GetFloatValue_Implementation(FName ValueName) const { return 0; }; \
	virtual bool CheckCondition_Implementation(const UDlgContext* Context, FName ConditionName) const { return false; }; \
	virtual UTexture2D* GetParticipantIcon_Implementation(FName ActiveSpeaker, FName ActiveSpeakerState) const { return NULL; }; \
	virtual ETextGender GetParticipantGender_Implementation() const { return (ETextGender)0; }; \
	virtual FText GetParticipantDisplayName_Implementation(FName ActiveSpeaker) const { return FText::GetEmpty(); }; \
	virtual FName GetParticipantName_Implementation() const { return NAME_None; }; \
 \
	DECLARE_FUNCTION(execModifyNameValue); \
	DECLARE_FUNCTION(execModifyBoolValue); \
	DECLARE_FUNCTION(execModifyIntValue); \
	DECLARE_FUNCTION(execModifyFloatValue); \
	DECLARE_FUNCTION(execOnDialogueEvent); \
	DECLARE_FUNCTION(execGetNameValue); \
	DECLARE_FUNCTION(execGetBoolValue); \
	DECLARE_FUNCTION(execGetIntValue); \
	DECLARE_FUNCTION(execGetFloatValue); \
	DECLARE_FUNCTION(execCheckCondition); \
	DECLARE_FUNCTION(execGetParticipantIcon); \
	DECLARE_FUNCTION(execGetParticipantGender); \
	DECLARE_FUNCTION(execGetParticipantDisplayName); \
	DECLARE_FUNCTION(execGetParticipantName);


#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgDialogueParticipant_h_16_EVENT_PARMS \
	struct DlgDialogueParticipant_eventCheckCondition_Parms \
	{ \
		const UDlgContext* Context; \
		FName ConditionName; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		DlgDialogueParticipant_eventCheckCondition_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct DlgDialogueParticipant_eventGetBoolValue_Parms \
	{ \
		FName ValueName; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		DlgDialogueParticipant_eventGetBoolValue_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct DlgDialogueParticipant_eventGetFloatValue_Parms \
	{ \
		FName ValueName; \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		DlgDialogueParticipant_eventGetFloatValue_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct DlgDialogueParticipant_eventGetIntValue_Parms \
	{ \
		FName ValueName; \
		int32 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		DlgDialogueParticipant_eventGetIntValue_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct DlgDialogueParticipant_eventGetNameValue_Parms \
	{ \
		FName ValueName; \
		FName ReturnValue; \
	}; \
	struct DlgDialogueParticipant_eventGetParticipantDisplayName_Parms \
	{ \
		FName ActiveSpeaker; \
		FText ReturnValue; \
	}; \
	struct DlgDialogueParticipant_eventGetParticipantGender_Parms \
	{ \
		ETextGender ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		DlgDialogueParticipant_eventGetParticipantGender_Parms() \
			: ReturnValue((ETextGender)0) \
		{ \
		} \
	}; \
	struct DlgDialogueParticipant_eventGetParticipantIcon_Parms \
	{ \
		FName ActiveSpeaker; \
		FName ActiveSpeakerState; \
		UTexture2D* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		DlgDialogueParticipant_eventGetParticipantIcon_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct DlgDialogueParticipant_eventGetParticipantName_Parms \
	{ \
		FName ReturnValue; \
	}; \
	struct DlgDialogueParticipant_eventModifyBoolValue_Parms \
	{ \
		FName ValueName; \
		bool bNewValue; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		DlgDialogueParticipant_eventModifyBoolValue_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct DlgDialogueParticipant_eventModifyFloatValue_Parms \
	{ \
		FName ValueName; \
		bool bDelta; \
		float Value; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		DlgDialogueParticipant_eventModifyFloatValue_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct DlgDialogueParticipant_eventModifyIntValue_Parms \
	{ \
		FName ValueName; \
		bool bDelta; \
		int32 Value; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		DlgDialogueParticipant_eventModifyIntValue_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct DlgDialogueParticipant_eventModifyNameValue_Parms \
	{ \
		FName ValueName; \
		FName NameValue; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		DlgDialogueParticipant_eventModifyNameValue_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct DlgDialogueParticipant_eventOnDialogueEvent_Parms \
	{ \
		UDlgContext* Context; \
		FName EventName; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		DlgDialogueParticipant_eventOnDialogueEvent_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgDialogueParticipant_h_16_CALLBACK_WRAPPERS
#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgDialogueParticipant_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDlgDialogueParticipant(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDlgDialogueParticipant) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDlgDialogueParticipant); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDlgDialogueParticipant); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDlgDialogueParticipant(UDlgDialogueParticipant&&); \
	NO_API UDlgDialogueParticipant(const UDlgDialogueParticipant&); \
public:


#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgDialogueParticipant_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDlgDialogueParticipant(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDlgDialogueParticipant(UDlgDialogueParticipant&&); \
	NO_API UDlgDialogueParticipant(const UDlgDialogueParticipant&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDlgDialogueParticipant); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDlgDialogueParticipant); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDlgDialogueParticipant)


#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgDialogueParticipant_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDlgDialogueParticipant(); \
	friend struct Z_Construct_UClass_UDlgDialogueParticipant_Statics; \
public: \
	DECLARE_CLASS(UDlgDialogueParticipant, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DlgSystem"), NO_API) \
	DECLARE_SERIALIZER(UDlgDialogueParticipant)


#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgDialogueParticipant_h_16_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgDialogueParticipant_h_16_GENERATED_UINTERFACE_BODY() \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgDialogueParticipant_h_16_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgDialogueParticipant_h_16_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgDialogueParticipant_h_16_GENERATED_UINTERFACE_BODY() \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgDialogueParticipant_h_16_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgDialogueParticipant_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDlgDialogueParticipant() {} \
public: \
	typedef UDlgDialogueParticipant UClassType; \
	typedef IDlgDialogueParticipant ThisClass; \
	static bool Execute_CheckCondition(const UObject* O, const UDlgContext* Context, FName ConditionName); \
	static bool Execute_GetBoolValue(const UObject* O, FName ValueName); \
	static float Execute_GetFloatValue(const UObject* O, FName ValueName); \
	static int32 Execute_GetIntValue(const UObject* O, FName ValueName); \
	static FName Execute_GetNameValue(const UObject* O, FName ValueName); \
	static FText Execute_GetParticipantDisplayName(const UObject* O, FName ActiveSpeaker); \
	static ETextGender Execute_GetParticipantGender(const UObject* O); \
	static UTexture2D* Execute_GetParticipantIcon(const UObject* O, FName ActiveSpeaker, FName ActiveSpeakerState); \
	static FName Execute_GetParticipantName(const UObject* O); \
	static bool Execute_ModifyBoolValue(UObject* O, FName ValueName, bool bNewValue); \
	static bool Execute_ModifyFloatValue(UObject* O, FName ValueName, bool bDelta, float Value); \
	static bool Execute_ModifyIntValue(UObject* O, FName ValueName, bool bDelta, int32 Value); \
	static bool Execute_ModifyNameValue(UObject* O, FName ValueName, FName NameValue); \
	static bool Execute_OnDialogueEvent(UObject* O, UDlgContext* Context, FName EventName); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgDialogueParticipant_h_16_INCLASS_IINTERFACE \
protected: \
	virtual ~IDlgDialogueParticipant() {} \
public: \
	typedef UDlgDialogueParticipant UClassType; \
	typedef IDlgDialogueParticipant ThisClass; \
	static bool Execute_CheckCondition(const UObject* O, const UDlgContext* Context, FName ConditionName); \
	static bool Execute_GetBoolValue(const UObject* O, FName ValueName); \
	static float Execute_GetFloatValue(const UObject* O, FName ValueName); \
	static int32 Execute_GetIntValue(const UObject* O, FName ValueName); \
	static FName Execute_GetNameValue(const UObject* O, FName ValueName); \
	static FText Execute_GetParticipantDisplayName(const UObject* O, FName ActiveSpeaker); \
	static ETextGender Execute_GetParticipantGender(const UObject* O); \
	static UTexture2D* Execute_GetParticipantIcon(const UObject* O, FName ActiveSpeaker, FName ActiveSpeakerState); \
	static FName Execute_GetParticipantName(const UObject* O); \
	static bool Execute_ModifyBoolValue(UObject* O, FName ValueName, bool bNewValue); \
	static bool Execute_ModifyFloatValue(UObject* O, FName ValueName, bool bDelta, float Value); \
	static bool Execute_ModifyIntValue(UObject* O, FName ValueName, bool bDelta, int32 Value); \
	static bool Execute_ModifyNameValue(UObject* O, FName ValueName, FName NameValue); \
	static bool Execute_OnDialogueEvent(UObject* O, UDlgContext* Context, FName EventName); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgDialogueParticipant_h_13_PROLOG \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgDialogueParticipant_h_16_EVENT_PARMS


#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgDialogueParticipant_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgDialogueParticipant_h_16_SPARSE_DATA \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgDialogueParticipant_h_16_RPC_WRAPPERS \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgDialogueParticipant_h_16_CALLBACK_WRAPPERS \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgDialogueParticipant_h_16_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgDialogueParticipant_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgDialogueParticipant_h_16_SPARSE_DATA \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgDialogueParticipant_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgDialogueParticipant_h_16_CALLBACK_WRAPPERS \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgDialogueParticipant_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DLGSYSTEM_API UClass* StaticClass<class UDlgDialogueParticipant>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgDialogueParticipant_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
