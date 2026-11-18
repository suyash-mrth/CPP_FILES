#include <iostream>
using namespace std;

template <class A>
class P {
      public:

      void show (A n) {

            A temp = n, sum = 0, digit;

            while(n > 0) {

                  digit = n % 10;
                  sum = sum * 10 + digit;
                  n = n / 10;
            }

            if (sum == temp) { cout << "Palindrome"; }
            else { cout << "Not palindrome"; }
      }
};

int main () {

      P<int> obj;
      obj.show(123454321);
}