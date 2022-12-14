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
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_totalAmmo_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_totalAmmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentAmmo_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_currentAmmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_shootingDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_shootingDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_damage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_damage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Root;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleParticleEffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MuzzleParticleEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MuzzleSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BulletImpactParticleEffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BulletImpactParticleEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImpactSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ImpactSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReloadSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReloadSound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGunWeapon_Statics::NewProp_totalAmmo_MetaData[] = {
		{ "Category", "GunWeapon" },
		{ "ModuleRelativePath", "GunWeapon.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGunWeapon_Statics::NewProp_totalAmmo = { "totalAmmo", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGunWeapon, totalAmmo), METADATA_PARAMS(Z_Construct_UClass_AGunWeapon_Statics::NewProp_totalAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGunWeapon_Statics::NewProp_totalAmmo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGunWeapon_Statics::NewProp_currentAmmo_MetaData[] = {
		{ "ModuleRelativePath", "GunWeapon.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGunWeapon_Statics::NewProp_currentAmmo = { "currentAmmo", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGunWeapon, currentAmmo), METADATA_PARAMS(Z_Construct_UClass_AGunWeapon_Statics::NewProp_currentAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGunWeapon_Statics::NewProp_currentAmmo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGunWeapon_Statics::NewProp_shootingDistance_MetaData[] = {
		{ "Category", "GunWeapon" },
		{ "ModuleRelativePath", "GunWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGunWeapon_Statics::NewProp_shootingDistance = { "shootingDistance", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGunWeapon, shootingDistance), METADATA_PARAMS(Z_Construct_UClass_AGunWeapon_Statics::NewProp_shootingDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGunWeapon_Statics::NewProp_shootingDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGunWeapon_Statics::NewProp_damage_MetaData[] = {
		{ "Category", "GunWeapon" },
		{ "ModuleRelativePath", "GunWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGunWeapon_Statics::NewProp_damage = { "damage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGunWeapon, damage), METADATA_PARAMS(Z_Construct_UClass_AGunWeapon_Statics::NewProp_damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGunWeapon_Statics::NewProp_damage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGunWeapon_Statics::NewProp_Root_MetaData[] = {
		{ "Category", "GunWeapon" },
		{ "Comment", "// Setup Blueprint Components pertaining to our guns\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GunWeapon.h" },
		{ "ToolTip", "Setup Blueprint Components pertaining to our guns" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGunWeapon_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGunWeapon, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGunWeapon_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGunWeapon_Statics::NewProp_Root_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGunWeapon_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "GunWeapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GunWeapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGunWeapon_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGunWeapon, Mesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGunWeapon_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGunWeapon_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGunWeapon_Statics::NewProp_MuzzleParticleEffect_MetaData[] = {
		{ "Category", "GunWeapon" },
		{ "ModuleRelativePath", "GunWeapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGunWeapon_Statics::NewProp_MuzzleParticleEffect = { "MuzzleParticleEffect", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGunWeapon, MuzzleParticleEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGunWeapon_Statics::NewProp_MuzzleParticleEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGunWeapon_Statics::NewProp_MuzzleParticleEffect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGunWeapon_Statics::NewProp_MuzzleSound_MetaData[] = {
		{ "Category", "GunWeapon" },
		{ "ModuleRelativePath", "GunWeapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGunWeapon_Statics::NewProp_MuzzleSound = { "MuzzleSound", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGunWeapon, MuzzleSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGunWeapon_Statics::NewProp_MuzzleSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGunWeapon_Statics::NewProp_MuzzleSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGunWeapon_Statics::NewProp_BulletImpactParticleEffect_MetaData[] = {
		{ "Category", "GunWeapon" },
		{ "ModuleRelativePath", "GunWeapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGunWeapon_Statics::NewProp_BulletImpactParticleEffect = { "BulletImpactParticleEffect", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGunWeapon, BulletImpactParticleEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGunWeapon_Statics::NewProp_BulletImpactParticleEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGunWeapon_Statics::NewProp_BulletImpactParticleEffect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGunWeapon_Statics::NewProp_ImpactSound_MetaData[] = {
		{ "Category", "GunWeapon" },
		{ "ModuleRelativePath", "GunWeapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGunWeapon_Statics::NewProp_ImpactSound = { "ImpactSound", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGunWeapon, ImpactSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGunWeapon_Statics::NewProp_ImpactSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGunWeapon_Statics::NewProp_ImpactSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGunWeapon_Statics::NewProp_ReloadSound_MetaData[] = {
		{ "Category", "GunWeapon" },
		{ "ModuleRelativePath", "GunWeapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGunWeapon_Statics::NewProp_ReloadSound = { "ReloadSound", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGunWeapon, ReloadSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGunWeapon_Statics::NewProp_ReloadSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGunWeapon_Statics::NewProp_ReloadSound_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGunWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGunWeapon_Statics::NewProp_totalAmmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGunWeapon_Statics::NewProp_currentAmmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGunWeapon_Statics::NewProp_shootingDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGunWeapon_Statics::NewProp_damage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGunWeapon_Statics::NewProp_Root,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGunWeapon_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGunWeapon_Statics::NewProp_MuzzleParticleEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGunWeapon_Statics::NewProp_MuzzleSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGunWeapon_Statics::NewProp_BulletImpactParticleEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGunWeapon_Statics::NewProp_ImpactSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGunWeapon_Statics::NewProp_ReloadSound,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGunWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGunWeapon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGunWeapon_Statics::ClassParams = {
		&AGunWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGunWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGunWeapon_Statics::PropPointers),
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
		{ Z_Construct_UClass_AGunWeapon, AGunWeapon::StaticClass, TEXT("AGunWeapon"), &Z_Registration_Info_UClass_AGunWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGunWeapon), 1306310914U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ThirdPersonShooter_Source_ThirdPersonShooter_GunWeapon_h_1332471320(TEXT("/Script/ThirdPersonShooter"),
		Z_CompiledInDeferFile_FID_ThirdPersonShooter_Source_ThirdPersonShooter_GunWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ThirdPersonShooter_Source_ThirdPersonShooter_GunWeapon_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
