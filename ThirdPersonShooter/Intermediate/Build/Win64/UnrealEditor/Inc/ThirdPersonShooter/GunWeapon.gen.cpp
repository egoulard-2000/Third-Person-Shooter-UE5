// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThirdPersonShooter/GunWeapon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGunWeapon() {}
// Cross Module References
	THIRDPERSONSHOOTER_API UClass* Z_Construct_UClass_AGunWeapon_NoRegister();
	THIRDPERSONSHOOTER_API UClass* Z_Construct_UClass_AGunWeapon();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ThirdPersonShooter();
// End Cross Module References
	void AGunWeapon::StaticRegisterNativesAGunWeapon()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGunWeapon);
	UClass* Z_Construct_UClass_AGunWeapon_NoRegister()
	{
		return AGunWeapon::StaticClass();
	}
	struct Z_Construct_UClass_AGunWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGunWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ThirdPersonShooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGunWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GunWeapon.h" },
		{ "ModuleRelativePath", "GunWeapon.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGunWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGunWeapon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGunWeapon_Statics::ClassParams = {
		&AGunWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGunWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGunWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGunWeapon()
	{
		if (!Z_Registration_Info_UClass_AGunWeapon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGunWeapon.OuterSingleton, Z_Construct_UClass_AGunWeapon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGunWeapon.OuterSingleton;
	}
	template<> THIRDPERSONSHOOTER_API UClass* StaticClass<AGunWeapon>()
	{
		return AGunWeapon::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGunWeapon);
	struct Z_CompiledInDeferFile_FID_ThirdPersonShooter_Source_ThirdPersonShooter_GunWeapon_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ThirdPersonShooter_Source_ThirdPersonShooter_GunWeapon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGunWeapon, AGunWeapon::StaticClass, TEXT("AGunWeapon"), &Z_Registration_Info_UClass_AGunWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGunWeapon), 63407728U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ThirdPersonShooter_Source_ThirdPersonShooter_GunWeapon_h_1670666899(TEXT("/Script/ThirdPersonShooter"),
		Z_CompiledInDeferFile_FID_ThirdPersonShooter_Source_ThirdPersonShooter_GunWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ThirdPersonShooter_Source_ThirdPersonShooter_GunWeapon_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
