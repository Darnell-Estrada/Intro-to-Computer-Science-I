// DARNELL JAMES V. ESTRADA
// CS 1160 SEC 01
// HOMEWORK 4
// Differences From Mean
// This program allows a user to enter up to 12 numbers,
// it then displays each number and its difference from
// the average (mean) of the numbers. The user can enter 
// a sentinel value to indicate when he or she is finished
// entering less than 12 numbers.

#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main() {
	const int MAX = 12;
	double inputs[MAX] = {0.0},
		sum = 0.0,
		total = 0.0,
		avg = 0.0,
		diff = 0.0;
	int count = 0,
		num = 0,
		i = 0;
	string userInput = " ",
		sentinel = "done";
	cout << "Input each number and press enter after each number."
		<< "\nType (done) when you have finished entering less than twelve numbers."
		<< "\nEnter the numbers below.\n";
	for (count = 0, total = 0; count < MAX; count++, total++) {
		if (userInput == sentinel) {
			total--;
			count--;
			break;
		}
		cout << "Enter number " << count + 1 << ": ";
		cin >> userInput;
		num = atoi(userInput.c_str());
		inputs[count] = num;
		sum += num;
	}
	avg = sum / total;
	for (i = 0; i < 35; i++) {
		cout << "_";
	}
	cout << "\nSum: " << sum
		<< "\nTotal: " << total
		<< "\nAverage: " << avg << endl;
	for (i = 0; i < 35; i++) {
		cout << "_";
	}
	cout << "\nNumber" << setw(30) << "Difference From Average\n";
	for (i = 0; i < count; i++) {
		diff = avg - inputs[i];
		cout << setw(6) << inputs[i] << setw(29) << diff << endl;
	}
	for (i = 0; i < 35; i++)
		cout << "_";
	cout << endl;
	cin.ignore();
	cin.get();
	return 0;
}