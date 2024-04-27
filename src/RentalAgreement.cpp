#include "RentalAgreement.h"

RentalAgreement::RentalAgreement()
{
    //ctor
}

RentalAgreement::~RentalAgreement()
{
    //dtor
}

void RentalAgreement::setRentRate()
{
    cout << "Rate(price/day): $";
    cin >> rentRate;
}

int RentalAgreement::getRentRate()
{
    return rentRate;
}

void RentalAgreement::setInsurance()
{
    cout << "Insurance: $";
    cin >> insurance;
}

int RentalAgreement::getInsurance()
{
    return insurance;
}

void RentalAgreement::setRentalAgreement(int per)
{
    period = per;
    setRentRate();
    setInsurance();
}
int RentalAgreement::getRentalAgreement()
{
    return period * rentRate + insurance;
}

int RentalAgreement::operator +(int tCost)
{
    return tCost + getRentalAgreement();
}

bool RentalAgreement::operator <(RentalAgreement rAgreement)
{
    return getRentalAgreement() < rAgreement.getRentalAgreement();
}

bool RentalAgreement::operator==(RentalAgreement rAgreement)
{
    return getRentalAgreement() == rAgreement.getRentalAgreement();
}

bool RentalAgreement::operator >(RentalAgreement rAgreement)
{
    return getRentalAgreement() > rAgreement.getRentalAgreement();
}
