// Copyright 2022, German Lopez (Gerlogu), All rights reserved.


#include "ProceduralFirstPersonAnimationsComponent.h"

#include "GameFramework/Character.h"
#include "Kismet/KismetMathLibrary.h"
#include "Net/UnrealNetwork.h"

// Sets default values for this component's properties
UProceduralFirstPersonAnimationsComponent::UProceduralFirstPersonAnimationsComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

#pragma region MAIN
// Called when the game starts
void UProceduralFirstPersonAnimationsComponent::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void UProceduralFirstPersonAnimationsComponent::TickComponent(float DeltaTime, ELevelTick TickType,
	FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}
#pragma endregion

#pragma region PLAY_ANIMATION
/**
 * @brief Starts Playing Fire Animation
 */
void UProceduralFirstPersonAnimationsComponent::PlayFireAnimation_Implementation()
{
	if((UseRecoilLocationAnimation || UseRecoilRotationAnimation) && WeaponHolderComponent != nullptr)
	{
		RecoilSeconds = 0;
		GetWorld()->GetTimerManager().ClearTimer(RecoilTimer);
		GetWorld()->GetTimerManager().SetTimer(
			RecoilTimer,
			this, &UProceduralFirstPersonAnimationsComponent::UpdateRecoilAnimation_Implementation,
			0.01f,
			true);
	}
}

/**
 * @brief Starts Aim Animation
 */
void UProceduralFirstPersonAnimationsComponent::StartAim_Implementation()
{
	AimDeltaMultiplier = 1;
}

/**
 * @brief Stops Aim Animation
 */
void UProceduralFirstPersonAnimationsComponent::FinishAim_Implementation()
{
	AimDeltaMultiplier = -1;
}
#pragma endregion

#pragma region UPDATE
/**
 * @brief Updates Recoil/Fire Animation
 */
void UProceduralFirstPersonAnimationsComponent::UpdateRecoilAnimation_Implementation()
{
	RecoilSeconds += 0.01f;
	
	float BeginTimeLocation = 0.f;
	float BeginTimeRotation = 0.f;
	float EndTimeLocation = 0.f;
	float EndTimeRotation = 0.f;

	if(UseRecoilLocationAnimation && RecoilLocationCurve != nullptr)
	{
		RecoilLocationCurve->GetTimeRange(BeginTimeLocation, EndTimeLocation);
		WeaponHolderComponent->SetRelativeLocation(FMath::Lerp(
			WeaponHolderComponent->GetRelativeLocation(),
			RecoilLocationCurve->GetVectorValue(RecoilSeconds),
			RecoilSeconds / EndTimeLocation));
	}
	
	if(UseRecoilRotationAnimation && RecoilRotationCurve != nullptr)
	{
		RecoilRotationCurve->GetTimeRange(BeginTimeRotation, EndTimeRotation);
		WeaponHolderComponent->SetRelativeRotation(
			FMath::Lerp(WeaponHolderComponent->GetRelativeRotation(),
				FRotator(RecoilRotationCurve->GetVectorValue(RecoilSeconds).X,
					RecoilRotationCurve->GetVectorValue(RecoilSeconds).Y,
					RecoilRotationCurve->GetVectorValue(RecoilSeconds).Z),
					RecoilSeconds / EndTimeRotation));
	}
	
	if(RecoilSeconds >= EndTimeLocation && RecoilSeconds >= EndTimeRotation)
	{
		GetWorld()->GetTimerManager().ClearTimer(RecoilTimer);
	}
}

/**
 * @brief Updates Walking Animation
 */
