// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRenderStream_init() {}
	RENDERSTREAM_API UFunction* Z_Construct_UDelegateFunction_RenderStream_RenderStreamStreamsChangedEvent__DelegateSignature();
	RENDERSTREAM_API UFunction* Z_Construct_USparseDelegateFunction_RenderStream_OnInstancedSignature__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_RenderStream;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_RenderStream()
	{
		if (!Z_Registration_Info_UPackage__Script_RenderStream.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_RenderStream_RenderStreamStreamsChangedEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_USparseDelegateFunction_RenderStream_OnInstancedSignature__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/RenderStream",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x2A8001E7,
				0x0A5727F2,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_RenderStream.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_RenderStream.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_RenderStream(Z_Construct_UPackage__Script_RenderStream, TEXT("/Script/RenderStream"), Z_Registration_Info_UPackage__Script_RenderStream, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x2A8001E7, 0x0A5727F2));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
