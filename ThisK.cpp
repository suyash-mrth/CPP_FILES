#include <iostream>
using namespace std;

int main () {

	int n, sum = 0, digit, temp;

	cout << "Enter the number : "; cin >> n;

	temp = n;

	while (n > 0) {

		digit = n % 10;
		sum = sum + (digit * digit * digit);
		n = n / 10;
	}

	if (temp == sum) cout << "Number is armstrong";
	else cout << "Number is not armstrong";
}
