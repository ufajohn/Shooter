// Fill out your copyright notice in the Description page of Project Settings.

#include "MyGameSession.h"
#include "OnlineSubsystem.h"
#include "OnlineSessionInterface.h"
#include "OnlineSessionSettings.h"
#include <iostream>
#include <fstream>
#include <string>


void AMyGameSession::RegisterServer()
{
	Super::RegisterServer();

	UE_LOG(LogTemp, Log, TEXT("Registering Server and creation session ------------------"));
	IOnlineSubsystem* OnlineSubSystem = IOnlineSubsystem::Get();
	UE_LOG(LogTemp, Log, TEXT("Got onlineSubSystem ------------------"));
	IOnlineSessionPtr Session = OnlineSubSystem->GetSessionInterface();
	UE_LOG(LogTemp, Log, TEXT("Got session interface ------------------"));
	FOnlineSessionSettings Settings;
	
	Settings.bIsDedicated = true;
	Settings.bIsLANMatch = false;
	Settings.bAllowJoinInProgress = true;
	Settings.bShouldAdvertise = true;
	Settings.NumPublicConnections = 16;
	Settings.bUsesPresence = true;

	UE_LOG(LogTemp, Log, TEXT("Initialized session ------------------"));
	Session->CreateSession(0, GameSessionName, Settings);
	UE_LOG(LogTemp, Log, TEXT("Session created ------------------"));
}
