// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDlgContext;
class UObject;
#ifdef DLGSYSTEM_DlgConditionCustom_generated_h
#error "DlgConditionCustom.generated.h already included, missing '#pragma once' in DlgConditionCustom.h"
#endif
#define DLGSYSTEM_DlgConditionCustom_generated_h

#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgConditionCustom_h_17_SPARSE_DATA
#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgConditionCustom_h_17_RPC_WRAPPERS \
	virtual bool IsConditionMet_Implementation(const UDlgContext* Context, const UObject* Participant); \
 \
	DECLARE_FUNCTION(execIsConditionMet);


#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgConditionCustom_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsConditionMet);


#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgConditionCustom_h_17_EVENT_PARMS \
	struct DlgConditionCustom_eventIsConditionMet_Parms \
	{ \
		const UDlgContext* Context; \
		const UObject* Participant; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		DlgConditionCustom_eventIsConditionMet_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgConditionCustom_h_17_CALLBACK_WRAPPERS
#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgConditionCustom_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDlgConditionCustom(); \
	friend struct Z_Construct_UClass_UDlgConditionCustom_Statics; \
public: \
	DECLARE_CLASS(UDlgConditionCustom, UDlgObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DlgSystem"), NO_API) \
	DECLARE_SERIALIZER(UDlgConditionCustom)


#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgConditionCustom_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUDlgConditionCustom(); \
	friend struct Z_Construct_UClass_UDlgConditionCustom_Statics; \
public: \
	DECLARE_CLASS(UDlgConditionCustom, UDlgObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DlgSystem"), NO_API) \
	DECLARE_SERIALIZER(UDlgConditionCustom)


#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgConditionCustom_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDlgConditionCustom(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDlgConditionCustom) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDlgConditionCustom); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDlgConditionCustom); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDlgConditionCustom(UDlgConditionCustom&&); \
	NO_API UDlgConditionCustom(const UDlgConditionCustom&); \
public:


#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgConditionCustom_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDlgConditionCustom(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDlgConditionCustom(UDlgConditionCustom&&); \
	NO_API UDlgConditionCustom(const UDlgConditionCustom&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDlgConditionCustom); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDlgConditionCustom); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDlgConditionCustom)


#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgConditionCustom_h_17_PRIVATE_PROPERTY_OFFSET
#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgConditionCustom_h_14_PROLOG \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgConditionCustom_h_17_EVENT_PARMS


#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgConditionCustom_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgConditionCustom_h_17_PRIVATE_PROPERTY_OFFSET \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgConditionCustom_h_17_SPARSE_DATA \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgConditionCustom_h_17_RPC_WRAPPERS \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgConditionCustom_h_17_CALLBACK_WRAPPERS \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgConditionCustom_h_17_INCLASS \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgConditionCustom_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgConditionCustom_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgConditionCustom_h_17_PRIVATE_PROPERTY_OFFSET \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgConditionCustom_h_17_SPARSE_DATA \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgConditionCustom_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgConditionCustom_h_17_CALLBACK_WRAPPERS \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgConditionCustom_h_17_INCLASS_NO_PURE_DECLS \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgConditionCustom_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DLGSYSTEM_API UClass* StaticClass<class UDlgConditionCustom>();

#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgConditionCustom_h_32_SPARSE_DATA
#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgConditionCustom_h_32_RPC_WRAPPERS
#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgConditionCustom_h_32_RPC_WRAPPERS_NO_PURE_DECLS
#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgConditionCustom_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDlgConditionCustomHideCategories(); \
	friend struct Z_Construct_UClass_UDlgConditionCustomHideCategories_Statics; \
public: \
	DECLARE_CLASS(UDlgConditionCustomHideCategories, UDlgConditionCustom, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DlgSystem"), NO_API) \
	DECLARE_SERIALIZER(UDlgConditionCustomHideCategories)


#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgConditionCustom_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUDlgConditionCustomHideCategories(); \
	friend struct Z_Construct_UClass_UDlgConditionCustomHideCategories_Statics; \
public: \
	DECLARE_CLASS(UDlgConditionCustomHideCategories, UDlgConditionCustom, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DlgSystem"), NO_API) \
	DECLARE_SERIALIZER(UDlgConditionCustomHideCategories)


#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgConditionCustom_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDlgConditionCustomHideCategories(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDlgConditionCustomHideCategories) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDlgConditionCustomHideCategories); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDlgConditionCustomHideCategories); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDlgConditionCustomHideCategories(UDlgConditionCustomHideCategories&&); \
	NO_API UDlgConditionCustomHideCategories(const UDlgConditionCustomHideCategories&); \
public:


#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgConditionCustom_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDlgConditionCustomHideCategories(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDlgConditionCustomHideCategories(UDlgConditionCustomHideCategories&&); \
	NO_API UDlgConditionCustomHideCategories(const UDlgConditionCustomHideCategories&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDlgConditionCustomHideCategories); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDlgConditionCustomHideCategories); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDlgConditionCustomHideCategories)


#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgConditionCustom_h_32_PRIVATE_PROPERTY_OFFSET
#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgConditionCustom_h_29_PROLOG
#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgConditionCustom_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgConditionCustom_h_32_PRIVATE_PROPERTY_OFFSET \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgConditionCustom_h_32_SPARSE_DATA \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgConditionCustom_h_32_RPC_WRAPPERS \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgConditionCustom_h_32_INCLASS \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgConditionCustom_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgConditionCustom_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgConditionCustom_h_32_PRIVATE_PROPERTY_OFFSET \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgConditionCustom_h_32_SPARSE_DATA \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgConditionCustom_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgConditionCustom_h_32_INCLASS_NO_PURE_DECLS \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgConditionCustom_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DLGSYSTEM_API UClass* StaticClass<class UDlgConditionCustomHideCategories>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgConditionCustom_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
