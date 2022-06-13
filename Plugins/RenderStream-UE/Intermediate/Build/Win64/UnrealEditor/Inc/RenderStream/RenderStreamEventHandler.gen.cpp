// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RenderStream/Public/RenderStreamEventHandler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRenderStreamEventHandler() {}
// Cross Module References
	RENDERSTREAM_API UScriptStruct* Z_Construct_UScriptStruct_FStreamInfo();
	UPackage* Z_Construct_UPackage__Script_RenderStream();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox2D();
	RENDERSTREAM_API UFunction* Z_Construct_UDelegateFunction_RenderStream_RenderStreamStreamsChangedEvent__DelegateSignature();
	RENDERSTREAM_API UClass* Z_Construct_UClass_ARenderStreamEventHandler_NoRegister();
	RENDERSTREAM_API UClass* Z_Construct_UClass_ARenderStreamEventHandler();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StreamInfo;
class UScriptStruct* FStreamInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StreamInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StreamInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStreamInfo, Z_Construct_UPackage__Script_RenderStream(), TEXT("StreamInfo"));
	}
	return Z_Registration_Info_UScriptStruct_StreamInfo.OuterSingleton;
}
template<> RENDERSTREAM_API UScriptStruct* StaticStruct<FStreamInfo>()
{
	return FStreamInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStreamInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Channel_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Channel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Region_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Region;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreamInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RenderStreamEventHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStreamInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStreamInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreamInfo_Statics::NewProp_Channel_MetaData[] = {
		{ "Category", "Stream" },
		{ "ModuleRelativePath", "Public/RenderStreamEventHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStreamInfo_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStreamInfo, Channel), METADATA_PARAMS(Z_Construct_UScriptStruct_FStreamInfo_Statics::NewProp_Channel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamInfo_Statics::NewProp_Channel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreamInfo_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Stream" },
		{ "ModuleRelativePath", "Public/RenderStreamEventHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStreamInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStreamInfo, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FStreamInfo_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamInfo_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreamInfo_Statics::NewProp_Region_MetaData[] = {
		{ "Category", "Stream" },
		{ "ModuleRelativePath", "Public/RenderStreamEventHandler.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStreamInfo_Statics::NewProp_Region = { "Region", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStreamInfo, Region), Z_Construct_UScriptStruct_FBox2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FStreamInfo_Statics::NewProp_Region_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamInfo_Statics::NewProp_Region_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStreamInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreamInfo_Statics::NewProp_Channel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreamInfo_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreamInfo_Statics::NewProp_Region,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStreamInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RenderStream,
		nullptr,
		&NewStructOps,
		"StreamInfo",
		sizeof(FStreamInfo),
		alignof(FStreamInfo),
		Z_Construct_UScriptStruct_FStreamInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStreamInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStreamInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_StreamInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StreamInfo.InnerSingleton, Z_Construct_UScriptStruct_FStreamInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StreamInfo.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_RenderStream_RenderStreamStreamsChangedEvent__DelegateSignature_Statics
	{
		struct _Script_RenderStream_eventRenderStreamStreamsChangedEvent_Parms
		{
			TArray<FStreamInfo> StreamInfo;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_StreamInfo_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StreamInfo_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StreamInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_RenderStream_RenderStreamStreamsChangedEvent__DelegateSignature_Statics::NewProp_StreamInfo_Inner = { "StreamInfo", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FStreamInfo, METADATA_PARAMS(nullptr, 0) }; // 802020640
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RenderStream_RenderStreamStreamsChangedEvent__DelegateSignature_Statics::NewProp_StreamInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_RenderStream_RenderStreamStreamsChangedEvent__DelegateSignature_Statics::NewProp_StreamInfo = { "StreamInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_RenderStream_eventRenderStreamStreamsChangedEvent_Parms, StreamInfo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_RenderStream_RenderStreamStreamsChangedEvent__DelegateSignature_Statics::NewProp_StreamInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RenderStream_RenderStreamStreamsChangedEvent__DelegateSignature_Statics::NewProp_StreamInfo_MetaData)) }; // 802020640
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RenderStream_RenderStreamStreamsChangedEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RenderStream_RenderStreamStreamsChangedEvent__DelegateSignature_Statics::NewProp_StreamInfo_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RenderStream_RenderStreamStreamsChangedEvent__DelegateSignature_Statics::NewProp_StreamInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RenderStream_RenderStreamStreamsChangedEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RenderStreamEventHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RenderStream_RenderStreamStreamsChangedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RenderStream, nullptr, "RenderStreamStreamsChangedEvent__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_RenderStream_RenderStreamStreamsChangedEvent__DelegateSignature_Statics::_Script_RenderStream_eventRenderStreamStreamsChangedEvent_Parms), Z_Construct_UDelegateFunction_RenderStream_RenderStreamStreamsChangedEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RenderStream_RenderStreamStreamsChangedEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_RenderStream_RenderStreamStreamsChangedEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RenderStream_RenderStreamStreamsChangedEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_RenderStream_RenderStreamStreamsChangedEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RenderStream_RenderStreamStreamsChangedEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void ARenderStreamEventHandler::StaticRegisterNativesARenderStreamEventHandler()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARenderStreamEventHandler);
	UClass* Z_Construct_UClass_ARenderStreamEventHandler_NoRegister()
	{
		return ARenderStreamEventHandler::StaticClass();
	}
	struct Z_Construct_UClass_ARenderStreamEventHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnRenderStreamStreamsChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRenderStreamStreamsChanged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARenderStreamEventHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_RenderStream,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARenderStreamEventHandler_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "RenderStream" },
		{ "IncludePath", "RenderStreamEventHandler.h" },
		{ "ModuleRelativePath", "Public/RenderStreamEventHandler.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARenderStreamEventHandler_Statics::NewProp_OnRenderStreamStreamsChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/RenderStreamEventHandler.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ARenderStreamEventHandler_Statics::NewProp_OnRenderStreamStreamsChanged = { "OnRenderStreamStreamsChanged", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARenderStreamEventHandler, OnRenderStreamStreamsChanged), Z_Construct_UDelegateFunction_RenderStream_RenderStreamStreamsChangedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ARenderStreamEventHandler_Statics::NewProp_OnRenderStreamStreamsChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARenderStreamEventHandler_Statics::NewProp_OnRenderStreamStreamsChanged_MetaData)) }; // 1043355697
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARenderStreamEventHandler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARenderStreamEventHandler_Statics::NewProp_OnRenderStreamStreamsChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARenderStreamEventHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARenderStreamEventHandler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARenderStreamEventHandler_Statics::ClassParams = {
		&ARenderStreamEventHandler::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARenderStreamEventHandler_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ARenderStreamEventHandler_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARenderStreamEventHandler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARenderStreamEventHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARenderStreamEventHandler()
	{
		if (!Z_Registration_Info_UClass_ARenderStreamEventHandler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARenderStreamEventHandler.OuterSingleton, Z_Construct_UClass_ARenderStreamEventHandler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARenderStreamEventHandler.OuterSingleton;
	}
	template<> RENDERSTREAM_API UClass* StaticClass<ARenderStreamEventHandler>()
	{
		return ARenderStreamEventHandler::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARenderStreamEventHandler);
	struct Z_CompiledInDeferFile_FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamEventHandler_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamEventHandler_h_Statics::ScriptStructInfo[] = {
		{ FStreamInfo::StaticStruct, Z_Construct_UScriptStruct_FStreamInfo_Statics::NewStructOps, TEXT("StreamInfo"), &Z_Registration_Info_UScriptStruct_StreamInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStreamInfo), 802020640U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamEventHandler_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARenderStreamEventHandler, ARenderStreamEventHandler::StaticClass, TEXT("ARenderStreamEventHandler"), &Z_Registration_Info_UClass_ARenderStreamEventHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARenderStreamEventHandler), 2524049603U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamEventHandler_h_3690051459(TEXT("/Script/RenderStream"),
		Z_CompiledInDeferFile_FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamEventHandler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamEventHandler_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamEventHandler_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamEventHandler_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
