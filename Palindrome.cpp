#include <iostream>
using namespace std;

int main () {

      int sum = 0, temp, n, rev;

      cout << "Enter number :";
      cin >> n;

      rev = n;

      while (true) {

            temp = n % 10;
            sum = sum * 10 + temp;
            n = n / 10;
      }

      if (rev == sum) { cout << "Number is palindrome"; }
      else { cout << "Number is not palindrome"; }
}