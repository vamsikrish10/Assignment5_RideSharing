#ifndef DRIVER_H
#define DRIVER_H

#include <vector>
#include <string>
#include <iostream>
#include "Ride.h"

using namespace std;

class Driver {
private:
    int driverID;
    string name;
    double rating;
    vector<Ride*> assignedRides;

public:
    Driver(int id, string driverName, double rate);

    void addRide(Ride* ride);
    void getDriverInfo();
};

#endif