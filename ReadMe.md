# Ride Sharing System – C++ & Smalltalk Implementation

## Overview
This project implements a **Ride Sharing System** using **Object-Oriented Programming (OOP)** concepts in **two languages: C++ and Smalltalk**. The system models **Rides, Drivers, and Riders** with functionality for requesting rides, calculating fares, and managing ride history.  

The project demonstrates the three main OOP principles:

- **Encapsulation**: Private ride lists in `Driver` and `Rider` are accessed only via defined methods.  
- **Inheritance**: `StandardRide` and `PremiumRide` inherit from the base `Ride` class.  
- **Polymorphism**: A collection of `Ride` objects stores different ride types; calling `fare()` dynamically executes the correct method depending on the ride type.

## How to Run

### C++ 

cd CppImplementation

clang++ *.cpp -o ridesystem

./ridesystem

### Smalltalk 

cd SmalltalkImplementation

gst Ride.st StandardRide.st PremiumRide.st Driver.st Rider.st main.st