#include "Driver.h"

Driver::Driver(int id, string driverName, double rate) {
    driverID = id;
    name = driverName;
    rating = rate;
}

void Driver::addRide(Ride* ride) {
    assignedRides.push_back(ride);
}

void Driver::getDriverInfo() {
    cout << "Driver ID: " << driverID << endl;
    cout << "Name: " << name << endl;
    cout << "Rating: " << rating << endl;
    cout << "Total Rides Completed: " << assignedRides.size() << endl;
}