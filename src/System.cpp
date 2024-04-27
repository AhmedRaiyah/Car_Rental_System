#include "System.h"

int System::num = 0;

System::System()
{
    car = new Car[100];
    customer = new Customer[100];
}

System::~System()
{
    delete [] car;
    delete [] customer;
}

void System::addCar()
{
    ifstream myFile;
    if(num < 1){
    myFile.open("Car_1.txt");
    if(myFile.is_open())
    {
        int ID, Year, x=0;
        string Brand, Model;
        while(x=0)
        {
            myFile >> ID;
            myFile >> Brand;
            myFile >> Model;
            myFile >> Year;
        }
        Car(ID, Brand, Model, Year);
        num += 1;
        x++;
        myFile.close();
    }
    }
    char ch;
    do{
    car[carsNum].setAll();
    carsNum++;
    cout << "\nAdd Another?(y/n): ";
    cin >> ch;
    system("cls");
    }while(ch == 'y');
}

void System::addCustomer()
{
    char ch;
    do{
    customer[custsNum].setAll();
    custsNum++;
    cout << "\nAdd Another?(y/n): ";
    cin >> ch;
    system("cls");
    }while(ch == 'y');
}

int System::searchCar(int carId)
{
    for(int i = 0; i < carsNum; i++)
    {
        if(car[i].getCarId() == carId)
        {
            return i;
        }
    }
    return -1;
}

int System::searchCustomer(int custId)
{
    for(int i = 0; i < custsNum; i++)
    {
        if(customer[i].getCustId() == custId)
        {
            return i;
        }
    }
    return -1;
}

void System::rentCar()
{
    Reservation reservation;
    reservation.setAll();
    int carIndex = searchCar(reservation.getCarId()), customerIndex = searchCustomer(reservation.getCustId());
    if(carIndex == -1)
    {
        cout << "\nSpecified Car Was Not Found.\n";
    }
    else if(customerIndex == -1)
    {
        cout << "\n Specified Customer Was Not Found.\n";
    }
    else
    {
        car[carIndex].addReservation(reservation);
        customer[customerIndex].addRes(reservation);
    }
}

void System::dispCar()
{
    int carId;
    cout << "Car Id: ";
    cin >> carId;
    int index = searchCar(carId);
    if(index == -1)
    {
        cout << "\nSpecified Car Was Not Found.\n";
    }
    else
    {
        cout << car[index];
    }
}


void System::availableCars()
{
    Date startDate,endDate;
    cout << "Rental Start Date: ";
    startDate.getDate();
    cout << "Rental End Date: ";
    endDate.getDate();
    for(int i = 0; i < carsNum; i++)
    {
        if(car[i].carAvailability(startDate, endDate))
        {
            cout << car[i];
        }
    }
}

void System::rentHistory()
{
    int custId;
    cout << "Customer I.D: ";
    cin >> custId;
    int index = searchCustomer(custId);
    if(index == -1)
    {
        cout<<"\nSpecified Customer was Not Found.\n";
    }
    else
    {
        cout << customer[index];
    }
}

void System::reports()
{
    cout << "  Customers Rental History\n";
    cout << "============================\n";
    for(int i = 0; i < custsNum ; i++)
    {
        cout << "Customer #" << i+1 << ":\n";
        cout << customer[i] << endl;
    }
    cout << "  Cars Rental History\n";
    cout << "=======================\n";
    for(int i = 0; i < carsNum; i++)
    {
        cout << "Car #" << i+1 << ":\n";
        cout << car[i] << endl;
    }
}

void System::dispAllCars()
{
    cout << "\n\t\tCars\n";
    cout << "\t     ==========\n";
    cout << "\nNO. of Cars: " << carsNum << endl;
    cout << "---------------------\n";
    for(int i = 0; i < carsNum; i++)
    {
        cout << "Car #" << i+1 << ":\n";
        cout << "------------";
        car[i].dispCar();
    }
}

void System::dispAllCustomers()
{
    cout << "\n\t\tClients\n";
    cout << "\t     =============\n";
    cout << "\nNO. of Clients: " << custsNum << endl;
    cout << "---------------------\n";
    for(int i = 0; i < custsNum; i++)
    {
        cout << "Client #" << i+1 << ":\n";
        cout << "------------";
        customer[i].dispCustomers();
    }
}
