// DARNELL JAMES V. ESTRADA
// CS 1160 SEC 01
// HOMEWORK 2 
// Personal Best
// This program asks for the pole vaulter's name, the dates, and the vault heights (meters) 
// of the athlete's three best vaults. It then reports, in order of height (best first),
// the date each vault was made and its height. The input will only accept values between 
// 2.0 and 5.0 for the heights. The user's input does not need to be in order as he or she
// types in each vault height.

#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

struct Best {
	double height = 0;
	string date = " ";
};

int main() {
	double tempHeight = 0.0;
	int i = 0,
		j = 0;
	Best run[3];
	string firstName = " ",
		lastName = " ",
		tempDate = " ";
	cout << "What are the pole vaulter's first and last names?"
		<< "\n(Please put a space between the first and last names)\nName: ";
	cin >> firstName >> lastName;
	cout << "\nInsert the date and vault height, in meters,"
		<< "\nof the athlete's three best vaults."
		<< "\n(Please put a space between the date and the vault height)\n";
	for (i = 0; i < 3; i++) {
		cout << "Vault " << i + 1 << ": ";
		cin >> run[i].date >> run[i].height;
		if (run[i].height <= 2 || run[i].height >= 5) {
			cout << "Heights must be between 2.0 and 5.0 meters.\n";
			cin.ignore();
			cin.get();
			return 0;
		}
	}
	for (i = 0; i < 58; i++) {
		cout << "_";
	}
	cout << "\nPole Vaulter: " << firstName << " " << lastName << endl;
	for (i = 0; i < 58; i++) {
		cout << "_";
	}
	cout << endl << setw(13) << "Date " << setw(17) << "Height\n";
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 2; j++) {
			if (run[j].height < run[j + 1].height) {
				tempDate = run[j].date;
				run[j].date = run[j + 1].date;
				run[j + 1].date = tempDate;
				tempHeight = run[j].height;
				run[j].height = run[j + 1].height;
				run[j + 1].height = tempHeight;
			}
		}
	}
	for (i = 0; i < 3; i++) {
		cout << "\n" << i + 1 << ". " << setw(14) << run[i].date
			<< setw(9) << setprecision(1) << fixed << run[i].height;
	}
	cout << "\n\n";
	cin.ignore();
	cin.get();
	return 0;
}