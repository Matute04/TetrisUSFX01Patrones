// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Block.h"
#include "NivelFactory.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UNivelFactory : public UInterface
{
	GENERATED_BODY()
};

/**
 *
 */
class TETRISUSFX01_API INivelFactory
{
	GENERATED_BODY()

		// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void CrearNivel() = 0;
	virtual void MostrarInformacion() = 0;
	static INivelFactory* getNivel(int numeroNivel);
private:
	int numeroNivel;
};