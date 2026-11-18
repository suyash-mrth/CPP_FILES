#include <iostream>
using namespace std;

int main () {
	
	int arr[] = {88, 55, 44, 22, 77};
	
	for (int i=0; i<=4; i++) {
		
		cout << "\n" << arr[i];
	}
	
	string str = "Admin";
	cout << "\n" << str;
	
	int num = 100;
	
	int *ptr = &num;
	
	cout << "\n" << ptr;
	cout << "\n" << *ptr;
	
	const int n = 500;
	cout << "\n" << n;
	
	int &ref = num;
	cout << "\n" << ref;
	
	return 0;
}