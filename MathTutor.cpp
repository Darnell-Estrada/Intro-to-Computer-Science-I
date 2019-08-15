// DARNELL JAMES V. ESTRADA
// CS 1160 SEC 01
// HOMEWORK 2
// Math Tutor
// This program can be used as
// a math tutor for a young student.

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double num1 = 247,
		num2 = 129,
		correctAnswer = 376,
		userAnswer = 0.0;
	cout << setw(5) << num1 << setw(2)
		<< "\n+ " << num2 << "\n-----\n  ";
	cin >> userAnswer;
	cout << endl;
	if (userAnswer == 376) {
		cout << userAnswer << " is the correct answer.\nGood Job!\n";
	}
	else {
		cout << userAnswer << " is the wrong answer."
			<< "\nThe correct answer is " << correctAnswer << ".\n";
	}
	cin.ignore();
	cin.get();
	return 0;
}