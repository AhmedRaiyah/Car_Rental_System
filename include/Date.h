#ifndef DATE_H
#define DATE_H

#include <bits/stdc++.h>
using namespace std;

class Date
{
private:
    int day;
    int month;
    int year;
public:
    // constructor and destructor
    Date();
    ~Date();
    // get Date
    void getDate();
    // get rental span
    int RentalSpan(Date dt);
    // display date
    friend ostream &operator <<(ostream &disp ,Date dt);
    // check for intersection between rents to prevent double rent on the same car
    bool intersect(Date startDate1 ,Date endDate1, Date startDate2,Date endDate2);
    // operator overloading
    bool operator <(Date dt);
    bool operator ==(Date dt);
    bool operator >(Date dt);
};

#endif // DATE_H
