#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <bits/stdc++.h>
#include "Reservation.h"
using namespace std;

class Customer
{
private:
    int custId; // customer Id
    string custName; // customer Name
    string custAddress; // customer Address
    string custNumber; // customer NUmber
    int resNum = 0;
    Reservation* reservation;
public:
    // constructor and destructor
    Customer();
    ~Customer();
    // set and get Customer Id
    void setCustId();
    int getCustId();
    // set and get Customer Name
    void setCustName();
    string getCustName();
    // set and get Customer Address
    void setCustAddress();
    string getCustAddress();
    // set and get Customer Address
    void setCustNumber();
    string getCustNumber();
    // get number of reservations
    int getResNum();
    // set and display for all of the above
    void setAll();
    friend ostream &operator <<(ostream &disp, Customer customer);
    void dispCustomers();
    // add reservation
    void addRes(Reservation res);
    // operator overloading
    bool operator <(Customer customer);
    bool operator ==(Customer customer);
    bool operator >(Customer customer);
};

#endif // CUSTOMER_H
