// DARNELL JAMES V. ESTRADA
// CS 1160 SEC 01
// HOMEWORK 3
// Temperature Graph
// This program inputs a series of 24 hourly temperatures from a file named
// "temp.txt" and outputs a bar chart (using stars) of the temperatures for the day.

#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int totalStars(int);
void printStars(int);

int main() {
	int temp = 0;
	ifstream userFile;
	string filename = " ";
	cout << "This program inputs a series of 24 hourly temperatures"
		<< "\nfrom your file and outputs a bar chart (using stars) of"
		<< "\nthe temperatures for the day."
		<< "\n(The file should be placed in the same folder as the .cpp file)\n"
		<< "Enter the file name: ";
	cin >> filename;
	userFile.open(filename);
	if (userFile.fail()) {
		cout << "Error opening file\n";
	}
	else {
		cout << "\nTemperatures For 24 Hours:\n\n"
			<< setw(7) << "-30" << setw(10) << "0"
			<< setw(10) << "30" << setw(10) << "60"
			<< setw(10) << "90" << setw(11) << "120\n";
		while (!userFile.eof()) {
			userFile >> temp;
			cout << setw(3) << temp;
			if (!temp) {
				cout << setw(15) << "|\n";
			}
			else if ((temp > 0) && (temp <= 120)) {
				cout << setw(14) << "|";
				printStars(totalStars(temp));
				cout << endl;
			}
			else if ((temp < 0) && (temp >= -30)) {
				cout << setw(14 - totalStars(temp));
				printStars(totalStars(temp));
				cout << "|\n";
			}
		}
		userFile.close();
		cout << "\nKey: One star is approximately equal to three degrees\n\n";
	}
	cin.ignore();
	cin.get();
	return 0;
}

int totalStars(int t) {
	int quotient = 0,
		modulo = 0,
		stars = 0,
		absolute = abs(t);
	quotient = absolute / 3;
	modulo = absolute % 3;
	if (modulo != 2) {
		stars = quotient;
	}
	else {
		stars = quotient + 1;
	}
	return stars;
}

void printStars(int s) {
	int i = 0;
	for (i = 0; i < s; i++) {
		cout << "*";
	}
}