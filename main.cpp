#include <bits/stdc++.h>
#include "System.h"
using namespace std;

int main()
{
    System s;
    char ch;
    do
    {
        cout << "\n Main Menu"
             << "\n===========\n"
             << "(1) Add Car.\n"
             << "(2) Add Customer.\n"
             << "(3) Rent Car.\n"
             << "(4) Display Car Details.\n"
             << "(5) Display Available Cars.\n"
             << "(6) Display Customer Rent History.\n"
             << "(7) Display Report.\n"
             << "(8) Display All Cars Owned.\n"
             << "(9) Display All Saved Customers.\n"
             << "(0) Exit Program.\n"
             << "Choice: ";
        cin >> ch;
        system("cls");
        if(ch == '0')
        {
            break;
        }
        switch(ch)
        {
        case '1':
            {
                s.addCar();
                break;
            }
        case '2':
            {
                s.addCustomer();
                break;
            }
        case '3':
            {
                s.rentCar();
                break;
            }
        case '4':
            {
                s.dispCar();
                break;
            }
        case '5':
            {
                s.availableCars();
                break;
            }
        case '6':
            {
                s.rentHistory();
                break;
            }
        case '7':
            {
                s.reports();
                break;
            }
        case '8':
            {
                s.dispAllCars();
                break;
            }
        case '9':
            {
                s.dispAllCustomers();
                break;
            }
        default:
            {
                cout << "Invalid Input.\n";
            }
        }
        cout << "\n\nPress 'h' to Return to Main Menu.\n"
             << "Press 'e' to Exit Program.\n"
             << "Choice: ";
        cin >> ch;
        system("cls");
    }
    while(ch == 'h');
    cout << "\n\n\t|--------------------|"
         << "\n\t| Program Terminated |"
         << "\n\t|--------------------|\n\n";
    return 0;
}
