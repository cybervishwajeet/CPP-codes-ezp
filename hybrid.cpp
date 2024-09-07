//code by vishwa
#include <iostream>
using namespace std;

// Base class
class Vehicle {
public:
    void start() {
        cout << "Vehicle started" << endl;
    }
};

// Intermediate class (inherits from Vehicle)
class Car : public Vehicle {
public:
    void drive() {
        cout << "Car is driving" << endl;
    }
};

// Intermediate class (inherits from Vehicle)
class Boat : public Vehicle {
public:
    void sail() {
        cout << "Boat is sailing" << endl;
    }
};

// Derived class (inherits from Car and Boat)
class AmphibiousVehicle : public Car, public Boat {
public:
    void moveOnLandAndWater() {
        cout << "Amphibious vehicle can move on land and water" << endl;
    }
};

int main() {
    AmphibiousVehicle av;
    av.Car::start();     // Ambiguity resolved by specifying the base class
    av.drive();          // From Car class
    av.sail();           // From Boat class
    av.moveOnLandAndWater(); // Own method of AmphibiousVehicle class
    return 0;
}
