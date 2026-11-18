#include <iostream>
using namespace std;

class A { public:

  int rollN;

  void setData (int rollN) {
    this -> rollN = rollN;
  }

  void getData () { cout << rollN; }
};

int main () {

  A obj;
  
  obj.setData(22);
  obj.getData();
}
