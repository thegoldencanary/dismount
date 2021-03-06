// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "HitLocation.h"
#include "DamageableRagdollCharacter.generated.h"

UCLASS()
class MYPROJECT_API ADamageableRagdollCharacter : public ACharacter
{
	GENERATED_BODY()

private:

	USkeletalMeshComponent* Mesh;

	FName HeadBoneName;
	FName BodyBoneName;
	FName LeftLegBoneName;
	FName RightLegBoneName;
	FName RightArmBoneName;
	FName LeftArmBoneName;

public:
	// Sets default values for this character's properties
	ADamageableRagdollCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
