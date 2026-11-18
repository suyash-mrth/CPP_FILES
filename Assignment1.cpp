#include <iostream>
#include <string>

using namespace std;

class Person {
	
	public:
		string name;
		
		void show () {
			
			cout << "\nHello " << name;
		}
		
		View () {
			
			cout << "\nThis is Default Constructor.";
		}
		
		View2 (string show) {
			
			cout << "\nHi "<< show << " This is Constructor Overloading.";
		}
		
		~Person () {
			cout << "\nThis is Destructor.";
		}
};

int main () {
	
	Person p1;
	p1.name = "Admin";
	p1.show();
	
	p1.View();
	p1.View2("Alex");
	
	return 0;
}