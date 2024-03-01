#include "TimeOfWeek.h"
#include "WeekDay.h"

FTimeOfWeek::FTimeOfWeek()
{
	DayOfWeek = EWeekDay::Monday;
}

FTimeOfWeek::FTimeOfWeek(const EWeekDay DayOfWeek, const FTimeOfDay TimeOfDay)
{
	this->DayOfWeek = DayOfWeek;
	this->TimeOfDay = TimeOfDay;
}

bool FTimeOfWeek::operator==(const FTimeOfWeek& Other) const
{
	return DayOfWeek == Other.DayOfWeek &&
		TimeOfDay == Other.TimeOfDay;
}
