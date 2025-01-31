// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Door.generated.h"

UCLASS()
class PROJECT1_API ADoor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADoor();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Collision)
	class USceneComponent* DefaultSceneRoot;

	// �չڽ� ������Ʈ
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Collision)
	class UBoxComponent* FrontBoxComponent;

	// �޹ڽ� ������Ʈ
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Collision)
	class UBoxComponent* BackBoxComponent;


	// Cube ������Ʈ
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Visual")
	class UStaticMeshComponent* Cube;


	void Pull();
	void Push();

private:
	bool bIsOpening = false;
	FRotator InitialRotation;
	FRotator TargetRotation;
	float CurrentLerpTime = 0.f;
	float LerpDuration = 1.0f; // �ε巴�� ���� �� �ɸ��� �ð�


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
