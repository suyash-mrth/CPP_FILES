#include <iostream>
using namespace std;

int main ()
{
	
	int n1, n2;
	
	cout << "Enter number 1 : ";
	cin >> n1;
	cout << "Enter number 2 : ";
	cin >> n2;
	
	cout << "Sum = " << add(n1, n2);
	
	return 0;
}

	void add (int a, int b)
	{
		return a + b;
	}