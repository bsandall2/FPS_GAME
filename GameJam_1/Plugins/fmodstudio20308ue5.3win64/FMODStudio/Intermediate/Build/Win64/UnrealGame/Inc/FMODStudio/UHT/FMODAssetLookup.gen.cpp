// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Private/FMODAssetLookup.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFMODAssetLookup() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	FMODSTUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FFMODAssetLookupRow();
	UPackage* Z_Construct_UPackage__Script_FMODStudio();
// End Cross Module References

static_assert(std::is_polymorphic<FFMODAssetLookupRow>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FFMODAssetLookupRow cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMODAssetLookupRow;
class UScriptStruct* FFMODAssetLookupRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMODAssetLookupRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMODAssetLookupRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFMODAssetLookupRow, (UObject*)Z_Construct_UPackage__Script_FMODStudio(), TEXT("FMODAssetLookupRow"));
	}
	return Z_Registration_Info_UScriptStruct_FMODAssetLookupRow.OuterSingleton;
}
template<> FMODSTUDIO_API UScriptStruct* StaticStruct<FFMODAssetLookupRow>()
{
	return FFMODAssetLookupRow::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFMODAssetLookupRow_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackageName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PackageName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFMODAssetLookupRow_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/FMODAssetLookup.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFMODAssetLookupRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFMODAssetLookupRow>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFMODAssetLookupRow_Statics::NewProp_PackageName_MetaData[] = {
		{ "Category", "FMOD|Internal|AssetLookup" },
		{ "ModuleRelativePath", "Private/FMODAssetLookup.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFMODAssetLookupRow_Statics::NewProp_PackageName = { "PackageName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFMODAssetLookupRow, PackageName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFMODAssetLookupRow_Statics::NewProp_PackageName_MetaData), Z_Construct_UScriptStruct_FFMODAssetLookupRow_Statics::NewProp_PackageName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFMODAssetLookupRow_Statics::NewProp_AssetName_MetaData[] = {
		{ "Category", "FMOD|Internal|AssetLookup" },
		{ "ModuleRelativePath", "Private/FMODAssetLookup.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFMODAssetLookupRow_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFMODAssetLookupRow, AssetName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFMODAssetLookupRow_Statics::NewProp_AssetName_MetaData), Z_Construct_UScriptStruct_FFMODAssetLookupRow_Statics::NewProp_AssetName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFMODAssetLookupRow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFMODAssetLookupRow_Statics::NewProp_PackageName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFMODAssetLookupRow_Statics::NewProp_AssetName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFMODAssetLookupRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FMODStudio,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"FMODAssetLookupRow",
		Z_Construct_UScriptStruct_FFMODAssetLookupRow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFMODAssetLookupRow_Statics::PropPointers),
		sizeof(FFMODAssetLookupRow),
		alignof(FFMODAssetLookupRow),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFMODAssetLookupRow_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFMODAssetLookupRow_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFMODAssetLookupRow_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FFMODAssetLookupRow()
	{
		if (!Z_Registration_Info_UScriptStruct_FMODAssetLookupRow.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMODAssetLookupRow.InnerSingleton, Z_Construct_UScriptStruct_FFMODAssetLookupRow_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FMODAssetLookupRow.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_FPS_GAME_GameJam_1_Plugins_fmodstudio20308ue5_3win64_FMODStudio_Source_FMODStudio_Private_FMODAssetLookup_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_FPS_GAME_GameJam_1_Plugins_fmodstudio20308ue5_3win64_FMODStudio_Source_FMODStudio_Private_FMODAssetLookup_h_Statics::ScriptStructInfo[] = {
		{ FFMODAssetLookupRow::StaticStruct, Z_Construct_UScriptStruct_FFMODAssetLookupRow_Statics::NewStructOps, TEXT("FMODAssetLookupRow"), &Z_Registration_Info_UScriptStruct_FMODAssetLookupRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFMODAssetLookupRow), 1162001652U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_FPS_GAME_GameJam_1_Plugins_fmodstudio20308ue5_3win64_FMODStudio_Source_FMODStudio_Private_FMODAssetLookup_h_370166532(TEXT("/Script/FMODStudio"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_FPS_GAME_GameJam_1_Plugins_fmodstudio20308ue5_3win64_FMODStudio_Source_FMODStudio_Private_FMODAssetLookup_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_FPS_GAME_GameJam_1_Plugins_fmodstudio20308ue5_3win64_FMODStudio_Source_FMODStudio_Private_FMODAssetLookup_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
