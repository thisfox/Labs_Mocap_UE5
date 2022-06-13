// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RENDERSTREAM_RenderStreamSettings_generated_h
#error "RenderStreamSettings.generated.h already included, missing '#pragma once' in RenderStreamSettings.h"
#endif
#define RENDERSTREAM_RenderStreamSettings_generated_h

#define FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamSettings_h_34_SPARSE_DATA
#define FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamSettings_h_34_RPC_WRAPPERS
#define FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamSettings_h_34_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamSettings_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURenderStreamSettings(); \
	friend struct Z_Construct_UClass_URenderStreamSettings_Statics; \
public: \
	DECLARE_CLASS(URenderStreamSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/RenderStream"), NO_API) \
	DECLARE_SERIALIZER(URenderStreamSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamSettings_h_34_INCLASS \
private: \
	static void StaticRegisterNativesURenderStreamSettings(); \
	friend struct Z_Construct_UClass_URenderStreamSettings_Statics; \
public: \
	DECLARE_CLASS(URenderStreamSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/RenderStream"), NO_API) \
	DECLARE_SERIALIZER(URenderStreamSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamSettings_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URenderStreamSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URenderStreamSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URenderStreamSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URenderStreamSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URenderStreamSettings(URenderStreamSettings&&); \
	NO_API URenderStreamSettings(const URenderStreamSettings&); \
public:


#define FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamSettings_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URenderStreamSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URenderStreamSettings(URenderStreamSettings&&); \
	NO_API URenderStreamSettings(const URenderStreamSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URenderStreamSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URenderStreamSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URenderStreamSettings)


#define FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamSettings_h_31_PROLOG
#define FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamSettings_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamSettings_h_34_SPARSE_DATA \
	FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamSettings_h_34_RPC_WRAPPERS \
	FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamSettings_h_34_INCLASS \
	FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamSettings_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamSettings_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamSettings_h_34_SPARSE_DATA \
	FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamSettings_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamSettings_h_34_INCLASS_NO_PURE_DECLS \
	FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamSettings_h_34_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class RenderStreamSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RENDERSTREAM_API UClass* StaticClass<class URenderStreamSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Live_Denon_Plugins_RenderStream_UE_Source_RenderStream_Public_RenderStreamSettings_h


#define FOREACH_ENUM_ERENDERSTREAMSCENESELECTOR(op) \
	op(ERenderStreamSceneSelector::None) \
	op(ERenderStreamSceneSelector::StreamingLevels) \
	op(ERenderStreamSceneSelector::Maps) 

enum class ERenderStreamSceneSelector;
template<> RENDERSTREAM_API UEnum* StaticEnum<ERenderStreamSceneSelector>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
