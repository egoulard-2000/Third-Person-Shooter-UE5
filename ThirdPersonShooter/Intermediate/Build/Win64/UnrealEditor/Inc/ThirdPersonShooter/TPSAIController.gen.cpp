// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThirdPersonShooter/TPSAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTPSAIController() {}
// Cross Module References
	THIRDPERSONSHOOTER_API UClass* Z_Construct_UClass_ATPSAIController_NoRegister();
	THIRDPERSONSHOOTER_API UClass* Z_Construct_UClass_ATPSAIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_ThirdPersonShooter();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
// End Cross Module References
	void ATPSAIController::StaticRegisterNativesATPSAIController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATPSAIController);
	UClass* Z_Construct_UClass_ATPSAIController_NoRegister()
	{
		return ATPSAIController::StaticClass();
	}
	struct Z_Construct_UClass_ATPSAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_player_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_player;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_enemyDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_enemyDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATPSAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_ThirdPersonShooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSAIController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "TPSAIController.h" },
		{ "ModuleRelativePath", "TPSAIController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSAIController_Statics::NewProp_player_MetaData[] = {
		{ "Category", "TPSAIController" },
		{ "ModuleRelativePath", "TPSAIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATPSAIController_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPSAIController, player), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATPSAIController_Statics::NewProp_player_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATPSAIController_Statics::NewProp_player_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSAIController_Statics::NewProp_enemyDistance_MetaData[] = {
		{ "Category", "TPSAIController" },
		{ "ModuleRelativePath", "TPSAIController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATPSAIController_Statics::NewProp_enemyDistance = { "enemyDistance", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPSAIController, enemyDistance), METADATA_PARAMS(Z_Construct_UClass_ATPSAIController_Statics::NewProp_enemyDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATPSAIController_Statics::NewProp_enemyDistance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATPSAIController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSAIController_Statics::NewProp_player,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSAIController_Statics::NewProp_enemyDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATPSAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATPSAIController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATPSAIController_Statics::ClassParams = {
		&ATPSAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATPSAIController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATPSAIController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATPSAIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATPSAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATPSAIController()
	{
		if (!Z_Registration_Info_UClass_ATPSAIController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATPSAIController.OuterSingleton, Z_Construct_UClass_ATPSAIController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATPSAIController.OuterSingleton;
	}
	template<> THIRDPERSONSHOOTER_API UClass* StaticClass<ATPSAIController>()
	{
		return ATPSAIController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATPSAIController);
	struct Z_CompiledInDeferFile_FID_ThirdPersonShooter_Source_ThirdPersonShooter_TPSAIController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ThirdPersonShooter_Source_ThirdPersonShooter_TPSAIController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATPSAIController, ATPSAIController::StaticClass, TEXT("ATPSAIController"), &Z_Registration_Info_UClass_ATPSAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATPSAIController), 236983549U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ThirdPersonShooter_Source_ThirdPersonShooter_TPSAIController_h_3137517744(TEXT("/Script/ThirdPersonShooter"),
		Z_CompiledInDeferFile_FID_ThirdPersonShooter_Source_ThirdPersonShooter_TPSAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ThirdPersonShooter_Source_ThirdPersonShooter_TPSAIController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
