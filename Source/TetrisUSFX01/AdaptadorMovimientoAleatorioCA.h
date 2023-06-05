// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MovimientoAleatorioCA.h"
#include "MovimientoAleatorio.h"
#include "AdaptadorMovimientoAleatorioCA.generated.h"

/**
 * 
 */
UCLASS()
class TETRISUSFX01_API UAdaptadorMovimientoAleatorioCA : public UMovimientoAleatorioCA, public IMovimientoAleatorio
{
	GENERATED_BODY()
	
public:
	UAdaptadorMovimientoAleatorioCA();
	void SetLimitesMovimiento(float _XMovimiento, float _YMovimiento, float _ZMovimiento, float _TiempoLimite);
};
