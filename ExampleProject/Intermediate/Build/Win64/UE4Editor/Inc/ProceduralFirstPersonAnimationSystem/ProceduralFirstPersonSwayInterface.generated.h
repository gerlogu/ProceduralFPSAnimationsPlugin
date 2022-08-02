// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UActorComponent;
#ifdef PROCEDURALFIRSTPERSONANIMATIONSYSTEM_ProceduralFirstPersonSwayInterface_generated_h
#error "ProceduralFirstPersonSwayInterface.generated.h already included, missing '#pragma once' in ProceduralFirstPersonSwayInterface.h"
#endif
#define PROCEDURALFIRSTPERSONANIMATIONSYSTEM_ProceduralFirstPersonSwayInterface_generated_h

#define ShooterUE_Plugins_ProceduralFirstPersonAnimationSystem_Source_ProceduralFirstPersonAnimationSystem_Public_ProceduralFirstPersonSwayInterface_h_13_SPARSE_DATA
#define ShooterUE_Plugins_ProceduralFirstPersonAnimationSystem_Source_ProceduralFirstPersonAnimationSystem_Public_ProceduralFirstPersonSwayInterface_h_13_RPC_WRAPPERS \
	virtual float GetLookAmount_Implementation(float CurrentAmount) { return 0; }; \
	virtual void UpdateMovementSway_Implementation() {}; \
	virtual void UpdateCameraSway_Implementation() {}; \
	virtual void InitMovementSway_Implementation(UActorComponent* MovementSway) {}; \
	virtual void InitCameraSway_Implementation(UActorComponent* CameraSway) {}; \
 \
	DECLARE_FUNCTION(execGetLookAmount); \
	DECLARE_FUNCTION(execUpdateMovementSway); \
	DECLARE_FUNCTION(execUpdateCameraSway); \
	DECLARE_FUNCTION(execInitMovementSway); \
	DECLARE_FUNCTION(execInitCameraSway);


#define ShooterUE_Plugins_ProceduralFirstPersonAnimationSystem_Source_ProceduralFirstPersonAnimationSystem_Public_ProceduralFirstPersonSwayInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual float GetLookAmount_Implementation(float CurrentAmount) { return 0; }; \
	virtual void UpdateMovementSway_Implementation() {}; \
	virtual void UpdateCameraSway_Implementation() {}; \
	virtual void InitMovementSway_Implementation(UActorComponent* MovementSway) {}; \
	virtual void InitCameraSway_Implementation(UActorComponent* CameraSway) {}; \
 \
	DECLARE_FUNCTION(execGetLookAmount); \
	DECLARE_FUNCTION(execUpdateMovementSway); \
	DECLARE_FUNCTION(execUpdateCameraSway); \
	DECLARE_FUNCTION(execInitMovementSway); \
	DECLARE_FUNCTION(execInitCameraSway);


