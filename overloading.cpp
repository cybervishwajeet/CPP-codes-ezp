//code by vishwa
#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    
    Complex(float r = 0.0, float i = 0.0) : real(r), imag(i) {}

    // Overload + operator to add two complex numbers
    Complex operator + (const Complex &obj) {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }

    // Overload - operator to subtract two complex numbers
    Complex operator - (const Complex &obj) {
        Complex temp;
        temp.real = real - obj.real;
        temp.imag = imag - obj.imag;
        return temp;
    }

    // Function to display complex number
    void display() {
        if (imag >= 0)
            cout << real << " + " << imag << "i" << endl;
        else
            cout << real << " - " << -imag << "i" << endl;
    }
};

int main() {
    Complex c1(3.5, 2.5), c2(1.6, 4.8);

    cout << "First complex number: ";
    c1.display();

    cout << "Second complex number: ";
    c2.display();

    // Using overloaded + operator
    Complex c3 = c1 + c2;
    cout << "\nAfter adding c1 and c2: ";
    c3.display();

    // Using overloaded - operator
    Complex c4 = c1 - c2;
    cout << "After subtracting c2 from c1: ";
    c4.display();

    return 0;
}
