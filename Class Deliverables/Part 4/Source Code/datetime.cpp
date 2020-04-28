#include "datetime.h"

bool Date::operator==(Date a) const
{
	return (day == a.day && month == a.month && year == a.year && dayOfWeek == a.dayOfWeek);
}

bool DateTime::operator==(DateTime a) const
{
	return (day == a.day && month == a.month && year == a.year && dayOfWeek == a.dayOfWeek && hour == a.hour && minute == a.minute);
}
