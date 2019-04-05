// Fill out your copyright notice in the Description page of Project Settings.

#include "BC_Test_04_05.h"

// Sets default values
ABC_Test_04_05::ABC_Test_04_05()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Root"));
	Box = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));

	RootComponent = Root;


	static ConstructorHelpers::FObjectFinder<UStaticMesh>
		_Root((TEXT("/Game/Geometry/Meshes/1M_Cube.1M_Cube")));

	if (_Root.Succeeded()) {
		Root->SetStaticMesh(_Root.Object);
	}

	Box->SetCollisionProfileName(TEXT("BoxSize"));

	Box->SetupAttachment(Root);

	Box->SetBoxExtent(FVector(50.0f, 50.0f, 50.0f));
	

	
}

// Called when the game starts or when spawned
void ABC_Test_04_05::BeginPlay()
{
	Super::BeginPlay();
	
}

void ABC_Test_04_05::PostInitializeComponents()
{
	Box->OnComponentBeginOverlap.AddDynamic(this, &ABC_Test_04_05::draw);
}

// Called every frame
void ABC_Test_04_05::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABC_Test_04_05::draw()
{
//	UE_LOG(FristTest, Warning, TEXT("in Coming"), );
}

