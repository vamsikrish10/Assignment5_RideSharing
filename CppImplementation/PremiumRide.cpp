#include "PremiumRide.h"

PremiumRide::PremiumRide(int id, string pickup, string dropoff, double dist)
: Ride(id, pickup, dropoff, dist) {}

double PremiumRide::fare() {
    return distance * 2.5;
}