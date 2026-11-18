#include <iostream>
using namespace std;

int main () {
	
	int arr[] = {2, 4, 6, 8};
	
	for (int j = 0; j <= 3; j++) {
		
		cout << "\n" << arr[j];
	}
	
	swap(arr[0], arr[3]);
	
	for (int j = 0; j <= 3; j++) {
		
		cout << "\n" << arr[j];
	}
	
}