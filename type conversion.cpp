#include <iostream>
using namespace std;

// Class for type conversion
class Distance {
private:
    int meters;

public:
    // Constructor to convert basic type (int) to class type
    Distance(int m) {
        meters = m;
        cout << "Basic to Class conversion: Meters = " << meters << endl;
    }

    // Overloading int() to convert class type to basic type (int)
    operator int() {
        cout << "Class to Basic conversion: Meters = " << meters << endl;
        return meters;
    }

    // Function to display the distance in meters
    void display() {
        cout << "Distance in meters: " << meters << " m" << endl;
    }
};

int main() 
{
    // Basic to Class type conversion
    int meters = 100;
    Distance d = meters;  // Implicit conversion from int to Distance object
    d.display();

    // Class to Basic type conversion
    int basicMeters = d;  // Implicit conversion from Distance object to int
    cout << "Basic type value: " << basicMeters << " meters" << endl;

    return 0;
}
