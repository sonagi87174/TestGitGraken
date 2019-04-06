// Fill out your copyright notice in the Description page of Project Settings.

#include "ABPawn.h"

// Sets default values
AABPawn::AABPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ABLOG_S(Warning);

	_Capsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("capsule"));
	_Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("mesh"));
	_Movement = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("movement"));
	_Arm = CreateDefaultSubobject<USpringArmComponent>(TEXT("arm"));
	_camera = CreateDefaultSubobject<UCameraComponent>(TEXT("camera"));
	

	RootComponent = _Capsule;
	_Mesh->SetupAttachment(_Capsule);
	_Arm->SetupAttachment(_Capsule);
	_camera->SetupAttachment(_Arm);

	_Capsule->SetCapsuleHalfHeight(88.0f);
	_Capsule->SetCapsuleRadius(34.0f);
	_Mesh->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, -88.0f), FRotator(0.0f, -90.0f, 0.0f));
	_Arm->TargetArmLength = 400.0f;
	_Arm->SetRelativeRotation(FRotator(-15.0f, 0.0f, 0.0f));

	static ConstructorHelpers::FObjectFinder<USkeletalMesh>
		sk_player(TEXT("/Game/Mannequin/Character/Mesh/SK_Mannequin.SK_Mannequin"));
	if (sk_player.Succeeded())
	{
		_Mesh->SetSkeletalMesh(sk_player.Object);
		//ABLOG(Warning, TEXT("In Coming"));
	}

		
}

// Called when the game starts or when spawned
void AABPawn::BeginPlay()
{
	Super::BeginPlay();
	ABLOG(Warning, TEXT("In Coming"));
	
}

// Called every frame
void AABPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AABPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

