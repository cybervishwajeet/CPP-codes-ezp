//code by vishwa
#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "Animal is eating" << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking" << endl;
    }
};

int main() {
    Dog myDog;
    myDog.eat();  // Inherited from Animal class
    myDog.bark(); // Own method of Dog class
    return 0;
}
