#include "Rider.h"

Rider::Rider(int id, string riderName) {
    riderID = id;
    name = riderName;
}

void Rider::requestRide(Ride* ride) {
    requestedRides.push_back(ride);
}

void Rider::viewRides() {
    cout << "Rider ID: " << riderID << endl;
    cout << "Name: " << name << endl;
    cout << "Requested Rides: " << requestedRides.size() << endl;
}