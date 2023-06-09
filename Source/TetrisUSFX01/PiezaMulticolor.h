// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PiezaBuilder.h"
#include "PiezaMulticolor.generated.h"

UCLASS()
class TETRISUSFX01_API APiezaMulticolor : public AActor, public IPiezaBuilder
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	APiezaMulticolor();
private:
	//The Lodging Actor
	UPROPERTY()
		class APieza* Pieza;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void ConstruirColores() override;
	virtual void ConstruirRotacion() override;
	virtual class APieza* GetPieza() override;
};

