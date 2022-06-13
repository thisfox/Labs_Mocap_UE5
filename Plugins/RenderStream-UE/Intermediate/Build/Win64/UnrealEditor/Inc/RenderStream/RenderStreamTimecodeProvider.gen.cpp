// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RenderStream/Public/RenderStreamTimecodeProvider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRenderStreamTimecodeProvider() {}
// Cross Module References
	RENDERSTREAM_API UClass* Z_Construct_UClass_URenderStreamTimecodeProvider_NoRegister();
	RENDERSTREAM_API UClass* Z_Construct_UClass_URenderStreamTimecodeProvider();
	ENGINE_API UClass* Z_Construct_UClass_UTimecodeProvider();
	UPackage* Z_Construct_UPackage__Script_RenderStream();
// End Cross Module References
	void URenderStreamTimecodeProvider::StaticRegisterNativesURenderStreamTimecodeProvider()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URenderStreamTimecodeProvider);
	UClass* Z_Construct_UClass_URenderStreamTimecodeProvider_NoRegister()
	{
		return URenderStreamTimecodeProvider::StaticClass();
	}
	struct Z_Construct_UClass_URenderStreamTimecodeProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URenderStreamTimecodeProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTimecodeProvider,
		(UObject* (*)())Z_Construct_UPackage__Script_RenderStream,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderStreamTimecodeProvider_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Read timecode from the RenderStream connection.\n */" },
		{ "IncludePath", "RenderStreamTimecodeProvider.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RenderStreamTimecodeProvider.h" },
		{ "ToolTip", "Read timecode from the RenderStream connection." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URenderStreamTimecodeProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URenderStreamTimecodeProvider>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URenderStreamTimecodeProvider_Statics::ClassParams = {
		&URenderStreamTimecodeProvider::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_URenderStreamTimecodeProvider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URenderStreamTimecodeProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URenderStreamTimecodeProvider()
	{
		if (!Z_Registration_Info_UClass_URenderStreamTimecodeProvider.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URenderStreamTimecodeProvider.OuterSingleton, Z_Construct_UClass_URenderStreamTimecodeProvider_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URenderStreamTimecodeProvider.OuterSingleton;
	}
	template<> RENDERSTREAM_API UClass* StaticClass<URenderStreamTimecodeProvider>()
	{
		return URenderStreamTimecodeProvider::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URenderStreamTimecodeProvider);
	struct Z_CompiledInDeferFile_FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamTimecodeProvider_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamTimecodeProvider_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URenderStreamTimecodeProvider, URenderStreamTimecodeProvider::StaticClass, TEXT("URenderStreamTimecodeProvider"), &Z_Registration_Info_UClass_URenderStreamTimecodeProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URenderStreamTimecodeProvider), 608805373U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamTimecodeProvider_h_133314245(TEXT("/Script/RenderStream"),
		Z_CompiledInDeferFile_FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamTimecodeProvider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamTimecodeProvider_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
