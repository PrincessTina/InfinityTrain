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
#ifdef DLGSYSTEM_DlgTextArgumentCustom_generated_h
#error "DlgTextArgumentCustom.generated.h already included, missing '#pragma once' in DlgTextArgumentCustom.h"
#endif
#define DLGSYSTEM_DlgTextArgumentCustom_generated_h

#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgTextArgumentCustom_h_18_SPARSE_DATA
#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgTextArgumentCustom_h_18_RPC_WRAPPERS \
	virtual FText GetText_Implementation(const UDlgContext* Context, const UObject* Participant, const FString& DisplayStringParam); \
 \
	DECLARE_FUNCTION(execGetText);


#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgTextArgumentCustom_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetText);


#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgTextArgumentCustom_h_18_EVENT_PARMS \
	struct DlgTextArgumentCustom_eventGetText_Parms \
	{ \
		const UDlgContext* Context; \
		const UObject* Participant; \
		FString DisplayStringParam; \
		FText ReturnValue; \
	};


#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgTextArgumentCustom_h_18_CALLBACK_WRAPPERS
#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgTextArgumentCustom_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDlgTextArgumentCustom(); \
	friend struct Z_Construct_UClass_UDlgTextArgumentCustom_Statics; \
public: \
	DECLARE_CLASS(UDlgTextArgumentCustom, UDlgObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DlgSystem"), NO_API) \
	DECLARE_SERIALIZER(UDlgTextArgumentCustom)


#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgTextArgumentCustom_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUDlgTextArgumentCustom(); \
	friend struct Z_Construct_UClass_UDlgTextArgumentCustom_Statics; \
public: \
	DECLARE_CLASS(UDlgTextArgumentCustom, UDlgObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DlgSystem"), NO_API) \
	DECLARE_SERIALIZER(UDlgTextArgumentCustom)


#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgTextArgumentCustom_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDlgTextArgumentCustom(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDlgTextArgumentCustom) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDlgTextArgumentCustom); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDlgTextArgumentCustom); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDlgTextArgumentCustom(UDlgTextArgumentCustom&&); \
	NO_API UDlgTextArgumentCustom(const UDlgTextArgumentCustom&); \
public:


#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgTextArgumentCustom_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDlgTextArgumentCustom(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDlgTextArgumentCustom(UDlgTextArgumentCustom&&); \
	NO_API UDlgTextArgumentCustom(const UDlgTextArgumentCustom&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDlgTextArgumentCustom); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDlgTextArgumentCustom); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDlgTextArgumentCustom)


#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgTextArgumentCustom_h_18_PRIVATE_PROPERTY_OFFSET
#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgTextArgumentCustom_h_15_PROLOG \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgTextArgumentCustom_h_18_EVENT_PARMS


#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgTextArgumentCustom_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgTextArgumentCustom_h_18_PRIVATE_PROPERTY_OFFSET \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgTextArgumentCustom_h_18_SPARSE_DATA \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgTextArgumentCustom_h_18_RPC_WRAPPERS \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgTextArgumentCustom_h_18_CALLBACK_WRAPPERS \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgTextArgumentCustom_h_18_INCLASS \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgTextArgumentCustom_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgTextArgumentCustom_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgTextArgumentCustom_h_18_PRIVATE_PROPERTY_OFFSET \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgTextArgumentCustom_h_18_SPARSE_DATA \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgTextArgumentCustom_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgTextArgumentCustom_h_18_CALLBACK_WRAPPERS \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgTextArgumentCustom_h_18_INCLASS_NO_PURE_DECLS \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgTextArgumentCustom_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DLGSYSTEM_API UClass* StaticClass<class UDlgTextArgumentCustom>();

#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgTextArgumentCustom_h_32_SPARSE_DATA
#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgTextArgumentCustom_h_32_RPC_WRAPPERS
#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgTextArgumentCustom_h_32_RPC_WRAPPERS_NO_PURE_DECLS
#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgTextArgumentCustom_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDlgTextArgumentCustomHideCategories(); \
	friend struct Z_Construct_UClass_UDlgTextArgumentCustomHideCategories_Statics; \
public: \
	DECLARE_CLASS(UDlgTextArgumentCustomHideCategories, UDlgTextArgumentCustom, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DlgSystem"), NO_API) \
	DECLARE_SERIALIZER(UDlgTextArgumentCustomHideCategories)


#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgTextArgumentCustom_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUDlgTextArgumentCustomHideCategories(); \
	friend struct Z_Construct_UClass_UDlgTextArgumentCustomHideCategories_Statics; \
public: \
	DECLARE_CLASS(UDlgTextArgumentCustomHideCategories, UDlgTextArgumentCustom, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DlgSystem"), NO_API) \
	DECLARE_SERIALIZER(UDlgTextArgumentCustomHideCategories)


#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgTextArgumentCustom_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDlgTextArgumentCustomHideCategories(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDlgTextArgumentCustomHideCategories) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDlgTextArgumentCustomHideCategories); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDlgTextArgumentCustomHideCategories); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDlgTextArgumentCustomHideCategories(UDlgTextArgumentCustomHideCategories&&); \
	NO_API UDlgTextArgumentCustomHideCategories(const UDlgTextArgumentCustomHideCategories&); \
public:


#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgTextArgumentCustom_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDlgTextArgumentCustomHideCategories(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDlgTextArgumentCustomHideCategories(UDlgTextArgumentCustomHideCategories&&); \
	NO_API UDlgTextArgumentCustomHideCategories(const UDlgTextArgumentCustomHideCategories&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDlgTextArgumentCustomHideCategories); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDlgTextArgumentCustomHideCategories); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDlgTextArgumentCustomHideCategories)


#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgTextArgumentCustom_h_32_PRIVATE_PROPERTY_OFFSET
#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgTextArgumentCustom_h_29_PROLOG
#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgTextArgumentCustom_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgTextArgumentCustom_h_32_PRIVATE_PROPERTY_OFFSET \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgTextArgumentCustom_h_32_SPARSE_DATA \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgTextArgumentCustom_h_32_RPC_WRAPPERS \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgTextArgumentCustom_h_32_INCLASS \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgTextArgumentCustom_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgTextArgumentCustom_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgTextArgumentCustom_h_32_PRIVATE_PROPERTY_OFFSET \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgTextArgumentCustom_h_32_SPARSE_DATA \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgTextArgumentCustom_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgTextArgumentCustom_h_32_INCLASS_NO_PURE_DECLS \
	DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgTextArgumentCustom_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DLGSYSTEM_API UClass* StaticClass<class UDlgTextArgumentCustomHideCategories>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgTextArgumentCustom_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
