#include <iostream>
using namespace std;

class A {
	public:
		
	void add (int a, int b) {
		
		cout << "Addtion of two numbers : " << a + b;
	}
	
	void add (int a, int b, int c) {
		
		cout << "\nAddition of three numbers : " << a + b + c;
	}
};

int main () {
	
	A a;
	
	a.add(22, 44);
	a.add(22, 44, 66);
}