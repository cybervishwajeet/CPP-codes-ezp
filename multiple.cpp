//code by vishwa
#include <iostream>
using namespace std;

// Base class 1
class Engine {
public:
    void start() {
        cout << "Engine started" << endl;
    }
};

// Base class 2
class Wheels {
public:
    void rotate() {
        cout << "Wheels are rotating" << endl;
    }
};

// Derived class
class Car : public Engine, public Wheels {
public:
    void drive() {
        cout << "Car is driving" << endl;
    }
};

int main() {
    Car myCar;
    myCar.start();   // From Engine class
    myCar.rotate();  // From Wheels class
    myCar.drive();   // Own method of Car class
    return 0;
}
