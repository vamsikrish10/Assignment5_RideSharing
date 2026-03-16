Object subclass: Ride [
    | rideID pickupLocation dropoffLocation distance |

    Ride class >> newRide: id pickup: pickup dropoff: drop distance: dist [
        ^self new
            setRideID: id;
            setPickup: pickup;
            setDropoff: drop;
            setDistance: dist;
            yourself.
    ]

    setRideID: id [
        rideID := id
    ]

    setPickup: pickup [
        pickupLocation := pickup
    ]

    setDropoff: drop [
        dropoffLocation := drop
    ]

    setDistance: dist [
        distance := dist
    ]

    fare [
        ^ distance * 1.5
    ]

    rideDetails [
        Transcript show: 'Ride ID: ', rideID printString; nl.
        Transcript show: 'Pickup: ', pickupLocation; nl.
        Transcript show: 'Dropoff: ', dropoffLocation; nl.
        Transcript show: 'Distance: ', distance printString; nl.
        Transcript show: 'Fare: $', self fare printString; nl.
    ]
]