// Fill out your copyright notice in the Description page of Project Settings.


#include "Customer.h"
#include <Kismet/KismetArrayLibrary.h>
#include <Runtime/AIModule/Classes/AIController.h>
#include <Runtime/AIModule/Classes/Blueprint/AIBlueprintHelperLibrary.h>
#include "TableManager.h"
#include "Components/ArrowComponent.h"
#include "Components/BoxComponent.h"
#include "NavigationSystem.h"
#include <Kismet/GameplayStatics.h>

ACustomer::ACustomer()
{
	PrimaryActorTick.bCanEverTick = true;

	GetMesh()->SetRelativeLocation(FVector(0,0,-90));
	GetMesh()->SetRelativeRotation(FRotator(0, -90, 0));
}

void ACustomer::BeginPlay()
{
	Super::BeginPlay();
	
	// �⺻ ���¸� IDLE ���·� �ʱ�ȭ
	customerState = ECustomerState::IDLE;
	startLoc = GetActorLocation();
	
	// �ʱ� ȸ���� ����(�����ָ� �̵��Ҷ����� �̻��� �������� ȸ����; �⺻ ȭ��ǥ���� �������� ���Բ�)
	SetActorRotation(FRotator(0, 180, 0));

	tm = Cast<ATableManager>(UGameplayStatics::GetActorOfClass(GetWorld(), ATableManager::StaticClass()));
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
		Entry(DeltaTime);
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
	// �����Ҷ� �޴� �ֹ� Ƚ���� �̸� ���ص�
	orderCnt = FMath::RandRange(1, 3);

	// �����Ҷ� ���� ���ֹ� �ð��� �̸� ���ص�
	// v_reorderTime�� ���� ���ֹ� �ð� ���� ����ִ� �迭�� �ε��� ����
	// ���� ���� ���ֹ��ð� ��(60, 90, 180)�� ������ reorderTime[v_reorderTime]�� �����
	v_reorderTime = FMath::RandRange(0, reorderTime.Num() - 1);

	UE_LOG(LogTemp, Warning, TEXT("orderCnt : %d"), orderCnt);
	UE_LOG(LogTemp, Warning, TEXT("v_reorderTime : %f"), reorderTime[v_reorderTime]);

	customerState = ECustomerState::ENTRY;

	// Test
	//FTimerHandle waitHandle;
	//GetWorldTimerManager().SetTimer(waitHandle, [&](){
	//	customerState = ECustomerState::ENTRY;
	//}, 5.0f, false);
	
}

void ACustomer::Entry(float _DeltaTime)
{

	AAIController* AIController = Cast<AAIController>(GetController());
	if (AIController)
	{
		if (tm)
		{
			// Build.cs�� AIModule �߰� �ʼ�
			UAIBlueprintHelperLibrary::SimpleMoveToLocation(AIController, tm->arrowLeftDown->GetComponentLocation());

			FVector Velocity = GetVelocity();
			Velocity.Z = 0.0f;
			UE_LOG(LogTemp, Warning, TEXT("Velocity : %f %f %f"), Velocity.X, Velocity.Y, Velocity.Z);

			if (!Velocity.IsNearlyZero())
			{
				FRotator TargetRotation;

				// �Ʒ������� �̵� �� ����
				if (Velocity.Y < 0)
				{
					TargetRotation = FRotator(0.0f, 180.0f, 0.0f); // ���� (180��)
				}
				// ���������� �̵� �� ������ ����
				else if (Velocity.X > 0)
				{
					TargetRotation = FRotator(0.0f, 90.0f, 0.0f); // ������ (90��)
				}
				else if (Velocity.X < 0)
				{
					TargetRotation = FRotator(0.0f, -90.0f, 0.0f); // ���� (-90��)
				}
				else
				{
					TargetRotation = FRotator(0.0f, 0.0f, 0.0f); // ���� (0��)
				}

				//RInterpTo�� ���� "ȸ�� ����"�� �� �κ���. (�ε巴�� ȸ��)
				//���ڱ� Ȯ �ٲ�� �ȵǴϱ� õõ�� �ٲ��
				//���� GetActorRotation���� TargetRotation���� 5�ʵ��� ȸ������ �Ѵٴ� ����.
				SetActorRotation(FMath::RInterpTo(GetActorRotation(), TargetRotation, _DeltaTime, 5.0f));
			}
			//AIController->MoveToLocation(TargetLocation, /* AcceptanceRadius */ 5.0f);
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("No tm"));
		}
		
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No AIController"));
	}

	TArray<UPrimitiveComponent*> overlappingComps;
	this->GetOverlappingComponents(overlappingComps);

	// Left Collision�� �ε����� �������� ȸ���ϰԲ�
	for (UPrimitiveComponent* comp : overlappingComps)
	{
		if (comp->ComponentHasTag("Left"))
		{
			if (tm)
			{
				// leftBoxColl�� ���� ���͸� �������� ȸ���� ���
				leftRot = FRotationMatrix::MakeFromX(tm->leftBoxColl->GetRightVector()).Rotator();

				// BoxCollision�� ȸ���� ���� ���� �������� ����(���̺��� �Ĵٺ��鼭 ����)
				SetActorRotation(leftRot);

				// �ڸ� ���������� �ٷ� �ֹ�
				customerState = ECustomerState::ORDER;
				break;
			}
			else
			{
				UE_LOG(LogTemp, Warning, TEXT("No tm"));
			}
		}
	}

}

void ACustomer::Order()
{
	UE_LOG(LogTemp, Warning, TEXT("Order"));
	SetActorRotation(leftRot);
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


