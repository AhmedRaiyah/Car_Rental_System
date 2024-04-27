#ifndef SYSTEM_H
#define SYSTEM_H

#include <bits/stdc++.h>
#include "Car.h"
#include "Customer.h"
#include "Reservation.h"
using namespace std;

class System
{
private:
    int carsNum = 0; // number of cars saved
    int custsNum = 0; // saved customers
    int searchCar(int carId); // searching for car
    int searchCustomer(int custId);  // searching for custmoer
    void getDate(Date &startDate, Date &endDate); // checking dates
    void getIdS(int &carId, int &custId); // getting customer and car Id
    Car* car; // dynamic array for cars
    Customer* customer; // dynamic array fr customers
    static int num;
public:
    //constructor and destructor
    System();
    ~System();
    void addCar(); // add Car to list of rental cars
    void addCustomer(); // saving new customers
    void rentCar(); // rent car
    void dispCar(); // disp specific car
    void availableCars(); // display all available cars
    void rentHistory(); // display customer history of rents
    void reports(); // reports
    void dispAllCars();
    void dispAllCustomers();
};

#endif // SYSTEM_H
