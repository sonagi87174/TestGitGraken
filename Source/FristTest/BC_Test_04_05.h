// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "FristTest.h"
#include "EngineMinimal.h"
#include "GameFramework/Actor.h"
#include "BC_Test_04_05.generated.h"


UCLASS()
class FRISTTEST_API ABC_Test_04_05 : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABC_Test_04_05();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void PostInitializeComponents() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void draw();

	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent *Root;

	UPROPERTY(VisibleAnywhere, Category = Box)
		UBoxComponent *Box;



};
