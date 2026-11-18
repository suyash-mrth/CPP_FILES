#include <iostream>
using namespace std;

class A {
    public:
    
    class B {
        public:
        
        void show() { cout << "22"; }
    };
};

int main () {
    A :: B obj;
    obj.show();
}