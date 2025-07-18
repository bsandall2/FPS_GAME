// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FMODBlueprintStatics.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFMODAsset;
class UFMODAudioComponent;
class UFMODBank;
class UFMODBus;
class UFMODEvent;
class UFMODVCA;
class UObject;
class USceneComponent;
struct FFMODEventInstance;
#ifdef FMODSTUDIO_FMODBlueprintStatics_generated_h
#error "FMODBlueprintStatics.generated.h already included, missing '#pragma once' in FMODBlueprintStatics.h"
#endif
#define FMODSTUDIO_FMODBlueprintStatics_generated_h

#define FID_Unreal_Engine_Projects_FPS_GAME_GameJam_1_Plugins_fmodstudio20308ue5_3win64_FMODStudio_Source_FMODStudio_Classes_FMODBlueprintStatics_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFMODEventInstance_Statics; \
	FMODSTUDIO_API static class UScriptStruct* StaticStruct();


template<> FMODSTUDIO_API UScriptStruct* StaticStruct<struct FFMODEventInstance>();

#define FID_Unreal_Engine_Projects_FPS_GAME_GameJam_1_Plugins_fmodstudio20308ue5_3win64_FMODStudio_Source_FMODStudio_Classes_FMODBlueprintStatics_h_43_SPARSE_DATA
#define FID_Unreal_Engine_Projects_FPS_GAME_GameJam_1_Plugins_fmodstudio20308ue5_3win64_FMODStudio_Source_FMODStudio_Classes_FMODBlueprintStatics_h_43_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal_Engine_Projects_FPS_GAME_GameJam_1_Plugins_fmodstudio20308ue5_3win64_FMODStudio_Source_FMODStudio_Classes_FMODBlueprintStatics_h_43_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal_Engine_Projects_FPS_GAME_GameJam_1_Plugins_fmodstudio20308ue5_3win64_FMODStudio_Source_FMODStudio_Classes_FMODBlueprintStatics_h_43_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetLocale); \
	DECLARE_FUNCTION(execMixerResume); \
	DECLARE_FUNCTION(execMixerSuspend); \
	DECLARE_FUNCTION(execSetOutputDriverByIndex); \
	DECLARE_FUNCTION(execSetOutputDriverByName); \
	DECLARE_FUNCTION(execGetOutputDrivers); \
	DECLARE_FUNCTION(execEventInstanceSetTransform); \
	DECLARE_FUNCTION(execEventInstanceKeyOff); \
	DECLARE_FUNCTION(execEventInstanceRelease); \
	DECLARE_FUNCTION(execEventInstanceStop); \
	DECLARE_FUNCTION(execEventInstancePlay); \
	DECLARE_FUNCTION(execEventInstanceSetProperty); \
	DECLARE_FUNCTION(execEventInstanceGetParameterValue); \
	DECLARE_FUNCTION(execEventInstanceGetParameter); \
	DECLARE_FUNCTION(execEventInstanceSetParameter); \
	DECLARE_FUNCTION(execEventInstanceSetPaused); \
	DECLARE_FUNCTION(execEventInstanceSetPitch); \
	DECLARE_FUNCTION(execEventInstanceSetVolume); \
	DECLARE_FUNCTION(execEventInstanceIsValid); \
	DECLARE_FUNCTION(execGetGlobalParameterValueByName); \
	DECLARE_FUNCTION(execGetGlobalParameterByName); \
	DECLARE_FUNCTION(execSetGlobalParameterByName); \
	DECLARE_FUNCTION(execVCASetVolume); \
	DECLARE_FUNCTION(execBusStopAllEvents); \
	DECLARE_FUNCTION(execBusSetMute); \
	DECLARE_FUNCTION(execBusSetPaused); \
	DECLARE_FUNCTION(execBusSetVolume); \
	DECLARE_FUNCTION(execFindEventInstances); \
	DECLARE_FUNCTION(execUnloadEventSampleData); \
	DECLARE_FUNCTION(execLoadEventSampleData); \
	DECLARE_FUNCTION(execUnloadBankSampleData); \
	DECLARE_FUNCTION(execLoadBankSampleData); \
	DECLARE_FUNCTION(execIsBankLoaded); \
	DECLARE_FUNCTION(execUnloadBank); \
	DECLARE_FUNCTION(execLoadBank); \
	DECLARE_FUNCTION(execFindEventByName); \
	DECLARE_FUNCTION(execFindAssetByName); \
	DECLARE_FUNCTION(execPlayEventAttached); \
	DECLARE_FUNCTION(execPlayEventAtLocation); \
	DECLARE_FUNCTION(execPlayEvent2D);


