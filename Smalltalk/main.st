| rides driver rider |

"Create a collection to hold different ride types"
rides := OrderedCollection new.

rides add: (StandardRide newRide: 1 pickup: 'Downtown' dropoff: 'Airport' distance: 10).
rides add: (PremiumRide newRide: 2 pickup: 'Mall' dropoff: 'Hotel' distance: 8).
rides add: (StandardRide newRide: 3 pickup: 'Station' dropoff: 'Mall' distance: 5).

"Demonstrate polymorphism: call rideDetails and fare on base type Ride"
Transcript show: 'All Ride Details:'; nl.

rides do: [:ride |
    ride rideDetails.   "Calls the correct subclass fare() automatically"
    Transcript show: '--------------------'; nl.
].

driver := Driver newDriver: 101 name: 'Vamsi' rating: 4.9.

rides do: [:ride |
    driver addRide: ride
].

driver getDriverInfo.

rider := Rider newRider: 201 name: 'Krishna'.

rides do: [:ride |
    rider requestRide: ride
].

rider viewRides.