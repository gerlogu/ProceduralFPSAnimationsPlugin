// Copyright 2022, German Lopez (Gerlogu), All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Curves/CurveVector.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "ProceduralFirstPersonAnimationsInterface.h"
#include "ProceduralFirstPersonSwayInterface.h"
#include "CoreMinimal.h"
#include "ProceduralFirstPersonAnimationsComponent.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROCEDURALFIRSTPERSONANIMATIONSYSTEM_API UProceduralFirstPersonAnimationsComponent : public UActorComponent,
public IProceduralFirstPersonAnimationsInterface, public IProceduralFirstPersonSwayInterface
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UProceduralFirstPersonAnimationsComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
		FActorComponentTickFunction* ThisTickFunction) override;

private:
	#pragma region FUNCTION_IMPLEMENTATIONS
	void PlayFireAnimation_Implementation() override;
	void UpdateRecoilAnimation_Implementation() override;
	void UpdateWalkingAnimation_Implementation() override;
	void StartAim_Implementation() override;
	void FinishAim_Implementation() override;
	void UpdateAimAnimation_Implementation() override;
	
	void InitCameraSway_Implementation(UActorComponent* CameraSway) override;
	void UpdateCameraSway_Implementation() override;
	float GetLookAmount_Implementation(float CurrentAmount) override;

	void InitMovementSway_Implementation(UActorComponent* MovementSway) override;
	void UpdateMovementSway_Implementation() override;
	
	void Init_Implementation(
		UActorComponent* WeaponHolder,
		UActorComponent* WalkingHolder,
		UActorComponent* AimHolder,
		UActorComponent* WeaponMesh
		);
	#pragma endregion

	#pragma region VARIABLES
	FTimerHandle RecoilTimer;
	FTimerHandle WalkingTimer;
	FTimerHandle AimTimer;
	FTimerHandle MovementSwayTimer;
	FTimerHandle CameraSwayTimer;

	float RecoilSeconds = 0.f;
	float WalkingSeconds = 0.f;
	float AimDeltaTime = 0.01f;
	int AimDeltaMultiplier = -1;

	FVector2D LatestMouseLocation;

	FVector OriginalWalkingHolderLocation;
	FRotator OriginalWalkingHolderRotation;
	
	FTransform DefaultAimTransform;
	FTransform TargetAimTransform;
	#pragma endregion 
	
