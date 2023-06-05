// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PiezaDecorator.h"
#include "PiezaDecoratorIzquierda.generated.h"

/**
 * 
 */
UCLASS()
class TETRISUSFX01_API APiezaDecoratorIzquierda : public APiezaDecorator
{
	GENERATED_BODY()
public:
	virtual void Rotar() override;
	virtual void SpawnBlocks() override;
	virtual void Tick(float DeltaTime) override; 
private:
	float TiempoAcumulado = 0.0f;
	float Rotacion = 45.0f;
};

