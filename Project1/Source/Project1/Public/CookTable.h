// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CookTable.generated.h"

UCLASS()
class PROJECT1_API ACookTable : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACookTable();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Mesh")
	class USceneComponent* DefaultSceneRoot;

	// Cube ������Ʈ
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Visual")
	class UStaticMeshComponent* Cube;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
