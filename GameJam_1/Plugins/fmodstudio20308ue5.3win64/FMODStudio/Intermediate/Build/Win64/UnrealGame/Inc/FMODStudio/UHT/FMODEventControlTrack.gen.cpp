// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Private/Sequencer/FMODEventControlTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFMODEventControlTrack() {}
// Cross Module References
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODEventControlTrack();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODEventControlTrack_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneNameableTrack();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FMODStudio();
// End Cross Module References
	void UFMODEventControlTrack::StaticRegisterNativesUFMODEventControlTrack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFMODEventControlTrack);
	UClass* Z_Construct_UClass_UFMODEventControlTrack_NoRegister()
	{
		return UFMODEventControlTrack::StaticClass();
	}
	struct Z_Construct_UClass_UFMODEventControlTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlSections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlSections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ControlSections;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFMODEventControlTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneNameableTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_FMODStudio,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFMODEventControlTrack_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODEventControlTrack_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles control of an FMOD Event */" },
#endif
		{ "IncludePath", "Sequencer/FMODEventControlTrack.h" },
		{ "ModuleRelativePath", "Private/Sequencer/FMODEventControlTrack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles control of an FMOD Event" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFMODEventControlTrack_Statics::NewProp_ControlSections_Inner = { "ControlSections", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODEventControlTrack_Statics::NewProp_ControlSections_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** List of all event control sections. */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Sequencer/FMODEventControlTrack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of all event control sections." },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFMODEventControlTrack_Statics::NewProp_ControlSections = { "ControlSections", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFMODEventControlTrack, ControlSections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFMODEventControlTrack_Statics::NewProp_ControlSections_MetaData), Z_Construct_UClass_UFMODEventControlTrack_Statics::NewProp_ControlSections_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFMODEventControlTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODEventControlTrack_Statics::NewProp_ControlSections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODEventControlTrack_Statics::NewProp_ControlSections,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UFMODEventControlTrack_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister, (int32)VTABLE_OFFSET(UFMODEventControlTrack, IMovieSceneTrackTemplateProducer), false },  // 3839488910
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFMODEventControlTrack_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFMODEventControlTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFMODEventControlTrack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFMODEventControlTrack_Statics::ClassParams = {
		&UFMODEventControlTrack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFMODEventControlTrack_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFMODEventControlTrack_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00A800A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFMODEventControlTrack_Statics::Class_MetaDataParams), Z_Construct_UClass_UFMODEventControlTrack_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFMODEventControlTrack_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UFMODEventControlTrack()
	{
		if (!Z_Registration_Info_UClass_UFMODEventControlTrack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFMODEventControlTrack.OuterSingleton, Z_Construct_UClass_UFMODEventControlTrack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFMODEventControlTrack.OuterSingleton;
	}
	template<> FMODSTUDIO_API UClass* StaticClass<UFMODEventControlTrack>()
	{
		return UFMODEventControlTrack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFMODEventControlTrack);
	UFMODEventControlTrack::~UFMODEventControlTrack() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_FPS_GAME_GameJam_1_Plugins_fmodstudio20308ue5_3win64_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventControlTrack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_FPS_GAME_GameJam_1_Plugins_fmodstudio20308ue5_3win64_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventControlTrack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFMODEventControlTrack, UFMODEventControlTrack::StaticClass, TEXT("UFMODEventControlTrack"), &Z_Registration_Info_UClass_UFMODEventControlTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFMODEventControlTrack), 345232109U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_FPS_GAME_GameJam_1_Plugins_fmodstudio20308ue5_3win64_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventControlTrack_h_1369206936(TEXT("/Script/FMODStudio"),
		Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_FPS_GAME_GameJam_1_Plugins_fmodstudio20308ue5_3win64_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventControlTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_FPS_GAME_GameJam_1_Plugins_fmodstudio20308ue5_3win64_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventControlTrack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
