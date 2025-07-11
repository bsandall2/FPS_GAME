// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Classes/FMODBank.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFMODBank() {}
// Cross Module References
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODAsset();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODBank();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODBank_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FMODStudio();
// End Cross Module References
	void UFMODBank::StaticRegisterNativesUFMODBank()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFMODBank);
	UClass* Z_Construct_UClass_UFMODBank_NoRegister()
	{
		return UFMODBank::StaticClass();
	}
	struct Z_Construct_UClass_UFMODBank_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFMODBank_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFMODAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_FMODStudio,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFMODBank_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODBank_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * FMOD Bank Asset.\n */" },
#endif
		{ "IncludePath", "FMODBank.h" },
		{ "ModuleRelativePath", "Classes/FMODBank.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FMOD Bank Asset." },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFMODBank_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFMODBank>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFMODBank_Statics::ClassParams = {
		&UFMODBank::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFMODBank_Statics::Class_MetaDataParams), Z_Construct_UClass_UFMODBank_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UFMODBank()
	{
		if (!Z_Registration_Info_UClass_UFMODBank.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFMODBank.OuterSingleton, Z_Construct_UClass_UFMODBank_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFMODBank.OuterSingleton;
	}
	template<> FMODSTUDIO_API UClass* StaticClass<UFMODBank>()
	{
		return UFMODBank::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFMODBank);
	UFMODBank::~UFMODBank() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_FPS_GAME_GameJam_1_Plugins_fmodstudio20308ue5_3win64_FMODStudio_Source_FMODStudio_Classes_FMODBank_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_FPS_GAME_GameJam_1_Plugins_fmodstudio20308ue5_3win64_FMODStudio_Source_FMODStudio_Classes_FMODBank_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFMODBank, UFMODBank::StaticClass, TEXT("UFMODBank"), &Z_Registration_Info_UClass_UFMODBank, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFMODBank), 606876495U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_FPS_GAME_GameJam_1_Plugins_fmodstudio20308ue5_3win64_FMODStudio_Source_FMODStudio_Classes_FMODBank_h_2249378528(TEXT("/Script/FMODStudio"),
		Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_FPS_GAME_GameJam_1_Plugins_fmodstudio20308ue5_3win64_FMODStudio_Source_FMODStudio_Classes_FMODBank_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_FPS_GAME_GameJam_1_Plugins_fmodstudio20308ue5_3win64_FMODStudio_Source_FMODStudio_Classes_FMODBank_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
