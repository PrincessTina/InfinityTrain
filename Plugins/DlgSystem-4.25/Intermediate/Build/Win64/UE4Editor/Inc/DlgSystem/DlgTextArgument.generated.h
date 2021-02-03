// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DLGSYSTEM_DlgTextArgument_generated_h
#error "DlgTextArgument.generated.h already included, missing '#pragma once' in DlgTextArgument.h"
#endif
#define DLGSYSTEM_DlgTextArgument_generated_h

#define DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgTextArgument_h_55_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDlgTextArgument_Statics; \
	static class UScriptStruct* StaticStruct();


template<> DLGSYSTEM_API UScriptStruct* StaticStruct<struct FDlgTextArgument>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DialogueTutorial2_Plugins_DlgSystem_4_25_Source_DlgSystem_Public_DlgTextArgument_h


#define FOREACH_ENUM_EDLGTEXTARGUMENTTYPE(op) \
	op(EDlgTextArgumentType::DisplayName) \
	op(EDlgTextArgumentType::Gender) \
	op(EDlgTextArgumentType::DialogueInt) \
	op(EDlgTextArgumentType::DialogueFloat) \
	op(EDlgTextArgumentType::ClassInt) \
	op(EDlgTextArgumentType::ClassFloat) \
	op(EDlgTextArgumentType::ClassText) \
	op(EDlgTextArgumentType::Custom) 

enum class EDlgTextArgumentType : uint8;
template<> DLGSYSTEM_API UEnum* StaticEnum<EDlgTextArgumentType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