#define ShooterUE_Plugins_ProceduralFirstPersonAnimationSystem_Source_ProceduralFirstPersonAnimationSystem_Public_ProceduralFirstPersonSwayInterface_h_13_EVENT_PARMS \
	struct ProceduralFirstPersonSwayInterface_eventGetLookAmount_Parms \
	{ \
		float CurrentAmount; \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ProceduralFirstPersonSwayInterface_eventGetLookAmount_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct ProceduralFirstPersonSwayInterface_eventInitCameraSway_Parms \
	{ \
		UActorComponent* CameraSway; \
	}; \
	struct ProceduralFirstPersonSwayInterface_eventInitMovementSway_Parms \
	{ \
		UActorComponent* MovementSway; \
	};


#define ShooterUE_Plugins_ProceduralFirstPersonAnimationSystem_Source_ProceduralFirstPersonAnimationSystem_Public_ProceduralFirstPersonSwayInterface_h_13_CALLBACK_WRAPPERS
#define ShooterUE_Plugins_ProceduralFirstPersonAnimationSystem_Source_ProceduralFirstPersonAnimationSystem_Public_ProceduralFirstPersonSwayInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PROCEDURALFIRSTPERSONANIMATIONSYSTEM_API UProceduralFirstPersonSwayInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProceduralFirstPersonSwayInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROCEDURALFIRSTPERSONANIMATIONSYSTEM_API, UProceduralFirstPersonSwayInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProceduralFirstPersonSwayInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	PROCEDURALFIRSTPERSONANIMATIONSYSTEM_API UProceduralFirstPersonSwayInterface(UProceduralFirstPersonSwayInterface&&); \
	PROCEDURALFIRSTPERSONANIMATIONSYSTEM_API UProceduralFirstPersonSwayInterface(const UProceduralFirstPersonSwayInterface&); \
public:


#define ShooterUE_Plugins_ProceduralFirstPersonAnimationSystem_Source_ProceduralFirstPersonAnimationSystem_Public_ProceduralFirstPersonSwayInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PROCEDURALFIRSTPERSONANIMATIONSYSTEM_API UProceduralFirstPersonSwayInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	PROCEDURALFIRSTPERSONANIMATIONSYSTEM_API UProceduralFirstPersonSwayInterface(UProceduralFirstPersonSwayInterface&&); \
	PROCEDURALFIRSTPERSONANIMATIONSYSTEM_API UProceduralFirstPersonSwayInterface(const UProceduralFirstPersonSwayInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROCEDURALFIRSTPERSONANIMATIONSYSTEM_API, UProceduralFirstPersonSwayInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProceduralFirstPersonSwayInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProceduralFirstPersonSwayInterface)


#define ShooterUE_Plugins_ProceduralFirstPersonAnimationSystem_Source_ProceduralFirstPersonAnimationSystem_Public_ProceduralFirstPersonSwayInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUProceduralFirstPersonSwayInterface(); \
	friend struct Z_Construct_UClass_UProceduralFirstPersonSwayInterface_Statics; \
public: \
	DECLARE_CLASS(UProceduralFirstPersonSwayInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ProceduralFirstPersonAnimationSystem"), PROCEDURALFIRSTPERSONANIMATIONSYSTEM_API) \
	DECLARE_SERIALIZER(UProceduralFirstPersonSwayInterface)


#define ShooterUE_Plugins_ProceduralFirstPersonAnimationSystem_Source_ProceduralFirstPersonAnimationSystem_Public_ProceduralFirstPersonSwayInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	ShooterUE_Plugins_ProceduralFirstPersonAnimationSystem_Source_ProceduralFirstPersonAnimationSystem_Public_ProceduralFirstPersonSwayInterface_h_13_GENERATED_UINTERFACE_BODY() \
	ShooterUE_Plugins_ProceduralFirstPersonAnimationSystem_Source_ProceduralFirstPersonAnimationSystem_Public_ProceduralFirstPersonSwayInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ShooterUE_Plugins_ProceduralFirstPersonAnimationSystem_Source_ProceduralFirstPersonAnimationSystem_Public_ProceduralFirstPersonSwayInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	ShooterUE_Plugins_ProceduralFirstPersonAnimationSystem_Source_ProceduralFirstPersonAnimationSystem_Public_ProceduralFirstPersonSwayInterface_h_13_GENERATED_UINTERFACE_BODY() \
	ShooterUE_Plugins_ProceduralFirstPersonAnimationSystem_Source_ProceduralFirstPersonAnimationSystem_Public_ProceduralFirstPersonSwayInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ShooterUE_Plugins_ProceduralFirstPersonAnimationSystem_Source_ProceduralFirstPersonAnimationSystem_Public_ProceduralFirstPersonSwayInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IProceduralFirstPersonSwayInterface() {} \
public: \
	typedef UProceduralFirstPersonSwayInterface UClassType; \
	typedef IProceduralFirstPersonSwayInterface ThisClass; \
	static float Execute_GetLookAmount(UObject* O, float CurrentAmount); \
	static void Execute_InitCameraSway(UObject* O, UActorComponent* CameraSway); \
	static void Execute_InitMovementSway(UObject* O, UActorComponent* MovementSway); \
	static void Execute_UpdateCameraSway(UObject* O); \
	static void Execute_UpdateMovementSway(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define ShooterUE_Plugins_ProceduralFirstPersonAnimationSystem_Source_ProceduralFirstPersonAnimationSystem_Public_ProceduralFirstPersonSwayInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IProceduralFirstPersonSwayInterface() {} \
public: \
	typedef UProceduralFirstPersonSwayInterface UClassType; \
	typedef IProceduralFirstPersonSwayInterface ThisClass; \
	static float Execute_GetLookAmount(UObject* O, float CurrentAmount); \
	static void Execute_InitCameraSway(UObject* O, UActorComponent* CameraSway); \
	static void Execute_InitMovementSway(UObject* O, UActorComponent* MovementSway); \
	static void Execute_UpdateCameraSway(UObject* O); \
	static void Execute_UpdateMovementSway(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define ShooterUE_Plugins_ProceduralFirstPersonAnimationSystem_Source_ProceduralFirstPersonAnimationSystem_Public_ProceduralFirstPersonSwayInterface_h_10_PROLOG \
	ShooterUE_Plugins_ProceduralFirstPersonAnimationSystem_Source_ProceduralFirstPersonAnimationSystem_Public_ProceduralFirstPersonSwayInterface_h_13_EVENT_PARMS


#define ShooterUE_Plugins_ProceduralFirstPersonAnimationSystem_Source_ProceduralFirstPersonAnimationSystem_Public_ProceduralFirstPersonSwayInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterUE_Plugins_ProceduralFirstPersonAnimationSystem_Source_ProceduralFirstPersonAnimationSystem_Public_ProceduralFirstPersonSwayInterface_h_13_SPARSE_DATA \
	ShooterUE_Plugins_ProceduralFirstPersonAnimationSystem_Source_ProceduralFirstPersonAnimationSystem_Public_ProceduralFirstPersonSwayInterface_h_13_RPC_WRAPPERS \
	ShooterUE_Plugins_ProceduralFirstPersonAnimationSystem_Source_ProceduralFirstPersonAnimationSystem_Public_ProceduralFirstPersonSwayInterface_h_13_CALLBACK_WRAPPERS \
	ShooterUE_Plugins_ProceduralFirstPersonAnimationSystem_Source_ProceduralFirstPersonAnimationSystem_Public_ProceduralFirstPersonSwayInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ShooterUE_Plugins_ProceduralFirstPersonAnimationSystem_Source_ProceduralFirstPersonAnimationSystem_Public_ProceduralFirstPersonSwayInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterUE_Plugins_ProceduralFirstPersonAnimationSystem_Source_ProceduralFirstPersonAnimationSystem_Public_ProceduralFirstPersonSwayInterface_h_13_SPARSE_DATA \
	ShooterUE_Plugins_ProceduralFirstPersonAnimationSystem_Source_ProceduralFirstPersonAnimationSystem_Public_ProceduralFirstPersonSwayInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	ShooterUE_Plugins_ProceduralFirstPersonAnimationSystem_Source_ProceduralFirstPersonAnimationSystem_Public_ProceduralFirstPersonSwayInterface_h_13_CALLBACK_WRAPPERS \
	ShooterUE_Plugins_ProceduralFirstPersonAnimationSystem_Source_ProceduralFirstPersonAnimationSystem_Public_ProceduralFirstPersonSwayInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROCEDURALFIRSTPERSONANIMATIONSYSTEM_API UClass* StaticClass<class UProceduralFirstPersonSwayInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ShooterUE_Plugins_ProceduralFirstPersonAnimationSystem_Source_ProceduralFirstPersonAnimationSystem_Public_ProceduralFirstPersonSwayInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
