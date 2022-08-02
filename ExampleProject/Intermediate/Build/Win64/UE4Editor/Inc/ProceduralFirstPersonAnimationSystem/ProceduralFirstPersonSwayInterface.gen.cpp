// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralFirstPersonAnimationSystem/Public/ProceduralFirstPersonSwayInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProceduralFirstPersonSwayInterface() {}
// Cross Module References
	PROCEDURALFIRSTPERSONANIMATIONSYSTEM_API UClass* Z_Construct_UClass_UProceduralFirstPersonSwayInterface_NoRegister();
	PROCEDURALFIRSTPERSONANIMATIONSYSTEM_API UClass* Z_Construct_UClass_UProceduralFirstPersonSwayInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_ProceduralFirstPersonAnimationSystem();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(IProceduralFirstPersonSwayInterface::execGetLookAmount)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_CurrentAmount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetLookAmount_Implementation(Z_Param_CurrentAmount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IProceduralFirstPersonSwayInterface::execUpdateMovementSway)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateMovementSway_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IProceduralFirstPersonSwayInterface::execUpdateCameraSway)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateCameraSway_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IProceduralFirstPersonSwayInterface::execInitMovementSway)
	{
		P_GET_OBJECT(UActorComponent,Z_Param_MovementSway);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitMovementSway_Implementation(Z_Param_MovementSway);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IProceduralFirstPersonSwayInterface::execInitCameraSway)
	{
		P_GET_OBJECT(UActorComponent,Z_Param_CameraSway);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitCameraSway_Implementation(Z_Param_CameraSway);
		P_NATIVE_END;
	}
	float IProceduralFirstPersonSwayInterface::GetLookAmount(float CurrentAmount)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetLookAmount instead.");
		ProceduralFirstPersonSwayInterface_eventGetLookAmount_Parms Parms;
		return Parms.ReturnValue;
	}
	void IProceduralFirstPersonSwayInterface::InitCameraSway(UActorComponent* CameraSway)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_InitCameraSway instead.");
	}
	void IProceduralFirstPersonSwayInterface::InitMovementSway(UActorComponent* MovementSway)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_InitMovementSway instead.");
	}
	void IProceduralFirstPersonSwayInterface::UpdateCameraSway()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UpdateCameraSway instead.");
	}
	void IProceduralFirstPersonSwayInterface::UpdateMovementSway()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UpdateMovementSway instead.");
	}
	void UProceduralFirstPersonSwayInterface::StaticRegisterNativesUProceduralFirstPersonSwayInterface()
	{
		UClass* Class = UProceduralFirstPersonSwayInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLookAmount", &IProceduralFirstPersonSwayInterface::execGetLookAmount },
			{ "InitCameraSway", &IProceduralFirstPersonSwayInterface::execInitCameraSway },
			{ "InitMovementSway", &IProceduralFirstPersonSwayInterface::execInitMovementSway },
			{ "UpdateCameraSway", &IProceduralFirstPersonSwayInterface::execUpdateCameraSway },
			{ "UpdateMovementSway", &IProceduralFirstPersonSwayInterface::execUpdateMovementSway },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UProceduralFirstPersonSwayInterface_GetLookAmount_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentAmount;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UProceduralFirstPersonSwayInterface_GetLookAmount_Statics::NewProp_CurrentAmount = { "CurrentAmount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProceduralFirstPersonSwayInterface_eventGetLookAmount_Parms, CurrentAmount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UProceduralFirstPersonSwayInterface_GetLookAmount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProceduralFirstPersonSwayInterface_eventGetLookAmount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProceduralFirstPersonSwayInterface_GetLookAmount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralFirstPersonSwayInterface_GetLookAmount_Statics::NewProp_CurrentAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralFirstPersonSwayInterface_GetLookAmount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralFirstPersonSwayInterface_GetLookAmount_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Category", "Camera Sway" },
		{ "ModuleRelativePath", "Public/ProceduralFirstPersonSwayInterface.h" },
		{ "ToolTip", "Get Camera Rotation/Look Amount" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UProceduralFirstPersonSwayInterface_GetLookAmount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProceduralFirstPersonSwayInterface, nullptr, "GetLookAmount", nullptr, nullptr, sizeof(ProceduralFirstPersonSwayInterface_eventGetLookAmount_Parms), Z_Construct_UFunction_UProceduralFirstPersonSwayInterface_GetLookAmount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralFirstPersonSwayInterface_GetLookAmount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProceduralFirstPersonSwayInterface_GetLookAmount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralFirstPersonSwayInterface_GetLookAmount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProceduralFirstPersonSwayInterface_GetLookAmount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UProceduralFirstPersonSwayInterface_GetLookAmount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProceduralFirstPersonSwayInterface_InitCameraSway_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraSway_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraSway;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralFirstPersonSwayInterface_InitCameraSway_Statics::NewProp_CameraSway_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UProceduralFirstPersonSwayInterface_InitCameraSway_Statics::NewProp_CameraSway = { "CameraSway", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProceduralFirstPersonSwayInterface_eventInitCameraSway_Parms, CameraSway), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UProceduralFirstPersonSwayInterface_InitCameraSway_Statics::NewProp_CameraSway_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralFirstPersonSwayInterface_InitCameraSway_Statics::NewProp_CameraSway_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProceduralFirstPersonSwayInterface_InitCameraSway_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralFirstPersonSwayInterface_InitCameraSway_Statics::NewProp_CameraSway,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralFirstPersonSwayInterface_InitCameraSway_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera Sway" },
		{ "ModuleRelativePath", "Public/ProceduralFirstPersonSwayInterface.h" },
		{ "ToolTip", "Initializes Camera Sway" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UProceduralFirstPersonSwayInterface_InitCameraSway_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProceduralFirstPersonSwayInterface, nullptr, "InitCameraSway", nullptr, nullptr, sizeof(ProceduralFirstPersonSwayInterface_eventInitCameraSway_Parms), Z_Construct_UFunction_UProceduralFirstPersonSwayInterface_InitCameraSway_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralFirstPersonSwayInterface_InitCameraSway_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProceduralFirstPersonSwayInterface_InitCameraSway_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralFirstPersonSwayInterface_InitCameraSway_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProceduralFirstPersonSwayInterface_InitCameraSway()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UProceduralFirstPersonSwayInterface_InitCameraSway_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProceduralFirstPersonSwayInterface_InitMovementSway_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementSway_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MovementSway;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralFirstPersonSwayInterface_InitMovementSway_Statics::NewProp_MovementSway_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UProceduralFirstPersonSwayInterface_InitMovementSway_Statics::NewProp_MovementSway = { "MovementSway", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProceduralFirstPersonSwayInterface_eventInitMovementSway_Parms, MovementSway), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UProceduralFirstPersonSwayInterface_InitMovementSway_Statics::NewProp_MovementSway_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralFirstPersonSwayInterface_InitMovementSway_Statics::NewProp_MovementSway_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProceduralFirstPersonSwayInterface_InitMovementSway_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralFirstPersonSwayInterface_InitMovementSway_Statics::NewProp_MovementSway,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralFirstPersonSwayInterface_InitMovementSway_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement Sway" },
		{ "ModuleRelativePath", "Public/ProceduralFirstPersonSwayInterface.h" },
		{ "ToolTip", "Initialzies Movement Sway" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UProceduralFirstPersonSwayInterface_InitMovementSway_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProceduralFirstPersonSwayInterface, nullptr, "InitMovementSway", nullptr, nullptr, sizeof(ProceduralFirstPersonSwayInterface_eventInitMovementSway_Parms), Z_Construct_UFunction_UProceduralFirstPersonSwayInterface_InitMovementSway_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralFirstPersonSwayInterface_InitMovementSway_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProceduralFirstPersonSwayInterface_InitMovementSway_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralFirstPersonSwayInterface_InitMovementSway_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProceduralFirstPersonSwayInterface_InitMovementSway()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UProceduralFirstPersonSwayInterface_InitMovementSway_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProceduralFirstPersonSwayInterface_UpdateCameraSway_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralFirstPersonSwayInterface_UpdateCameraSway_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Category", "Camera Sway" },
		{ "ModuleRelativePath", "Public/ProceduralFirstPersonSwayInterface.h" },
		{ "ToolTip", "Updates Camera Sway" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UProceduralFirstPersonSwayInterface_UpdateCameraSway_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProceduralFirstPersonSwayInterface, nullptr, "UpdateCameraSway", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProceduralFirstPersonSwayInterface_UpdateCameraSway_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralFirstPersonSwayInterface_UpdateCameraSway_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProceduralFirstPersonSwayInterface_UpdateCameraSway()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UProceduralFirstPersonSwayInterface_UpdateCameraSway_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProceduralFirstPersonSwayInterface_UpdateMovementSway_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralFirstPersonSwayInterface_UpdateMovementSway_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Category", "Movement Sway" },
		{ "ModuleRelativePath", "Public/ProceduralFirstPersonSwayInterface.h" },
		{ "ToolTip", "Updates Movement Sway" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UProceduralFirstPersonSwayInterface_UpdateMovementSway_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProceduralFirstPersonSwayInterface, nullptr, "UpdateMovementSway", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProceduralFirstPersonSwayInterface_UpdateMovementSway_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralFirstPersonSwayInterface_UpdateMovementSway_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProceduralFirstPersonSwayInterface_UpdateMovementSway()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UProceduralFirstPersonSwayInterface_UpdateMovementSway_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UProceduralFirstPersonSwayInterface_NoRegister()
	{
		return UProceduralFirstPersonSwayInterface::StaticClass();
	}
	struct Z_Construct_UClass_UProceduralFirstPersonSwayInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProceduralFirstPersonSwayInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralFirstPersonAnimationSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UProceduralFirstPersonSwayInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UProceduralFirstPersonSwayInterface_GetLookAmount, "GetLookAmount" }, // 2193901864
		{ &Z_Construct_UFunction_UProceduralFirstPersonSwayInterface_InitCameraSway, "InitCameraSway" }, // 3908930665
		{ &Z_Construct_UFunction_UProceduralFirstPersonSwayInterface_InitMovementSway, "InitMovementSway" }, // 3074362370
		{ &Z_Construct_UFunction_UProceduralFirstPersonSwayInterface_UpdateCameraSway, "UpdateCameraSway" }, // 1652847323
		{ &Z_Construct_UFunction_UProceduralFirstPersonSwayInterface_UpdateMovementSway, "UpdateMovementSway" }, // 833528741
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFirstPersonSwayInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProceduralFirstPersonSwayInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProceduralFirstPersonSwayInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IProceduralFirstPersonSwayInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UProceduralFirstPersonSwayInterface_Statics::ClassParams = {
		&UProceduralFirstPersonSwayInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UProceduralFirstPersonSwayInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFirstPersonSwayInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UProceduralFirstPersonSwayInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UProceduralFirstPersonSwayInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UProceduralFirstPersonSwayInterface, 1204697679);
	template<> PROCEDURALFIRSTPERSONANIMATIONSYSTEM_API UClass* StaticClass<UProceduralFirstPersonSwayInterface>()
	{
		return UProceduralFirstPersonSwayInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UProceduralFirstPersonSwayInterface(Z_Construct_UClass_UProceduralFirstPersonSwayInterface, &UProceduralFirstPersonSwayInterface::StaticClass, TEXT("/Script/ProceduralFirstPersonAnimationSystem"), TEXT("UProceduralFirstPersonSwayInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProceduralFirstPersonSwayInterface);
	static FName NAME_UProceduralFirstPersonSwayInterface_GetLookAmount = FName(TEXT("GetLookAmount"));
	float IProceduralFirstPersonSwayInterface::Execute_GetLookAmount(UObject* O, float CurrentAmount)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UProceduralFirstPersonSwayInterface::StaticClass()));
		ProceduralFirstPersonSwayInterface_eventGetLookAmount_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UProceduralFirstPersonSwayInterface_GetLookAmount);
		if (Func)
		{
			Parms.CurrentAmount=CurrentAmount;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IProceduralFirstPersonSwayInterface*)(O->GetNativeInterfaceAddress(UProceduralFirstPersonSwayInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetLookAmount_Implementation(CurrentAmount);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UProceduralFirstPersonSwayInterface_InitCameraSway = FName(TEXT("InitCameraSway"));
	void IProceduralFirstPersonSwayInterface::Execute_InitCameraSway(UObject* O, UActorComponent* CameraSway)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UProceduralFirstPersonSwayInterface::StaticClass()));
		ProceduralFirstPersonSwayInterface_eventInitCameraSway_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UProceduralFirstPersonSwayInterface_InitCameraSway);
		if (Func)
		{
			Parms.CameraSway=CameraSway;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IProceduralFirstPersonSwayInterface*)(O->GetNativeInterfaceAddress(UProceduralFirstPersonSwayInterface::StaticClass())))
		{
			I->InitCameraSway_Implementation(CameraSway);
		}
	}
	static FName NAME_UProceduralFirstPersonSwayInterface_InitMovementSway = FName(TEXT("InitMovementSway"));
	void IProceduralFirstPersonSwayInterface::Execute_InitMovementSway(UObject* O, UActorComponent* MovementSway)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UProceduralFirstPersonSwayInterface::StaticClass()));
		ProceduralFirstPersonSwayInterface_eventInitMovementSway_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UProceduralFirstPersonSwayInterface_InitMovementSway);
		if (Func)
		{
			Parms.MovementSway=MovementSway;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IProceduralFirstPersonSwayInterface*)(O->GetNativeInterfaceAddress(UProceduralFirstPersonSwayInterface::StaticClass())))
		{
			I->InitMovementSway_Implementation(MovementSway);
		}
	}
	static FName NAME_UProceduralFirstPersonSwayInterface_UpdateCameraSway = FName(TEXT("UpdateCameraSway"));
	void IProceduralFirstPersonSwayInterface::Execute_UpdateCameraSway(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UProceduralFirstPersonSwayInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UProceduralFirstPersonSwayInterface_UpdateCameraSway);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IProceduralFirstPersonSwayInterface*)(O->GetNativeInterfaceAddress(UProceduralFirstPersonSwayInterface::StaticClass())))
		{
			I->UpdateCameraSway_Implementation();
		}
	}
	static FName NAME_UProceduralFirstPersonSwayInterface_UpdateMovementSway = FName(TEXT("UpdateMovementSway"));
	void IProceduralFirstPersonSwayInterface::Execute_UpdateMovementSway(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UProceduralFirstPersonSwayInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UProceduralFirstPersonSwayInterface_UpdateMovementSway);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IProceduralFirstPersonSwayInterface*)(O->GetNativeInterfaceAddress(UProceduralFirstPersonSwayInterface::StaticClass())))
		{
			I->UpdateMovementSway_Implementation();
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
