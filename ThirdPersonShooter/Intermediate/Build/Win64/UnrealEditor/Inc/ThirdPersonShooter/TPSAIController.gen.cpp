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
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATPSAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATPSAIController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATPSAIController_Statics::ClassParams = {
		&ATPSAIController::StaticClass,
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
		{ Z_Construct_UClass_ATPSAIController, ATPSAIController::StaticClass, TEXT("ATPSAIController"), &Z_Registration_Info_UClass_ATPSAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATPSAIController), 3731866664U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ThirdPersonShooter_Source_ThirdPersonShooter_TPSAIController_h_576691970(TEXT("/Script/ThirdPersonShooter"),
		Z_CompiledInDeferFile_FID_ThirdPersonShooter_Source_ThirdPersonShooter_TPSAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ThirdPersonShooter_Source_ThirdPersonShooter_TPSAIController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
