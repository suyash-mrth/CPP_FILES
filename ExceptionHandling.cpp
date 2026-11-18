#include <iostream>
using namespace std;

int main () {
	
	int a = 10, b = 0;
	
	try { 
	
		if (b == 0) { throw 1; }
		
		cout << "Result :" << a / b;
	}
	
	catch (int x) { cout << "Division with zero is not possible !";	}
}