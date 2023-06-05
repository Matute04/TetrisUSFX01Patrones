// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PiezaBordeInterfaz.h"
#include "PiezaBorde.generated.h"

UCLASS()
class TETRISUSFX01_API APiezaBorde : public AActor, public IPiezaBordeInterfaz
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	APiezaBorde();
	UPROPERTY()
		class USceneComponent* SceneComponent;
	int GetRotacion() const { return Rotacion; }
	void SetRotacion(int _Rotacion) { Rotacion = _Rotacion; }
protected:

	UPROPERTY(EditAnywhere)
	TArray<class UMaterial*> Colors;
	TArray<ABlock*> Blocks;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void Rotar() override;
	virtual void SpawnBlocks() override;
private:
	float TiempoAcumulado = 0.0f;
	float Rotacion = 0.0;
};
