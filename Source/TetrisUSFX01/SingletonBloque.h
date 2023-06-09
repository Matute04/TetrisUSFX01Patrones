// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SingletonBloque.generated.h"

UCLASS()
class TETRISUSFX01_API ASingletonBloque : public AActor
{
	GENERATED_BODY()
private:
	int contador;
public:
	// Sets default values for this actor's properties
	ASingletonBloque();

	UPROPERTY()
		ASingletonBloque* Bloque;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* BloqueMesh;
};
