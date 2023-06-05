// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NivelFactory.h"
#include "NivelBasico.generated.h"

UCLASS()
class TETRISUSFX01_API ANivelBasico : public AActor, public INivelFactory
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ANivelBasico();
	UPROPERTY()
		class USceneComponent* SceneComponent;

	virtual void CrearNivel() override;
	virtual void MostrarInformacion() override;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
protected:
	UPROPERTY(EditAnywhere)
		TArray<class UMaterial*> Colors;
	TArray<ABlock*> Blocks;
};
