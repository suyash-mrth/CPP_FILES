#include <iostream>
using namespace std;

int main () {

      int n, flag = 1;

      cout << "Enter number :"; cin >> n;

      if (n <= 1) flag = 0;
      else { for (int i = 2; i < n; i++) {

                  if (n % i == 0) flag = 0; break;        
            }
      }

      if (flag == 1) cout << "Number is prime";
      else cout << "Number is not prime";
}