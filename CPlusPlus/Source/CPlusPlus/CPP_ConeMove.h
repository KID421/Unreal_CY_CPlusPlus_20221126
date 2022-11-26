#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CPP_ConeMove.generated.h"

UCLASS()
class CPLUSPLUS_API ACPP_ConeMove : public AActor
{
	GENERATED_BODY()
	
public:	
	// �w�q�ܼ� Variable (�ݩ� Property)
	ACPP_ConeMove();

	// �ݩ�()
	UPROPERTY()
	// ���L�� �ۭq�W�١F
	bool isUp;

protected:
	// �w�q�C���}�l�ɪ��欰
	virtual void BeginPlay() override;

public:	
	// �w�q������檺�欰
	virtual void Tick(float DeltaTime) override;

};
