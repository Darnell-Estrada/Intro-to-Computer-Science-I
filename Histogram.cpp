// DARNELL JAMES V. ESTRADA
// CS 1160 SEC 01
// HOMEWORK 4
// Histogram
// This gradebook application displays and summarizes student scores for a single assignment.
// The program prompts the user to enter scores one at a time. It is assumed that the number
// of students will never exceed 100. The scores represent percentages, an integer inclusively
// between 0 and 100. It checks if the user entered an input within the valid range, if not, the
// user is asked to re-enter a valid entry. When the user enters the string "exit", the program
// displays the scores in a histogram format marking the number of scores in the following intervals:
// {0-10, 11-20, 21-30, 31-40, 41-50, 51-60, 61-70, 71-80, 81-90, 91-100}. A score summary prints
// the total number of scores entered, the highest score, the lowest score, and the average of all
// scores.

// NOTES TO THE PROGRAMMER:
// The string "exit" is a sentinel value, but it's a string. Your program should treat the
// inputs as strings and convert them to integers as needed. Assume the values are either
// integer values or the string "exit". In order to print a histogram efficiently, you'll
// want to loop through an array containing the number of elements for each interval to print
// to the console.

#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

void printStars(int, double[]);

int main() {
	const int MAX_STUDENTS = 100,
		MAX_STARS = 10;
	double stars[MAX_STARS] = {0.0},
		sum = 0.0,
		total = 0.0,
		high = 0.0,
		low = 100.0,
		avg = 0.0;
	int count = 0,
		num = 0,
		top = 0,
		bot = 0,
		i = 0;
	string userInput = " ",
		sentinel = "exit";
	cout << "Enter test scores one at a time.\n";
	for (count = 0, total = 0; count < MAX_STUDENTS; count++, total++) {
		cout << "Enter test score: ";
		cin >> userInput;
		num = atoi(userInput.c_str());
		if (userInput == sentinel) {
			break;
		}
		else if (num < 0 || num > 100) {
			cout << "Re-enter a valid entry\n";
			total--;
			count--;
		}
		else {
			if (num > high) {
				high = num;
			}
			if (num < low) {
				low = num;
			}
			if (0 <= num && num <= 10) {
				stars[9]++;
			}
			else if (num <= 20) {
				stars[8]++;
			}
			else if (num <= 30) {
				stars[7]++;
			}
			else if (num <= 40) {
				stars[6]++;
			}
			else if (num <= 50) {
				stars[5]++;
			}
			else if (num <= 60) {
				stars[4]++;
			}
			else if (num <= 70) {
				stars[3]++;
			}
			else if (num <= 80) {
				stars[2]++;
			}
			else if (num <= 90) {
				stars[1]++;
			}
			else if (num <= 100) {
				stars[0]++;
			}
			sum += num;
		}
	}
	avg = sum / total;
	for (i = 0; i < 32; i++) {
		cout << "_";
	}
	cout << "\nHistogram\n\n";
	for (top = 100, bot = 91, i = 0; i < MAX_STARS; top -= 10, bot -= 10, i++) {
		if (bot == 1) {
			bot = 0;
		}
		cout << setw(2) << bot << " - " << setw(4) << top << "| ";
		printStars(i, stars);
		cout << endl;
	}
	for (i = 0; i < 32; i++) {
		cout << "_";
	}
	cout << "\nTotal: " << total
		<< "\nHighest: " << high
		<< "\nLowest: " << low
		<< "\nAverage: " << avg << endl;
	for (i = 0; i < 32; i++) {
		cout << "_";
	}
	cout << endl;
	cin.ignore();
	cin.get();
	return 0;
}

void printStars(int i, double s[]) {
	int j = 0;
	for (i, j = 0; j < s[i]; j++)
		cout << "*";
}