#include <iostream>
#include <utility>
using namespace std;

class Rev {
	public:
		
		void swap (int a, int b, int c) {
			
			std::swap(a, c);
			cout << "" << a << "" << c;
		}
		
		void swap (int a, int b, int c, int d) {
			
			std::swap(a, d);
			cout << "\n" << a << "" << d;
		}
};

int main () {
	
	Rev obj;
	
	obj.swap(2, 4, 6);
	obj.swap(3, 6, 9, 12);
	
	return 0;
}