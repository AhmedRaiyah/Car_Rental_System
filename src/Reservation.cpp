#include "Reservation.h"

Reservation::Reservation()
{
    //ctor
}

Reservation::~Reservation()
{
    //dtor
}

void Reservation::setCustId()
{
    cout << "Customer I.D: ";
    cin >> custId;
}

int Reservation::getCustId()
{
    return custId;
}

void Reservation::setCarId()
{
    cout << "Car I.D: ";
    cin >> carId;
}

int Reservation::getCarId()
{
    return carId;
}

void Reservation::setStart()
{
    cout << "Start Date(DD/MM/YYYY): ";
    startDate.getDate();
}

Date Reservation::getStart()
{
    return startDate;
}

void Reservation::setEnd()
{
    cout << "End Date(DD/MM/YYYY): ";
    endDate.getDate();
}

Date Reservation::getEnd()
{
    return endDate;
}

void Reservation::setInvoice()
{
    invoice.getInvoice(startDate.RentalSpan(endDate));
}

Invoice Reservation::getInvoice()
{
    return invoice;
}

void Reservation::setAll()
{
    setCustId();
    setCarId();
    setStart();
    setEnd();
    setInvoice();
}

ostream &operator <<(ostream &disp, Reservation reserv)
{
    disp << "\n-Reservation Car I.D: " << reserv.carId;
    disp << "\n-Reservation Customer I.D: " << reserv.custId;
    disp << "\n-Start Date: " << reserv.startDate;
    disp << "\n-End Date: " << reserv.endDate;
    disp << "\n-Invoice details: " << reserv.invoice;
    return disp;
}

bool Reservation::operator <(Reservation reserv)
{
    return invoice.totalCost() < reserv.getInvoice().totalCost();
}

bool Reservation::operator ==(Reservation reserv)
{
    return invoice.totalCost() == reserv.getInvoice().totalCost();
}

bool Reservation::operator >(Reservation reserv)
{
    return invoice.totalCost() > reserv.getInvoice().totalCost();
}
