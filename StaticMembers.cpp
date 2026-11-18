#include <iostream>
using namespace std;

class M { public:
	
	static int result;
	
	static void add(int a, int b) {
		
		result = a + b;
		cout << "Result : " << result << endl;
	}
};

int M::result;

int main () {
	
	M::add(44, 66);
}