// Fill out your copyright notice in the Description page of Project Settings.


#include "AdaptadorMovimientoAleatorioCA.h"

UAdaptadorMovimientoAleatorioCA::UAdaptadorMovimientoAleatorioCA()
{
	PrimaryComponentTick.bCanEverTick = true;

	// ...
	SetLimitesMovimiento(0.0f, 0.0f, 0.0f, 0.5);

}

void UAdaptadorMovimientoAleatorioCA::SetLimitesMovimiento(float _XMovimiento, float _YMovimiento, float _ZMovimiento, float _TiempoLimite)
{
	AnchoMovimiento = _YMovimiento;
	AltoMovimiento = _ZMovimiento;
	ProfundidadMovimiento = _XMovimiento;
	TiempoLimite = _TiempoLimite;
}
