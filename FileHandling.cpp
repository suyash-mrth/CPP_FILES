#include <iostream>
#include <fstream>
using namespace std;

int main () {
	
	fstream file;
	string line, line2;
	
	file.open("Demo.txt");
	
	file >> line;
	cout << line;
	file.close();
	
	file.open("Demo.txt");
	file << "Now";
	file >> line2;

	file >> line2;
	cout << line2;
}