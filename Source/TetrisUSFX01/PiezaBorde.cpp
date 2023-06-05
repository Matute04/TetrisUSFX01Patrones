// Fill out your copyright notice in the Description page of Project Settings.

#include "PiezaBorde.h"
#include "Block.h"
#include "Components/SceneComponent.h"
#include <vector>

// Sets default values
APiezaBorde::APiezaBorde()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;
    SetRotacion(45.0);
    SceneComponent = CreateDefaultSubobject<USceneComponent>("Escena Estructura");
    RootComponent = SceneComponent;
    struct FConstructorStatics
    {
        ConstructorHelpers::FObjectFinderOptional<UMaterial> Color_0;           // Cargar los materiales 
        ConstructorHelpers::FObjectFinderOptional<UMaterial> Color_1;
        ConstructorHelpers::FObjectFinderOptional<UMaterial> Color_2;
        ConstructorHelpers::FObjectFinderOptional<UMaterial> Color_3;
        ConstructorHelpers::FObjectFinderOptional<UMaterial> Color_4;
        ConstructorHelpers::FObjectFinderOptional<UMaterial> Color_5;
        ConstructorHelpers::FObjectFinderOptional<UMaterial> Color_6;
        FConstructorStatics()                                                   // "F" indica que es una estructura de datos de la biblioteca básica de Unreal Engine.
            : Color_0(TEXT("Material'/Game/Mesh/Material_0.Material_0'"))       // Cargar los materiales del unreal
            , Color_1(TEXT("Material'/Game/Mesh/Material_1.Material_1'"))
            , Color_2(TEXT("Material'/Game/Mesh/Material_2.Material_2'"))
            , Color_3(TEXT("Material'/Game/Mesh/Material_3.Material_3'"))
            , Color_4(TEXT("Material'/Game/Mesh/Material_4.Material_4'"))
            , Color_5(TEXT("Material'/Game/Mesh/Material_5.Material_5'"))
            , Color_6(TEXT("Material'/Game/Mesh/Material_6.Material_6'"))
        {
        }
    };
    static FConstructorStatics ConstructorStatics;  						  // Instanciar la estructura de datos FConstructorStatics
    Colors.Add(ConstructorStatics.Color_0.Get());  					          // Agregar los materiales a la lista de materiales
    Colors.Add(ConstructorStatics.Color_1.Get());
    Colors.Add(ConstructorStatics.Color_2.Get());
    Colors.Add(ConstructorStatics.Color_3.Get());
    Colors.Add(ConstructorStatics.Color_4.Get());
    Colors.Add(ConstructorStatics.Color_5.Get());
    Colors.Add(ConstructorStatics.Color_6.Get());
}

// Called when the game starts or when spawned
void APiezaBorde::BeginPlay()
{
    Super::BeginPlay();
    SpawnBlocks();
}

// Called every frame
void APiezaBorde::Tick(float DeltaTime)
{
    if (TiempoAcumulado >= 0.5)
    {
        UE_LOG(LogTemp, Warning, TEXT("se esta rotando Estructura Concreta"));
        Rotar();
        TiempoAcumulado = 0.0;
    }
    else
    {
        TiempoAcumulado += DeltaTime;
    }
}

void APiezaBorde::Rotar()
{
    UE_LOG(LogTemp, Warning, TEXT("rotacion Estructura concreta en el eje Z"));
    FRotator NewRotation = this->GetActorRotation() + FRotator(0.0, Rotacion, 45.0);
    this->SetActorRelativeRotation(NewRotation);
}

void APiezaBorde::SpawnBlocks()
{
    std::vector<std::vector<std::pair<float, float>>> Shapes =                                               // Crear una lista de piezas
    {
        //{{-20.0, 0.0}, {-10.0, 0.0}, {0.0, 0.0}, {10.0, 0.0}},                                               // Pieza Linea
        //{{0.0, 10.0}, {0.0, 0.0}, {10.0, 0.0}, {20.0, 0.0}},                                                 // Pieza L
        //{{-20.0, 0.0}, {-10.0, 0.0}, {0.0, 0.0}, {0.0, 10.0}},                                               // Pieza L Invertida
        //{{0.0, 0.0}, {10.0, 0.0}, {0.0, -10.0}, {10.0, -10.0}},                                              // Cuadrado
        //{{-10.0, -10.0}, {0.0, -10.0}, {0.0, 0.0}, {10.0, 0.0}},                                             // Pieza Z Invertida
        //{{-10.0, 0.0}, {0.0, 0.0}, {0.0, 10.0}, {10.0, 0.0}},                                                // Pieza T
        {{-10.0, 0.0}, {0.0, 0.0}, {10.0, 0.0}, {0.0, 10.0}, {0.0, -10.0}},                                  // Pieza Cruz
    };
    const int Index = FMath::RandRange(0, Shapes.size() - 1);
    UE_LOG(LogTemp, Warning, TEXT("index=%d"), Index);
    const std::vector<std::pair<float, float>>& YZs = Shapes[Index];
    //const int ColorIndex = FMath::RandRange(0, Colors.Num() - 1);

    for (auto&& YZ : YZs)
    {
        FRotator Rotation(0.0, 0.0, 0.0);
        ABlock* B = GetWorld()->SpawnActor<ABlock>(this->GetActorLocation(), Rotation);
        B->BlockMesh->SetMaterial(1, Colors[2]);
        Blocks.Add(B);
        B->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
        B->SetActorRelativeLocation(FVector(0.0, YZ.first, YZ.second));
    }
}

