#include <iostream>
using namespace std;

class Shape {
	public:
		
	virtual void show() = 0;
};

class Circle : public Shape {
	public:
		
	void show() override {
		
		cout << "Drawing circle";
	}
};

int main () {
	
	Shape* s = new Circle();
	s->show();
}