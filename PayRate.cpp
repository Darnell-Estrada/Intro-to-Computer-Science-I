// DARNELL JAMES V. ESTRADA
// CS 1160 SEC 01
// Pay Rate
// This program calculates pay.

#include <iomanip>
#include <iostream>
using namespace std;

int main() {
	const double payRate = 18.50,
		hours = 24.0,
		pay = payRate * hours;
	cout << "The pay is $" << setprecision(2)
		<< fixed << pay << ".\n";
	cin.ignore();
	cin.get();
	return 0;
}