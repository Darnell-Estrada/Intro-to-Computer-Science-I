// DARNELL JAMES V. ESTRADA
// CS 1160 SEC 01
// HOMEWORK 2
// Pizza
// This program helps Joe's Pizza Joint calculate the number 
// of slices a pizza of any size can be divided into.

#include <iomanip>
#include <iostream>
using namespace std;

int main() {
	const double PI = 3.14159,
		SLICE_AREA = 14.125;
	double pizzaDiam = 0.0,
		pizzaRad = 0.0,
		pizzaArea = 0.0,
		numSlices = 0.0;
	cout << "What is the pizza diameter in inches? ";
	cin >> pizzaDiam;
	pizzaRad = pizzaDiam / 2;
	pizzaArea = PI * pizzaRad * pizzaRad,
	numSlices = pizzaArea / SLICE_AREA;
	cout << "The number of pizza slices is "
		<< setprecision(1) << numSlices << ".\n";
	cin.ignore();
	cin.get();
	return 0;
}