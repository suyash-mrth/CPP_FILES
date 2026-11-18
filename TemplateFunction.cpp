#include<iostream>
using namespace std;

template <class T>
T sum(T a, T b) { 

    cout << "Addition = " << a + b << endl;
    cout << "Subtraction = " << a - b << endl;
    cout << "Multiplication = " << a * b << endl;
    cout << "Division = " << a / b << endl;
}

int main () {
	
	sum (45, 78);
}