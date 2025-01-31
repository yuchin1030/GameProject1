// Fill out your copyright notice in the Description page of Project Settings.


#include "Door.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "Components/TimelineComponent.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
ADoor::ADoor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	//DefaultSceneRoot ���� �� ����
	DefaultSceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
	SetRootComponent(DefaultSceneRoot);

	// BoxComponent ���� �� ����
	FrontBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("FrontBoxComponent"));
	FrontBoxComponent->SetupAttachment(DefaultSceneRoot);

	// BoxComponent ���� �� ����
	BackBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BackBoxComponent"));
	BackBoxComponent->SetupAttachment(DefaultSceneRoot);

	// Cube ���� �� ����
	Cube = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Cube"));
	Cube->SetupAttachment(DefaultSceneRoot); // DefaultSceneRoot�� ����
	Cube->SetRelativeLocation(FVector(0.f, 0.f, -50.f)); // ������ ��ġ

}



// Called when the game starts or when spawned
void ADoor::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ADoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (bIsOpening)
	{
		CurrentLerpTime += DeltaTime;
		float Alpha = FMath::Clamp(CurrentLerpTime / LerpDuration, 0.f, 1.f);

		FRotator NewRotation = FMath::Lerp(InitialRotation, TargetRotation, Alpha);
		SetActorRotation(NewRotation);

		if (Alpha >= 1.0f)
		{
			bIsOpening = false;
		}
	}
}

void ADoor::Pull()
{
	if (bIsOpening) return;

	bIsOpening = true;
	InitialRotation = GetActorRotation();
	TargetRotation = InitialRotation + FRotator(0.f, -90.f, 0.f);
	CurrentLerpTime = 0.f;
}

void ADoor::Push()
{
	if (bIsOpening) return;

	bIsOpening = true;
	InitialRotation = GetActorRotation();
	TargetRotation = InitialRotation + FRotator(0.f, 90.f, 0.f);
	CurrentLerpTime = 0.f;
}

