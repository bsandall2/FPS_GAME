// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Classes/FMODAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFMODAsset() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODAsset();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODAsset_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FMODStudio();
// End Cross Module References
	void UFMODAsset::StaticRegisterNativesUFMODAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFMODAsset);
	UClass* Z_Construct_UClass_UFMODAsset_NoRegister()
	{
		return UFMODAsset::StaticClass();
	}
	struct Z_Construct_UClass_UFMODAsset_Statics
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
	UObject* (*const Z_Construct_UClass_UFMODAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FMODStudio,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFMODAsset_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * FMOD Asset.\n */" },
#endif
		{ "IncludePath", "FMODAsset.h" },
		{ "ModuleRelativePath", "Classes/FMODAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FMOD Asset." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODAsset_Statics::NewProp_AssetGuid_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The unique Guid, which matches the one exported from FMOD Studio */" },
#endif
		{ "ModuleRelativePath", "Classes/FMODAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The unique Guid, which matches the one exported from FMOD Studio" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFMODAsset_Statics::NewProp_AssetGuid = { "AssetGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFMODAsset, AssetGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFMODAsset_Statics::NewProp_AssetGuid_MetaData), Z_Construct_UClass_UFMODAsset_Statics::NewProp_AssetGuid_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFMODAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODAsset_Statics::NewProp_AssetGuid,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFMODAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFMODAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFMODAsset_Statics::ClassParams = {
		&UFMODAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFMODAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFMODAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFMODAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UFMODAsset_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFMODAsset_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UFMODAsset()
	{
		if (!Z_Registration_Info_UClass_UFMODAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFMODAsset.OuterSingleton, Z_Construct_UClass_UFMODAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFMODAsset.OuterSingleton;
	}
	template<> FMODSTUDIO_API UClass* StaticClass<UFMODAsset>()
	{
		return UFMODAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFMODAsset);
	UFMODAsset::~UFMODAsset() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_FPS_GAME_GameJam_1_Plugins_fmodstudio20308ue5_3win64_FMODStudio_Source_FMODStudio_Classes_FMODAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_FPS_GAME_GameJam_1_Plugins_fmodstudio20308ue5_3win64_FMODStudio_Source_FMODStudio_Classes_FMODAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFMODAsset, UFMODAsset::StaticClass, TEXT("UFMODAsset"), &Z_Registration_Info_UClass_UFMODAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFMODAsset), 2638238649U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_FPS_GAME_GameJam_1_Plugins_fmodstudio20308ue5_3win64_FMODStudio_Source_FMODStudio_Classes_FMODAsset_h_4164787837(TEXT("/Script/FMODStudio"),
		Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_FPS_GAME_GameJam_1_Plugins_fmodstudio20308ue5_3win64_FMODStudio_Source_FMODStudio_Classes_FMODAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_FPS_GAME_GameJam_1_Plugins_fmodstudio20308ue5_3win64_FMODStudio_Source_FMODStudio_Classes_FMODAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
