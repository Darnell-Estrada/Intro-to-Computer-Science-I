// DARNELL JAMES V. ESTRADA
// CS 1160 SEC 01
// GradeCounter
// This program counts how many grades
// apply to a specific interval.

#include <iostream>
using namespace std;

int main () {
	const int MAX_SCORES = 100,
		MAX_STARS = 10,
		MAX_STUDENTS = 10;
	int scores[MAX_SCORES] = {0},
		stars[MAX_STARS] = {0},
		grade = 0,
		interval = 9,
		count = 0;
	while (count < MAX_STUDENTS) {
		cout << "Enter grade: ";
		cin >> grade;
		grade = grade / 10;
		if (grade == 10) {
			grade = 9;
		}
		switch (grade) {
			case 9: {
				cout << "90 - 100";
				break;
			}
			case 8: {
				cout << "80 -  89";
				break;
			}
			case 7: {
				cout << "70 -  79";
				break;
			}
			case 6: {
				cout << "60 -  69";
				break;
			}
			case 5: {
				cout << "50 -  59";
				break;
			}
			case 4: {
				cout << "40 -  49";
				break;
			}
			case 3: {
				cout << "30 -  39";
				break;
			}
			case 2: {
				cout << "20 -  29";
				break;
			}
			case 1: {
				cout << "10 -  19";
				break;
			}
			case 0: {
				cout << " 0 -   9";
				break;
			}
			default: {
				break;
			}
		}
		cout << "| ";
		stars[grade]++;
		for (count = 0; count < stars[grade]; count++) {
			cout << "*";
		}
		cout << endl;
	}
	cin.ignore();
	cin.get();
	return 0;
}