void UProceduralFirstPersonAnimationsComponent::UpdateWalkingAnimation_Implementation()
{
	WalkingSeconds += 0.01f;

	FVector TargetLocation;
	FRotator TargetRotation;

	float BeginTimeLocation = 0.f;
	float EndTimeLocation = 0.f;

	float BeginTimeRotation = 0.f;
	float EndTimeRotation = 0.f;

	if(CharacterMovementComponent->Velocity != FVector(0,0,0) && !CharacterMovementComponent->IsFalling())
	{
		if(UseWalkingLocationAnimation && WalkingLocationCurve != nullptr)
		{
			WalkingLocationCurve->GetTimeRange(BeginTimeLocation, EndTimeLocation);
			TargetLocation = WalkingLocationCurve->GetVectorValue(WalkingSeconds);
		}
		else
		{
			TargetLocation = OriginalWalkingHolderLocation;
		}

		if(UseWalkingRotationAnimation && WalkingRotationCurve != nullptr)
		{
			WalkingRotationCurve->GetTimeRange(BeginTimeRotation, EndTimeRotation);
			TargetRotation = FRotator(WalkingRotationCurve->GetVectorValue(WalkingSeconds).X,
				WalkingRotationCurve->GetVectorValue(WalkingSeconds).Y,
				WalkingRotationCurve->GetVectorValue(WalkingSeconds).Z);
		}
		else
		{
			TargetRotation = OriginalWalkingHolderRotation;
		}
	}
	else
	{
		if(UseIdleLocationAnimation && IdleLocationCurve != nullptr)
		{
			IdleLocationCurve->GetTimeRange(BeginTimeLocation, EndTimeLocation);
			TargetLocation = IdleLocationCurve->GetVectorValue(WalkingSeconds);
		}
		else
		{
			TargetLocation = OriginalWalkingHolderLocation;
		}

		if(UseIdleRotationAnimation && IdleRotationCurve != nullptr)
		{
			IdleRotationCurve->GetTimeRange(BeginTimeRotation, EndTimeRotation);
			TargetRotation = FRotator(IdleRotationCurve->GetVectorValue(WalkingSeconds).X,
				IdleRotationCurve->GetVectorValue(WalkingSeconds).Y,
				IdleRotationCurve->GetVectorValue(WalkingSeconds).Z);
		}
		else
		{
			TargetRotation = OriginalWalkingHolderRotation;
		}
	}
	
	if(WalkingSeconds >= EndTimeLocation)
	{
		WalkingSeconds = 0;
	}
	
	WalkingHolderComponent->SetRelativeLocation(FMath::VInterpTo(
		WalkingHolderComponent->GetRelativeLocation(),
		TargetLocation,
		0.01f,
		5));

	WalkingHolderComponent->SetRelativeRotation(FMath::RInterpTo(
		WalkingHolderComponent->GetRelativeRotation(),
		TargetRotation,
		0.01f,
		5));
}

/**
 * @brief Updates Aim Animation
 */
void UProceduralFirstPersonAnimationsComponent::UpdateAimAnimation_Implementation()
{
	if(UseAimAnimation && AimAnimationCurve != nullptr)
	{
		float BeginTime = 0.f;
		float EndTime = 0.f;
	
		AimAnimationCurve->GetTimeRange(BeginTime, EndTime);

		AimDeltaTime = FMath::Clamp(AimDeltaTime + 0.01f * AimDeltaMultiplier, BeginTime, EndTime);

		FTransform SocketTransform = FTransform();
		
		if(WeaponSkeletalMesh != nullptr)
			SocketTransform = WeaponSkeletalMesh->GetSocketTransform(AimSocketName, ERelativeTransformSpace::RTS_World);
		else if(WeaponStaticMesh != nullptr)
			SocketTransform = WeaponStaticMesh->GetSocketTransform(AimSocketName, ERelativeTransformSpace::RTS_World);
			
		const FTransform AimTransform = AimHolderComponent->GetComponentTransform();
		
		FTransform TargetTransform = UKismetMathLibrary::MakeRelativeTransform(SocketTransform, AimTransform);
	
		const FVector TargetLocation = FMath::Lerp(DefaultAimTransform.GetLocation(), TargetTransform.Inverse().GetLocation(),AimAnimationCurve->GetFloatValue(AimDeltaTime));
	
		AimHolderComponent->SetRelativeLocation(TargetLocation);
	}
}

/**
 * @brief Updates Camera Sway
 */
void UProceduralFirstPersonAnimationsComponent::UpdateCameraSway_Implementation()
{
	if(!UseCameraSway)
		return;
	
	const FRotator TargetRotation = FRotator(
		GetLookAmount_Implementation(-Cast<ACharacter>(GetOwner())->GetInputAxisValue(Y_AxisKey)*LookAmount),
		GetLookAmount_Implementation(Cast<ACharacter>(GetOwner())->GetInputAxisValue(X_AxisKey)*LookAmount),
		0
		);
	
	CameraSwayComponent->SetRelativeRotation(
		FMath::Lerp(
			CameraSwayComponent->GetRelativeRotation(),
			TargetRotation, SmoothAmount*GetWorld()->DeltaTimeSeconds));

	if(EnableDebug)
	{
		const FString Z = FString::Printf(TEXT("%.2f"), TargetRotation.Roll);
		GEngine->AddOnScreenDebugMessage(-1, GetWorld()->DeltaTimeSeconds, FColor::Turquoise,
		"-    Z: " +  Z);
		const FString Y = FString::Printf(TEXT("%.2f"), TargetRotation.Yaw);
		GEngine->AddOnScreenDebugMessage(-1, GetWorld()->DeltaTimeSeconds, FColor::Turquoise,
		"-    Y: " + Y);
		const FString X = FString::Printf(TEXT("%.2f"), TargetRotation.Pitch);
		GEngine->AddOnScreenDebugMessage(-1, GetWorld()->DeltaTimeSeconds, FColor::Turquoise,
		"-    X: " + X);
		GEngine->AddOnScreenDebugMessage(-1, GetWorld()->DeltaTimeSeconds, FColor::Turquoise,
			"CAMERA SWAY:");
	}
		
}

/**
 * @brief Updates Movement Sway
 */
