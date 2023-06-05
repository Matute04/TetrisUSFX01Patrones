// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PiezaBordeInterfaz.h"
#include "PiezaBorde.h"
#include "PiezaDecorator.generated.h"

UCLASS()
class TETRISUSFX01_API APiezaDecorator : public AActor, public IPiezaBordeInterfaz
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APiezaDecorator();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void Rotar() override;
	virtual void SpawnBlocks() override;
	void SetPiezaRotatoria(IPiezaBordeInterfaz* _PiezaBordeInterfaz) { PiezaBordeInterfaz = _PiezaBordeInterfaz; }
private:

	IPiezaBordeInterfaz* PiezaBordeInterfaz;
	int Color;
};
