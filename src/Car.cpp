#include "Car.h"


Car::Car()
{
    reservation = new Reservation[100];
}

Car::~Car()
{
    delete [] reservation;
}

Car::Car(int ID, string Brand, string Model, int Year)
{
    carId = ID;
    carBrand = Brand;
    carModel = Model;
    prodYear = Year;
}

void Car::setProdYear()
{
    cout << "Car's Year of Production: ";
    cin >> prodYear;
}

int Car::getProdYear()
{
    return prodYear;
}

void Car::setCarId()
{
    cout << "Car's I.D: ";
    cin >> carId;
}

int Car::getCarId()
{
    return carId;
}

void Car::setCarBrand()
{
    cout << "Car's Brand: ";
    cin.get();
    getline(cin,carBrand);
}

string Car::getCarBrand()
{
    return carBrand;
}

void Car::setCarModel()
{
    cout << "Car's Model: ";
    cin.get();
    getline(cin,carModel);
}

string Car::getCarModel()
{
    return carModel;
}

void Car::setAll()
{
    setCarId();
    setCarBrand();
    setCarModel();
    setProdYear();
}

void Car::addReservation(Reservation res)
{
    reservation[rentNum] = res;
    rentNum++;
}

int Car::getRentNum()
{
   return rentNum;
}

ostream &operator <<(ostream &disp, Car car)
{
    disp << "\n-I.D: " << car.carId;
    disp << "\n-Car: " << car.carBrand << ", " << car.carModel;
    disp << "\n-Year of Production: " << car.prodYear;
    for(int i = 0; i < car.rentNum; i++)
    {
        disp << "\n-Reservation Number #" << i+1 << ":\n" << car.reservation[i];
    }
    return disp;
}

bool Car::operator <(Car car)
{
    return rentNum < car.getRentNum();
}

bool Car::operator ==(Car car)
{
    return rentNum == car.getRentNum();
}

bool Car::operator >(Car car)
{
    return rentNum >car.getRentNum();
}

bool Car::carAvailability(Date startDate, Date endDate)
{
    for(int i = 0; i < rentNum; i++)
    {
        if(startDate.intersect(startDate, endDate, reservation[i].getStart(), reservation[i].getEnd()))
            return false;
    }
    return true;
}

void Car::dispCar()
{
    cout << "\n-I.D: " << getCarId();
    cout << "\n-Car: " << getCarBrand() << ", " <<getCarModel();
    cout << "\n-Year of Production: " << getProdYear();
}

/*void Car::file()
{
    Car c1;
    fstream myFile;
    myFile.open("Car_1.txt",ios::in);
    if(myFile.is_open())
    {
        while(myFile >> c1.carId)
        {
            myFile >> c1.carBrand;
            myFile >> c1.carModel;
            myFile >> c1.prodYear;
        }
        myFile.close();
    }
}*/
