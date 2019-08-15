// DARNELL JAMES V. ESTRADA
// CS 1160 SEC 01
// HOMEWORK 1 
// Miles Per Gallon

#include <iomanip>
#include <iostream>
using namespace std;

int main() {
	const double gallon = 15,
		miles = 425,
		milesPerGallon = miles / gallon;
	cout << "Your car holds " << gallon << " gallons of gas and can travel "
		<< miles << " miles on a tankful.\n"
		<< "Your car gets " << setprecision(2) << milesPerGallon << " miles per gallon.\n";
	cin.ignore();
	cin.get();
	return 0;
}