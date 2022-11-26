#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CPP_ConeMove.generated.h"

UCLASS()
class CPLUSPLUS_API ACPP_ConeMove : public AActor
{
	GENERATED_BODY()
	
public:	
	// 定義變數 Variable (屬性 Property)
	ACPP_ConeMove();

	// 屬性()
	UPROPERTY()
	// 布林值 自訂名稱；
	bool isUp;

protected:
	// 定義遊戲開始時的行為
	virtual void BeginPlay() override;

public:	
	// 定義持續執行的行為
	virtual void Tick(float DeltaTime) override;

};
