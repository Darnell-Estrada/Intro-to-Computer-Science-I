// DARNELL JAMES V. ESTRADA
// CS 1160 SEC 01
// Biggest Number
// This program finds the biggest number from a file.

#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main () {
	int numStars = 0,
		row = 0,
		num = 0,
		biggest = -10000,
		i = 0;
	ifstream userFile;
	string directory = " ",
		filename = " ",
		path = " ";
	cout << "Enter the number of stars: ";
	cin >> numStars;
	for (i = 0; i < numStars; i++) {
		cout << '*';
	}
	for (row  = 0; row < 10; row++) {
		for (i = 0; i < row; i++) {
			cout << '*';
		}
		cout << endl;
	}
	directory = "E:\\COLLEGE\\Introduction to Computer Science I (CS 1160)\\HOMEWORK 3\\";
	cout << "Enter the filename: ";
	cin >> filename;
	path = directory + filename;
	userFile.open(path.c_str());
	if (userFile.fail()) {
		cout << "Error opening file\n";
		cin.ignore();
		cin.get();
		return 1;
	}
	while (userFile >> num) {
		cout << num << endl;
		if (num > biggest) {
			biggest = num;
		}
	}
	cout << "Biggest: " << biggest << endl;
	userFile.close();
	cin.ignore();
	cin.get();
	return 0;
}