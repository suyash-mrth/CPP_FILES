#include <iostream>
#include <string>

using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    // 1. Default Constructor (No arguments)
    Rectangle() {
        length = 0.0;
        width = 0.0;
        cout << "[Default Constructor] A default rectangle created with dimensions 0x0." << endl;
    }

    // 2. Parameterized Constructor (Constructor Overloading - 2 arguments)
    Rectangle(double l, double w) {
        length = l;
        width = w;
        cout << "[Parameterized Constructor] A rectangle created with length " 
             << length << " and width " << width << "." << endl;
    }

    // 3. Parameterized Constructor (Constructor Overloading - 1 argument for square)
    Rectangle(double side) {
        length = side;
        width = side;
        cout << "[Overloaded Constructor] A square created with side " << side << "." << endl;
    }

    // Member function to calculate area
    double calculateArea() {
        return length * width;
    }

    // 4. Destructor
    ~Rectangle() {
        cout << "[Destructor] Rectangle with area " << calculateArea() 
             << " is being destroyed." << endl;
    }
};

int main() {
    cout << "--- Entering main block ---" << endl;

    // Using default constructor
    Rectangle rect1;
    cout << "Area of rect1: " << rect1.calculateArea() << "\n\n";

    // Using parameterized constructor (2 arguments)
    Rectangle rect2(10.5, 5.0);
    cout << "Area of rect2: " << rect2.calculateArea() << "\n\n";

    // Using overloaded constructor (1 argument)
    Rectangle rect3(4.0);
    cout << "Area of rect3: " << rect3.calculateArea() << "\n\n";

    cout << "--- Exiting main block ---" << endl;
    return 0;
}