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
	// VisibleAnywhere 所有地方都能見
	// EditAnywhere 所有地方都能編輯
	// Category 分類 = "主分類|次分類|次次分類|..."
	// Meta=() 資料
	// DisplayName = "顯示名稱"
	UPROPERTY(VisibleAnywhere, Category="基本資料|變數資料", Meta=(DisplayName="是否往上"))
	// 布林值 自訂名稱；
	bool isUp;

	UPROPERTY(EditAnywhere, Category="基本資料|數值資料", Meta=(DisplayName="往上移動的高度", ClampMin="0", ClampMax="1000"))	
	float moveHeight = 200;

	UPROPERTY(VisibleAnywhere, Category="基本資料|數值資料", Meta=(DisplayName="最大高度"))	
	float heightMax;

	UPROPERTY(VisibleAnywhere, Category="基本資料|數值資料", Meta=(DisplayName="最小高度"))	
	float heightMin;

	UPROPERTY(EditAnywhere, Category="基本資料|數值資料", Meta=(DisplayName="移動速度", ClampMin="0", ClampMax="500"))	
	float speed = 100;

	UPROPERTY(VisibleAnywhere, Category="基本資料|數值資料", Meta=(DisplayName="當前高度"))	
	float heightCurrent;

	UFUNCTION(BlueprintCallable, Category="KID")
	void MoveObject();

protected:
	// 定義遊戲開始時的行為
	virtual void BeginPlay() override;

public:	
	// 定義持續執行的行為
	virtual void Tick(float DeltaTime) override;

};
