// Copyright 2022, German Lopez (Gerlogu), All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ProceduralFirstPersonSwayInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UProceduralFirstPersonSwayInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * @brief First Person Sway Animation Functions Interface
 */
class PROCEDURALFIRSTPERSONANIMATIONSYSTEM_API IProceduralFirstPersonSwayInterface
{
	GENERATED_BODY()
public:
	#pragma region INIT
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Camera Sway", meta=(ToolTip="Initializes Camera Sway"))
	void InitCameraSway(UActorComponent* CameraSway);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Movement Sway", meta=(ToolTip="Initialzies Movement Sway"))
	void InitMovementSway(UActorComponent* MovementSway);
	#pragma endregion

	#pragma region UPDATE
	UFUNCTION(BlueprintInternalUseOnly, BlueprintNativeEvent, Category = "Camera Sway", meta=(ToolTip="Updates Camera Sway"))
	void UpdateCameraSway();
	
	UFUNCTION(BlueprintInternalUseOnly, BlueprintNativeEvent, Category = "Movement Sway", meta=(ToolTip="Updates Movement Sway"))
	void UpdateMovementSway();
	#pragma endregion

	#pragma region HELPERS
	UFUNCTION(BlueprintInternalUseOnly, BlueprintNativeEvent, Category = "Camera Sway", meta=(ToolTip="Get Camera Rotation/Look Amount"))
	float GetLookAmount(float CurrentAmount);
	#pragma endregion
};
