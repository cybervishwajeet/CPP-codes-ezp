//code by vishwa
#include <iostream>
using namespace std;

// Base class
class LivingBeing {
public:
    void breathe() {
        cout << "Living being is breathing" << endl;
    }
};

// Intermediate class
class Animal : public LivingBeing {
public:
    void move() {
        cout << "Animal is moving" << endl;
    }
};

// Derived class
class Bird : public Animal {
public:
    void fly() {
        cout << "Bird is flying" << endl;
    }
};

int main() {
    Bird myBird;
    myBird.breathe(); // From LivingBeing class
    myBird.move();    // From Animal class
    myBird.fly();     // Own method of Bird class
    return 0;
}