#define FID_Unreal_Engine_Projects_FPS_GAME_GameJam_1_Plugins_fmodstudio20308ue5_3win64_FMODStudio_Source_FMODStudio_Classes_FMODBlueprintStatics_h_43_ACCESSORS
#define FID_Unreal_Engine_Projects_FPS_GAME_GameJam_1_Plugins_fmodstudio20308ue5_3win64_FMODStudio_Source_FMODStudio_Classes_FMODBlueprintStatics_h_43_INCLASS \
private: \
	static void StaticRegisterNativesUFMODBlueprintStatics(); \
	friend struct Z_Construct_UClass_UFMODBlueprintStatics_Statics; \
public: \
	DECLARE_CLASS(UFMODBlueprintStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FMODStudio"), NO_API) \
	DECLARE_SERIALIZER(UFMODBlueprintStatics)


#define FID_Unreal_Engine_Projects_FPS_GAME_GameJam_1_Plugins_fmodstudio20308ue5_3win64_FMODStudio_Source_FMODStudio_Classes_FMODBlueprintStatics_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFMODBlueprintStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFMODBlueprintStatics) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFMODBlueprintStatics); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFMODBlueprintStatics); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFMODBlueprintStatics(UFMODBlueprintStatics&&); \
	NO_API UFMODBlueprintStatics(const UFMODBlueprintStatics&); \
public: \
	NO_API virtual ~UFMODBlueprintStatics();


#define FID_Unreal_Engine_Projects_FPS_GAME_GameJam_1_Plugins_fmodstudio20308ue5_3win64_FMODStudio_Source_FMODStudio_Classes_FMODBlueprintStatics_h_40_PROLOG
#define FID_Unreal_Engine_Projects_FPS_GAME_GameJam_1_Plugins_fmodstudio20308ue5_3win64_FMODStudio_Source_FMODStudio_Classes_FMODBlueprintStatics_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Engine_Projects_FPS_GAME_GameJam_1_Plugins_fmodstudio20308ue5_3win64_FMODStudio_Source_FMODStudio_Classes_FMODBlueprintStatics_h_43_SPARSE_DATA \
	FID_Unreal_Engine_Projects_FPS_GAME_GameJam_1_Plugins_fmodstudio20308ue5_3win64_FMODStudio_Source_FMODStudio_Classes_FMODBlueprintStatics_h_43_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal_Engine_Projects_FPS_GAME_GameJam_1_Plugins_fmodstudio20308ue5_3win64_FMODStudio_Source_FMODStudio_Classes_FMODBlueprintStatics_h_43_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal_Engine_Projects_FPS_GAME_GameJam_1_Plugins_fmodstudio20308ue5_3win64_FMODStudio_Source_FMODStudio_Classes_FMODBlueprintStatics_h_43_RPC_WRAPPERS \
	FID_Unreal_Engine_Projects_FPS_GAME_GameJam_1_Plugins_fmodstudio20308ue5_3win64_FMODStudio_Source_FMODStudio_Classes_FMODBlueprintStatics_h_43_ACCESSORS \
	FID_Unreal_Engine_Projects_FPS_GAME_GameJam_1_Plugins_fmodstudio20308ue5_3win64_FMODStudio_Source_FMODStudio_Classes_FMODBlueprintStatics_h_43_INCLASS \
	FID_Unreal_Engine_Projects_FPS_GAME_GameJam_1_Plugins_fmodstudio20308ue5_3win64_FMODStudio_Source_FMODStudio_Classes_FMODBlueprintStatics_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FMODSTUDIO_API UClass* StaticClass<class UFMODBlueprintStatics>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Engine_Projects_FPS_GAME_GameJam_1_Plugins_fmodstudio20308ue5_3win64_FMODStudio_Source_FMODStudio_Classes_FMODBlueprintStatics_h


#define FOREACH_ENUM_EFMOD_STUDIO_STOP_MODE(op) \
	op(ALLOWFADEOUT) \
	op(IMMEDIATE) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
