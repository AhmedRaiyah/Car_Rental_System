#ifndef CAR_H
#define CAR_H

#include <bits/stdc++.h>
#include <fstream>
#include "Reservation.h"
using namespace std;

class Car
{
private:
    int prodYear; // year the car was made
    int carId; // Car's Id to be able to search for it
    string carBrand; // Cars' Company e.g. Toyota, Honda, BMW,etc...
    string carModel; // Cars' model e.g. Camry, Civic, m4, etc...
    int rentNum = 0; // number of rents on a car
    Reservation* reservation; // dynamic array
public:
    // constructor and destructor
    Car();
    Car(int ID, string Brand, string Model, int Year);
    ~Car();
    // set and get for Production Year
    void setProdYear();
    int getProdYear();
    // set and get for Car Id
    void setCarId();
    int getCarId();
    // set and get Car Comp
    void setCarBrand();
    string getCarBrand();
    // set and get Car Model
    void setCarModel();
    string getCarModel();
    // get for number of rents
    int getRentNum();
    // set and display for all of the above
    void setAll();
    friend ostream &operator << (ostream &disp, Car car);
    void dispCar();
    // add reservation
    void addReservation(Reservation reservation);
    // checks availability for cars
    bool carAvailability(Date startDate, Date endDate);
    // operator overloading
    bool operator <(Car car);
    bool operator ==(Car car);
    bool operator >(Car car);
    // file
    //void file();
};

#endif // CAR_H
