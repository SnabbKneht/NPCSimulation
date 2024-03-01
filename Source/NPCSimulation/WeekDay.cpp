#include "WeekDay.h"

EWeekDay& operator++(EWeekDay& WeekDay)
{
	if(WeekDay == EWeekDay::Sunday)
	{
		WeekDay = EWeekDay::Monday;
	}
	else
	{
		WeekDay = static_cast<EWeekDay>(static_cast<uint8>(WeekDay) + 1);
	}
	return WeekDay;
}

EWeekDay& operator--(EWeekDay& WeekDay)
{
	if(WeekDay == EWeekDay::Monday)
	{
		WeekDay = EWeekDay::Sunday;
	}
	else
	{
		WeekDay = static_cast<EWeekDay>(static_cast<uint8>(WeekDay) - 1);
	}
	return WeekDay;
}
