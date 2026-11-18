#include <iostream>
using namespace std;

class Fabonacci { public:
	
	Fabonacci(int term1, int term2, int no_term) {
		
		int temp = 0;
		
		cout << term1 << endl << term2 << endl;
		
		for (int i = 0; i <= no_term; i++) {
			
			temp = term1 + term2;
			cout << temp << endl;
			
			term1 = term2;
			term2 = temp;
		}
	}
};

int main () {
	
	Fabonacci obj(0, 1, 20);
}