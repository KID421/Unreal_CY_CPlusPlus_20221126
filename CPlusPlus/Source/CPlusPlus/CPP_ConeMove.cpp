#include "CPP_ConeMove.h"

// 設定初始值
ACPP_ConeMove::ACPP_ConeMove()
{
 	// 是否啟動 Tick
	PrimaryActorTick.bCanEverTick = true;

}

void ACPP_ConeMove::MoveObject()
{
	
}

// 開始事件
void ACPP_ConeMove::BeginPlay()
{
	Super::BeginPlay();

	FVector location = GetActorLocation();	// 取得物件的座標
	heightCurrent = location.Z;				// 設定當前高度 = 座標.Z
	heightMin = location.Z;					// 最小高度 = 座標.Z
	heightMax = location.Z + moveHeight;	// 最大高度 = 座標.Z + 要移動的高度
	isUp = true;							// 是否往上 = 是

}

// 持續執行
void ACPP_ConeMove::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	float value = DeltaTime * speed;		// 移動速度值 = 1/60 秒 * 移動速度
	
	if (isUp)								// 如果 往上
	{
		heightCurrent += value;				// 當前高度 遞增 移動速度值
	}
	else									// 否則 往下
	{
		heightCurrent -= value;				// 當前高度 遞減 移動速度值
	}

	FVector location = GetActorLocation();	// 新座標 = 取得座標
	location.Z = heightCurrent;				// 新座標 的 Z 軸 = 當前高度
	SetActorLocation(location);				// 設定座標 (新座標)

	if (heightCurrent > heightMax)			// 如果 當前高度 大於 最大高度
	{
		isUp = false;						// 就往下
	}
	else if (heightCurrent < heightMin)		// 否則如果 當前高度 小於 最小高度
	{
		isUp = true;						// 就往上
	}
}