protected:
	#pragma region EDITABLE

	UPROPERTY(EditAnywhere, Category="Procedural Animations")
	bool EnableDebug = false;

	#pragma region CAMERA_SWAY
	UPROPERTY(EditAnywhere, Category="Procedural Animations|Camera Sway")
	bool UseCameraSway = true;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Procedural Animations|Camera Sway",
		meta=(ClampMin = "0.0", EditCondition="UseCameraSway", ToolTip="Animation Smoothness"))
	float SmoothAmount = 6.f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Procedural Animations|Camera Sway",
		meta=(ClampMin = "0.0", EditCondition="UseCameraSway", ToolTip="Look Amount"))
	float LookAmount = 3.f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Procedural Animations|Camera Sway",
		meta=(ClampMin = "0.0", EditCondition="UseCameraSway", ToolTip="Max Look Amount"))
	float AmountCap = 3.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Procedural Animations|Camera Sway",
		meta=(EditCondition="UseCameraSway", ToolTip="Input X Axis"))
	FName X_AxisKey = "Turn";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Procedural Animations|Camera Sway",
			meta=(ClampMin = "0.0", EditCondition="UseCameraSway", ToolTip="Input Y Axis"))
	FName Y_AxisKey = "LookUp";
	#pragma endregion

	#pragma region MOVEMENT_SWAY
	UPROPERTY(EditAnywhere, Category="Procedural Animations|Movement Sway")
	bool UseMovementSway = true;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Procedural Animations|Movement Sway",
		meta=(ClampMin = "0.0", EditCondition="UseMovementSway", ToolTip="Sway Amount"))
	float SwayAmount = 2.3f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Procedural Animations|Movement Sway",
		meta=(ClampMin = "0.0", EditCondition="UseMovementSway", ToolTip="Interpolation Speed"))
	float InterpSpeed = 4.f;
	#pragma endregion

	#pragma region ANIMATION_CURVES
	UPROPERTY(EditAnywhere, Category="Procedural Animations|Animation Curves|Idle Animation", meta=(InlineEditConditionToggle,
		ToolTip="Enables Idle Animation"))
	bool UseIdleLocationAnimation;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Procedural Animations|Animation Curves|Idle Animation",
		meta=(EditCondition="UseIdleLocationAnimation"))
	UCurveVector* IdleLocationCurve;

	UPROPERTY(EditAnywhere, Category="Procedural Animations|Animation Curves|Idle Animation", meta=(InlineEditConditionToggle,
		ToolTip="Enables Idle Animation"))
	bool UseIdleRotationAnimation;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Procedural Animations|Animation Curves|Idle Animation",
		meta=(EditCondition="UseIdleRotationAnimation"))
	UCurveVector* IdleRotationCurve;
	
	UPROPERTY(EditAnywhere, Category="Procedural Animations|Animation Curves|Walking Animation",
		meta=(InlineEditConditionToggle, ToolTip="Enables Walking Animation"))
	bool UseWalkingLocationAnimation;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Procedural Animations|Animation Curves|Walking Animation",
		meta=(EditCondition="UseWalkingLocationAnimation"))
	UCurveVector* WalkingLocationCurve;

	UPROPERTY(EditAnywhere, Category="Procedural Animations|Animation Curves|Walking Animation",
		meta=(InlineEditConditionToggle, ToolTip="Enables Walking Animation"))
	bool UseWalkingRotationAnimation;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Procedural Animations|Animation Curves|Walking Animation",
		meta=(EditCondition="UseWalkingRotationAnimation"))
	UCurveVector* WalkingRotationCurve;
	
	UPROPERTY(EditAnywhere, Category="Procedural Animations|Animation Curves|Fire/Recoil Animation",
		meta=(InlineEditConditionToggle, ToolTip="Enables Recoil Location Animation"))
	bool UseRecoilLocationAnimation = false;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Procedural Animations|Animation Curves|Fire/Recoil Animation",
		meta=(EditCondition="UseRecoilLocationAnimation"))
	UCurveVector* RecoilLocationCurve;
	
	UPROPERTY(EditAnywhere, Category="Procedural Animations|Animation Curves|Fire/Recoil Animation", meta=(InlineEditConditionToggle,
	ToolTip="Enables Recoil Rotation Animation"))
	bool UseRecoilRotationAnimation = false;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Procedural Animations|Animation Curves|Fire/Recoil Animation",
		meta=(EditCondition="UseRecoilRotationAnimation"))
	UCurveVector* RecoilRotationCurve;

	UPROPERTY(EditAnywhere, Category="Procedural Animations|Animation Curves|Aim Animation",
		meta=(InlineEditConditionToggle, ToolTip="Enables Aim Animation"))
	bool UseAimAnimation = false;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Procedural Animations|Animation Curves|Aim Animation",
			meta=(EditCondition="UseAimAnimation"))
	UCurveFloat* AimAnimationCurve;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Procedural Animations|Animation Curves|Aim Animation",
			meta=(EditCondition="UseAimAnimation"))
	FName AimSocketName = "AimPoint";
	#pragma endregion

	#pragma region COMPONENTS
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite)
	USceneComponent* CameraSwayComponent;
	
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite)
	USceneComponent* MovementSwayComponent;
	
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite)
	UCharacterMovementComponent* CharacterMovementComponent;
	
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite)
	USceneComponent* WeaponHolderComponent;
	
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite)
	USceneComponent* WalkingHolderComponent;

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite)
	USceneComponent* AimHolderComponent;

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite)
	USkeletalMeshComponent* WeaponSkeletalMesh;

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite)
	UStaticMeshComponent* WeaponStaticMesh;
	#pragma endregion 	

	#pragma endregion
};
