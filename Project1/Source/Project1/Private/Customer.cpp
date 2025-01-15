// Fill out your copyright notice in the Description page of Project Settings.


#include "Customer.h"
#include <Kismet/KismetArrayLibrary.h>

ACustomer::ACustomer()
{
	PrimaryActorTick.bCanEverTick = true;

}

void ACustomer::BeginPlay()
{
	Super::BeginPlay();
	
	// �⺻ ���¸� IDLE ���·� �ʱ�ȭ
	customerState = ECustomerState::ENTRY;
}

void ACustomer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	switch (customerState)
	{
	case ECustomerState::IDLE:
		Idle();
		break;
	case ECustomerState::ENTRY:
		Entry();
		break;
	case ECustomerState::ORDER:
		Order();
		break;
	case ECustomerState::WAIT:
		Wait(DeltaTime);
		break;
	case ECustomerState::CHECK:
		Check(DeltaTime);
		break;
	case ECustomerState::EXIT:
		Exit();
		break;
	}
}

void ACustomer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ACustomer::Idle()
{

}

void ACustomer::Entry()
{
	// �����Ҷ� �޴� �ֹ� Ƚ���� �̸� ���ص�
	orderCnt = FMath::RandRange(1, 3);

	// �����Ҷ� ���� ���ֹ� �ð��� �̸� ���ص�
	// v_reorderTime�� ���� ���ֹ� �ð� ���� ����ִ� �迭�� �ε��� ����
	// ���� ���� ���ֹ��ð� ��(60, 90, 180)�� ������ reorderTime[v_reorderTime]�� �����
	v_reorderTime = FMath::RandRange(0, reorderTime.Num() - 1);

	UE_LOG(LogTemp, Warning, TEXT("orderCnt : %d"), orderCnt);
	UE_LOG(LogTemp, Warning, TEXT("v_reorderTime : %f"), reorderTime[v_reorderTime]);

	// �ڸ� ���������� �ٷ� �ֹ�
	customerState = ECustomerState::ORDER;
}

void ACustomer::Order()
{
	UE_LOG(LogTemp, Warning, TEXT("Order"));

	//�յ� Ȯ�� ����: FMath::RandRange�� �յ� ������ �����Ͽ� ���� ���õ�
	// ���� ��� �޴��� ������ Ȯ���� ���õ�
	// menu �迭�� �ε����� �������� �̾Ƽ�
	int32 randomIndex = FMath::RandRange(0, menu.Num() - 1);

	// �ֹ��� �޴��� ����
	FString orderMenu = menu[randomIndex];
	UE_LOG(LogTemp, Warning, TEXT("%s"), *orderMenu);

	// �ֹ�Ƚ�� --;
	orderCnt--;
	UE_LOG(LogTemp, Warning, TEXT("currentOrderCnt : %d"), orderCnt);

	// �ֹ��ϰ� ���� ���� ���� ������ ��ٸ���
	customerState = ECustomerState::WAIT;
}

void ACustomer::Wait(float _DeltaTime)
{
	waitingTime += _DeltaTime;

	// �޴� ��� �ð� ���� ���� �޾�����
	if (bServed && waitingTime <= servingTime)
	{
		customerState = ECustomerState::CHECK;
		bServed = false;
		waitingTime = 0;
	}
	// �޴� ��� �ð� ���� ���� ���� �ʾ�����
	else if (waitingTime > servingTime)
	{
		// �ֹ��� �� �̻� ���Ѵٸ�(�ֹ� Ƚ���� 0�̶��) ����
		if (orderCnt == 0)
		{
			customerState = ECustomerState::EXIT;

			// ���ð� �ʱ�ȭ
			waitingTime = 0;
			
		}
		// �ֹ� Ƚ���� ���� ���� ������ ���ֹ�
		else
		{
			customerState = ECustomerState::ORDER;
			waitingTime = 0;
			UE_LOG(LogTemp, Warning, TEXT("Reorder"));
		}
		
	}
	//UE_LOG(LogTemp, Warning, TEXT("Wait"));
}

void ACustomer::Check(float _DeltaTime)
{
	// �޴� �� �ޱ�
	UE_LOG(LogTemp, Warning, TEXT("Check"));

	// �ֹ� Ƚ���� ���� �����ִٸ�
	if (orderCnt > 0)
	{
		// �̸� ���������� ���ص� �մ��� ���� ���ֹ� �ð��� ���������� ��ٸ� 
		reorderWaitingTime += _DeltaTime;

		// ���ֹ� �ð��� �����ߴٸ�
		if (reorderWaitingTime >= reorderTime[v_reorderTime])
		{
			// ���ֹ��ϱ�
			customerState = ECustomerState::ORDER;
			reorderWaitingTime = 0;
		}
	}
	// �ֹ� Ƚ���� �������� �ʴٸ�
	else
	{
		// �ٷ� ����
		customerState = ECustomerState::EXIT;
	}
}

void ACustomer::Exit()
{
	UE_LOG(LogTemp, Warning, TEXT("Exit"));
}


