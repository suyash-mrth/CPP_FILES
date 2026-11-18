#include <iostream>
using namespace std;

template<class A>
class F {
      public:

      A factorial = 1;
      void fact (A n) {

            for (int i = 1; i <= n; i++) {

                  factorial = factorial * i;
            }

            cout << "Factorail = " << factorial;
      }
};

int main () {

      F <int> obj;
      obj.fact(5);
}