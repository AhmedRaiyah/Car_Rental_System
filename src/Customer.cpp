#include "Customer.h"

Customer::Customer()
{
    reservation = new Reservation[100];
}

Customer::~Customer()
{
    delete [] reservation;
}

void Customer::setCustId()
{
    cout << "Customer I.D: ";
    cin >> custId;
}

int Customer::getCustId()
{
    return custId;
}

void Customer::setCustName()
{
    cout << "Customer Name: ";
    cin.get();
    getline(cin,custName);
}

string Customer::getCustName()
{
    return custName;
}

void Customer::setCustAddress()
{
    cout << "Customer Address: ";
    cin.get();
    getline(cin,custAddress);
}

string Customer::getCustAddress()
{
    return custAddress;
}

void Customer::setCustNumber()
{
    cout << "Customer Number: ";
    cin >> custNumber;
}

string Customer::getCustNumber()
{
    return custNumber;
}

int Customer::getResNum()
{
    return resNum;
}

void Customer::setAll()
{
    setCustId();
    setCustName();
    setCustNumber();
    setCustAddress();
}

ostream &operator <<(ostream &disp,Customer customer)
{
    disp << "\n-I.D: " << customer.custId;
    disp << "\n-Name: " << customer.custName;
    disp << "\n-Address: " << customer.custAddress;
    disp << "\n-Number: " << customer.custNumber;
    disp << "\n-Reservation No.: " << customer.resNum;
    disp << "\n--------------------------\n";
    int totalPay=0;
    for(int i = 0; i < customer.resNum; i++)
    {
        disp << customer.reservation[i] << endl;
        totalPay = customer.reservation[i].getInvoice() - totalPay;
    }
    disp << "\n-Total Pay: " << totalPay;
    disp << "\n--------------------------\n";
    return disp;
}

void Customer::addRes(Reservation res)
{

    reservation[resNum] = res;
    resNum++;
}

bool Customer::operator <(Customer customer)
{
    return resNum < customer.getResNum();
}

bool Customer::operator ==(Customer customer)
{
    return resNum == customer.getResNum();
}

bool Customer::operator >(Customer customer)
{
    return resNum > customer.getResNum();
}

void Customer::dispCustomers()
{
    cout << "\n-I.D: " << getCustId();
    cout << "\n-Name: " << getCustName();
    cout << "\n-Number: " << getCustNumber();
    cout << "\n-Address: " << getCustAddress();
}
