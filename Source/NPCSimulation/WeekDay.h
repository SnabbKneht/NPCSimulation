#pragma once

UENUM(BlueprintType)
enum class EWeekDay : uint8
{
	Monday,
	Tuesday,
	Wednesday,
	Thursday,
	Friday,
	Saturday,
	Sunday
};

EWeekDay& operator++(EWeekDay& WeekDay);

EWeekDay& operator--(EWeekDay& WeekDay);
