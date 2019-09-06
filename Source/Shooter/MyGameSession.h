// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameSession.h"
#include "MyGameSession.generated.h"

/**
 * 
 */
UCLASS()
class SHOOTER_API AMyGameSession : public AGameSession
{
	GENERATED_BODY()
		virtual void RegisterServer() override;
};
