// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralFirstPersonAnimationSystem/Public/ProceduralFirstPersonAnimationsComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProceduralFirstPersonAnimationsComponent() {}
// Cross Module References
	PROCEDURALFIRSTPERSONANIMATIONSYSTEM_API UClass* Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_NoRegister();
	PROCEDURALFIRSTPERSONANIMATIONSYSTEM_API UClass* Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_ProceduralFirstPersonAnimationSystem();
	ENGINE_API UClass* Z_Construct_UClass_UCurveVector_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	PROCEDURALFIRSTPERSONANIMATIONSYSTEM_API UClass* Z_Construct_UClass_UProceduralFirstPersonAnimationsInterface_NoRegister();
	PROCEDURALFIRSTPERSONANIMATIONSYSTEM_API UClass* Z_Construct_UClass_UProceduralFirstPersonSwayInterface_NoRegister();
// End Cross Module References
	void UProceduralFirstPersonAnimationsComponent::StaticRegisterNativesUProceduralFirstPersonAnimationsComponent()
	{
	}
	UClass* Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_NoRegister()
	{
		return UProceduralFirstPersonAnimationsComponent::StaticClass();
	}
	struct Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableDebug_MetaData[];
#endif
		static void NewProp_EnableDebug_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableDebug;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseCameraSway_MetaData[];
#endif
		static void NewProp_UseCameraSway_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseCameraSway;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmoothAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SmoothAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LookAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmountCap_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AmountCap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_X_AxisKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_X_AxisKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Y_AxisKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Y_AxisKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseMovementSway_MetaData[];
#endif
		static void NewProp_UseMovementSway_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseMovementSway;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwayAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SwayAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InterpSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseIdleLocationAnimation_MetaData[];
#endif
		static void NewProp_UseIdleLocationAnimation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseIdleLocationAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdleLocationCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IdleLocationCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseIdleRotationAnimation_MetaData[];
#endif
		static void NewProp_UseIdleRotationAnimation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseIdleRotationAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdleRotationCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IdleRotationCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseWalkingLocationAnimation_MetaData[];
#endif
		static void NewProp_UseWalkingLocationAnimation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseWalkingLocationAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WalkingLocationCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WalkingLocationCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseWalkingRotationAnimation_MetaData[];
#endif
		static void NewProp_UseWalkingRotationAnimation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseWalkingRotationAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WalkingRotationCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WalkingRotationCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseRecoilLocationAnimation_MetaData[];
#endif
		static void NewProp_UseRecoilLocationAnimation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseRecoilLocationAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecoilLocationCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RecoilLocationCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseRecoilRotationAnimation_MetaData[];
#endif
		static void NewProp_UseRecoilRotationAnimation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseRecoilRotationAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecoilRotationCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RecoilRotationCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseAimAnimation_MetaData[];
#endif
		static void NewProp_UseAimAnimation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseAimAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimAnimationCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AimAnimationCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AimSocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraSwayComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraSwayComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementSwayComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MovementSwayComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterMovementComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharacterMovementComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponHolderComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponHolderComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WalkingHolderComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WalkingHolderComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimHolderComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AimHolderComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponSkeletalMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponSkeletalMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponStaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponStaticMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralFirstPersonAnimationSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ProceduralFirstPersonAnimationsComponent.h" },
		{ "ModuleRelativePath", "Public/ProceduralFirstPersonAnimationsComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_EnableDebug_MetaData[] = {
		{ "Category", "Procedural Animations" },
		{ "ModuleRelativePath", "Public/ProceduralFirstPersonAnimationsComponent.h" },
	};
