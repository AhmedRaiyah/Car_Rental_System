#include "Invoice.h"

Invoice::Invoice()
{
    //ctor
}

Invoice::~Invoice()
{
    //dtor
}

int Invoice::totalCost()
{
    return rAgreement + taxes;
}

void Invoice::getInvoice(int per)
{
    rAgreement.setRentalAgreement(per);
    cout << "Tax on the car: $";
    cin >> taxes;
}

ostream & operator <<(ostream &disp, Invoice invoice)
{
    disp << "\n-Tax on car: " << invoice.taxes;
    disp << "\n-Rental Agreement details: ";
    disp << "\n-Amount due: " << invoice.totalCost();
    disp << "\n---------------------------\n";
    return disp;
}

int Invoice::operator -(int cost)
{
    return totalCost() + cost;
}
bool Invoice::operator <(Invoice invoice)
{
    return totalCost() < invoice.totalCost();
}
bool Invoice::operator ==(Invoice invoice)
{
    return totalCost() == invoice.totalCost();
}
bool Invoice::operator >(Invoice invoice)
{
    return totalCost() > invoice.totalCost();
}
