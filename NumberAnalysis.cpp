// DARNELL JAMES V. ESTRADA
// CS 1160 SEC 01
// HOMEWORK 3
// Number Analysis
// This program asks the user for a file name.
// The program then reads the file contents using a loop.
// Using the data read from the file,
// the program displays:
// -lowest number
// -highest number
// -sum of numbers
// -average of numbers

#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main() {
	double num = 0.0,
		total = 0.0,
		low = 0.0,
		high = 0.0,
		sum = 0.0,
		avg = 0.0;
	ifstream userFile;
	string filename = " ";
	cout << "Give me a numbers file."
		<< "\n(The file should be placed in the same folder as the .cpp file)"
		<< "\nEnter the file: ";
	cin >> filename;
	userFile.open(filename);
	if (userFile.fail()) {
		cout << "Error opening file\n";
	}
	else {
		if (!userFile.eof()) {
			userFile >> num;
			cout << num << endl;
			low = high = sum = num;
			total = 1;
		}
		while (!userFile.eof()) {
			userFile >> num;
			cout << num << endl;
			if (num < low) {
				low = num;
			}
			if (num > high) {
				high = num;
			}
			total += 1;
			sum += num;
		}
		avg = sum / total;
		cout << "Lowest: " << low
			<< "\nHighest: " << high
			<< "\nSum: " << sum
			<< "\nAverage: " << avg << endl;
		userFile.close();
	}
	cin.ignore();
	cin.get();
	return 0;
}