#include <iostream>
using namespace std;

class Base {
public:
    // Virtual function to be overridden
    virtual void show() {
        cout << "Base class show function called." << endl;
    }

    void display() {
        cout << "Base class display function called." << endl;
    }
};

class Derived : public Base {
public:
    // Overriding the base class function
    void show() override {
        cout << "Derived class show function called." << endl;
    }

    // Not overriding display() from the base class
};

int main() {
    Base *basePtr;
    Derived derivedObj;

    // Base class pointer pointing to derived class object
    basePtr = &derivedObj;

    // Function overriding
    basePtr->show();  // Calls derived class's show() due to function overriding

    // Non-virtual function call
    basePtr->display();  // Calls base class's display() as it's not overridden

    return 0;
}
