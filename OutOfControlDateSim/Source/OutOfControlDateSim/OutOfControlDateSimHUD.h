// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "OutOfControlDateSimHUD.generated.h"

UCLASS()
class AOutOfControlDateSimHUD : public AHUD
{
	GENERATED_BODY()

public:
	AOutOfControlDateSimHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

