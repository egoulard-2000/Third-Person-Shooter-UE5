// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THIRDPERSONSHOOTER_TPSPlayer_generated_h
#error "TPSPlayer.generated.h already included, missing '#pragma once' in TPSPlayer.h"
#endif
#define THIRDPERSONSHOOTER_TPSPlayer_generated_h

#define FID_ThirdPersonShooter_Source_ThirdPersonShooter_TPSPlayer_h_16_SPARSE_DATA
#define FID_ThirdPersonShooter_Source_ThirdPersonShooter_TPSPlayer_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsKilled);


#define FID_ThirdPersonShooter_Source_ThirdPersonShooter_TPSPlayer_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsKilled);


#define FID_ThirdPersonShooter_Source_ThirdPersonShooter_TPSPlayer_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATPSPlayer(); \
	friend struct Z_Construct_UClass_ATPSPlayer_Statics; \
public: \
	DECLARE_CLASS(ATPSPlayer, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ThirdPersonShooter"), NO_API) \
	DECLARE_SERIALIZER(ATPSPlayer)


#define FID_ThirdPersonShooter_Source_ThirdPersonShooter_TPSPlayer_h_16_INCLASS \
private: \
	static void StaticRegisterNativesATPSPlayer(); \
	friend struct Z_Construct_UClass_ATPSPlayer_Statics; \
public: \
	DECLARE_CLASS(ATPSPlayer, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ThirdPersonShooter"), NO_API) \
	DECLARE_SERIALIZER(ATPSPlayer)


#define FID_ThirdPersonShooter_Source_ThirdPersonShooter_TPSPlayer_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATPSPlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATPSPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATPSPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATPSPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATPSPlayer(ATPSPlayer&&); \
	NO_API ATPSPlayer(const ATPSPlayer&); \
public:


#define FID_ThirdPersonShooter_Source_ThirdPersonShooter_TPSPlayer_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATPSPlayer(ATPSPlayer&&); \
	NO_API ATPSPlayer(const ATPSPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATPSPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATPSPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATPSPlayer)


#define FID_ThirdPersonShooter_Source_ThirdPersonShooter_TPSPlayer_h_13_PROLOG
#define FID_ThirdPersonShooter_Source_ThirdPersonShooter_TPSPlayer_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ThirdPersonShooter_Source_ThirdPersonShooter_TPSPlayer_h_16_SPARSE_DATA \
	FID_ThirdPersonShooter_Source_ThirdPersonShooter_TPSPlayer_h_16_RPC_WRAPPERS \
	FID_ThirdPersonShooter_Source_ThirdPersonShooter_TPSPlayer_h_16_INCLASS \
	FID_ThirdPersonShooter_Source_ThirdPersonShooter_TPSPlayer_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ThirdPersonShooter_Source_ThirdPersonShooter_TPSPlayer_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ThirdPersonShooter_Source_ThirdPersonShooter_TPSPlayer_h_16_SPARSE_DATA \
	FID_ThirdPersonShooter_Source_ThirdPersonShooter_TPSPlayer_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ThirdPersonShooter_Source_ThirdPersonShooter_TPSPlayer_h_16_INCLASS_NO_PURE_DECLS \
	FID_ThirdPersonShooter_Source_ThirdPersonShooter_TPSPlayer_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THIRDPERSONSHOOTER_API UClass* StaticClass<class ATPSPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ThirdPersonShooter_Source_ThirdPersonShooter_TPSPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
