#include <iostream>
#include <vector>
#include "StandardRide.h"
#include "PremiumRide.h"
#include "Driver.h"
#include "Rider.h"

using namespace std;

int main() {

    vector<Ride*> rides;

    rides.push_back(new StandardRide(1,"Downtown","Airport",10));
    rides.push_back(new PremiumRide(2,"Mall","Hotel",8));

    cout << "Ride Details\n";

    for(Ride* ride : rides) {
        ride->rideDetails();
        cout << "----------------\n";
    }

    Driver driver1(101,"John",4.9);

    for(Ride* ride : rides) {
        driver1.addRide(ride);
    }

    driver1.getDriverInfo();

    Rider rider1(201,"Alice");

    for(Ride* ride : rides) {
        rider1.requestRide(ride);
    }

    rider1.viewRides();

    return 0;
}