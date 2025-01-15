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
	
	// 기본 상태를 IDLE 상태로 초기화
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
	// 입장할때 메뉴 주문 횟수를 미리 정해둠
	orderCnt = FMath::RandRange(1, 3);

	// 입장할때 음식 재주문 시간을 미리 정해둠
	// v_reorderTime은 음식 재주문 시간 값이 들어있는 배열의 인덱스 값임
	// 따라서 음식 재주문시간 값(60, 90, 180)을 쓰려면 reorderTime[v_reorderTime]을 써야함
	v_reorderTime = FMath::RandRange(0, reorderTime.Num() - 1);

	UE_LOG(LogTemp, Warning, TEXT("orderCnt : %d"), orderCnt);
	UE_LOG(LogTemp, Warning, TEXT("v_reorderTime : %f"), reorderTime[v_reorderTime]);

	// 자리 착지했으면 바로 주문
	customerState = ECustomerState::ORDER;
}

void ACustomer::Order()
{
	UE_LOG(LogTemp, Warning, TEXT("Order"));

	//균등 확률 보장: FMath::RandRange는 균등 분포를 가정하여 값이 선택됨
	// 따라서 모든 메뉴가 동일한 확률로 선택됨
	// menu 배열의 인덱스를 랜덤으로 뽑아서
	int32 randomIndex = FMath::RandRange(0, menu.Num() - 1);

	// 주문할 메뉴를 정함
	FString orderMenu = menu[randomIndex];
	UE_LOG(LogTemp, Warning, TEXT("%s"), *orderMenu);

	// 주문횟수 --;
	orderCnt--;
	UE_LOG(LogTemp, Warning, TEXT("currentOrderCnt : %d"), orderCnt);

	// 주문하고 음식 서빙 나올 때까지 기다리기
	customerState = ECustomerState::WAIT;
}

void ACustomer::Wait(float _DeltaTime)
{
	waitingTime += _DeltaTime;

	// 메뉴 대기 시간 동안 서빙 받았을때
	if (bServed && waitingTime <= servingTime)
	{
		customerState = ECustomerState::CHECK;
		bServed = false;
		waitingTime = 0;
	}
	// 메뉴 대기 시간 동안 서빙 받지 않았을때
	else if (waitingTime > servingTime)
	{
		// 주문을 더 이상 안한다면(주문 횟수가 0이라면) 퇴장
		if (orderCnt == 0)
		{
			customerState = ECustomerState::EXIT;

			// 대기시간 초기화
			waitingTime = 0;
			
		}
		// 주문 횟수가 아직 남아 있으면 재주문
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
	// 메뉴 값 받기
	UE_LOG(LogTemp, Warning, TEXT("Check"));

	// 주문 횟수가 아직 남아있다면
	if (orderCnt > 0)
	{
		// 미리 랜덤값으로 정해둔 손님의 음식 재주문 시간이 끝날때까지 기다림 
		reorderWaitingTime += _DeltaTime;

		// 재주문 시간에 도달했다면
		if (reorderWaitingTime >= reorderTime[v_reorderTime])
		{
			// 재주문하기
			customerState = ECustomerState::ORDER;
			reorderWaitingTime = 0;
		}
	}
	// 주문 횟수가 남아있지 않다면
	else
	{
		// 바로 퇴장
		customerState = ECustomerState::EXIT;
	}
}

void ACustomer::Exit()
{
	UE_LOG(LogTemp, Warning, TEXT("Exit"));
}


