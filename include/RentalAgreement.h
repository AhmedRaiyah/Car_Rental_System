#ifndef RENTALAGREEMENT_H
#define RENTALAGREEMENT_H

#include <bits/stdc++.h>
using namespace std;

class RentalAgreement
{
private:
    int period;
    int rentRate;
    int insurance;
public:
    // constructor and destructor
    RentalAgreement();
    ~RentalAgreement();
    // set/get rent rate
    void setRentRate();
    int getRentRate();
    // set/get insurance cost
    void setInsurance();
    int getInsurance();
    // set/get Rental Agreement ( period, insurance, rate)
    void setRentalAgreement(int per); // per short for period to help differentiate
    int getRentalAgreement();
    // operator overloading
    int operator +(int cost);
    bool operator <(RentalAgreement rAgreement);
    bool operator ==(RentalAgreement rAgreement);
    bool operator >(RentalAgreement rAgreement);
};

#endif // RENTALAGREEMENT_H
