// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RenderStream/Public/RenderStreamChannelCacheAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRenderStreamChannelCacheAsset() {}
// Cross Module References
	RENDERSTREAM_API UEnum* Z_Construct_UEnum_RenderStream_RenderStreamParameterType();
	UPackage* Z_Construct_UPackage__Script_RenderStream();
	RENDERSTREAM_API UScriptStruct* Z_Construct_UScriptStruct_FRenderStreamExposedParameterEntry();
	RENDERSTREAM_API UClass* Z_Construct_UClass_URenderStreamChannelCacheAsset_NoRegister();
	RENDERSTREAM_API UClass* Z_Construct_UClass_URenderStreamChannelCacheAsset();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_RenderStreamParameterType;
	static UEnum* RenderStreamParameterType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_RenderStreamParameterType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_RenderStreamParameterType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RenderStream_RenderStreamParameterType, Z_Construct_UPackage__Script_RenderStream(), TEXT("RenderStreamParameterType"));
		}
		return Z_Registration_Info_UEnum_RenderStreamParameterType.OuterSingleton;
	}
	template<> RENDERSTREAM_API UEnum* StaticEnum<RenderStreamParameterType>()
	{
		return RenderStreamParameterType_StaticEnum();
	}
	struct Z_Construct_UEnum_RenderStream_RenderStreamParameterType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RenderStream_RenderStreamParameterType_Statics::Enumerators[] = {
		{ "RenderStreamParameterType::Float", (int64)RenderStreamParameterType::Float },
		{ "RenderStreamParameterType::Image", (int64)RenderStreamParameterType::Image },
		{ "RenderStreamParameterType::Pose", (int64)RenderStreamParameterType::Pose },
		{ "RenderStreamParameterType::Transform", (int64)RenderStreamParameterType::Transform },
		{ "RenderStreamParameterType::Text", (int64)RenderStreamParameterType::Text },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RenderStream_RenderStreamParameterType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "//DECLARE_LOG_CATEGORY_EXTERN(LogRenderStreamChannelCacheAsset, Log, All);\n" },
		{ "Float.Name", "RenderStreamParameterType::Float" },
		{ "Image.Name", "RenderStreamParameterType::Image" },
		{ "ModuleRelativePath", "Public/RenderStreamChannelCacheAsset.h" },
		{ "Pose.Name", "RenderStreamParameterType::Pose" },
		{ "Text.Name", "RenderStreamParameterType::Text" },
		{ "ToolTip", "DECLARE_LOG_CATEGORY_EXTERN(LogRenderStreamChannelCacheAsset, Log, All);" },
		{ "Transform.Name", "RenderStreamParameterType::Transform" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RenderStream_RenderStreamParameterType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RenderStream,
		nullptr,
		"RenderStreamParameterType",
		"RenderStreamParameterType",
		Z_Construct_UEnum_RenderStream_RenderStreamParameterType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RenderStream_RenderStreamParameterType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RenderStream_RenderStreamParameterType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RenderStream_RenderStreamParameterType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RenderStream_RenderStreamParameterType()
	{
		if (!Z_Registration_Info_UEnum_RenderStreamParameterType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_RenderStreamParameterType.InnerSingleton, Z_Construct_UEnum_RenderStream_RenderStreamParameterType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_RenderStreamParameterType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RenderStreamExposedParameterEntry;
class UScriptStruct* FRenderStreamExposedParameterEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RenderStreamExposedParameterEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RenderStreamExposedParameterEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRenderStreamExposedParameterEntry, Z_Construct_UPackage__Script_RenderStream(), TEXT("RenderStreamExposedParameterEntry"));
	}
	return Z_Registration_Info_UScriptStruct_RenderStreamExposedParameterEntry.OuterSingleton;
}
template<> RENDERSTREAM_API UScriptStruct* StaticStruct<FRenderStreamExposedParameterEntry>()
{
	return FRenderStreamExposedParameterEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRenderStreamExposedParameterEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Group;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Min;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Max;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Step_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Step;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultValue;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Options_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Options;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DmxOffset_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DmxOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DmxType_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_DmxType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenderStreamExposedParameterEntry_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RenderStreamChannelCacheAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRenderStreamExposedParameterEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRenderStreamExposedParameterEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenderStreamExposedParameterEntry_Statics::NewProp_Group_MetaData[] = {
		{ "Category", "ExposedParameter" },
		{ "ModuleRelativePath", "Public/RenderStreamChannelCacheAsset.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRenderStreamExposedParameterEntry_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRenderStreamExposedParameterEntry, Group), METADATA_PARAMS(Z_Construct_UScriptStruct_FRenderStreamExposedParameterEntry_Statics::NewProp_Group_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderStreamExposedParameterEntry_Statics::NewProp_Group_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenderStreamExposedParameterEntry_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "ExposedParameter" },
		{ "ModuleRelativePath", "Public/RenderStreamChannelCacheAsset.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRenderStreamExposedParameterEntry_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRenderStreamExposedParameterEntry, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FRenderStreamExposedParameterEntry_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderStreamExposedParameterEntry_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenderStreamExposedParameterEntry_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "ExposedParameter" },
		{ "ModuleRelativePath", "Public/RenderStreamChannelCacheAsset.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRenderStreamExposedParameterEntry_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRenderStreamExposedParameterEntry, Key), METADATA_PARAMS(Z_Construct_UScriptStruct_FRenderStreamExposedParameterEntry_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderStreamExposedParameterEntry_Statics::NewProp_Key_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRenderStreamExposedParameterEntry_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenderStreamExposedParameterEntry_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "ExposedParameter" },
		{ "ModuleRelativePath", "Public/RenderStreamChannelCacheAsset.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRenderStreamExposedParameterEntry_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRenderStreamExposedParameterEntry, Type), Z_Construct_UEnum_RenderStream_RenderStreamParameterType, METADATA_PARAMS(Z_Construct_UScriptStruct_FRenderStreamExposedParameterEntry_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderStreamExposedParameterEntry_Statics::NewProp_Type_MetaData)) }; // 3952232572
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenderStreamExposedParameterEntry_Statics::NewProp_Min_MetaData[] = {
		{ "Category", "ExposedParameter" },
		{ "ModuleRelativePath", "Public/RenderStreamChannelCacheAsset.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRenderStreamExposedParameterEntry_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRenderStreamExposedParameterEntry, Min), METADATA_PARAMS(Z_Construct_UScriptStruct_FRenderStreamExposedParameterEntry_Statics::NewProp_Min_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderStreamExposedParameterEntry_Statics::NewProp_Min_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenderStreamExposedParameterEntry_Statics::NewProp_Max_MetaData[] = {
		{ "Category", "ExposedParameter" },
		{ "ModuleRelativePath", "Public/RenderStreamChannelCacheAsset.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRenderStreamExposedParameterEntry_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRenderStreamExposedParameterEntry, Max), METADATA_PARAMS(Z_Construct_UScriptStruct_FRenderStreamExposedParameterEntry_Statics::NewProp_Max_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderStreamExposedParameterEntry_Statics::NewProp_Max_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenderStreamExposedParameterEntry_Statics::NewProp_Step_MetaData[] = {
		{ "Category", "ExposedParameter" },
		{ "ModuleRelativePath", "Public/RenderStreamChannelCacheAsset.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRenderStreamExposedParameterEntry_Statics::NewProp_Step = { "Step", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRenderStreamExposedParameterEntry, Step), METADATA_PARAMS(Z_Construct_UScriptStruct_FRenderStreamExposedParameterEntry_Statics::NewProp_Step_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderStreamExposedParameterEntry_Statics::NewProp_Step_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenderStreamExposedParameterEntry_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "Category", "ExposedParameter" },
		{ "ModuleRelativePath", "Public/RenderStreamChannelCacheAsset.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRenderStreamExposedParameterEntry_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRenderStreamExposedParameterEntry, DefaultValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FRenderStreamExposedParameterEntry_Statics::NewProp_DefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderStreamExposedParameterEntry_Statics::NewProp_DefaultValue_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRenderStreamExposedParameterEntry_Statics::NewProp_Options_Inner = { "Options", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenderStreamExposedParameterEntry_Statics::NewProp_Options_MetaData[] = {
		{ "Category", "ExposedParameter" },
		{ "ModuleRelativePath", "Public/RenderStreamChannelCacheAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRenderStreamExposedParameterEntry_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRenderStreamExposedParameterEntry, Options), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRenderStreamExposedParameterEntry_Statics::NewProp_Options_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderStreamExposedParameterEntry_Statics::NewProp_Options_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenderStreamExposedParameterEntry_Statics::NewProp_DmxOffset_MetaData[] = {
		{ "Category", "ExposedParameter" },
		{ "ModuleRelativePath", "Public/RenderStreamChannelCacheAsset.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRenderStreamExposedParameterEntry_Statics::NewProp_DmxOffset = { "DmxOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRenderStreamExposedParameterEntry, DmxOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FRenderStreamExposedParameterEntry_Statics::NewProp_DmxOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderStreamExposedParameterEntry_Statics::NewProp_DmxOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenderStreamExposedParameterEntry_Statics::NewProp_DmxType_MetaData[] = {
		{ "Category", "ExposedParameter" },
		{ "ModuleRelativePath", "Public/RenderStreamChannelCacheAsset.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FRenderStreamExposedParameterEntry_Statics::NewProp_DmxType = { "DmxType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRenderStreamExposedParameterEntry, DmxType), METADATA_PARAMS(Z_Construct_UScriptStruct_FRenderStreamExposedParameterEntry_Statics::NewProp_DmxType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderStreamExposedParameterEntry_Statics::NewProp_DmxType_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRenderStreamExposedParameterEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderStreamExposedParameterEntry_Statics::NewProp_Group,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderStreamExposedParameterEntry_Statics::NewProp_DisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderStreamExposedParameterEntry_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderStreamExposedParameterEntry_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderStreamExposedParameterEntry_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderStreamExposedParameterEntry_Statics::NewProp_Min,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderStreamExposedParameterEntry_Statics::NewProp_Max,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderStreamExposedParameterEntry_Statics::NewProp_Step,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderStreamExposedParameterEntry_Statics::NewProp_DefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderStreamExposedParameterEntry_Statics::NewProp_Options_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderStreamExposedParameterEntry_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderStreamExposedParameterEntry_Statics::NewProp_DmxOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderStreamExposedParameterEntry_Statics::NewProp_DmxType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRenderStreamExposedParameterEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RenderStream,
		nullptr,
		&NewStructOps,
		"RenderStreamExposedParameterEntry",
		sizeof(FRenderStreamExposedParameterEntry),
		alignof(FRenderStreamExposedParameterEntry),
		Z_Construct_UScriptStruct_FRenderStreamExposedParameterEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderStreamExposedParameterEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRenderStreamExposedParameterEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderStreamExposedParameterEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRenderStreamExposedParameterEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_RenderStreamExposedParameterEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RenderStreamExposedParameterEntry.InnerSingleton, Z_Construct_UScriptStruct_FRenderStreamExposedParameterEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RenderStreamExposedParameterEntry.InnerSingleton;
	}
	void URenderStreamChannelCacheAsset::StaticRegisterNativesURenderStreamChannelCacheAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URenderStreamChannelCacheAsset);
	UClass* Z_Construct_UClass_URenderStreamChannelCacheAsset_NoRegister()
	{
		return URenderStreamChannelCacheAsset::StaticClass();
	}
	struct Z_Construct_UClass_URenderStreamChannelCacheAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Level;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SubLevels_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubLevels_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_SubLevels;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Channels_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Channels_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_Channels;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExposedParams_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExposedParams_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExposedParams;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URenderStreamChannelCacheAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RenderStream,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderStreamChannelCacheAsset_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "RenderStream" },
		{ "IncludePath", "RenderStreamChannelCacheAsset.h" },
		{ "ModuleRelativePath", "Public/RenderStreamChannelCacheAsset.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderStreamChannelCacheAsset_Statics::NewProp_Level_MetaData[] = {
		{ "Category", "ChannelCacheAsset" },
		{ "ModuleRelativePath", "Public/RenderStreamChannelCacheAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URenderStreamChannelCacheAsset_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URenderStreamChannelCacheAsset, Level), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_URenderStreamChannelCacheAsset_Statics::NewProp_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderStreamChannelCacheAsset_Statics::NewProp_Level_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URenderStreamChannelCacheAsset_Statics::NewProp_SubLevels_ElementProp = { "SubLevels", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderStreamChannelCacheAsset_Statics::NewProp_SubLevels_MetaData[] = {
		{ "Category", "ChannelCacheAsset" },
		{ "ModuleRelativePath", "Public/RenderStreamChannelCacheAsset.h" },
	};
#endif
	static_assert(TModels<CGetTypeHashable, FSoftObjectPath>::Value, "The structure 'FSoftObjectPath' is used in a TSet but does not have a GetValueTypeHash defined");
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_URenderStreamChannelCacheAsset_Statics::NewProp_SubLevels = { "SubLevels", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URenderStreamChannelCacheAsset, SubLevels), METADATA_PARAMS(Z_Construct_UClass_URenderStreamChannelCacheAsset_Statics::NewProp_SubLevels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderStreamChannelCacheAsset_Statics::NewProp_SubLevels_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URenderStreamChannelCacheAsset_Statics::NewProp_Channels_ElementProp = { "Channels", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderStreamChannelCacheAsset_Statics::NewProp_Channels_MetaData[] = {
		{ "Category", "ChannelCacheAsset" },
		{ "ModuleRelativePath", "Public/RenderStreamChannelCacheAsset.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_URenderStreamChannelCacheAsset_Statics::NewProp_Channels = { "Channels", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URenderStreamChannelCacheAsset, Channels), METADATA_PARAMS(Z_Construct_UClass_URenderStreamChannelCacheAsset_Statics::NewProp_Channels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderStreamChannelCacheAsset_Statics::NewProp_Channels_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URenderStreamChannelCacheAsset_Statics::NewProp_ExposedParams_Inner = { "ExposedParams", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRenderStreamExposedParameterEntry, METADATA_PARAMS(nullptr, 0) }; // 622460473
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderStreamChannelCacheAsset_Statics::NewProp_ExposedParams_MetaData[] = {
		{ "Category", "ChannelCacheAsset" },
		{ "ModuleRelativePath", "Public/RenderStreamChannelCacheAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URenderStreamChannelCacheAsset_Statics::NewProp_ExposedParams = { "ExposedParams", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URenderStreamChannelCacheAsset, ExposedParams), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URenderStreamChannelCacheAsset_Statics::NewProp_ExposedParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderStreamChannelCacheAsset_Statics::NewProp_ExposedParams_MetaData)) }; // 622460473
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URenderStreamChannelCacheAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderStreamChannelCacheAsset_Statics::NewProp_Level,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderStreamChannelCacheAsset_Statics::NewProp_SubLevels_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderStreamChannelCacheAsset_Statics::NewProp_SubLevels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderStreamChannelCacheAsset_Statics::NewProp_Channels_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderStreamChannelCacheAsset_Statics::NewProp_Channels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderStreamChannelCacheAsset_Statics::NewProp_ExposedParams_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderStreamChannelCacheAsset_Statics::NewProp_ExposedParams,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URenderStreamChannelCacheAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URenderStreamChannelCacheAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URenderStreamChannelCacheAsset_Statics::ClassParams = {
		&URenderStreamChannelCacheAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URenderStreamChannelCacheAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URenderStreamChannelCacheAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URenderStreamChannelCacheAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URenderStreamChannelCacheAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URenderStreamChannelCacheAsset()
	{
		if (!Z_Registration_Info_UClass_URenderStreamChannelCacheAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URenderStreamChannelCacheAsset.OuterSingleton, Z_Construct_UClass_URenderStreamChannelCacheAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URenderStreamChannelCacheAsset.OuterSingleton;
	}
	template<> RENDERSTREAM_API UClass* StaticClass<URenderStreamChannelCacheAsset>()
	{
		return URenderStreamChannelCacheAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URenderStreamChannelCacheAsset);
	struct Z_CompiledInDeferFile_FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamChannelCacheAsset_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamChannelCacheAsset_h_Statics::EnumInfo[] = {
		{ RenderStreamParameterType_StaticEnum, TEXT("RenderStreamParameterType"), &Z_Registration_Info_UEnum_RenderStreamParameterType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3952232572U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamChannelCacheAsset_h_Statics::ScriptStructInfo[] = {
		{ FRenderStreamExposedParameterEntry::StaticStruct, Z_Construct_UScriptStruct_FRenderStreamExposedParameterEntry_Statics::NewStructOps, TEXT("RenderStreamExposedParameterEntry"), &Z_Registration_Info_UScriptStruct_RenderStreamExposedParameterEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRenderStreamExposedParameterEntry), 622460473U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamChannelCacheAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URenderStreamChannelCacheAsset, URenderStreamChannelCacheAsset::StaticClass, TEXT("URenderStreamChannelCacheAsset"), &Z_Registration_Info_UClass_URenderStreamChannelCacheAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URenderStreamChannelCacheAsset), 782435168U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamChannelCacheAsset_h_2369595490(TEXT("/Script/RenderStream"),
		Z_CompiledInDeferFile_FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamChannelCacheAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamChannelCacheAsset_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamChannelCacheAsset_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamChannelCacheAsset_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamChannelCacheAsset_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamChannelCacheAsset_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
