#pragma once

#include "CoreMinimal.h"
#include "TimeOfDay.generated.h"

USTRUCT(BlueprintType)
struct FTimeOfDay
{
	GENERATED_BODY()

	FTimeOfDay();

	FTimeOfDay(const int32 Hour, const int32 Minute, const int32 Second);
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Time of Day")
	int32 Hour;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Time of Day")
	int32 Minute;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Time of Day")
	int32 Second;

	bool operator==(const FTimeOfDay& Other) const;
};
