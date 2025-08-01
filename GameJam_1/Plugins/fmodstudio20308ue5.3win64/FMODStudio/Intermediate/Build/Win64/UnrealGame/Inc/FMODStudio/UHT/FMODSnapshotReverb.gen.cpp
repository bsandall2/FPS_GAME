// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Classes/FMODSnapshotReverb.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFMODSnapshotReverb() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UReverbEffect();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODSnapshotReverb();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODSnapshotReverb_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FMODStudio();
// End Cross Module References
	void UFMODSnapshotReverb::StaticRegisterNativesUFMODSnapshotReverb()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFMODSnapshotReverb);
	UClass* Z_Construct_UClass_UFMODSnapshotReverb_NoRegister()
	{
		return UFMODSnapshotReverb::StaticClass();
	}
	struct Z_Construct_UClass_UFMODSnapshotReverb_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AssetGuid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFMODSnapshotReverb_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UReverbEffect,
		(UObject* (*)())Z_Construct_UPackage__Script_FMODStudio,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSnapshotReverb_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODSnapshotReverb_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * FMOD Event Asset.\n */" },
#endif
		{ "HideCategories", "object" },
		{ "IncludePath", "FMODSnapshotReverb.h" },
		{ "ModuleRelativePath", "Classes/FMODSnapshotReverb.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FMOD Event Asset." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODSnapshotReverb_Statics::NewProp_AssetGuid_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The unique Guid, which matches the one exported from FMOD Studio */" },
#endif
		{ "ModuleRelativePath", "Classes/FMODSnapshotReverb.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The unique Guid, which matches the one exported from FMOD Studio" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFMODSnapshotReverb_Statics::NewProp_AssetGuid = { "AssetGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFMODSnapshotReverb, AssetGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSnapshotReverb_Statics::NewProp_AssetGuid_MetaData), Z_Construct_UClass_UFMODSnapshotReverb_Statics::NewProp_AssetGuid_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFMODSnapshotReverb_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSnapshotReverb_Statics::NewProp_AssetGuid,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFMODSnapshotReverb_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFMODSnapshotReverb>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFMODSnapshotReverb_Statics::ClassParams = {
		&UFMODSnapshotReverb::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFMODSnapshotReverb_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSnapshotReverb_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSnapshotReverb_Statics::Class_MetaDataParams), Z_Construct_UClass_UFMODSnapshotReverb_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSnapshotReverb_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UFMODSnapshotReverb()
	{
		if (!Z_Registration_Info_UClass_UFMODSnapshotReverb.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFMODSnapshotReverb.OuterSingleton, Z_Construct_UClass_UFMODSnapshotReverb_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFMODSnapshotReverb.OuterSingleton;
	}
	template<> FMODSTUDIO_API UClass* StaticClass<UFMODSnapshotReverb>()
	{
		return UFMODSnapshotReverb::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFMODSnapshotReverb);
	UFMODSnapshotReverb::~UFMODSnapshotReverb() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_FPS_GAME_GameJam_1_Plugins_fmodstudio20308ue5_3win64_FMODStudio_Source_FMODStudio_Classes_FMODSnapshotReverb_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_FPS_GAME_GameJam_1_Plugins_fmodstudio20308ue5_3win64_FMODStudio_Source_FMODStudio_Classes_FMODSnapshotReverb_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFMODSnapshotReverb, UFMODSnapshotReverb::StaticClass, TEXT("UFMODSnapshotReverb"), &Z_Registration_Info_UClass_UFMODSnapshotReverb, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFMODSnapshotReverb), 2060438030U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_FPS_GAME_GameJam_1_Plugins_fmodstudio20308ue5_3win64_FMODStudio_Source_FMODStudio_Classes_FMODSnapshotReverb_h_2193476846(TEXT("/Script/FMODStudio"),
		Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_FPS_GAME_GameJam_1_Plugins_fmodstudio20308ue5_3win64_FMODStudio_Source_FMODStudio_Classes_FMODSnapshotReverb_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_FPS_GAME_GameJam_1_Plugins_fmodstudio20308ue5_3win64_FMODStudio_Source_FMODStudio_Classes_FMODSnapshotReverb_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
