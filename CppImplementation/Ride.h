#ifndef RIDE_H
#define RIDE_H

#include <iostream>
#include <string>

using namespace std;

class Ride {
protected:
    int rideID;
    string pickupLocation;
    string dropoffLocation;
    double distance;

public:
    Ride(int id, string pickup, string dropoff, double dist);

    virtual double fare();        // Virtual function for polymorphism
    virtual void rideDetails();   // Display ride details

    virtual ~Ride() {}
};

#endif