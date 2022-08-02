// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UActorComponent;
#ifdef PROCEDURALFIRSTPERSONANIMATIONSYSTEM_ProceduralFirstPersonAnimationsInterface_generated_h
#error "ProceduralFirstPersonAnimationsInterface.generated.h already included, missing '#pragma once' in ProceduralFirstPersonAnimationsInterface.h"
#endif
#define PROCEDURALFIRSTPERSONANIMATIONSYSTEM_ProceduralFirstPersonAnimationsInterface_generated_h

#define ShooterUE_Plugins_ProceduralFirstPersonAnimationSystem_Source_ProceduralFirstPersonAnimationSystem_Public_ProceduralFirstPersonAnimationsInterface_h_14_SPARSE_DATA
#define ShooterUE_Plugins_ProceduralFirstPersonAnimationSystem_Source_ProceduralFirstPersonAnimationSystem_Public_ProceduralFirstPersonAnimationsInterface_h_14_RPC_WRAPPERS \
	virtual void UpdateAimAnimation_Implementation() {}; \
	virtual void UpdateWalkingAnimation_Implementation() {}; \
	virtual void UpdateRecoilAnimation_Implementation() {}; \
	virtual void FinishAim_Implementation() {}; \
	virtual void StartAim_Implementation() {}; \
	virtual void PlayFireAnimation_Implementation() {}; \
	virtual void Init_Implementation(UActorComponent* WeaponHolder, UActorComponent* WalkingHolder, UActorComponent* AimHolder, UActorComponent* WeaponMesh) {}; \
 \
	DECLARE_FUNCTION(execUpdateAimAnimation); \
	DECLARE_FUNCTION(execUpdateWalkingAnimation); \
	DECLARE_FUNCTION(execUpdateRecoilAnimation); \
	DECLARE_FUNCTION(execFinishAim); \
	DECLARE_FUNCTION(execStartAim); \
	DECLARE_FUNCTION(execPlayFireAnimation); \
	DECLARE_FUNCTION(execInit);


#define ShooterUE_Plugins_ProceduralFirstPersonAnimationSystem_Source_ProceduralFirstPersonAnimationSystem_Public_ProceduralFirstPersonAnimationsInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void UpdateAimAnimation_Implementation() {}; \
	virtual void UpdateWalkingAnimation_Implementation() {}; \
	virtual void UpdateRecoilAnimation_Implementation() {}; \
	virtual void FinishAim_Implementation() {}; \
	virtual void StartAim_Implementation() {}; \
	virtual void PlayFireAnimation_Implementation() {}; \
	virtual void Init_Implementation(UActorComponent* WeaponHolder, UActorComponent* WalkingHolder, UActorComponent* AimHolder, UActorComponent* WeaponMesh) {}; \
 \
	DECLARE_FUNCTION(execUpdateAimAnimation); \
	DECLARE_FUNCTION(execUpdateWalkingAnimation); \
	DECLARE_FUNCTION(execUpdateRecoilAnimation); \
	DECLARE_FUNCTION(execFinishAim); \
	DECLARE_FUNCTION(execStartAim); \
	DECLARE_FUNCTION(execPlayFireAnimation); \
	DECLARE_FUNCTION(execInit);


#define ShooterUE_Plugins_ProceduralFirstPersonAnimationSystem_Source_ProceduralFirstPersonAnimationSystem_Public_ProceduralFirstPersonAnimationsInterface_h_14_EVENT_PARMS \
	struct ProceduralFirstPersonAnimationsInterface_eventInit_Parms \
	{ \
		UActorComponent* WeaponHolder; \
		UActorComponent* WalkingHolder; \
		UActorComponent* AimHolder; \
		UActorComponent* WeaponMesh; \
	};