#endif
	void Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_EnableDebug_SetBit(void* Obj)
	{
		((UProceduralFirstPersonAnimationsComponent*)Obj)->EnableDebug = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_EnableDebug = { "EnableDebug", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UProceduralFirstPersonAnimationsComponent), &Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_EnableDebug_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_EnableDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_EnableDebug_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_UseCameraSway_MetaData[] = {
		{ "Category", "Procedural Animations|Camera Sway" },
		{ "ModuleRelativePath", "Public/ProceduralFirstPersonAnimationsComponent.h" },
	};
#endif
	void Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_UseCameraSway_SetBit(void* Obj)
	{
		((UProceduralFirstPersonAnimationsComponent*)Obj)->UseCameraSway = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_UseCameraSway = { "UseCameraSway", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UProceduralFirstPersonAnimationsComponent), &Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_UseCameraSway_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_UseCameraSway_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_UseCameraSway_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_SmoothAmount_MetaData[] = {
		{ "Category", "Procedural Animations|Camera Sway" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "UseCameraSway" },
		{ "ModuleRelativePath", "Public/ProceduralFirstPersonAnimationsComponent.h" },
		{ "ToolTip", "Animation Smoothness" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_SmoothAmount = { "SmoothAmount", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProceduralFirstPersonAnimationsComponent, SmoothAmount), METADATA_PARAMS(Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_SmoothAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_SmoothAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_LookAmount_MetaData[] = {
		{ "Category", "Procedural Animations|Camera Sway" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "UseCameraSway" },
		{ "ModuleRelativePath", "Public/ProceduralFirstPersonAnimationsComponent.h" },
		{ "ToolTip", "Look Amount" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_LookAmount = { "LookAmount", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProceduralFirstPersonAnimationsComponent, LookAmount), METADATA_PARAMS(Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_LookAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_LookAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_AmountCap_MetaData[] = {
		{ "Category", "Procedural Animations|Camera Sway" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "UseCameraSway" },
		{ "ModuleRelativePath", "Public/ProceduralFirstPersonAnimationsComponent.h" },
		{ "ToolTip", "Max Look Amount" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_AmountCap = { "AmountCap", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProceduralFirstPersonAnimationsComponent, AmountCap), METADATA_PARAMS(Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_AmountCap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_AmountCap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_X_AxisKey_MetaData[] = {
		{ "Category", "Procedural Animations|Camera Sway" },
		{ "EditCondition", "UseCameraSway" },
		{ "ModuleRelativePath", "Public/ProceduralFirstPersonAnimationsComponent.h" },
		{ "ToolTip", "Input X Axis" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_X_AxisKey = { "X_AxisKey", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProceduralFirstPersonAnimationsComponent, X_AxisKey), METADATA_PARAMS(Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_X_AxisKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_X_AxisKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_Y_AxisKey_MetaData[] = {
		{ "Category", "Procedural Animations|Camera Sway" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "UseCameraSway" },
		{ "ModuleRelativePath", "Public/ProceduralFirstPersonAnimationsComponent.h" },
		{ "ToolTip", "Input Y Axis" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_Y_AxisKey = { "Y_AxisKey", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProceduralFirstPersonAnimationsComponent, Y_AxisKey), METADATA_PARAMS(Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_Y_AxisKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_Y_AxisKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_UseMovementSway_MetaData[] = {
		{ "Category", "Procedural Animations|Movement Sway" },
		{ "ModuleRelativePath", "Public/ProceduralFirstPersonAnimationsComponent.h" },
	};
#endif
	void Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_UseMovementSway_SetBit(void* Obj)
	{
		((UProceduralFirstPersonAnimationsComponent*)Obj)->UseMovementSway = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_UseMovementSway = { "UseMovementSway", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UProceduralFirstPersonAnimationsComponent), &Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_UseMovementSway_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_UseMovementSway_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_UseMovementSway_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_SwayAmount_MetaData[] = {
		{ "Category", "Procedural Animations|Movement Sway" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "UseMovementSway" },
		{ "ModuleRelativePath", "Public/ProceduralFirstPersonAnimationsComponent.h" },
		{ "ToolTip", "Sway Amount" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_SwayAmount = { "SwayAmount", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProceduralFirstPersonAnimationsComponent, SwayAmount), METADATA_PARAMS(Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_SwayAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_SwayAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_InterpSpeed_MetaData[] = {
		{ "Category", "Procedural Animations|Movement Sway" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "UseMovementSway" },
		{ "ModuleRelativePath", "Public/ProceduralFirstPersonAnimationsComponent.h" },
		{ "ToolTip", "Interpolation Speed" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_InterpSpeed = { "InterpSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProceduralFirstPersonAnimationsComponent, InterpSpeed), METADATA_PARAMS(Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_InterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_InterpSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_UseIdleLocationAnimation_MetaData[] = {
		{ "Category", "Procedural Animations|Animation Curves|Idle Animation" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/ProceduralFirstPersonAnimationsComponent.h" },
		{ "ToolTip", "Enables Idle Animation" },
	};
#endif
	void Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_UseIdleLocationAnimation_SetBit(void* Obj)
	{
		((UProceduralFirstPersonAnimationsComponent*)Obj)->UseIdleLocationAnimation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_UseIdleLocationAnimation = { "UseIdleLocationAnimation", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UProceduralFirstPersonAnimationsComponent), &Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_UseIdleLocationAnimation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_UseIdleLocationAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_UseIdleLocationAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_IdleLocationCurve_MetaData[] = {
		{ "Category", "Procedural Animations|Animation Curves|Idle Animation" },
		{ "EditCondition", "UseIdleLocationAnimation" },
		{ "ModuleRelativePath", "Public/ProceduralFirstPersonAnimationsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_IdleLocationCurve = { "IdleLocationCurve", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProceduralFirstPersonAnimationsComponent, IdleLocationCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_IdleLocationCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_IdleLocationCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_UseIdleRotationAnimation_MetaData[] = {
		{ "Category", "Procedural Animations|Animation Curves|Idle Animation" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/ProceduralFirstPersonAnimationsComponent.h" },
		{ "ToolTip", "Enables Idle Animation" },
	};
#endif
	void Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_UseIdleRotationAnimation_SetBit(void* Obj)
	{
		((UProceduralFirstPersonAnimationsComponent*)Obj)->UseIdleRotationAnimation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_UseIdleRotationAnimation = { "UseIdleRotationAnimation", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UProceduralFirstPersonAnimationsComponent), &Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_UseIdleRotationAnimation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_UseIdleRotationAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_UseIdleRotationAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_IdleRotationCurve_MetaData[] = {
		{ "Category", "Procedural Animations|Animation Curves|Idle Animation" },
		{ "EditCondition", "UseIdleRotationAnimation" },
		{ "ModuleRelativePath", "Public/ProceduralFirstPersonAnimationsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_IdleRotationCurve = { "IdleRotationCurve", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProceduralFirstPersonAnimationsComponent, IdleRotationCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_IdleRotationCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_IdleRotationCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_UseWalkingLocationAnimation_MetaData[] = {
		{ "Category", "Procedural Animations|Animation Curves|Walking Animation" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/ProceduralFirstPersonAnimationsComponent.h" },
		{ "ToolTip", "Enables Walking Animation" },
	};
#endif
	void Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_UseWalkingLocationAnimation_SetBit(void* Obj)
	{
		((UProceduralFirstPersonAnimationsComponent*)Obj)->UseWalkingLocationAnimation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_UseWalkingLocationAnimation = { "UseWalkingLocationAnimation", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UProceduralFirstPersonAnimationsComponent), &Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_UseWalkingLocationAnimation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_UseWalkingLocationAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_UseWalkingLocationAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_WalkingLocationCurve_MetaData[] = {
		{ "Category", "Procedural Animations|Animation Curves|Walking Animation" },
		{ "EditCondition", "UseWalkingLocationAnimation" },
		{ "ModuleRelativePath", "Public/ProceduralFirstPersonAnimationsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_WalkingLocationCurve = { "WalkingLocationCurve", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProceduralFirstPersonAnimationsComponent, WalkingLocationCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_WalkingLocationCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_WalkingLocationCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_UseWalkingRotationAnimation_MetaData[] = {
		{ "Category", "Procedural Animations|Animation Curves|Walking Animation" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/ProceduralFirstPersonAnimationsComponent.h" },
		{ "ToolTip", "Enables Walking Animation" },
	};
#endif
	void Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_UseWalkingRotationAnimation_SetBit(void* Obj)
	{
		((UProceduralFirstPersonAnimationsComponent*)Obj)->UseWalkingRotationAnimation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_UseWalkingRotationAnimation = { "UseWalkingRotationAnimation", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UProceduralFirstPersonAnimationsComponent), &Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_UseWalkingRotationAnimation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_UseWalkingRotationAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_UseWalkingRotationAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_WalkingRotationCurve_MetaData[] = {
		{ "Category", "Procedural Animations|Animation Curves|Walking Animation" },
		{ "EditCondition", "UseWalkingRotationAnimation" },
		{ "ModuleRelativePath", "Public/ProceduralFirstPersonAnimationsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_WalkingRotationCurve = { "WalkingRotationCurve", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProceduralFirstPersonAnimationsComponent, WalkingRotationCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_WalkingRotationCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_WalkingRotationCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_UseRecoilLocationAnimation_MetaData[] = {
		{ "Category", "Procedural Animations|Animation Curves|Fire/Recoil Animation" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/ProceduralFirstPersonAnimationsComponent.h" },
		{ "ToolTip", "Enables Recoil Location Animation" },
	};
#endif
	void Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_UseRecoilLocationAnimation_SetBit(void* Obj)
	{
		((UProceduralFirstPersonAnimationsComponent*)Obj)->UseRecoilLocationAnimation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_UseRecoilLocationAnimation = { "UseRecoilLocationAnimation", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UProceduralFirstPersonAnimationsComponent), &Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_UseRecoilLocationAnimation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_UseRecoilLocationAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_UseRecoilLocationAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_RecoilLocationCurve_MetaData[] = {
		{ "Category", "Procedural Animations|Animation Curves|Fire/Recoil Animation" },
		{ "EditCondition", "UseRecoilLocationAnimation" },
		{ "ModuleRelativePath", "Public/ProceduralFirstPersonAnimationsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_RecoilLocationCurve = { "RecoilLocationCurve", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProceduralFirstPersonAnimationsComponent, RecoilLocationCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_RecoilLocationCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_RecoilLocationCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_UseRecoilRotationAnimation_MetaData[] = {
		{ "Category", "Procedural Animations|Animation Curves|Fire/Recoil Animation" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/ProceduralFirstPersonAnimationsComponent.h" },
		{ "ToolTip", "Enables Recoil Rotation Animation" },
	};
#endif
	void Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_UseRecoilRotationAnimation_SetBit(void* Obj)
	{
		((UProceduralFirstPersonAnimationsComponent*)Obj)->UseRecoilRotationAnimation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_UseRecoilRotationAnimation = { "UseRecoilRotationAnimation", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UProceduralFirstPersonAnimationsComponent), &Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_UseRecoilRotationAnimation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_UseRecoilRotationAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_UseRecoilRotationAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_RecoilRotationCurve_MetaData[] = {
		{ "Category", "Procedural Animations|Animation Curves|Fire/Recoil Animation" },
		{ "EditCondition", "UseRecoilRotationAnimation" },
		{ "ModuleRelativePath", "Public/ProceduralFirstPersonAnimationsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_RecoilRotationCurve = { "RecoilRotationCurve", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProceduralFirstPersonAnimationsComponent, RecoilRotationCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_RecoilRotationCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_RecoilRotationCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_UseAimAnimation_MetaData[] = {
		{ "Category", "Procedural Animations|Animation Curves|Aim Animation" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/ProceduralFirstPersonAnimationsComponent.h" },
		{ "ToolTip", "Enables Aim Animation" },
	};
#endif
	void Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_UseAimAnimation_SetBit(void* Obj)
	{
		((UProceduralFirstPersonAnimationsComponent*)Obj)->UseAimAnimation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_UseAimAnimation = { "UseAimAnimation", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UProceduralFirstPersonAnimationsComponent), &Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_UseAimAnimation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_UseAimAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_UseAimAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_AimAnimationCurve_MetaData[] = {
		{ "Category", "Procedural Animations|Animation Curves|Aim Animation" },
		{ "EditCondition", "UseAimAnimation" },
		{ "ModuleRelativePath", "Public/ProceduralFirstPersonAnimationsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_AimAnimationCurve = { "AimAnimationCurve", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProceduralFirstPersonAnimationsComponent, AimAnimationCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_AimAnimationCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_AimAnimationCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_AimSocketName_MetaData[] = {
		{ "Category", "Procedural Animations|Animation Curves|Aim Animation" },
		{ "EditCondition", "UseAimAnimation" },
		{ "ModuleRelativePath", "Public/ProceduralFirstPersonAnimationsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_AimSocketName = { "AimSocketName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProceduralFirstPersonAnimationsComponent, AimSocketName), METADATA_PARAMS(Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_AimSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_AimSocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_CameraSwayComponent_MetaData[] = {
		{ "Category", "ProceduralFirstPersonAnimationsComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ProceduralFirstPersonAnimationsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_CameraSwayComponent = { "CameraSwayComponent", nullptr, (EPropertyFlags)0x002008000008080d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProceduralFirstPersonAnimationsComponent, CameraSwayComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_CameraSwayComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_CameraSwayComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_MovementSwayComponent_MetaData[] = {
		{ "Category", "ProceduralFirstPersonAnimationsComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ProceduralFirstPersonAnimationsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_MovementSwayComponent = { "MovementSwayComponent", nullptr, (EPropertyFlags)0x002008000008080d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProceduralFirstPersonAnimationsComponent, MovementSwayComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_MovementSwayComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_MovementSwayComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_CharacterMovementComponent_MetaData[] = {
		{ "Category", "ProceduralFirstPersonAnimationsComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ProceduralFirstPersonAnimationsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_CharacterMovementComponent = { "CharacterMovementComponent", nullptr, (EPropertyFlags)0x002008000008080d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProceduralFirstPersonAnimationsComponent, CharacterMovementComponent), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_CharacterMovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_CharacterMovementComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_WeaponHolderComponent_MetaData[] = {
		{ "Category", "ProceduralFirstPersonAnimationsComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ProceduralFirstPersonAnimationsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_WeaponHolderComponent = { "WeaponHolderComponent", nullptr, (EPropertyFlags)0x002008000008080d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProceduralFirstPersonAnimationsComponent, WeaponHolderComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_WeaponHolderComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_WeaponHolderComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_WalkingHolderComponent_MetaData[] = {
		{ "Category", "ProceduralFirstPersonAnimationsComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ProceduralFirstPersonAnimationsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_WalkingHolderComponent = { "WalkingHolderComponent", nullptr, (EPropertyFlags)0x002008000008080d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProceduralFirstPersonAnimationsComponent, WalkingHolderComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_WalkingHolderComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_WalkingHolderComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_AimHolderComponent_MetaData[] = {
		{ "Category", "ProceduralFirstPersonAnimationsComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ProceduralFirstPersonAnimationsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_AimHolderComponent = { "AimHolderComponent", nullptr, (EPropertyFlags)0x002008000008080d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProceduralFirstPersonAnimationsComponent, AimHolderComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_AimHolderComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_AimHolderComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_WeaponSkeletalMesh_MetaData[] = {
		{ "Category", "ProceduralFirstPersonAnimationsComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ProceduralFirstPersonAnimationsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_WeaponSkeletalMesh = { "WeaponSkeletalMesh", nullptr, (EPropertyFlags)0x002008000008080d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProceduralFirstPersonAnimationsComponent, WeaponSkeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_WeaponSkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_WeaponSkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_WeaponStaticMesh_MetaData[] = {
		{ "Category", "ProceduralFirstPersonAnimationsComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ProceduralFirstPersonAnimationsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_WeaponStaticMesh = { "WeaponStaticMesh", nullptr, (EPropertyFlags)0x002008000008080d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProceduralFirstPersonAnimationsComponent, WeaponStaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_WeaponStaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_WeaponStaticMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_EnableDebug,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_UseCameraSway,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_SmoothAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_LookAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_AmountCap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_X_AxisKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_Y_AxisKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_UseMovementSway,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_SwayAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_InterpSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_UseIdleLocationAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_IdleLocationCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_UseIdleRotationAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_IdleRotationCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_UseWalkingLocationAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_WalkingLocationCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_UseWalkingRotationAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_WalkingRotationCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_UseRecoilLocationAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_RecoilLocationCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_UseRecoilRotationAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_RecoilRotationCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_UseAimAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_AimAnimationCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_AimSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_CameraSwayComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_MovementSwayComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_CharacterMovementComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_WeaponHolderComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_WalkingHolderComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_AimHolderComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_WeaponSkeletalMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::NewProp_WeaponStaticMesh,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UProceduralFirstPersonAnimationsInterface_NoRegister, (int32)VTABLE_OFFSET(UProceduralFirstPersonAnimationsComponent, IProceduralFirstPersonAnimationsInterface), false },
			{ Z_Construct_UClass_UProceduralFirstPersonSwayInterface_NoRegister, (int32)VTABLE_OFFSET(UProceduralFirstPersonAnimationsComponent, IProceduralFirstPersonSwayInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProceduralFirstPersonAnimationsComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::ClassParams = {
		&UProceduralFirstPersonAnimationsComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UProceduralFirstPersonAnimationsComponent, 1095420513);
	template<> PROCEDURALFIRSTPERSONANIMATIONSYSTEM_API UClass* StaticClass<UProceduralFirstPersonAnimationsComponent>()
	{
		return UProceduralFirstPersonAnimationsComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UProceduralFirstPersonAnimationsComponent(Z_Construct_UClass_UProceduralFirstPersonAnimationsComponent, &UProceduralFirstPersonAnimationsComponent::StaticClass, TEXT("/Script/ProceduralFirstPersonAnimationSystem"), TEXT("UProceduralFirstPersonAnimationsComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProceduralFirstPersonAnimationsComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
