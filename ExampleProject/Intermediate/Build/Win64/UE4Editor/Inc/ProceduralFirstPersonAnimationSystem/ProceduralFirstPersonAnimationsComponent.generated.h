// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROCEDURALFIRSTPERSONANIMATIONSYSTEM_ProceduralFirstPersonAnimationsComponent_generated_h
#error "ProceduralFirstPersonAnimationsComponent.generated.h already included, missing '#pragma once' in ProceduralFirstPersonAnimationsComponent.h"
#endif
#define PROCEDURALFIRSTPERSONANIMATIONSYSTEM_ProceduralFirstPersonAnimationsComponent_generated_h

#define ShooterUE_Plugins_ProceduralFirstPersonAnimationSystem_Source_ProceduralFirstPersonAnimationSystem_Public_ProceduralFirstPersonAnimationsComponent_h_18_SPARSE_DATA
#define ShooterUE_Plugins_ProceduralFirstPersonAnimationSystem_Source_ProceduralFirstPersonAnimationSystem_Public_ProceduralFirstPersonAnimationsComponent_h_18_RPC_WRAPPERS
#define ShooterUE_Plugins_ProceduralFirstPersonAnimationSystem_Source_ProceduralFirstPersonAnimationSystem_Public_ProceduralFirstPersonAnimationsComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define ShooterUE_Plugins_ProceduralFirstPersonAnimationSystem_Source_ProceduralFirstPersonAnimationSystem_Public_ProceduralFirstPersonAnimationsComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUProceduralFirstPersonAnimationsComponent(); \
	friend struct Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics; \
