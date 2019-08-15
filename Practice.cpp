// DARNELL JAMES V. ESTRADA
// CS 1160 SEC 01
// This program tells the user my name and age.

#include <iostream>
#include <string>
using namespace std;

int main() {
	const unsigned short age = 19;
	const string name = "Darnell";
	cout << "Hello, my name is " << name << "."
		<< "\nI am " << age << " years old.\n";
	cin.ignore();
	cin.get();
	return 0;
}