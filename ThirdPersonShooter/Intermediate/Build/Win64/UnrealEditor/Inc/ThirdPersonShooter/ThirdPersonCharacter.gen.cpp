// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThirdPersonShooter/ThirdPersonCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThirdPersonCharacter() {}
// Cross Module References
	THIRDPERSONSHOOTER_API UClass* Z_Construct_UClass_AThirdPersonCharacter_NoRegister();
	THIRDPERSONSHOOTER_API UClass* Z_Construct_UClass_AThirdPersonCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_ThirdPersonShooter();
// End Cross Module References
	void AThirdPersonCharacter::StaticRegisterNativesAThirdPersonCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AThirdPersonCharacter);
	UClass* Z_Construct_UClass_AThirdPersonCharacter_NoRegister()
	{
		return AThirdPersonCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AThirdPersonCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AThirdPersonCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ThirdPersonShooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ThirdPersonCharacter.h" },
		{ "ModuleRelativePath", "ThirdPersonCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AThirdPersonCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThirdPersonCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AThirdPersonCharacter_Statics::ClassParams = {
		&AThirdPersonCharacter::StaticClass,
		"Game",
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
		METADATA_PARAMS(Z_Construct_UClass_AThirdPersonCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AThirdPersonCharacter()
	{
		if (!Z_Registration_Info_UClass_AThirdPersonCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AThirdPersonCharacter.OuterSingleton, Z_Construct_UClass_AThirdPersonCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AThirdPersonCharacter.OuterSingleton;
	}
	template<> THIRDPERSONSHOOTER_API UClass* StaticClass<AThirdPersonCharacter>()
	{
		return AThirdPersonCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AThirdPersonCharacter);
	struct Z_CompiledInDeferFile_FID_ThirdPersonShooter_Source_ThirdPersonShooter_ThirdPersonCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ThirdPersonShooter_Source_ThirdPersonShooter_ThirdPersonCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AThirdPersonCharacter, AThirdPersonCharacter::StaticClass, TEXT("AThirdPersonCharacter"), &Z_Registration_Info_UClass_AThirdPersonCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AThirdPersonCharacter), 670070954U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ThirdPersonShooter_Source_ThirdPersonShooter_ThirdPersonCharacter_h_4234550141(TEXT("/Script/ThirdPersonShooter"),
		Z_CompiledInDeferFile_FID_ThirdPersonShooter_Source_ThirdPersonShooter_ThirdPersonCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ThirdPersonShooter_Source_ThirdPersonShooter_ThirdPersonCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
