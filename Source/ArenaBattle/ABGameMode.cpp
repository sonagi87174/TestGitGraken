// Fill out your copyright notice in the Description page of Project Settings.

#include "ABGameMode.h"
#include "ABPawn.h"
#include "ABBPlayerController_01.h"

AABGameMode::AABGameMode()
{
	DefaultPawnClass = AABPawn::StaticClass();
	PlayerControllerClass = AABBPlayerController_01::StaticClass();
}

void AABGameMode::PostLogin(APlayerController * NewPlayer)
{
	
}
