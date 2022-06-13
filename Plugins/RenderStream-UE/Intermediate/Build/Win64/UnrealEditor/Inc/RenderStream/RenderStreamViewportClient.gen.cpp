// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RenderStream/Public/RenderStreamViewportClient.h"
#include "Engine/Classes/Engine/Engine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRenderStreamViewportClient() {}
// Cross Module References
	RENDERSTREAM_API UClass* Z_Construct_UClass_URenderStreamViewportClient_NoRegister();
	RENDERSTREAM_API UClass* Z_Construct_UClass_URenderStreamViewportClient();
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_UDisplayClusterViewportClient();
	UPackage* Z_Construct_UPackage__Script_RenderStream();
// End Cross Module References
	void URenderStreamViewportClient::StaticRegisterNativesURenderStreamViewportClient()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URenderStreamViewportClient);
	UClass* Z_Construct_UClass_URenderStreamViewportClient_NoRegister()
	{
		return URenderStreamViewportClient::StaticClass();
	}
	struct Z_Construct_UClass_URenderStreamViewportClient_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URenderStreamViewportClient_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDisplayClusterViewportClient,
		(UObject* (*)())Z_Construct_UPackage__Script_RenderStream,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderStreamViewportClient_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RenderStreamViewportClient.h" },
		{ "ModuleRelativePath", "Public/RenderStreamViewportClient.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URenderStreamViewportClient_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URenderStreamViewportClient>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URenderStreamViewportClient_Statics::ClassParams = {
		&URenderStreamViewportClient::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000ACu,
		METADATA_PARAMS(Z_Construct_UClass_URenderStreamViewportClient_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URenderStreamViewportClient_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URenderStreamViewportClient()
	{
		if (!Z_Registration_Info_UClass_URenderStreamViewportClient.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URenderStreamViewportClient.OuterSingleton, Z_Construct_UClass_URenderStreamViewportClient_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URenderStreamViewportClient.OuterSingleton;
	}
	template<> RENDERSTREAM_API UClass* StaticClass<URenderStreamViewportClient>()
	{
		return URenderStreamViewportClient::StaticClass();
	}
	struct Z_CompiledInDeferFile_FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamViewportClient_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamViewportClient_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URenderStreamViewportClient, URenderStreamViewportClient::StaticClass, TEXT("URenderStreamViewportClient"), &Z_Registration_Info_UClass_URenderStreamViewportClient, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URenderStreamViewportClient), 3267925309U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamViewportClient_h_3455513423(TEXT("/Script/RenderStream"),
		Z_CompiledInDeferFile_FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamViewportClient_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamViewportClient_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
