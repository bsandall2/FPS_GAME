// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Classes/FMODSnapshot.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFMODSnapshot() {}
// Cross Module References
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODEvent();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODSnapshot();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODSnapshot_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FMODStudio();
// End Cross Module References
	void UFMODSnapshot::StaticRegisterNativesUFMODSnapshot()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFMODSnapshot);
	UClass* Z_Construct_UClass_UFMODSnapshot_NoRegister()
	{
		return UFMODSnapshot::StaticClass();
	}
	struct Z_Construct_UClass_UFMODSnapshot_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFMODSnapshot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFMODEvent,
		(UObject* (*)())Z_Construct_UPackage__Script_FMODStudio,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSnapshot_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODSnapshot_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * FMOD Snapshot Asset.\n */" },
#endif
		{ "IncludePath", "FMODSnapshot.h" },
		{ "ModuleRelativePath", "Classes/FMODSnapshot.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FMOD Snapshot Asset." },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFMODSnapshot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFMODSnapshot>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFMODSnapshot_Statics::ClassParams = {
		&UFMODSnapshot::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSnapshot_Statics::Class_MetaDataParams), Z_Construct_UClass_UFMODSnapshot_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UFMODSnapshot()
	{
		if (!Z_Registration_Info_UClass_UFMODSnapshot.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFMODSnapshot.OuterSingleton, Z_Construct_UClass_UFMODSnapshot_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFMODSnapshot.OuterSingleton;
	}
	template<> FMODSTUDIO_API UClass* StaticClass<UFMODSnapshot>()
	{
		return UFMODSnapshot::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFMODSnapshot);
	UFMODSnapshot::~UFMODSnapshot() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_FPS_GAME_GameJam_1_Plugins_fmodstudio20308ue5_3win64_FMODStudio_Source_FMODStudio_Classes_FMODSnapshot_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_FPS_GAME_GameJam_1_Plugins_fmodstudio20308ue5_3win64_FMODStudio_Source_FMODStudio_Classes_FMODSnapshot_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFMODSnapshot, UFMODSnapshot::StaticClass, TEXT("UFMODSnapshot"), &Z_Registration_Info_UClass_UFMODSnapshot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFMODSnapshot), 3096620834U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_FPS_GAME_GameJam_1_Plugins_fmodstudio20308ue5_3win64_FMODStudio_Source_FMODStudio_Classes_FMODSnapshot_h_53694317(TEXT("/Script/FMODStudio"),
		Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_FPS_GAME_GameJam_1_Plugins_fmodstudio20308ue5_3win64_FMODStudio_Source_FMODStudio_Classes_FMODSnapshot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_FPS_GAME_GameJam_1_Plugins_fmodstudio20308ue5_3win64_FMODStudio_Source_FMODStudio_Classes_FMODSnapshot_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
