// DARNELL JAMES V. ESTRADA
// CS 1160 SEC 01 GROUP 3
// Factorial
// This program computes the factorial of 15 two different ways.

#include <cmath>
#include <iomanip>
#include <iostream>
#include <stdint.h>

using namespace std;

volatile int char_min = CHAR_MIN;

long double factorial(long double);

int main(void) {
	long double n = 1.0,
		i = 0.0;
	cout << "The size of a boolean type is " << sizeof(bool) << " byte."
		<< "\nThe number of bits in a character is " << CHAR_BIT << " bits."
		<< "\nThe size of a character type is " << sizeof(char) << " byte.";
	for (i = 1.0; i <= 15.0; i++) {
		n = n * i;
	}
	cout << "\nThe factorial of 15 is "
		<< setprecision(7) << scientific << n << ".";
	n = 15.0;
	cout << "\nThe factorial of 15 is "
		<< setprecision(7) << scientific << factorial(n) << ".\n";
	cin.ignore();
	cin.get();
	return 0;
}

long double factorial(long double n) {
	if (n == 0.0) {
		return 1.0;
	}
	else {
		return n * factorial(n - 1.0);
	}
}