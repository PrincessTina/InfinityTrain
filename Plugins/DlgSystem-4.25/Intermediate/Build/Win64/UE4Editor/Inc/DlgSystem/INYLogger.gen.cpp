// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystem/Public/Logging/INYLogger.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeINYLogger() {}
// Cross Module References
	DLGSYSTEM_API UEnum* Z_Construct_UEnum_DlgSystem_ENYLoggerLogLevel();
	UPackage* Z_Construct_UPackage__Script_DlgSystem();
// End Cross Module References
	static UEnum* ENYLoggerLogLevel_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DlgSystem_ENYLoggerLogLevel, Z_Construct_UPackage__Script_DlgSystem(), TEXT("ENYLoggerLogLevel"));
		}
		return Singleton;
	}
	template<> DLGSYSTEM_API UEnum* StaticEnum<ENYLoggerLogLevel>()
	{
		return ENYLoggerLogLevel_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENYLoggerLogLevel(ENYLoggerLogLevel_StaticEnum, TEXT("/Script/DlgSystem"), TEXT("ENYLoggerLogLevel"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DlgSystem_ENYLoggerLogLevel_Hash() { return 3759729621U; }
	UEnum* Z_Construct_UEnum_DlgSystem_ENYLoggerLogLevel()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DlgSystem();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENYLoggerLogLevel"), 0, Get_Z_Construct_UEnum_DlgSystem_ENYLoggerLogLevel_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENYLoggerLogLevel::NoLogging", (int64)ENYLoggerLogLevel::NoLogging },
				{ "ENYLoggerLogLevel::Error", (int64)ENYLoggerLogLevel::Error },
				{ "ENYLoggerLogLevel::Warning", (int64)ENYLoggerLogLevel::Warning },
				{ "ENYLoggerLogLevel::Info", (int64)ENYLoggerLogLevel::Info },
				{ "ENYLoggerLogLevel::Debug", (int64)ENYLoggerLogLevel::Debug },
				{ "ENYLoggerLogLevel::Trace", (int64)ENYLoggerLogLevel::Trace },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Debug.Comment", "// Verbose\n" },
				{ "Debug.Name", "ENYLoggerLogLevel::Debug" },
				{ "Debug.ToolTip", "Verbose" },
				{ "Error.Comment", "// Kills the program\n// TODO use\n// Fatal,\n" },
				{ "Error.Name", "ENYLoggerLogLevel::Error" },
				{ "Error.ToolTip", "Kills the program\nTODO use\nFatal," },
				{ "Info.Comment", "// Log\n" },
				{ "Info.Name", "ENYLoggerLogLevel::Info" },
				{ "Info.ToolTip", "Log" },
				{ "ModuleRelativePath", "Public/Logging/INYLogger.h" },
				{ "NoLogging.Name", "ENYLoggerLogLevel::NoLogging" },
				{ "Trace.Comment", "// VeryVerbose\n// Used for\n" },
				{ "Trace.Name", "ENYLoggerLogLevel::Trace" },
				{ "Trace.ToolTip", "VeryVerbose\nUsed for" },
				{ "Warning.Name", "ENYLoggerLogLevel::Warning" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DlgSystem,
				nullptr,
				"ENYLoggerLogLevel",
				"ENYLoggerLogLevel",
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
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
