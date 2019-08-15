// DARNELL JAMES V. ESTRADA
// CS 1160 SEC 01
// Input Stream
// This program tests input streams to find the user's growth rate.

#include <iomanip>
#include <iostream>
using namespace std;

int main() {
	double height,
		growthRate = 0.0;
	int age = 0;
	cout << "Enter your age: ";
	cin >> age;
	if (cin.fail()) {
		cout << "Sorry, an integer should be entered.\n";
		cin.ignore();
		cin.get();
		return 1;
	}
	else {
		cout << "Your age is " << age << ".\n";
		cin.ignore(100, 'n');
		cout << "Enter your height in meters: ";
		cin >> height;
		cout << "Your height is"
			<< fixed << setprecision(1)
			<< setw(5)
			<< height << " meters.\n";
		growthRate = height / age;
		cout << "Your growth rate is "
			<< setprecision(3)
			<< growthRate << ".\n";
		cin.ignore();
		cin.get();
		return 0;
	}
}