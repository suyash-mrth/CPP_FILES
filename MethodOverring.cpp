#include <iostream>
using namespace std;

class Payment1 {
	public:
		
	virtual void show () { cout << "Processing payment by card.";	}
};

class Payment2 : Payment1 {
	public:
		
	void show () override { cout << "Card processing is cancelled and now payment processing using UPI."; } 
};

int main () {
	
	Payment2 pay;
	pay.show();
}