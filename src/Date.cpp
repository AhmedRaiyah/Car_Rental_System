#include "Date.h"

Date::Date()
{
    //ctor
}

Date::~Date()
{
    //dtor
}

void Date::getDate()
{
    char dummy;
    cin >> day >> dummy >> month >> dummy >> year;
}

int Date::RentalSpan(Date dt)
{
    int totalDays = (dt.year - year) * 12;
    totalDays += (dt.month - month) * 30;
    totalDays += dt.day - day;
    return totalDays;
}

ostream &operator <<(ostream &disp,Date dt)
{
    disp << dt.day << "/" << dt.month << "/ " << dt.year;
    return disp;
}

bool Date::intersect(Date startDate1, Date endDate1, Date startDate2, Date endDate2)
{
    if(startDate1 > endDate2 or startDate2 > endDate1)
        return false;
    return true;
}

bool Date::operator <(Date dt)
{
    return tie(year, month, day) < tie(dt.year, dt.month, dt.day);
}

bool Date::operator ==(Date dt)
{
    return tie(year, month, day) == tie(dt.year, dt.month, dt.day);
}

bool Date::operator >(Date dt)
{
    return tie(year, month, day) > tie(dt.year, dt.month, dt.day);
}
