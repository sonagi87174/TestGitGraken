// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ArenaBattle.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "ABPawn.generated.h"


UCLASS()
class ARENABATTLE_API AABPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AABPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;



	UPROPERTY(VisibleAnywhere, Category = Collision)
		UCapsuleComponent *_Capsule;
	UPROPERTY(VisibleAnywhere, Category = Visual)
		USkeletalMeshComponent *_Mesh;
	UPROPERTY(VisibleAnywhere, Category = Movement)
		UFloatingPawnMovement *_Movement;
	UPROPERTY(VisibleAnywhere, Category = Camera)
		USpringArmComponent *_Arm;

	UPROPERTY(VisibleAnywhere, Category = Camera)
		UCameraComponent* _camera;


};