void UProceduralFirstPersonAnimationsComponent::UpdateMovementSway_Implementation()
{
	if(!UseMovementSway)
		return;

	const FVector Vel = CharacterMovementComponent->Velocity;
	const FVector Forward = GetOwner()->GetActorForwardVector();
	const FVector Right = GetOwner()->GetActorRightVector();
	FVector MovementDirection = FVector(FVector::DotProduct(Vel, Forward),FVector::DotProduct(Vel, Right),0);

	MovementDirection.Normalize();
	
	const float TargetZRotation = FMath::FInterpTo(
		MovementSwayComponent->GetRelativeRotation().Roll,
		FMath::Clamp(MovementDirection.Y*SwayAmount, -SwayAmount, SwayAmount),
		GetWorld()->DeltaTimeSeconds,
		InterpSpeed);
	
	MovementSwayComponent->SetRelativeRotation(
		FRotator(
		MovementSwayComponent->GetRelativeLocation().X,
		MovementSwayComponent->GetRelativeLocation().Y,
		TargetZRotation)
		);

	if(EnableDebug)
	{
		const FString Z = FString::Printf(TEXT("%.2f"), TargetZRotation);
		GEngine->AddOnScreenDebugMessage(-1, GetWorld()->DeltaTimeSeconds, FColor::Emerald, "MOVEMENT SWAY: " + Z);
	}
		
}
#pragma endregion

#pragma region INIT
/**
 * @brief Initializes FPS Animations Component
 * @param CharacterMovement 
 * @param WeaponHolder 
 * @param WalkingHolder 
 * @param AimHolder 
 * @param WeaponMesh 
 */
void UProceduralFirstPersonAnimationsComponent::Init_Implementation(UActorComponent* WeaponHolder,
                                                            UActorComponent* WalkingHolder,
                                                            UActorComponent* AimHolder,
                                                            UActorComponent* WeaponMesh)
{
	CharacterMovementComponent = Cast<ACharacter>(GetOwner())->GetCharacterMovement();
	
	WeaponHolderComponent = Cast<USceneComponent>(WeaponHolder);
	WalkingHolderComponent = Cast<USceneComponent>(WalkingHolder);
	WeaponSkeletalMesh = Cast<USkeletalMeshComponent>(WeaponMesh);
	WeaponStaticMesh = Cast<UStaticMeshComponent>(WeaponMesh);
	
	if(AimHolder)
	{
		AimHolderComponent = Cast<USceneComponent>(AimHolder);
		DefaultAimTransform = AimHolderComponent->GetRelativeTransform();
		GetWorld()->GetTimerManager().SetTimer(
			AimTimer,
			this,
			&UProceduralFirstPersonAnimationsComponent::UpdateAimAnimation_Implementation,
			0.01f,
			true);
	}

	if(WalkingHolder)
	{
		OriginalWalkingHolderLocation = WalkingHolderComponent->GetRelativeLocation();
		OriginalWalkingHolderRotation = WalkingHolderComponent->GetRelativeRotation();
		GetWorld()->GetTimerManager().SetTimer(
			WalkingTimer,
			this,
			&UProceduralFirstPersonAnimationsComponent::UpdateWalkingAnimation_Implementation,
			0.01f,
			true);
	}
	
}

/**
 * @brief Initializes Camera Sway Animation
 * @param CameraSway Camera Sway Holder Component
 */
void UProceduralFirstPersonAnimationsComponent::InitCameraSway_Implementation(UActorComponent* CameraSway)
{
	CameraSwayComponent = Cast<USceneComponent>(CameraSway);

	GetWorld()->GetTimerManager().SetTimer(
			CameraSwayTimer,
			this,
			&UProceduralFirstPersonAnimationsComponent::UpdateCameraSway_Implementation,
			0.01f,
			true);
}

/**
 * @brief Initializes Camera Sway Animation
 * @param MovementSway Movement Sway Holder Component
 */
void UProceduralFirstPersonAnimationsComponent::InitMovementSway_Implementation(UActorComponent* MovementSway)
{
	MovementSwayComponent = Cast<USceneComponent>(MovementSway);
	
	GetWorld()->GetTimerManager().SetTimer(
			MovementSwayTimer,
			this,
			&UProceduralFirstPersonAnimationsComponent::UpdateMovementSway_Implementation,
			0.01f,
			true);
}
#pragma endregion

#pragma region HELPERS
/**
 * @brief Get Camera Rotation/Look Amount
 * @param CurrentAmount Current Rotation/Look Amount
 * @return Resulted Rotation/Look Amount
 */
float UProceduralFirstPersonAnimationsComponent::GetLookAmount_Implementation(float CurrentAmount)
{
	if(CurrentAmount > AmountCap)
		return AmountCap;
	else if(CurrentAmount < -AmountCap)
		return -AmountCap;
	
	return CurrentAmount;
}
#pragma endregion 