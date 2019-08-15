// DARNELL JAMES V. ESTRADA
// CS 1160 SEC 01
// HOMEWORK 3
// Coin Toss
// This program simulates a coin toss. When I call a function, a random number
// is generated in the range of 1 to 2. If the number is 1, the function displays
// "heads". If the number is 2, the function displays "tails". The main function
// asks the user how many times the coin should be tossed, then it will simulate
// the coin toss that number of times.

#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int coinToss(int);

int main() {
	int times = 0,
		result = 0,
		i = 0;
	srand((unsigned int)time(0));
	cout << "How many times do you want to flip the coin? ";
	cin >> times;
	for (i = 0; i < times; i++) {
		result = coinToss(result);
		if (result == 1) {
			cout << "Heads\n";
		}
		if (result == 2) {
			cout << "Tails\n";
		}
	}
	cin.ignore();
	cin.get();
	return 0;
}

int coinToss(int r) {
	r = 1 + (rand() % 2);
	return r;
}