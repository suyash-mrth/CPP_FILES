#include <iostream>
using namespace std;

int main () {

  int n, digit, sum = 0, temp;

  cout << "Enter number : "; cin >> n;
  temp = n;

  while (n > 0) {

    digit = n % 10;
    sum = (sum * 10) + digit;
    n = n / 10;
  }

  if (temp == sum) cout << "Number is palindrome.";
  else cout << "Number is not palindrome.";
}
