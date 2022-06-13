// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RenderStream/Public/RenderStreamChannelDefinition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRenderStreamChannelDefinition() {}
// Cross Module References
	RENDERSTREAM_API UEnum* Z_Construct_UEnum_RenderStream_EVisibilty();
	UPackage* Z_Construct_UPackage__Script_RenderStream();
	RENDERSTREAM_API UFunction* Z_Construct_USparseDelegateFunction_RenderStream_OnInstancedSignature__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_ACameraActor_NoRegister();
	RENDERSTREAM_API UClass* Z_Construct_UClass_URenderStreamChannelDefinition_NoRegister();
	RENDERSTREAM_API UClass* Z_Construct_UClass_URenderStreamChannelDefinition();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEngineShowFlagsSetting();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVisibilty;
	static UEnum* EVisibilty_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVisibilty.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVisibilty.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RenderStream_EVisibilty, Z_Construct_UPackage__Script_RenderStream(), TEXT("EVisibilty"));
		}
		return Z_Registration_Info_UEnum_EVisibilty.OuterSingleton;
	}
	template<> RENDERSTREAM_API UEnum* StaticEnum<EVisibilty>()
	{
		return EVisibilty_StaticEnum();
	}
	struct Z_Construct_UEnum_RenderStream_EVisibilty_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RenderStream_EVisibilty_Statics::Enumerators[] = {
		{ "EVisibilty::Visible", (int64)EVisibilty::Visible },
		{ "EVisibilty::Hidden", (int64)EVisibilty::Hidden },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RenderStream_EVisibilty_Statics::Enum_MetaDataParams[] = {
		{ "Hidden.Name", "EVisibilty::Hidden" },
		{ "ModuleRelativePath", "Public/RenderStreamChannelDefinition.h" },
		{ "Visible.Name", "EVisibilty::Visible" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RenderStream_EVisibilty_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RenderStream,
		nullptr,
		"EVisibilty",
		"EVisibilty",
		Z_Construct_UEnum_RenderStream_EVisibilty_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RenderStream_EVisibilty_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RenderStream_EVisibilty_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RenderStream_EVisibilty_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RenderStream_EVisibilty()
	{
		if (!Z_Registration_Info_UEnum_EVisibilty.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVisibilty.InnerSingleton, Z_Construct_UEnum_RenderStream_EVisibilty_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVisibilty.InnerSingleton;
	}
	struct Z_Construct_USparseDelegateFunction_RenderStream_OnInstancedSignature__DelegateSignature_Statics
	{
		struct _Script_RenderStream_eventOnInstancedSignature_Parms
		{
			ACameraActor* Instance;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_RenderStream_OnInstancedSignature__DelegateSignature_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_RenderStream_eventOnInstancedSignature_Parms, Instance), Z_Construct_UClass_ACameraActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_USparseDelegateFunction_RenderStream_OnInstancedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_RenderStream_OnInstancedSignature__DelegateSignature_Statics::NewProp_Instance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_USparseDelegateFunction_RenderStream_OnInstancedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RenderStreamChannelDefinition.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_RenderStream_OnInstancedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RenderStream, nullptr, "OnInstancedSignature__DelegateSignature", "RenderStreamChannelDefinition", "OnCameraInstanced", sizeof(Z_Construct_USparseDelegateFunction_RenderStream_OnInstancedSignature__DelegateSignature_Statics::_Script_RenderStream_eventOnInstancedSignature_Parms), Z_Construct_USparseDelegateFunction_RenderStream_OnInstancedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_RenderStream_OnInstancedSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_USparseDelegateFunction_RenderStream_OnInstancedSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_RenderStream_OnInstancedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_USparseDelegateFunction_RenderStream_OnInstancedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_USparseDelegateFunction_RenderStream_OnInstancedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(URenderStreamChannelDefinition::execIsInstanced)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInstanced();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderStreamChannelDefinition::execGetVisibility)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetVisibility(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderStreamChannelDefinition::execSetVisibility)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_UBOOL(Z_Param_IsVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVisibility(Z_Param_Actor,Z_Param_IsVisible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderStreamChannelDefinition::execResetDefaultVisibility)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetDefaultVisibility(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderStreamChannelDefinition::execGetInstancedCameras)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ACameraActor*>*)Z_Param__Result=P_THIS->GetInstancedCameras();
		P_NATIVE_END;
	}
	void URenderStreamChannelDefinition::StaticRegisterNativesURenderStreamChannelDefinition()
	{
		UClass* Class = URenderStreamChannelDefinition::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetInstancedCameras", &URenderStreamChannelDefinition::execGetInstancedCameras },
			{ "GetVisibility", &URenderStreamChannelDefinition::execGetVisibility },
			{ "IsInstanced", &URenderStreamChannelDefinition::execIsInstanced },
			{ "ResetDefaultVisibility", &URenderStreamChannelDefinition::execResetDefaultVisibility },
			{ "SetVisibility", &URenderStreamChannelDefinition::execSetVisibility },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URenderStreamChannelDefinition_GetInstancedCameras_Statics
	{
		struct RenderStreamChannelDefinition_eventGetInstancedCameras_Parms
		{
			TArray<ACameraActor*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URenderStreamChannelDefinition_GetInstancedCameras_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACameraActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URenderStreamChannelDefinition_GetInstancedCameras_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RenderStreamChannelDefinition_eventGetInstancedCameras_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderStreamChannelDefinition_GetInstancedCameras_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderStreamChannelDefinition_GetInstancedCameras_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderStreamChannelDefinition_GetInstancedCameras_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderStreamChannelDefinition_GetInstancedCameras_Statics::Function_MetaDataParams[] = {
		{ "Category", "SceneCapture" },
		{ "ModuleRelativePath", "Public/RenderStreamChannelDefinition.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderStreamChannelDefinition_GetInstancedCameras_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderStreamChannelDefinition, nullptr, "GetInstancedCameras", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderStreamChannelDefinition_GetInstancedCameras_Statics::RenderStreamChannelDefinition_eventGetInstancedCameras_Parms), Z_Construct_UFunction_URenderStreamChannelDefinition_GetInstancedCameras_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderStreamChannelDefinition_GetInstancedCameras_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderStreamChannelDefinition_GetInstancedCameras_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderStreamChannelDefinition_GetInstancedCameras_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderStreamChannelDefinition_GetInstancedCameras()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderStreamChannelDefinition_GetInstancedCameras_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderStreamChannelDefinition_GetVisibility_Statics
	{
		struct RenderStreamChannelDefinition_eventGetVisibility_Parms
		{
			AActor* Actor;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URenderStreamChannelDefinition_GetVisibility_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RenderStreamChannelDefinition_eventGetVisibility_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URenderStreamChannelDefinition_GetVisibility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RenderStreamChannelDefinition_eventGetVisibility_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URenderStreamChannelDefinition_GetVisibility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RenderStreamChannelDefinition_eventGetVisibility_Parms), &Z_Construct_UFunction_URenderStreamChannelDefinition_GetVisibility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderStreamChannelDefinition_GetVisibility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderStreamChannelDefinition_GetVisibility_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderStreamChannelDefinition_GetVisibility_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderStreamChannelDefinition_GetVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Visibility" },
		{ "ModuleRelativePath", "Public/RenderStreamChannelDefinition.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderStreamChannelDefinition_GetVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderStreamChannelDefinition, nullptr, "GetVisibility", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderStreamChannelDefinition_GetVisibility_Statics::RenderStreamChannelDefinition_eventGetVisibility_Parms), Z_Construct_UFunction_URenderStreamChannelDefinition_GetVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderStreamChannelDefinition_GetVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderStreamChannelDefinition_GetVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderStreamChannelDefinition_GetVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderStreamChannelDefinition_GetVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderStreamChannelDefinition_GetVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderStreamChannelDefinition_IsInstanced_Statics
	{
		struct RenderStreamChannelDefinition_eventIsInstanced_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URenderStreamChannelDefinition_IsInstanced_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RenderStreamChannelDefinition_eventIsInstanced_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URenderStreamChannelDefinition_IsInstanced_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RenderStreamChannelDefinition_eventIsInstanced_Parms), &Z_Construct_UFunction_URenderStreamChannelDefinition_IsInstanced_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderStreamChannelDefinition_IsInstanced_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderStreamChannelDefinition_IsInstanced_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderStreamChannelDefinition_IsInstanced_Statics::Function_MetaDataParams[] = {
		{ "Category", "Visibility" },
		{ "ModuleRelativePath", "Public/RenderStreamChannelDefinition.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderStreamChannelDefinition_IsInstanced_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderStreamChannelDefinition, nullptr, "IsInstanced", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderStreamChannelDefinition_IsInstanced_Statics::RenderStreamChannelDefinition_eventIsInstanced_Parms), Z_Construct_UFunction_URenderStreamChannelDefinition_IsInstanced_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderStreamChannelDefinition_IsInstanced_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderStreamChannelDefinition_IsInstanced_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderStreamChannelDefinition_IsInstanced_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderStreamChannelDefinition_IsInstanced()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderStreamChannelDefinition_IsInstanced_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderStreamChannelDefinition_ResetDefaultVisibility_Statics
	{
		struct RenderStreamChannelDefinition_eventResetDefaultVisibility_Parms
		{
			AActor* Actor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URenderStreamChannelDefinition_ResetDefaultVisibility_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RenderStreamChannelDefinition_eventResetDefaultVisibility_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderStreamChannelDefinition_ResetDefaultVisibility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderStreamChannelDefinition_ResetDefaultVisibility_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderStreamChannelDefinition_ResetDefaultVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Visibility" },
		{ "ModuleRelativePath", "Public/RenderStreamChannelDefinition.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderStreamChannelDefinition_ResetDefaultVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderStreamChannelDefinition, nullptr, "ResetDefaultVisibility", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderStreamChannelDefinition_ResetDefaultVisibility_Statics::RenderStreamChannelDefinition_eventResetDefaultVisibility_Parms), Z_Construct_UFunction_URenderStreamChannelDefinition_ResetDefaultVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderStreamChannelDefinition_ResetDefaultVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderStreamChannelDefinition_ResetDefaultVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderStreamChannelDefinition_ResetDefaultVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderStreamChannelDefinition_ResetDefaultVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderStreamChannelDefinition_ResetDefaultVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderStreamChannelDefinition_SetVisibility_Statics
	{
		struct RenderStreamChannelDefinition_eventSetVisibility_Parms
		{
			AActor* Actor;
			bool IsVisible;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static void NewProp_IsVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsVisible;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URenderStreamChannelDefinition_SetVisibility_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RenderStreamChannelDefinition_eventSetVisibility_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URenderStreamChannelDefinition_SetVisibility_Statics::NewProp_IsVisible_SetBit(void* Obj)
	{
		((RenderStreamChannelDefinition_eventSetVisibility_Parms*)Obj)->IsVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URenderStreamChannelDefinition_SetVisibility_Statics::NewProp_IsVisible = { "IsVisible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RenderStreamChannelDefinition_eventSetVisibility_Parms), &Z_Construct_UFunction_URenderStreamChannelDefinition_SetVisibility_Statics::NewProp_IsVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderStreamChannelDefinition_SetVisibility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderStreamChannelDefinition_SetVisibility_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderStreamChannelDefinition_SetVisibility_Statics::NewProp_IsVisible,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderStreamChannelDefinition_SetVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Visibility" },
		{ "ModuleRelativePath", "Public/RenderStreamChannelDefinition.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderStreamChannelDefinition_SetVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderStreamChannelDefinition, nullptr, "SetVisibility", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderStreamChannelDefinition_SetVisibility_Statics::RenderStreamChannelDefinition_eventSetVisibility_Parms), Z_Construct_UFunction_URenderStreamChannelDefinition_SetVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderStreamChannelDefinition_SetVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderStreamChannelDefinition_SetVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderStreamChannelDefinition_SetVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderStreamChannelDefinition_SetVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderStreamChannelDefinition_SetVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URenderStreamChannelDefinition);
	UClass* Z_Construct_UClass_URenderStreamChannelDefinition_NoRegister()
	{
		return URenderStreamChannelDefinition::StaticClass();
	}
	struct Z_Construct_UClass_URenderStreamChannelDefinition_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Visible_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Visible_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_Visible;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Hidden_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hidden_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_Hidden;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_DefaultVisibility_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultVisibility_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultVisibility;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShowFlagSettings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShowFlagSettings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ShowFlagSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnableCameraMotionBlur_MetaData[];
#endif
		static void NewProp_EnableCameraMotionBlur_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableCameraMotionBlur;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCameraInstanced_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCameraInstanced;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URenderStreamChannelDefinition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_RenderStream,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URenderStreamChannelDefinition_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URenderStreamChannelDefinition_GetInstancedCameras, "GetInstancedCameras" }, // 1864491663
		{ &Z_Construct_UFunction_URenderStreamChannelDefinition_GetVisibility, "GetVisibility" }, // 1559556316
		{ &Z_Construct_UFunction_URenderStreamChannelDefinition_IsInstanced, "IsInstanced" }, // 4070250049
		{ &Z_Construct_UFunction_URenderStreamChannelDefinition_ResetDefaultVisibility, "ResetDefaultVisibility" }, // 790401213
		{ &Z_Construct_UFunction_URenderStreamChannelDefinition_SetVisibility, "SetVisibility" }, // 596993220
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderStreamChannelDefinition_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "RenderStream" },
		{ "IncludePath", "RenderStreamChannelDefinition.h" },
		{ "ModuleRelativePath", "Public/RenderStreamChannelDefinition.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_URenderStreamChannelDefinition_Statics::NewProp_Visible_ElementProp = { "Visible", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderStreamChannelDefinition_Statics::NewProp_Visible_MetaData[] = {
		{ "Category", "Visibility" },
		{ "DisplayName", "Force Visible" },
		{ "ModuleRelativePath", "Public/RenderStreamChannelDefinition.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_URenderStreamChannelDefinition_Statics::NewProp_Visible = { "Visible", nullptr, (EPropertyFlags)0x0014000200000005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URenderStreamChannelDefinition, Visible), METADATA_PARAMS(Z_Construct_UClass_URenderStreamChannelDefinition_Statics::NewProp_Visible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderStreamChannelDefinition_Statics::NewProp_Visible_MetaData)) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_URenderStreamChannelDefinition_Statics::NewProp_Hidden_ElementProp = { "Hidden", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderStreamChannelDefinition_Statics::NewProp_Hidden_MetaData[] = {
		{ "Category", "Visibility" },
		{ "DisplayName", "Force Hiddens" },
		{ "ModuleRelativePath", "Public/RenderStreamChannelDefinition.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_URenderStreamChannelDefinition_Statics::NewProp_Hidden = { "Hidden", nullptr, (EPropertyFlags)0x0014000200000005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URenderStreamChannelDefinition, Hidden), METADATA_PARAMS(Z_Construct_UClass_URenderStreamChannelDefinition_Statics::NewProp_Hidden_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderStreamChannelDefinition_Statics::NewProp_Hidden_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_URenderStreamChannelDefinition_Statics::NewProp_DefaultVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderStreamChannelDefinition_Statics::NewProp_DefaultVisibility_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "ModuleRelativePath", "Public/RenderStreamChannelDefinition.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URenderStreamChannelDefinition_Statics::NewProp_DefaultVisibility = { "DefaultVisibility", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URenderStreamChannelDefinition, DefaultVisibility), Z_Construct_UEnum_RenderStream_EVisibilty, METADATA_PARAMS(Z_Construct_UClass_URenderStreamChannelDefinition_Statics::NewProp_DefaultVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderStreamChannelDefinition_Statics::NewProp_DefaultVisibility_MetaData)) }; // 1674139160
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URenderStreamChannelDefinition_Statics::NewProp_ShowFlagSettings_Inner = { "ShowFlagSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEngineShowFlagsSetting, METADATA_PARAMS(nullptr, 0) }; // 1304059452
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderStreamChannelDefinition_Statics::NewProp_ShowFlagSettings_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "ModuleRelativePath", "Public/RenderStreamChannelDefinition.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URenderStreamChannelDefinition_Statics::NewProp_ShowFlagSettings = { "ShowFlagSettings", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URenderStreamChannelDefinition, ShowFlagSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URenderStreamChannelDefinition_Statics::NewProp_ShowFlagSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderStreamChannelDefinition_Statics::NewProp_ShowFlagSettings_MetaData)) }; // 1304059452
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderStreamChannelDefinition_Statics::NewProp_EnableCameraMotionBlur_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "ModuleRelativePath", "Public/RenderStreamChannelDefinition.h" },
	};
#endif
	void Z_Construct_UClass_URenderStreamChannelDefinition_Statics::NewProp_EnableCameraMotionBlur_SetBit(void* Obj)
	{
		((URenderStreamChannelDefinition*)Obj)->EnableCameraMotionBlur = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URenderStreamChannelDefinition_Statics::NewProp_EnableCameraMotionBlur = { "EnableCameraMotionBlur", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URenderStreamChannelDefinition), &Z_Construct_UClass_URenderStreamChannelDefinition_Statics::NewProp_EnableCameraMotionBlur_SetBit, METADATA_PARAMS(Z_Construct_UClass_URenderStreamChannelDefinition_Statics::NewProp_EnableCameraMotionBlur_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderStreamChannelDefinition_Statics::NewProp_EnableCameraMotionBlur_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderStreamChannelDefinition_Statics::NewProp_OnCameraInstanced_MetaData[] = {
		{ "Category", "Components|Activation" },
		{ "ModuleRelativePath", "Public/RenderStreamChannelDefinition.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URenderStreamChannelDefinition_Statics::NewProp_OnCameraInstanced = { "OnCameraInstanced", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URenderStreamChannelDefinition, OnCameraInstanced), Z_Construct_USparseDelegateFunction_RenderStream_OnInstancedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URenderStreamChannelDefinition_Statics::NewProp_OnCameraInstanced_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderStreamChannelDefinition_Statics::NewProp_OnCameraInstanced_MetaData)) }; // 2854941091
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URenderStreamChannelDefinition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderStreamChannelDefinition_Statics::NewProp_Visible_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderStreamChannelDefinition_Statics::NewProp_Visible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderStreamChannelDefinition_Statics::NewProp_Hidden_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderStreamChannelDefinition_Statics::NewProp_Hidden,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderStreamChannelDefinition_Statics::NewProp_DefaultVisibility_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderStreamChannelDefinition_Statics::NewProp_DefaultVisibility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderStreamChannelDefinition_Statics::NewProp_ShowFlagSettings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderStreamChannelDefinition_Statics::NewProp_ShowFlagSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderStreamChannelDefinition_Statics::NewProp_EnableCameraMotionBlur,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderStreamChannelDefinition_Statics::NewProp_OnCameraInstanced,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URenderStreamChannelDefinition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URenderStreamChannelDefinition>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URenderStreamChannelDefinition_Statics::ClassParams = {
		&URenderStreamChannelDefinition::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URenderStreamChannelDefinition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URenderStreamChannelDefinition_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_URenderStreamChannelDefinition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URenderStreamChannelDefinition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URenderStreamChannelDefinition()
	{
		if (!Z_Registration_Info_UClass_URenderStreamChannelDefinition.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URenderStreamChannelDefinition.OuterSingleton, Z_Construct_UClass_URenderStreamChannelDefinition_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URenderStreamChannelDefinition.OuterSingleton;
	}
	template<> RENDERSTREAM_API UClass* StaticClass<URenderStreamChannelDefinition>()
	{
		return URenderStreamChannelDefinition::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URenderStreamChannelDefinition);
	struct Z_CompiledInDeferFile_FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamChannelDefinition_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamChannelDefinition_h_Statics::EnumInfo[] = {
		{ EVisibilty_StaticEnum, TEXT("EVisibilty"), &Z_Registration_Info_UEnum_EVisibilty, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1674139160U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamChannelDefinition_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URenderStreamChannelDefinition, URenderStreamChannelDefinition::StaticClass, TEXT("URenderStreamChannelDefinition"), &Z_Registration_Info_UClass_URenderStreamChannelDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URenderStreamChannelDefinition), 873151007U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamChannelDefinition_h_286772339(TEXT("/Script/RenderStream"),
		Z_CompiledInDeferFile_FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamChannelDefinition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamChannelDefinition_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamChannelDefinition_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamChannelDefinition_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
