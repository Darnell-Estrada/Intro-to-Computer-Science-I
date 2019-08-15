// DARNELL JAMES V. ESTRADA
// CS 1160 SEC 01
// HOMEWORK 2
// Currency
// This program converts U.S. dollar amounts
// to Japanese Yen and Euros as of 2015.

#include <iomanip>
#include <iostream>
using namespace std;

int main() {
	double USD,
		JPY = 118.4550,
		EUR = 0.8791,
		convert1 = 0.0,
		convert2 = 0.0;
	cout << "Type in a U.S. dollar amount.\n$";
	cin >> USD;
	convert1 = USD * JPY;
	convert2 = USD * EUR;
	cout << "You entered $" << setprecision(2) << fixed << USD
		<< "\n$" << USD << " = " << setprecision(2) << fixed << convert1 << " Yen"
		<< "\n$" << USD << " = " << setprecision(2) << fixed << convert2 << " Euros\n";
	cin.ignore();
	cin.get();
	return 0;
}