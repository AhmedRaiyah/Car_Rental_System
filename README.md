# Car_Rental_System

Project Overview:
-----------------------------------------------------------
This is a Rental Car Management System implemented in C++.
It allows users to manage rental cars, customers, reservations, and rental agreements.

Main Functions:

- Add Car: Add new rental cars with details like brand, model, and year.
- Add Customer: Add new customers with details like name, address, and contact.
- Rent Car: Rent a car for a specified period, checking availability.
- Display Car Details: Show detailed information about a specific car.
- Display Available Cars: Show cars available for rental within a given date range.
- Display Customer Rent History: Show rental history of a specific customer.
- Display Report: Generate reports on customer and car rental history.
- Display All Cars Owned: List all registered cars in the system.
- Display All Saved Customers: List all customers saved in the system.

Additional Features:
-----------------------------------------------------------------------
- Search Car/Customer: Search for a specific car or customer by ID.
- Set All: Set all details for a car or customer at once.
- Operator Overloading: Compare car and customer objects based on rental history.
- File Handling (in progress): Read car details from a file during initialization.

Classes:
--------------------------------------------------------
- Car: Manages car information and reservations.
- Customer: Manages customer information and rental history.
- Date: Handles date operations for reservations.
- Reservation: Represents a rental reservation with car, customer, dates, and invoice.
- Invoice: Generates invoices based on rental agreements and taxes.
- RentalAgreement: Manages rental agreement details like period, rate, and insurance.
- System: Orchestrates user interactions with other classes, providing functionality for managing the system.
