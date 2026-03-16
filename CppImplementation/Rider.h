#ifndef RIDER_H
#define RIDER_H

#include <vector>
#include <string>
#include <iostream>
#include "Ride.h"

using namespace std;

class Rider {
private:
    int riderID;
    string name;
    vector<Ride*> requestedRides;

public:
    Rider(int id, string riderName);

    void requestRide(Ride* ride);
    void viewRides();
};

#endif