#include <iostream>
using namespace std;

template <class T>
class Test {
	public:
		
	void add (T a, T b) {
		
		cout << "Addition = " << a + b << endl;
	    cout << "Subtraction = " << a - b << endl;
	    cout << "Multiplication = " << a * b << endl;
	    cout << "Division = " << a / b << endl;
	}
};

void main () {
	
	Test<int> obj;
	obj.add(65, 78);
}