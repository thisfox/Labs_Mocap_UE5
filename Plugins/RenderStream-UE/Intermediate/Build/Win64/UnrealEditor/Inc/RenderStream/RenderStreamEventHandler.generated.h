// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FStreamInfo;
#ifdef RENDERSTREAM_RenderStreamEventHandler_generated_h
#error "RenderStreamEventHandler.generated.h already included, missing '#pragma once' in RenderStreamEventHandler.h"
#endif
#define RENDERSTREAM_RenderStreamEventHandler_generated_h

#define FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamEventHandler_h_9_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStreamInfo_Statics; \
	RENDERSTREAM_API static class UScriptStruct* StaticStruct();


template<> RENDERSTREAM_API UScriptStruct* StaticStruct<struct FStreamInfo>();

#define FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamEventHandler_h_22_DELEGATE \
struct _Script_RenderStream_eventRenderStreamStreamsChangedEvent_Parms \
{ \
	TArray<FStreamInfo> StreamInfo; \
}; \
static inline void FRenderStreamStreamsChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& RenderStreamStreamsChangedEvent, TArray<FStreamInfo> const& StreamInfo) \
{ \
	_Script_RenderStream_eventRenderStreamStreamsChangedEvent_Parms Parms; \
	Parms.StreamInfo=StreamInfo; \
	RenderStreamStreamsChangedEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamEventHandler_h_27_SPARSE_DATA
#define FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamEventHandler_h_27_RPC_WRAPPERS
#define FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamEventHandler_h_27_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamEventHandler_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARenderStreamEventHandler(); \
	friend struct Z_Construct_UClass_ARenderStreamEventHandler_Statics; \
public: \
	DECLARE_CLASS(ARenderStreamEventHandler, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RenderStream"), NO_API) \
	DECLARE_SERIALIZER(ARenderStreamEventHandler)


#define FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamEventHandler_h_27_INCLASS \
private: \
	static void StaticRegisterNativesARenderStreamEventHandler(); \
	friend struct Z_Construct_UClass_ARenderStreamEventHandler_Statics; \
public: \
	DECLARE_CLASS(ARenderStreamEventHandler, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RenderStream"), NO_API) \
	DECLARE_SERIALIZER(ARenderStreamEventHandler)


#define FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamEventHandler_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARenderStreamEventHandler(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARenderStreamEventHandler) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARenderStreamEventHandler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARenderStreamEventHandler); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARenderStreamEventHandler(ARenderStreamEventHandler&&); \
	NO_API ARenderStreamEventHandler(const ARenderStreamEventHandler&); \
public:


#define FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamEventHandler_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARenderStreamEventHandler(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARenderStreamEventHandler(ARenderStreamEventHandler&&); \
	NO_API ARenderStreamEventHandler(const ARenderStreamEventHandler&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARenderStreamEventHandler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARenderStreamEventHandler); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARenderStreamEventHandler)


#define FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamEventHandler_h_24_PROLOG
#define FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamEventHandler_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamEventHandler_h_27_SPARSE_DATA \
	FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamEventHandler_h_27_RPC_WRAPPERS \
	FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamEventHandler_h_27_INCLASS \
	FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamEventHandler_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamEventHandler_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamEventHandler_h_27_SPARSE_DATA \
	FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamEventHandler_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamEventHandler_h_27_INCLASS_NO_PURE_DECLS \
	FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamEventHandler_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RENDERSTREAM_API UClass* StaticClass<class ARenderStreamEventHandler>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamEventHandler_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
