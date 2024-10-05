#include <iostream>
using namespace std;

// Define a class for students
class Student {
private:
    string name;
    int rollNo;
    float marks;

public:
    // Member function to set student details
    void setDetails(string n, int r, float m) {
        name = n;
        rollNo = r;
        marks = m;
    }

    // Member function to display student details
    void displayDetails() {
        cout << "Name: " << name << ", Roll No: " << rollNo << ", Marks: " << marks << endl;
    }
};

int main() {
    // Create an array of 3 Student objects
    Student students[3];

    // Set details for each student
    students[0].setDetails("John", 1, 85.5);
    students[1].setDetails("Alice", 2, 90.0);
    students[2].setDetails("Bob", 3, 78.9);

    // Display details of each student
    for (int i = 0; i < 3; i++) {
        cout << "Student " << i + 1 << ": ";
        students[i].displayDetails();
    }

    return 0;
}

