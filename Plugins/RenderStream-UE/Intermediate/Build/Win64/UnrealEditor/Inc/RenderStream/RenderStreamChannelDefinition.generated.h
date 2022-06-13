// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACameraActor;
class AActor;
#ifdef RENDERSTREAM_RenderStreamChannelDefinition_generated_h
#error "RenderStreamChannelDefinition.generated.h already included, missing '#pragma once' in RenderStreamChannelDefinition.h"
#endif
#define RENDERSTREAM_RenderStreamChannelDefinition_generated_h

#define FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamChannelDefinition_h_21_DELEGATE \
struct _Script_RenderStream_eventOnInstancedSignature_Parms \
{ \
	ACameraActor* Instance; \
}; \
static inline void FOnInstancedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnInstancedSignature, ACameraActor* Instance) \
{ \
	_Script_RenderStream_eventOnInstancedSignature_Parms Parms; \
	Parms.Instance=Instance; \
	OnInstancedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamChannelDefinition_h_26_SPARSE_DATA
#define FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamChannelDefinition_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsInstanced); \
	DECLARE_FUNCTION(execGetVisibility); \
	DECLARE_FUNCTION(execSetVisibility); \
	DECLARE_FUNCTION(execResetDefaultVisibility); \
	DECLARE_FUNCTION(execGetInstancedCameras);


#define FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamChannelDefinition_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsInstanced); \
	DECLARE_FUNCTION(execGetVisibility); \
	DECLARE_FUNCTION(execSetVisibility); \
	DECLARE_FUNCTION(execResetDefaultVisibility); \
	DECLARE_FUNCTION(execGetInstancedCameras);


#define FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamChannelDefinition_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURenderStreamChannelDefinition(); \
	friend struct Z_Construct_UClass_URenderStreamChannelDefinition_Statics; \
public: \
	DECLARE_CLASS(URenderStreamChannelDefinition, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RenderStream"), NO_API) \
	DECLARE_SERIALIZER(URenderStreamChannelDefinition)


#define FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamChannelDefinition_h_26_INCLASS \
private: \
	static void StaticRegisterNativesURenderStreamChannelDefinition(); \
	friend struct Z_Construct_UClass_URenderStreamChannelDefinition_Statics; \
public: \
	DECLARE_CLASS(URenderStreamChannelDefinition, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RenderStream"), NO_API) \
	DECLARE_SERIALIZER(URenderStreamChannelDefinition)


#define FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamChannelDefinition_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URenderStreamChannelDefinition(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URenderStreamChannelDefinition) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URenderStreamChannelDefinition); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URenderStreamChannelDefinition); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URenderStreamChannelDefinition(URenderStreamChannelDefinition&&); \
	NO_API URenderStreamChannelDefinition(const URenderStreamChannelDefinition&); \
public:


#define FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamChannelDefinition_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URenderStreamChannelDefinition(URenderStreamChannelDefinition&&); \
	NO_API URenderStreamChannelDefinition(const URenderStreamChannelDefinition&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URenderStreamChannelDefinition); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URenderStreamChannelDefinition); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URenderStreamChannelDefinition)


#define FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamChannelDefinition_h_23_PROLOG
#define FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamChannelDefinition_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamChannelDefinition_h_26_SPARSE_DATA \
	FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamChannelDefinition_h_26_RPC_WRAPPERS \
	FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamChannelDefinition_h_26_INCLASS \
	FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamChannelDefinition_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamChannelDefinition_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamChannelDefinition_h_26_SPARSE_DATA \
	FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamChannelDefinition_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamChannelDefinition_h_26_INCLASS_NO_PURE_DECLS \
	FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamChannelDefinition_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RENDERSTREAM_API UClass* StaticClass<class URenderStreamChannelDefinition>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamChannelDefinition_h


#define FOREACH_ENUM_EVISIBILTY(op) \
	op(EVisibilty::Visible) \
	op(EVisibilty::Hidden) 

enum class EVisibilty;
template<> RENDERSTREAM_API UEnum* StaticEnum<EVisibilty>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
