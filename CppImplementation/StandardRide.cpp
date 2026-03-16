#include "StandardRide.h"

StandardRide::StandardRide(int id, string pickup, string dropoff, double dist)
: Ride(id, pickup, dropoff, dist) {}

double StandardRide::fare() {
    return distance * 1.2;
}