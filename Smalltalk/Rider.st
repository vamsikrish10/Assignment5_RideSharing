Object subclass: Rider [
    | riderID name requestedRides |

    Rider class >> newRider: id name: n [
        ^self new
            setID: id;
            setName: n;
            initializeRides;
            yourself.
    ]

    setID: id [
        riderID := id
    ]

    setName: n [
        name := n
    ]

    initializeRides [
        requestedRides := OrderedCollection new
    ]

    requestRide: ride [
        requestedRides add: ride
    ]

    viewRides [
        Transcript show: 'Rider ID: ', riderID printString; nl.
        Transcript show: 'Name: ', name; nl.
        Transcript show: 'Requested Rides: ', requestedRides size printString; nl.
    ]
]