//code by vishwa
#include <iostream>
using namespace std;

class Calculator {
private:
    // Function to calculate square of a number
    int square(int x) {
        return x * x;
    }

    // Function to calculate cube of a number
    int cube(int x) {
        return x * x * x;
    }

public:
    // Function that nests square() and cube() functions
    void displayResults(int num) {
        cout << "Number: " << num << endl;
        cout << "Square: " << square(num) << endl;  // Calling the square() function
        cout << "Cube: " << cube(num) << endl;      // Calling the cube() function
    }
};

int main() {
    int num;
    Calculator calc;

    cout << "Enter a number: ";
    cin >> num;

    // Call the displayResults() function which nests square() and cube()
    calc.displayResults(num);

    return 0;
}