#define ShooterUE_Plugins_ProceduralFirstPersonAnimationSystem_Source_ProceduralFirstPersonAnimationSystem_Public_ProceduralFirstPersonAnimationsInterface_h_14_CALLBACK_WRAPPERS
#define ShooterUE_Plugins_ProceduralFirstPersonAnimationSystem_Source_ProceduralFirstPersonAnimationSystem_Public_ProceduralFirstPersonAnimationsInterface_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PROCEDURALFIRSTPERSONANIMATIONSYSTEM_API UProceduralFirstPersonAnimationsInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProceduralFirstPersonAnimationsInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROCEDURALFIRSTPERSONANIMATIONSYSTEM_API, UProceduralFirstPersonAnimationsInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProceduralFirstPersonAnimationsInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	PROCEDURALFIRSTPERSONANIMATIONSYSTEM_API UProceduralFirstPersonAnimationsInterface(UProceduralFirstPersonAnimationsInterface&&); \
	PROCEDURALFIRSTPERSONANIMATIONSYSTEM_API UProceduralFirstPersonAnimationsInterface(const UProceduralFirstPersonAnimationsInterface&); \
public:


#define ShooterUE_Plugins_ProceduralFirstPersonAnimationSystem_Source_ProceduralFirstPersonAnimationSystem_Public_ProceduralFirstPersonAnimationsInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PROCEDURALFIRSTPERSONANIMATIONSYSTEM_API UProceduralFirstPersonAnimationsInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	PROCEDURALFIRSTPERSONANIMATIONSYSTEM_API UProceduralFirstPersonAnimationsInterface(UProceduralFirstPersonAnimationsInterface&&); \
	PROCEDURALFIRSTPERSONANIMATIONSYSTEM_API UProceduralFirstPersonAnimationsInterface(const UProceduralFirstPersonAnimationsInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROCEDURALFIRSTPERSONANIMATIONSYSTEM_API, UProceduralFirstPersonAnimationsInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProceduralFirstPersonAnimationsInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProceduralFirstPersonAnimationsInterface)


#define ShooterUE_Plugins_ProceduralFirstPersonAnimationSystem_Source_ProceduralFirstPersonAnimationSystem_Public_ProceduralFirstPersonAnimationsInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUProceduralFirstPersonAnimationsInterface(); \
	friend struct Z_Construct_UClass_UProceduralFirstPersonAnimationsInterface_Statics; \
