// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "ObstacleProjectHUD.generated.h"

UCLASS()
class AObstacleProjectHUD : public AHUD
{
	GENERATED_BODY()

public:
	AObstacleProjectHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

