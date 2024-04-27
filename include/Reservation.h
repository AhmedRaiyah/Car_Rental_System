#ifndef RESERVATION_H
#define RESERVATION_H

#include <bits/stdc++.h>
#include "Date.h"
#include "Invoice.h"
using namespace std;

class Reservation
{
private:
    int carId;
    int custId;
    Date startDate;
    Date endDate;
    Invoice invoice;
public:
    // constructor and destructor
    Reservation();
    ~Reservation();
    // set/get customer Id
    void setCustId();
    int getCustId();
    // set/get Car Id
    void setCarId();
    int getCarId();
    // set/get start date of rent
    void setStart();
    Date getStart();
    // set/get end date of rent
    void setEnd();
    Date getEnd();
    // set/get Invoice
    void setInvoice();
    Invoice getInvoice();
    // set/display all of the above
    void setAll();
    friend ostream &operator <<(ostream &disp, Reservation reserv);
    // operator overloading
    bool operator <(Reservation reserv);
    bool operator ==(Reservation reserv);
    bool operator >(Reservation reserv);
};

#endif // RESERVATION_H
