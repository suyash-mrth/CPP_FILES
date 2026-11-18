#include <iostream>
#include <utility>
using namespace std;

class A {
	public:
		
	int n1 = 2, n2 = 4;
		
	void operator ++() { ++n1; }	
	void operator ++(int) { n2++; }
	
	void show () { cout << "\nNumber 1 : " << n1 << "\nNumber 2 : " << n2; }

};

int main () {
	
	A obj;
	
	++obj; 
	obj++; obj.show();
	
	swap(obj.n1, obj.n2); 
	cout << "\nNumber 1 after swap : " << obj.n1 << "\nNumber 2 after swap : " << obj.n2;
}