#include "TimeOfDay.h"

FTimeOfDay::FTimeOfDay()
{
	Hour = 0;
	Minute = 0;
	Second = 0;
}

FTimeOfDay::FTimeOfDay(const int32 Hour, const int32 Minute, const int32 Second)
{
	this->Hour = FMath::Clamp(Hour, 0, 23);
	this->Minute = FMath::Clamp(Minute, 0, 59);
	this->Second = FMath::Clamp(Second, 0, 59);
}

bool FTimeOfDay::operator==(const FTimeOfDay& Other) const
{
	return Hour == Other.Hour &&
		Minute == Other.Minute &&
			Second == Other.Second;
}
