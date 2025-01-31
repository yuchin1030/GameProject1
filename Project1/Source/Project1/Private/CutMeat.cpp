// Fill out your copyright notice in the Description page of Project Settings.


#include "CutMeat.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
ACutMeat::ACutMeat()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

    //DefaultSceneRoot ���� �� ����
    DefaultSceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
    SetRootComponent(DefaultSceneRoot);

    // CapsuleComponent ���� �� ����
    CapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleComponent"));

    //RootComponent = CapsuleComponent; // ĸ���� ��Ʈ ������Ʈ�� ����
    CapsuleComponent->InitCapsuleSize(42.f, 96.f); // ĸ�� ũ�� ����
    CapsuleComponent->SetupAttachment(DefaultSceneRoot);

    // FixedCamera ���� �� ����
    FixedCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FixedCamera"));
    FixedCamera->SetupAttachment(CapsuleComponent); // ĸ�� ������Ʈ�� ����
    // FixedCamera�� ��� ��ġ ����
    FixedCamera->SetRelativeLocation(FVector(-24.f, 0.f, 54.f)); // ��ġ: X=-24, Y=0, Z=54

    // FixedCamera�� ��� ȸ�� ����
    FixedCamera->SetRelativeRotation(FRotator(-60.f, 0.f, 0.f)); // ȸ��: Pitch=0, Yaw=-60, Roll=0

    // FixedCamera�� ��� ������ ����
    FixedCamera->SetRelativeScale3D(FVector(0.3f)); // ������: X=0.3, Y=0.3, Z=0.3����

    // Cube ���� �� ����
    Cube = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Cube"));
    Cube->SetupAttachment(CapsuleComponent); // CapsuleComponent�� ����
    Cube->SetRelativeLocation(FVector(0.f, 0.f, -50.f)); // ������ ��ġ
}

// Called when the game starts or when spawned
void ACutMeat::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACutMeat::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

