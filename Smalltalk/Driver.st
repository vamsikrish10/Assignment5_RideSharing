Object subclass: Driver [
    | driverID name rating assignedRides |

    Driver class >> newDriver: id name: n rating: r [
        ^self new
            setID: id;
            setName: n;
            setRating: r;
            initializeRides;
            yourself.
    ]

    setID: id [
        driverID := id
    ]

    setName: n [
        name := n
    ]

    setRating: r [
        rating := r
    ]

    initializeRides [
        assignedRides := OrderedCollection new
    ]

    addRide: ride [
        assignedRides add: ride
    ]

    getDriverInfo [
        Transcript show: 'Driver ID: ', driverID printString; nl.
        Transcript show: 'Name: ', name; nl.
        Transcript show: 'Rating: ', rating printString; nl.
        Transcript show: 'Total Rides: ', assignedRides size printString; nl.
    ]
]