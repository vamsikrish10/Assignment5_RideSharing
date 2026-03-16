#include "Ride.h"

Ride::Ride(int id, string pickup, string dropoff, double dist) {
    rideID = id;
    pickupLocation = pickup;
    dropoffLocation = dropoff;
    distance = dist;
}

double Ride::fare() {
    return distance * 1.5;
}

void Ride::rideDetails() {
    cout << "Ride ID: " << rideID << endl;
    cout << "Pickup: " << pickupLocation << endl;
    cout << "Dropoff: " << dropoffLocation << endl;
    cout << "Distance: " << distance << " miles" << endl;
    cout << "Fare: $" << fare() << endl;
}