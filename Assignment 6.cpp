#include <iostream>
using namespace std;

class A {
	public:
		
		int x = 10;
	
	friend void show();
	friend class B;
};

void show(A obj) {
	
	cout << "X from friend function = " << obj.x;
}

class B {
	public:
		
		void display(A obj) {
			
			cout << "\nX from friend class = " << obj.x;
		}
};

int main () {
	
	A obj;
	show(obj);
	
	B obj2;
	obj2.display(obj);
}