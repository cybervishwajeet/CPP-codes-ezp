//code by vishwa
#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void sleep() {
        cout << "Animal is sleeping" << endl;
    }
};

// Derived class 1
class Cat : public Animal {
public:
    void meow() {
        cout << "Cat is meowing" << endl;
    }
};

// Derived class 2
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking" << endl;
    }
};

int main() {
    Cat myCat;
    Dog myDog;

    myCat.sleep(); // From Animal class
    myCat.meow();  // Own method of Cat class

    myDog.sleep(); // From Animal class
    myDog.bark();  // Own method of Dog class

    return 0;
}
