// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Customer.generated.h"

UENUM(BlueprintType)
enum class ECustomerState : uint8
{
	IDLE,
	ENTRY,
	ORDER,
	WAIT,
	CHECK,
	EXIT
};

UCLASS()
class PROJECT1_API ACustomer : public ACharacter
{
	GENERATED_BODY()

public:
	ACustomer();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere, Category = "MySettings")
	ECustomerState customerState = ECustomerState::IDLE;

	// �ֹ��� ����
	UPROPERTY(EditAnywhere, Category = "MySettings")
	TArray<FString> menu = {TEXT("Bossam"), TEXT("Cockle"), TEXT("Jeon")};

	// ���� ���ֹ� �ð�(60, 90, 180)
	UPROPERTY(EditAnywhere, Category = "MySettings")
	TArray<float> reorderTime = { 5, 7, 10 };

	// ���� ���ֹ� �ð� �迭 ���� ���� ����
	UPROPERTY(EditAnywhere, Category = "MySettings")
	float v_reorderTime;

	// �� ���ֹ� �ð�(30, 60, 90)
	// �ֹ�Ƚ��(1~3 ������)
	UPROPERTY(EditAnywhere, Category = "MySettings")
	int32 orderCnt;

	// �մ��� �޴� ��ٸ��� �ð�
	UPROPERTY(EditAnywhere, Category = "MySettings")
	float waitingTime = 0;

	// ���� ���� ���ֹ����� ��ٸ��� �ð�
	UPROPERTY(EditAnywhere, Category = "MySettings")
	float reorderWaitingTime = 0;

	// �մ��� �����޾ƾ��ϴ� �ð�(�մ� Ÿ�̸�)
	UPROPERTY(EditAnywhere, Category = "MySettings")
	float servingTime = 20;

	// �����ƴ��� Ȯ�� ����
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MySettings")
	bool bServed = false;

	// �մ� ���� ��ġ
	UPROPERTY(EditAnywhere, Category = "MySettings")
	FVector startLoc;

	UPROPERTY(EditAnywhere, Category = "MySettings")
	class ATableManager* tm;

	FRotator leftRot;

private:
	void Idle();
	void Entry(float _DeltaTime);
	void Order();
	void Wait(float _DeltaTime);
	void Check(float _DeltaTime);
	void Exit();
};
