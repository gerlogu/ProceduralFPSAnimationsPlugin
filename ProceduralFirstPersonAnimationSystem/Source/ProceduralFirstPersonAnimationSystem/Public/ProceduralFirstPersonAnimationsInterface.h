// Copyright 2022, German Lopez (Gerlogu), All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "UObject/Interface.h"
#include "ProceduralFirstPersonAnimationsInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UProceduralFirstPersonAnimationsInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * @brief First Person Animation Functions Interface
 */
class PROCEDURALFIRSTPERSONANIMATIONSYSTEM_API IProceduralFirstPersonAnimationsInterface
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Animations", meta=(ToolTip="Initializes FPS Animations"))
	void Init(UActorComponent* WeaponHolder,
		UActorComponent* WalkingHolder,
		UActorComponent* AimHolder,
		UActorComponent* WeaponMesh);

	#pragma region PLAY_ANIMATION
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Animations", meta=(ToolTip="Plays Fire Animation"))
	void PlayFireAnimation();
	
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Animations", meta=(ToolTip="Starts Aim Animation"))
	void StartAim();
	
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Animations", meta=(ToolTip="Stops Aim Animation"))
	void FinishAim();
	#pragma endregion 

	#pragma region UPDATE
	UFUNCTION(BlueprintInternalUseOnly, BlueprintNativeEvent, Category = "Animations", meta=(ToolTip="Updates Recoil Animation"))
	void UpdateRecoilAnimation();
	
	UFUNCTION(BlueprintInternalUseOnly, BlueprintNativeEvent, Category = "Animations", meta=(ToolTip="Updates Walking Animation"))
	void UpdateWalkingAnimation();

	UFUNCTION(BlueprintInternalUseOnly, BlueprintNativeEvent, Category = "Animations", meta=(ToolTip="Updates Aim Animation"))
	void UpdateAimAnimation();
	#pragma endregion
};
