// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RenderStream/Public/RenderStreamSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRenderStreamSettings() {}
// Cross Module References
	RENDERSTREAM_API UEnum* Z_Construct_UEnum_RenderStream_ERenderStreamSceneSelector();
	UPackage* Z_Construct_UPackage__Script_RenderStream();
	RENDERSTREAM_API UClass* Z_Construct_UClass_URenderStreamSettings_NoRegister();
	RENDERSTREAM_API UClass* Z_Construct_UClass_URenderStreamSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	OPENCOLORIO_API UScriptStruct* Z_Construct_UScriptStruct_FOpenColorIODisplayConfiguration();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERenderStreamSceneSelector;
	static UEnum* ERenderStreamSceneSelector_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERenderStreamSceneSelector.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERenderStreamSceneSelector.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RenderStream_ERenderStreamSceneSelector, Z_Construct_UPackage__Script_RenderStream(), TEXT("ERenderStreamSceneSelector"));
		}
		return Z_Registration_Info_UEnum_ERenderStreamSceneSelector.OuterSingleton;
	}
	template<> RENDERSTREAM_API UEnum* StaticEnum<ERenderStreamSceneSelector>()
	{
		return ERenderStreamSceneSelector_StaticEnum();
	}
	struct Z_Construct_UEnum_RenderStream_ERenderStreamSceneSelector_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RenderStream_ERenderStreamSceneSelector_Statics::Enumerators[] = {
		{ "ERenderStreamSceneSelector::None", (int64)ERenderStreamSceneSelector::None },
		{ "ERenderStreamSceneSelector::StreamingLevels", (int64)ERenderStreamSceneSelector::StreamingLevels },
		{ "ERenderStreamSceneSelector::Maps", (int64)ERenderStreamSceneSelector::Maps },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RenderStream_ERenderStreamSceneSelector_Statics::Enum_MetaDataParams[] = {
		{ "Maps.Comment", "// RenderStream will load maps, without changing any sub-level visibility settings.\n" },
		{ "Maps.DisplayName", "Maps" },
		{ "Maps.Name", "ERenderStreamSceneSelector::Maps" },
		{ "Maps.ToolTip", "RenderStream will load maps, without changing any sub-level visibility settings." },
		{ "ModuleRelativePath", "Public/RenderStreamSettings.h" },
		{ "None.Comment", "// RenderStream will not manage level loading or visibility.\n" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "ERenderStreamSceneSelector::None" },
		{ "None.ToolTip", "RenderStream will not manage level loading or visibility." },
		{ "StreamingLevels.Comment", "// RenderStream will manage streaming level visibility, but not level loading.\n" },
		{ "StreamingLevels.DisplayName", "Streaming levels" },
		{ "StreamingLevels.Name", "ERenderStreamSceneSelector::StreamingLevels" },
		{ "StreamingLevels.ToolTip", "RenderStream will manage streaming level visibility, but not level loading." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RenderStream_ERenderStreamSceneSelector_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RenderStream,
		nullptr,
		"ERenderStreamSceneSelector",
		"ERenderStreamSceneSelector",
		Z_Construct_UEnum_RenderStream_ERenderStreamSceneSelector_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RenderStream_ERenderStreamSceneSelector_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RenderStream_ERenderStreamSceneSelector_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RenderStream_ERenderStreamSceneSelector_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RenderStream_ERenderStreamSceneSelector()
	{
		if (!Z_Registration_Info_UEnum_ERenderStreamSceneSelector.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERenderStreamSceneSelector.InnerSingleton, Z_Construct_UEnum_RenderStream_ERenderStreamSceneSelector_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERenderStreamSceneSelector.InnerSingleton;
	}
	void URenderStreamSettings::StaticRegisterNativesURenderStreamSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URenderStreamSettings);
	UClass* Z_Construct_UClass_URenderStreamSettings_NoRegister()
	{
		return URenderStreamSettings::StaticClass();
	}
	struct Z_Construct_UClass_URenderStreamSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SceneSelector_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneSelector_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SceneSelector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OCIOConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OCIOConfig;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URenderStreamSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RenderStream,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderStreamSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Implements the settings for the RenderStream plugin.\n*/" },
		{ "IncludePath", "RenderStreamSettings.h" },
		{ "ModuleRelativePath", "Public/RenderStreamSettings.h" },
		{ "ToolTip", "Implements the settings for the RenderStream plugin." },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_URenderStreamSettings_Statics::NewProp_SceneSelector_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderStreamSettings_Statics::NewProp_SceneSelector_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/RenderStreamSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URenderStreamSettings_Statics::NewProp_SceneSelector = { "SceneSelector", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URenderStreamSettings, SceneSelector), Z_Construct_UEnum_RenderStream_ERenderStreamSceneSelector, METADATA_PARAMS(Z_Construct_UClass_URenderStreamSettings_Statics::NewProp_SceneSelector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderStreamSettings_Statics::NewProp_SceneSelector_MetaData)) }; // 1740830951
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderStreamSettings_Statics::NewProp_OCIOConfig_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/RenderStreamSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URenderStreamSettings_Statics::NewProp_OCIOConfig = { "OCIOConfig", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URenderStreamSettings, OCIOConfig), Z_Construct_UScriptStruct_FOpenColorIODisplayConfiguration, METADATA_PARAMS(Z_Construct_UClass_URenderStreamSettings_Statics::NewProp_OCIOConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderStreamSettings_Statics::NewProp_OCIOConfig_MetaData)) }; // 245940718
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URenderStreamSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderStreamSettings_Statics::NewProp_SceneSelector_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderStreamSettings_Statics::NewProp_SceneSelector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderStreamSettings_Statics::NewProp_OCIOConfig,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URenderStreamSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URenderStreamSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URenderStreamSettings_Statics::ClassParams = {
		&URenderStreamSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URenderStreamSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URenderStreamSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_URenderStreamSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URenderStreamSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URenderStreamSettings()
	{
		if (!Z_Registration_Info_UClass_URenderStreamSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URenderStreamSettings.OuterSingleton, Z_Construct_UClass_URenderStreamSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URenderStreamSettings.OuterSingleton;
	}
	template<> RENDERSTREAM_API UClass* StaticClass<URenderStreamSettings>()
	{
		return URenderStreamSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URenderStreamSettings);
	struct Z_CompiledInDeferFile_FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamSettings_h_Statics::EnumInfo[] = {
		{ ERenderStreamSceneSelector_StaticEnum, TEXT("ERenderStreamSceneSelector"), &Z_Registration_Info_UEnum_ERenderStreamSceneSelector, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1740830951U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URenderStreamSettings, URenderStreamSettings::StaticClass, TEXT("URenderStreamSettings"), &Z_Registration_Info_UClass_URenderStreamSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URenderStreamSettings), 2218764688U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamSettings_h_2311912039(TEXT("/Script/RenderStream"),
		Z_CompiledInDeferFile_FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamSettings_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
