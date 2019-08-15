// DARNELL JAMES V. ESTRADA
// CS 1160 SEC 01
// Star Test
// This program tests a number file
// to display stars to the screen.

#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main() {
	double num = 0.0;
	int star = 0,
		count = 0;
	ifstream inputFile;
	string filename = " ";
	cout << "Enter the name of the file: ";
	cin >> filename;
	inputFile.open(filename.c_str());
	if (inputFile.fail()) {
		cout << "Error opening file\n";
	}
	else {
		while (inputFile >> num) {
			cout << num << " |";
			for (star = 0; star < num; star++) {
				cout << '*';
			}
			cout << endl;
			count++;
		}
		inputFile.close();
	}
	cin.ignore();
	cin.get();
	return 0;
}