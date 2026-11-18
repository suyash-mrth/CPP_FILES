#include <iostream>
using namespace std;

class Printer {
    public:
    
    void print (int n) {
        cout << n;
    }
};

class Box : Printer {
    public:
    Printer p;
    
    void show () {
        p.print(4);
    }
};

int main () {
    Box b;
    b.show();
}