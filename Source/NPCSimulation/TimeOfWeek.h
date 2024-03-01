#pragma once

#include "CoreMinimal.h"
#include "TimeOfDay.h"
#include "TimeOfWeek.generated.h"

enum class EWeekDay : uint8;

USTRUCT(BlueprintType)
struct FTimeOfWeek
{
	GENERATED_BODY();

	FTimeOfWeek();
	
	FTimeOfWeek(const EWeekDay DayOfWeek, const FTimeOfDay TimeOfDay);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Time of Week")
	EWeekDay DayOfWeek;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Time of Week")
	FTimeOfDay TimeOfDay;

	bool operator==(const FTimeOfWeek& Other) const;
};

FORCEINLINE uint32 GetTypeHash(const FTimeOfWeek& MidiTime)
{
	uint32 Hash = FCrc::MemCrc32(&MidiTime, sizeof(FTimeOfWeek));
	return Hash;
}
