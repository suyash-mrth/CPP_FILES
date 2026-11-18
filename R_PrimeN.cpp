#include <iostream>
using namespace std;

int main () { int begin, end, flag, i, j, count = 0;

      cout << "Enter begin & end :"; cin >> begin >> end;
      
      for (i = begin; i <= end; i++) { flag = 1;

            for (j = 2; j < i; j++) {

                  if (i % j == 0) { flag = 0; break; }
            }

            if (flag == 1) { cout << i << endl; count++; }
      }

      cout << "Total numbers of prime numbers :" << count;
}