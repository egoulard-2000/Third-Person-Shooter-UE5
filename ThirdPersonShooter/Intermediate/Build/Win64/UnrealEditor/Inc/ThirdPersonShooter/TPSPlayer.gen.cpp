// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThirdPersonShooter/TPSPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTPSPlayer() {}
// Cross Module References
	THIRDPERSONSHOOTER_API UClass* Z_Construct_UClass_ATPSPlayer_NoRegister();
	THIRDPERSONSHOOTER_API UClass* Z_Construct_UClass_ATPSPlayer();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_ThirdPersonShooter();
// End Cross Module References
	void ATPSPlayer::StaticRegisterNativesATPSPlayer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATPSPlayer);
	UClass* Z_Construct_UClass_ATPSPlayer_NoRegister()
	{
		return ATPSPlayer::StaticClass();
	}
	struct Z_Construct_UClass_ATPSPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_jumping_MetaData[];
#endif
		static void NewProp_jumping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_jumping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_xSensitivity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_xSensitivity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ySensitivity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ySensitivity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATPSPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ThirdPersonShooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSPlayer_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TPSPlayer.h" },
		{ "ModuleRelativePath", "TPSPlayer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSPlayer_Statics::NewProp_jumping_MetaData[] = {
		{ "ModuleRelativePath", "TPSPlayer.h" },
	};
#endif
	void Z_Construct_UClass_ATPSPlayer_Statics::NewProp_jumping_SetBit(void* Obj)
	{
		((ATPSPlayer*)Obj)->jumping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATPSPlayer_Statics::NewProp_jumping = { "jumping", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATPSPlayer), &Z_Construct_UClass_ATPSPlayer_Statics::NewProp_jumping_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATPSPlayer_Statics::NewProp_jumping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATPSPlayer_Statics::NewProp_jumping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSPlayer_Statics::NewProp_xSensitivity_MetaData[] = {
		{ "Category", "TPSPlayer" },
		{ "ModuleRelativePath", "TPSPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATPSPlayer_Statics::NewProp_xSensitivity = { "xSensitivity", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPSPlayer, xSensitivity), METADATA_PARAMS(Z_Construct_UClass_ATPSPlayer_Statics::NewProp_xSensitivity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATPSPlayer_Statics::NewProp_xSensitivity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSPlayer_Statics::NewProp_ySensitivity_MetaData[] = {
		{ "Category", "TPSPlayer" },
		{ "ModuleRelativePath", "TPSPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATPSPlayer_Statics::NewProp_ySensitivity = { "ySensitivity", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPSPlayer, ySensitivity), METADATA_PARAMS(Z_Construct_UClass_ATPSPlayer_Statics::NewProp_ySensitivity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATPSPlayer_Statics::NewProp_ySensitivity_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATPSPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSPlayer_Statics::NewProp_jumping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSPlayer_Statics::NewProp_xSensitivity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSPlayer_Statics::NewProp_ySensitivity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATPSPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATPSPlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATPSPlayer_Statics::ClassParams = {
		&ATPSPlayer::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATPSPlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATPSPlayer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATPSPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATPSPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATPSPlayer()
	{
		if (!Z_Registration_Info_UClass_ATPSPlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATPSPlayer.OuterSingleton, Z_Construct_UClass_ATPSPlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATPSPlayer.OuterSingleton;
	}
	template<> THIRDPERSONSHOOTER_API UClass* StaticClass<ATPSPlayer>()
	{
		return ATPSPlayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATPSPlayer);
	struct Z_CompiledInDeferFile_FID_ThirdPersonShooter_Source_ThirdPersonShooter_TPSPlayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ThirdPersonShooter_Source_ThirdPersonShooter_TPSPlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATPSPlayer, ATPSPlayer::StaticClass, TEXT("ATPSPlayer"), &Z_Registration_Info_UClass_ATPSPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATPSPlayer), 2606654946U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ThirdPersonShooter_Source_ThirdPersonShooter_TPSPlayer_h_3294164046(TEXT("/Script/ThirdPersonShooter"),
		Z_CompiledInDeferFile_FID_ThirdPersonShooter_Source_ThirdPersonShooter_TPSPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ThirdPersonShooter_Source_ThirdPersonShooter_TPSPlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
