#ifndef INVOICE_H
#define INVOICE_H

#include <bits/stdc++.h>
#include "RentalAgreement.h"
using namespace std;

class Invoice
{
private:
    int taxes = 0;
    RentalAgreement rAgreement;
public:
    // constructor and destructor
    Invoice();
    ~Invoice();
    // get total cost amount due for renting
    int totalCost();
    // get/display Invoice
    void getInvoice(int per);
    friend ostream &operator <<(ostream &disp,Invoice invoice);
    // operator overloading
    int operator -(int cost);
    bool operator <(Invoice invoice);
    bool operator ==(Invoice invoice);
    bool operator >(Invoice invoice);
};

#endif // INVOICE_H