public: \
	DECLARE_CLASS(UProceduralFirstPersonAnimationsComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProceduralFirstPersonAnimationSystem"), NO_API) \
	DECLARE_SERIALIZER(UProceduralFirstPersonAnimationsComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UProceduralFirstPersonAnimationsComponent*>(this); }


#define ShooterUE_Plugins_ProceduralFirstPersonAnimationSystem_Source_ProceduralFirstPersonAnimationSystem_Public_ProceduralFirstPersonAnimationsComponent_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUProceduralFirstPersonAnimationsComponent(); \
	friend struct Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics; \
public: \
	DECLARE_CLASS(UProceduralFirstPersonAnimationsComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProceduralFirstPersonAnimationSystem"), NO_API) \
	DECLARE_SERIALIZER(UProceduralFirstPersonAnimationsComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UProceduralFirstPersonAnimationsComponent*>(this); }


#define ShooterUE_Plugins_ProceduralFirstPersonAnimationSystem_Source_ProceduralFirstPersonAnimationSystem_Public_ProceduralFirstPersonAnimationsComponent_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UProceduralFirstPersonAnimationsComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProceduralFirstPersonAnimationsComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProceduralFirstPersonAnimationsComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProceduralFirstPersonAnimationsComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UProceduralFirstPersonAnimationsComponent(UProceduralFirstPersonAnimationsComponent&&); \
	NO_API UProceduralFirstPersonAnimationsComponent(const UProceduralFirstPersonAnimationsComponent&); \
public:


#define ShooterUE_Plugins_ProceduralFirstPersonAnimationSystem_Source_ProceduralFirstPersonAnimationSystem_Public_ProceduralFirstPersonAnimationsComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UProceduralFirstPersonAnimationsComponent(UProceduralFirstPersonAnimationsComponent&&); \
	NO_API UProceduralFirstPersonAnimationsComponent(const UProceduralFirstPersonAnimationsComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProceduralFirstPersonAnimationsComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProceduralFirstPersonAnimationsComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UProceduralFirstPersonAnimationsComponent)


#define ShooterUE_Plugins_ProceduralFirstPersonAnimationSystem_Source_ProceduralFirstPersonAnimationSystem_Public_ProceduralFirstPersonAnimationsComponent_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__EnableDebug() { return STRUCT_OFFSET(UProceduralFirstPersonAnimationsComponent, EnableDebug); } \
	FORCEINLINE static uint32 __PPO__UseCameraSway() { return STRUCT_OFFSET(UProceduralFirstPersonAnimationsComponent, UseCameraSway); } \
	FORCEINLINE static uint32 __PPO__SmoothAmount() { return STRUCT_OFFSET(UProceduralFirstPersonAnimationsComponent, SmoothAmount); } \
	FORCEINLINE static uint32 __PPO__LookAmount() { return STRUCT_OFFSET(UProceduralFirstPersonAnimationsComponent, LookAmount); } \
	FORCEINLINE static uint32 __PPO__AmountCap() { return STRUCT_OFFSET(UProceduralFirstPersonAnimationsComponent, AmountCap); } \
	FORCEINLINE static uint32 __PPO__X_AxisKey() { return STRUCT_OFFSET(UProceduralFirstPersonAnimationsComponent, X_AxisKey); } \
	FORCEINLINE static uint32 __PPO__Y_AxisKey() { return STRUCT_OFFSET(UProceduralFirstPersonAnimationsComponent, Y_AxisKey); } \
	FORCEINLINE static uint32 __PPO__UseMovementSway() { return STRUCT_OFFSET(UProceduralFirstPersonAnimationsComponent, UseMovementSway); } \
	FORCEINLINE static uint32 __PPO__SwayAmount() { return STRUCT_OFFSET(UProceduralFirstPersonAnimationsComponent, SwayAmount); } \
	FORCEINLINE static uint32 __PPO__InterpSpeed() { return STRUCT_OFFSET(UProceduralFirstPersonAnimationsComponent, InterpSpeed); } \
	FORCEINLINE static uint32 __PPO__UseIdleLocationAnimation() { return STRUCT_OFFSET(UProceduralFirstPersonAnimationsComponent, UseIdleLocationAnimation); } \
	FORCEINLINE static uint32 __PPO__IdleLocationCurve() { return STRUCT_OFFSET(UProceduralFirstPersonAnimationsComponent, IdleLocationCurve); } \
	FORCEINLINE static uint32 __PPO__UseIdleRotationAnimation() { return STRUCT_OFFSET(UProceduralFirstPersonAnimationsComponent, UseIdleRotationAnimation); } \
	FORCEINLINE static uint32 __PPO__IdleRotationCurve() { return STRUCT_OFFSET(UProceduralFirstPersonAnimationsComponent, IdleRotationCurve); } \
	FORCEINLINE static uint32 __PPO__UseWalkingLocationAnimation() { return STRUCT_OFFSET(UProceduralFirstPersonAnimationsComponent, UseWalkingLocationAnimation); } \
	FORCEINLINE static uint32 __PPO__WalkingLocationCurve() { return STRUCT_OFFSET(UProceduralFirstPersonAnimationsComponent, WalkingLocationCurve); } \
	FORCEINLINE static uint32 __PPO__UseWalkingRotationAnimation() { return STRUCT_OFFSET(UProceduralFirstPersonAnimationsComponent, UseWalkingRotationAnimation); } \
	FORCEINLINE static uint32 __PPO__WalkingRotationCurve() { return STRUCT_OFFSET(UProceduralFirstPersonAnimationsComponent, WalkingRotationCurve); } \
	FORCEINLINE static uint32 __PPO__UseRecoilLocationAnimation() { return STRUCT_OFFSET(UProceduralFirstPersonAnimationsComponent, UseRecoilLocationAnimation); } \
	FORCEINLINE static uint32 __PPO__RecoilLocationCurve() { return STRUCT_OFFSET(UProceduralFirstPersonAnimationsComponent, RecoilLocationCurve); } \
	FORCEINLINE static uint32 __PPO__UseRecoilRotationAnimation() { return STRUCT_OFFSET(UProceduralFirstPersonAnimationsComponent, UseRecoilRotationAnimation); } \
	FORCEINLINE static uint32 __PPO__RecoilRotationCurve() { return STRUCT_OFFSET(UProceduralFirstPersonAnimationsComponent, RecoilRotationCurve); } \
	FORCEINLINE static uint32 __PPO__UseAimAnimation() { return STRUCT_OFFSET(UProceduralFirstPersonAnimationsComponent, UseAimAnimation); } \
	FORCEINLINE static uint32 __PPO__AimAnimationCurve() { return STRUCT_OFFSET(UProceduralFirstPersonAnimationsComponent, AimAnimationCurve); } \
	FORCEINLINE static uint32 __PPO__AimSocketName() { return STRUCT_OFFSET(UProceduralFirstPersonAnimationsComponent, AimSocketName); } \
	FORCEINLINE static uint32 __PPO__CameraSwayComponent() { return STRUCT_OFFSET(UProceduralFirstPersonAnimationsComponent, CameraSwayComponent); } \
	FORCEINLINE static uint32 __PPO__MovementSwayComponent() { return STRUCT_OFFSET(UProceduralFirstPersonAnimationsComponent, MovementSwayComponent); } \
	FORCEINLINE static uint32 __PPO__CharacterMovementComponent() { return STRUCT_OFFSET(UProceduralFirstPersonAnimationsComponent, CharacterMovementComponent); } \
	FORCEINLINE static uint32 __PPO__WeaponHolderComponent() { return STRUCT_OFFSET(UProceduralFirstPersonAnimationsComponent, WeaponHolderComponent); } \
	FORCEINLINE static uint32 __PPO__WalkingHolderComponent() { return STRUCT_OFFSET(UProceduralFirstPersonAnimationsComponent, WalkingHolderComponent); } \
	FORCEINLINE static uint32 __PPO__AimHolderComponent() { return STRUCT_OFFSET(UProceduralFirstPersonAnimationsComponent, AimHolderComponent); } \
	FORCEINLINE static uint32 __PPO__WeaponSkeletalMesh() { return STRUCT_OFFSET(UProceduralFirstPersonAnimationsComponent, WeaponSkeletalMesh); } \
	FORCEINLINE static uint32 __PPO__WeaponStaticMesh() { return STRUCT_OFFSET(UProceduralFirstPersonAnimationsComponent, WeaponStaticMesh); }


#define ShooterUE_Plugins_ProceduralFirstPersonAnimationSystem_Source_ProceduralFirstPersonAnimationSystem_Public_ProceduralFirstPersonAnimationsComponent_h_14_PROLOG
#define ShooterUE_Plugins_ProceduralFirstPersonAnimationSystem_Source_ProceduralFirstPersonAnimationSystem_Public_ProceduralFirstPersonAnimationsComponent_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterUE_Plugins_ProceduralFirstPersonAnimationSystem_Source_ProceduralFirstPersonAnimationSystem_Public_ProceduralFirstPersonAnimationsComponent_h_18_PRIVATE_PROPERTY_OFFSET \
	ShooterUE_Plugins_ProceduralFirstPersonAnimationSystem_Source_ProceduralFirstPersonAnimationSystem_Public_ProceduralFirstPersonAnimationsComponent_h_18_SPARSE_DATA \
	ShooterUE_Plugins_ProceduralFirstPersonAnimationSystem_Source_ProceduralFirstPersonAnimationSystem_Public_ProceduralFirstPersonAnimationsComponent_h_18_RPC_WRAPPERS \
	ShooterUE_Plugins_ProceduralFirstPersonAnimationSystem_Source_ProceduralFirstPersonAnimationSystem_Public_ProceduralFirstPersonAnimationsComponent_h_18_INCLASS \
	ShooterUE_Plugins_ProceduralFirstPersonAnimationSystem_Source_ProceduralFirstPersonAnimationSystem_Public_ProceduralFirstPersonAnimationsComponent_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ShooterUE_Plugins_ProceduralFirstPersonAnimationSystem_Source_ProceduralFirstPersonAnimationSystem_Public_ProceduralFirstPersonAnimationsComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterUE_Plugins_ProceduralFirstPersonAnimationSystem_Source_ProceduralFirstPersonAnimationSystem_Public_ProceduralFirstPersonAnimationsComponent_h_18_PRIVATE_PROPERTY_OFFSET \
	ShooterUE_Plugins_ProceduralFirstPersonAnimationSystem_Source_ProceduralFirstPersonAnimationSystem_Public_ProceduralFirstPersonAnimationsComponent_h_18_SPARSE_DATA \
	ShooterUE_Plugins_ProceduralFirstPersonAnimationSystem_Source_ProceduralFirstPersonAnimationSystem_Public_ProceduralFirstPersonAnimationsComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	ShooterUE_Plugins_ProceduralFirstPersonAnimationSystem_Source_ProceduralFirstPersonAnimationSystem_Public_ProceduralFirstPersonAnimationsComponent_h_18_INCLASS_NO_PURE_DECLS \
	ShooterUE_Plugins_ProceduralFirstPersonAnimationSystem_Source_ProceduralFirstPersonAnimationSystem_Public_ProceduralFirstPersonAnimationsComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROCEDURALFIRSTPERSONANIMATIONSYSTEM_API UClass* StaticClass<class UProceduralFirstPersonAnimationsComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ShooterUE_Plugins_ProceduralFirstPersonAnimationSystem_Source_ProceduralFirstPersonAnimationSystem_Public_ProceduralFirstPersonAnimationsComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
