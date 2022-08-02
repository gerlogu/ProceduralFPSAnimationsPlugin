// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralFirstPersonAnimationSystem/Public/ProceduralFirstPersonAnimationsInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProceduralFirstPersonAnimationsInterface() {}
// Cross Module References
	PROCEDURALFIRSTPERSONANIMATIONSYSTEM_API UClass* Z_Construct_UClass_UProceduralFirstPersonAnimationsInterface_NoRegister();
	PROCEDURALFIRSTPERSONANIMATIONSYSTEM_API UClass* Z_Construct_UClass_UProceduralFirstPersonAnimationsInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_ProceduralFirstPersonAnimationSystem();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(IProceduralFirstPersonAnimationsInterface::execUpdateAimAnimation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateAimAnimation_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IProceduralFirstPersonAnimationsInterface::execUpdateWalkingAnimation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateWalkingAnimation_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IProceduralFirstPersonAnimationsInterface::execUpdateRecoilAnimation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateRecoilAnimation_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IProceduralFirstPersonAnimationsInterface::execFinishAim)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishAim_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IProceduralFirstPersonAnimationsInterface::execStartAim)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartAim_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IProceduralFirstPersonAnimationsInterface::execPlayFireAnimation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayFireAnimation_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IProceduralFirstPersonAnimationsInterface::execInit)
	{
		P_GET_OBJECT(UActorComponent,Z_Param_WeaponHolder);
		P_GET_OBJECT(UActorComponent,Z_Param_WalkingHolder);
		P_GET_OBJECT(UActorComponent,Z_Param_AimHolder);
		P_GET_OBJECT(UActorComponent,Z_Param_WeaponMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Init_Implementation(Z_Param_WeaponHolder,Z_Param_WalkingHolder,Z_Param_AimHolder,Z_Param_WeaponMesh);
		P_NATIVE_END;
	}
	void IProceduralFirstPersonAnimationsInterface::FinishAim()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_FinishAim instead.");
	}
	void IProceduralFirstPersonAnimationsInterface::Init(UActorComponent* WeaponHolder, UActorComponent* WalkingHolder, UActorComponent* AimHolder, UActorComponent* WeaponMesh)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Init instead.");
	}
	void IProceduralFirstPersonAnimationsInterface::PlayFireAnimation()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_PlayFireAnimation instead.");
	}
	void IProceduralFirstPersonAnimationsInterface::StartAim()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_StartAim instead.");
	}
	void IProceduralFirstPersonAnimationsInterface::UpdateAimAnimation()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UpdateAimAnimation instead.");
	}
	void IProceduralFirstPersonAnimationsInterface::UpdateRecoilAnimation()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UpdateRecoilAnimation instead.");
	}
	void IProceduralFirstPersonAnimationsInterface::UpdateWalkingAnimation()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UpdateWalkingAnimation instead.");
	}
	void UProceduralFirstPersonAnimationsInterface::StaticRegisterNativesUProceduralFirstPersonAnimationsInterface()
	{
		UClass* Class = UProceduralFirstPersonAnimationsInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FinishAim", &IProceduralFirstPersonAnimationsInterface::execFinishAim },
			{ "Init", &IProceduralFirstPersonAnimationsInterface::execInit },
			{ "PlayFireAnimation", &IProceduralFirstPersonAnimationsInterface::execPlayFireAnimation },
			{ "StartAim", &IProceduralFirstPersonAnimationsInterface::execStartAim },
			{ "UpdateAimAnimation", &IProceduralFirstPersonAnimationsInterface::execUpdateAimAnimation },
			{ "UpdateRecoilAnimation", &IProceduralFirstPersonAnimationsInterface::execUpdateRecoilAnimation },
			{ "UpdateWalkingAnimation", &IProceduralFirstPersonAnimationsInterface::execUpdateWalkingAnimation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UProceduralFirstPersonAnimationsInterface_FinishAim_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralFirstPersonAnimationsInterface_FinishAim_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/ProceduralFirstPersonAnimationsInterface.h" },
		{ "ToolTip", "Stops Aim Animation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UProceduralFirstPersonAnimationsInterface_FinishAim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProceduralFirstPersonAnimationsInterface, nullptr, "FinishAim", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProceduralFirstPersonAnimationsInterface_FinishAim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralFirstPersonAnimationsInterface_FinishAim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProceduralFirstPersonAnimationsInterface_FinishAim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UProceduralFirstPersonAnimationsInterface_FinishAim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProceduralFirstPersonAnimationsInterface_Init_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponHolder_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponHolder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WalkingHolder_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WalkingHolder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimHolder_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AimHolder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralFirstPersonAnimationsInterface_Init_Statics::NewProp_WeaponHolder_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UProceduralFirstPersonAnimationsInterface_Init_Statics::NewProp_WeaponHolder = { "WeaponHolder", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProceduralFirstPersonAnimationsInterface_eventInit_Parms, WeaponHolder), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UProceduralFirstPersonAnimationsInterface_Init_Statics::NewProp_WeaponHolder_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralFirstPersonAnimationsInterface_Init_Statics::NewProp_WeaponHolder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralFirstPersonAnimationsInterface_Init_Statics::NewProp_WalkingHolder_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UProceduralFirstPersonAnimationsInterface_Init_Statics::NewProp_WalkingHolder = { "WalkingHolder", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProceduralFirstPersonAnimationsInterface_eventInit_Parms, WalkingHolder), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UProceduralFirstPersonAnimationsInterface_Init_Statics::NewProp_WalkingHolder_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralFirstPersonAnimationsInterface_Init_Statics::NewProp_WalkingHolder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralFirstPersonAnimationsInterface_Init_Statics::NewProp_AimHolder_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UProceduralFirstPersonAnimationsInterface_Init_Statics::NewProp_AimHolder = { "AimHolder", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProceduralFirstPersonAnimationsInterface_eventInit_Parms, AimHolder), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UProceduralFirstPersonAnimationsInterface_Init_Statics::NewProp_AimHolder_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralFirstPersonAnimationsInterface_Init_Statics::NewProp_AimHolder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralFirstPersonAnimationsInterface_Init_Statics::NewProp_WeaponMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UProceduralFirstPersonAnimationsInterface_Init_Statics::NewProp_WeaponMesh = { "WeaponMesh", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProceduralFirstPersonAnimationsInterface_eventInit_Parms, WeaponMesh), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UProceduralFirstPersonAnimationsInterface_Init_Statics::NewProp_WeaponMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralFirstPersonAnimationsInterface_Init_Statics::NewProp_WeaponMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProceduralFirstPersonAnimationsInterface_Init_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralFirstPersonAnimationsInterface_Init_Statics::NewProp_WeaponHolder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralFirstPersonAnimationsInterface_Init_Statics::NewProp_WalkingHolder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralFirstPersonAnimationsInterface_Init_Statics::NewProp_AimHolder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralFirstPersonAnimationsInterface_Init_Statics::NewProp_WeaponMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralFirstPersonAnimationsInterface_Init_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/ProceduralFirstPersonAnimationsInterface.h" },
		{ "ToolTip", "Initializes FPS Animations" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UProceduralFirstPersonAnimationsInterface_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProceduralFirstPersonAnimationsInterface, nullptr, "Init", nullptr, nullptr, sizeof(ProceduralFirstPersonAnimationsInterface_eventInit_Parms), Z_Construct_UFunction_UProceduralFirstPersonAnimationsInterface_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralFirstPersonAnimationsInterface_Init_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProceduralFirstPersonAnimationsInterface_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralFirstPersonAnimationsInterface_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProceduralFirstPersonAnimationsInterface_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UProceduralFirstPersonAnimationsInterface_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProceduralFirstPersonAnimationsInterface_PlayFireAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralFirstPersonAnimationsInterface_PlayFireAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/ProceduralFirstPersonAnimationsInterface.h" },
		{ "ToolTip", "Plays Fire Animation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UProceduralFirstPersonAnimationsInterface_PlayFireAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProceduralFirstPersonAnimationsInterface, nullptr, "PlayFireAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProceduralFirstPersonAnimationsInterface_PlayFireAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralFirstPersonAnimationsInterface_PlayFireAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProceduralFirstPersonAnimationsInterface_PlayFireAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UProceduralFirstPersonAnimationsInterface_PlayFireAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProceduralFirstPersonAnimationsInterface_StartAim_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralFirstPersonAnimationsInterface_StartAim_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/ProceduralFirstPersonAnimationsInterface.h" },
		{ "ToolTip", "Starts Aim Animation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UProceduralFirstPersonAnimationsInterface_StartAim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProceduralFirstPersonAnimationsInterface, nullptr, "StartAim", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProceduralFirstPersonAnimationsInterface_StartAim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralFirstPersonAnimationsInterface_StartAim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProceduralFirstPersonAnimationsInterface_StartAim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UProceduralFirstPersonAnimationsInterface_StartAim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProceduralFirstPersonAnimationsInterface_UpdateAimAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralFirstPersonAnimationsInterface_UpdateAimAnimation_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/ProceduralFirstPersonAnimationsInterface.h" },
		{ "ToolTip", "Updates Aim Animation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UProceduralFirstPersonAnimationsInterface_UpdateAimAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProceduralFirstPersonAnimationsInterface, nullptr, "UpdateAimAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProceduralFirstPersonAnimationsInterface_UpdateAimAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralFirstPersonAnimationsInterface_UpdateAimAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProceduralFirstPersonAnimationsInterface_UpdateAimAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UProceduralFirstPersonAnimationsInterface_UpdateAimAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProceduralFirstPersonAnimationsInterface_UpdateRecoilAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralFirstPersonAnimationsInterface_UpdateRecoilAnimation_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/ProceduralFirstPersonAnimationsInterface.h" },
		{ "ToolTip", "Updates Recoil Animation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UProceduralFirstPersonAnimationsInterface_UpdateRecoilAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProceduralFirstPersonAnimationsInterface, nullptr, "UpdateRecoilAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProceduralFirstPersonAnimationsInterface_UpdateRecoilAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralFirstPersonAnimationsInterface_UpdateRecoilAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProceduralFirstPersonAnimationsInterface_UpdateRecoilAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UProceduralFirstPersonAnimationsInterface_UpdateRecoilAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProceduralFirstPersonAnimationsInterface_UpdateWalkingAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralFirstPersonAnimationsInterface_UpdateWalkingAnimation_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/ProceduralFirstPersonAnimationsInterface.h" },
		{ "ToolTip", "Updates Walking Animation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UProceduralFirstPersonAnimationsInterface_UpdateWalkingAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProceduralFirstPersonAnimationsInterface, nullptr, "UpdateWalkingAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProceduralFirstPersonAnimationsInterface_UpdateWalkingAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralFirstPersonAnimationsInterface_UpdateWalkingAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProceduralFirstPersonAnimationsInterface_UpdateWalkingAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UProceduralFirstPersonAnimationsInterface_UpdateWalkingAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UProceduralFirstPersonAnimationsInterface_NoRegister()
	{
		return UProceduralFirstPersonAnimationsInterface::StaticClass();
	}
	struct Z_Construct_UClass_UProceduralFirstPersonAnimationsInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProceduralFirstPersonAnimationsInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralFirstPersonAnimationSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UProceduralFirstPersonAnimationsInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UProceduralFirstPersonAnimationsInterface_FinishAim, "FinishAim" }, // 2781670971
		{ &Z_Construct_UFunction_UProceduralFirstPersonAnimationsInterface_Init, "Init" }, // 4281563184
		{ &Z_Construct_UFunction_UProceduralFirstPersonAnimationsInterface_PlayFireAnimation, "PlayFireAnimation" }, // 1775046682
		{ &Z_Construct_UFunction_UProceduralFirstPersonAnimationsInterface_StartAim, "StartAim" }, // 3496317730
		{ &Z_Construct_UFunction_UProceduralFirstPersonAnimationsInterface_UpdateAimAnimation, "UpdateAimAnimation" }, // 3262769608
		{ &Z_Construct_UFunction_UProceduralFirstPersonAnimationsInterface_UpdateRecoilAnimation, "UpdateRecoilAnimation" }, // 2190800962
		{ &Z_Construct_UFunction_UProceduralFirstPersonAnimationsInterface_UpdateWalkingAnimation, "UpdateWalkingAnimation" }, // 189596377
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFirstPersonAnimationsInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProceduralFirstPersonAnimationsInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProceduralFirstPersonAnimationsInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IProceduralFirstPersonAnimationsInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UProceduralFirstPersonAnimationsInterface_Statics::ClassParams = {
		&UProceduralFirstPersonAnimationsInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UProceduralFirstPersonAnimationsInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFirstPersonAnimationsInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UProceduralFirstPersonAnimationsInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UProceduralFirstPersonAnimationsInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UProceduralFirstPersonAnimationsInterface, 427129847);
	template<> PROCEDURALFIRSTPERSONANIMATIONSYSTEM_API UClass* StaticClass<UProceduralFirstPersonAnimationsInterface>()
	{
		return UProceduralFirstPersonAnimationsInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UProceduralFirstPersonAnimationsInterface(Z_Construct_UClass_UProceduralFirstPersonAnimationsInterface, &UProceduralFirstPersonAnimationsInterface::StaticClass, TEXT("/Script/ProceduralFirstPersonAnimationSystem"), TEXT("UProceduralFirstPersonAnimationsInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProceduralFirstPersonAnimationsInterface);
	static FName NAME_UProceduralFirstPersonAnimationsInterface_FinishAim = FName(TEXT("FinishAim"));
	void IProceduralFirstPersonAnimationsInterface::Execute_FinishAim(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UProceduralFirstPersonAnimationsInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UProceduralFirstPersonAnimationsInterface_FinishAim);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IProceduralFirstPersonAnimationsInterface*)(O->GetNativeInterfaceAddress(UProceduralFirstPersonAnimationsInterface::StaticClass())))
		{
			I->FinishAim_Implementation();
		}
	}
	static FName NAME_UProceduralFirstPersonAnimationsInterface_Init = FName(TEXT("Init"));
	void IProceduralFirstPersonAnimationsInterface::Execute_Init(UObject* O, UActorComponent* WeaponHolder, UActorComponent* WalkingHolder, UActorComponent* AimHolder, UActorComponent* WeaponMesh)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UProceduralFirstPersonAnimationsInterface::StaticClass()));
		ProceduralFirstPersonAnimationsInterface_eventInit_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UProceduralFirstPersonAnimationsInterface_Init);
		if (Func)
		{
			Parms.WeaponHolder=WeaponHolder;
			Parms.WalkingHolder=WalkingHolder;
			Parms.AimHolder=AimHolder;
			Parms.WeaponMesh=WeaponMesh;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IProceduralFirstPersonAnimationsInterface*)(O->GetNativeInterfaceAddress(UProceduralFirstPersonAnimationsInterface::StaticClass())))
		{
			I->Init_Implementation(WeaponHolder,WalkingHolder,AimHolder,WeaponMesh);
		}
	}
	static FName NAME_UProceduralFirstPersonAnimationsInterface_PlayFireAnimation = FName(TEXT("PlayFireAnimation"));
	void IProceduralFirstPersonAnimationsInterface::Execute_PlayFireAnimation(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UProceduralFirstPersonAnimationsInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UProceduralFirstPersonAnimationsInterface_PlayFireAnimation);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IProceduralFirstPersonAnimationsInterface*)(O->GetNativeInterfaceAddress(UProceduralFirstPersonAnimationsInterface::StaticClass())))
		{
			I->PlayFireAnimation_Implementation();
		}
	}
	static FName NAME_UProceduralFirstPersonAnimationsInterface_StartAim = FName(TEXT("StartAim"));
	void IProceduralFirstPersonAnimationsInterface::Execute_StartAim(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UProceduralFirstPersonAnimationsInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UProceduralFirstPersonAnimationsInterface_StartAim);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IProceduralFirstPersonAnimationsInterface*)(O->GetNativeInterfaceAddress(UProceduralFirstPersonAnimationsInterface::StaticClass())))
		{
			I->StartAim_Implementation();
		}
	}
	static FName NAME_UProceduralFirstPersonAnimationsInterface_UpdateAimAnimation = FName(TEXT("UpdateAimAnimation"));
	void IProceduralFirstPersonAnimationsInterface::Execute_UpdateAimAnimation(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UProceduralFirstPersonAnimationsInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UProceduralFirstPersonAnimationsInterface_UpdateAimAnimation);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IProceduralFirstPersonAnimationsInterface*)(O->GetNativeInterfaceAddress(UProceduralFirstPersonAnimationsInterface::StaticClass())))
		{
			I->UpdateAimAnimation_Implementation();
		}
	}
	static FName NAME_UProceduralFirstPersonAnimationsInterface_UpdateRecoilAnimation = FName(TEXT("UpdateRecoilAnimation"));
	void IProceduralFirstPersonAnimationsInterface::Execute_UpdateRecoilAnimation(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UProceduralFirstPersonAnimationsInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UProceduralFirstPersonAnimationsInterface_UpdateRecoilAnimation);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IProceduralFirstPersonAnimationsInterface*)(O->GetNativeInterfaceAddress(UProceduralFirstPersonAnimationsInterface::StaticClass())))
		{
			I->UpdateRecoilAnimation_Implementation();
		}
	}
	static FName NAME_UProceduralFirstPersonAnimationsInterface_UpdateWalkingAnimation = FName(TEXT("UpdateWalkingAnimation"));
	void IProceduralFirstPersonAnimationsInterface::Execute_UpdateWalkingAnimation(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UProceduralFirstPersonAnimationsInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UProceduralFirstPersonAnimationsInterface_UpdateWalkingAnimation);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IProceduralFirstPersonAnimationsInterface*)(O->GetNativeInterfaceAddress(UProceduralFirstPersonAnimationsInterface::StaticClass())))
		{
			I->UpdateWalkingAnimation_Implementation();
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
