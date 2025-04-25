// Fill out your copyright notice in the Description page of Project Settings.


#include "Game/ABGameMode.h"
#include "ABGameMode.h"
#include "Player/ABPlayerController.h"

AABGameMode::AABGameMode()
{
	//static ConstructorHelpers::FClassFinder<APawn>  ThirdPersonClassRef(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter.BP_ThirdPersonCharacter_C"));
	//if (ThirdPersonClassRef.Class)
	//{
	//	DefaultPawnClass = ThirdPersonClassRef.Class;
	//}
	//else
	//{
	//	UE_LOG(LogTemp, Warning, TEXT("Failed to find BP_ThirdPersonCharacter class."));
	//}

	static ConstructorHelpers::FClassFinder<APawn>  DefaultPawnClassRef(TEXT("/Game/ArenaBattle/Blueprint/BP_ABCharacterPlayer.BP_ABCharacterPlayer_C"));
	if (DefaultPawnClassRef.Class)
	{
		DefaultPawnClass = DefaultPawnClassRef.Class;
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Failed to find BP_ThirdPersonCharacter class."));
	}

	//PlayerControllerClass = AABPlayerController::StaticClass();
	static ConstructorHelpers::FClassFinder<AABPlayerController> PlayerControllerClassRef(TEXT("/Script/ArenaBattle.ABPlayerController"));
	if (PlayerControllerClassRef.Class)
	{
		PlayerControllerClass = PlayerControllerClassRef.Class;
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Failed to find ABBPlayerControllerClass class."));
	}

}