public: \
	DECLARE_CLASS(UProceduralFirstPersonAnimationsInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ProceduralFirstPersonAnimationSystem"), PROCEDURALFIRSTPERSONANIMATIONSYSTEM_API) \
	DECLARE_SERIALIZER(UProceduralFirstPersonAnimationsInterface)


#define ShooterUE_Plugins_ProceduralFirstPersonAnimationSystem_Source_ProceduralFirstPersonAnimationSystem_Public_ProceduralFirstPersonAnimationsInterface_h_14_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	ShooterUE_Plugins_ProceduralFirstPersonAnimationSystem_Source_ProceduralFirstPersonAnimationSystem_Public_ProceduralFirstPersonAnimationsInterface_h_14_GENERATED_UINTERFACE_BODY() \
	ShooterUE_Plugins_ProceduralFirstPersonAnimationSystem_Source_ProceduralFirstPersonAnimationSystem_Public_ProceduralFirstPersonAnimationsInterface_h_14_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ShooterUE_Plugins_ProceduralFirstPersonAnimationSystem_Source_ProceduralFirstPersonAnimationSystem_Public_ProceduralFirstPersonAnimationsInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	ShooterUE_Plugins_ProceduralFirstPersonAnimationSystem_Source_ProceduralFirstPersonAnimationSystem_Public_ProceduralFirstPersonAnimationsInterface_h_14_GENERATED_UINTERFACE_BODY() \
	ShooterUE_Plugins_ProceduralFirstPersonAnimationSystem_Source_ProceduralFirstPersonAnimationSystem_Public_ProceduralFirstPersonAnimationsInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ShooterUE_Plugins_ProceduralFirstPersonAnimationSystem_Source_ProceduralFirstPersonAnimationSystem_Public_ProceduralFirstPersonAnimationsInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IProceduralFirstPersonAnimationsInterface() {} \
public: \
	typedef UProceduralFirstPersonAnimationsInterface UClassType; \
	typedef IProceduralFirstPersonAnimationsInterface ThisClass; \
	static void Execute_FinishAim(UObject* O); \
	static void Execute_Init(UObject* O, UActorComponent* WeaponHolder, UActorComponent* WalkingHolder, UActorComponent* AimHolder, UActorComponent* WeaponMesh); \
	static void Execute_PlayFireAnimation(UObject* O); \
	static void Execute_StartAim(UObject* O); \
	static void Execute_UpdateAimAnimation(UObject* O); \
	static void Execute_UpdateRecoilAnimation(UObject* O); \
	static void Execute_UpdateWalkingAnimation(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define ShooterUE_Plugins_ProceduralFirstPersonAnimationSystem_Source_ProceduralFirstPersonAnimationSystem_Public_ProceduralFirstPersonAnimationsInterface_h_14_INCLASS_IINTERFACE \
protected: \
	virtual ~IProceduralFirstPersonAnimationsInterface() {} \
public: \
	typedef UProceduralFirstPersonAnimationsInterface UClassType; \
	typedef IProceduralFirstPersonAnimationsInterface ThisClass; \
	static void Execute_FinishAim(UObject* O); \
	static void Execute_Init(UObject* O, UActorComponent* WeaponHolder, UActorComponent* WalkingHolder, UActorComponent* AimHolder, UActorComponent* WeaponMesh); \
	static void Execute_PlayFireAnimation(UObject* O); \
	static void Execute_StartAim(UObject* O); \
	static void Execute_UpdateAimAnimation(UObject* O); \
	static void Execute_UpdateRecoilAnimation(UObject* O); \
	static void Execute_UpdateWalkingAnimation(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define ShooterUE_Plugins_ProceduralFirstPersonAnimationSystem_Source_ProceduralFirstPersonAnimationSystem_Public_ProceduralFirstPersonAnimationsInterface_h_11_PROLOG \
	ShooterUE_Plugins_ProceduralFirstPersonAnimationSystem_Source_ProceduralFirstPersonAnimationSystem_Public_ProceduralFirstPersonAnimationsInterface_h_14_EVENT_PARMS


#define ShooterUE_Plugins_ProceduralFirstPersonAnimationSystem_Source_ProceduralFirstPersonAnimationSystem_Public_ProceduralFirstPersonAnimationsInterface_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterUE_Plugins_ProceduralFirstPersonAnimationSystem_Source_ProceduralFirstPersonAnimationSystem_Public_ProceduralFirstPersonAnimationsInterface_h_14_SPARSE_DATA \
	ShooterUE_Plugins_ProceduralFirstPersonAnimationSystem_Source_ProceduralFirstPersonAnimationSystem_Public_ProceduralFirstPersonAnimationsInterface_h_14_RPC_WRAPPERS \
	ShooterUE_Plugins_ProceduralFirstPersonAnimationSystem_Source_ProceduralFirstPersonAnimationSystem_Public_ProceduralFirstPersonAnimationsInterface_h_14_CALLBACK_WRAPPERS \
	ShooterUE_Plugins_ProceduralFirstPersonAnimationSystem_Source_ProceduralFirstPersonAnimationSystem_Public_ProceduralFirstPersonAnimationsInterface_h_14_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ShooterUE_Plugins_ProceduralFirstPersonAnimationSystem_Source_ProceduralFirstPersonAnimationSystem_Public_ProceduralFirstPersonAnimationsInterface_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterUE_Plugins_ProceduralFirstPersonAnimationSystem_Source_ProceduralFirstPersonAnimationSystem_Public_ProceduralFirstPersonAnimationsInterface_h_14_SPARSE_DATA \
	ShooterUE_Plugins_ProceduralFirstPersonAnimationSystem_Source_ProceduralFirstPersonAnimationSystem_Public_ProceduralFirstPersonAnimationsInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	ShooterUE_Plugins_ProceduralFirstPersonAnimationSystem_Source_ProceduralFirstPersonAnimationSystem_Public_ProceduralFirstPersonAnimationsInterface_h_14_CALLBACK_WRAPPERS \
	ShooterUE_Plugins_ProceduralFirstPersonAnimationSystem_Source_ProceduralFirstPersonAnimationSystem_Public_ProceduralFirstPersonAnimationsInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROCEDURALFIRSTPERSONANIMATIONSYSTEM_API UClass* StaticClass<class UProceduralFirstPersonAnimationsInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ShooterUE_Plugins_ProceduralFirstPersonAnimationSystem_Source_ProceduralFirstPersonAnimationSystem_Public_ProceduralFirstPersonAnimationsInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
