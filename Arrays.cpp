// DARNELL JAMES V. ESTRADA
// CS 1160 SEC 01
// Arrays
// This program counts how much money is in the user's wallet.

#include <iostream>
using namespace std;

double countMoney(int, double[]);

int main() {
	const int STRING_SIZE = 50,
		CASH_SIZE = 10;
	char str[STRING_SIZE] = "Mello",
		firstName[STRING_SIZE] = " ";
	double wallet[CASH_SIZE] = {0.0},
		input = 0.0,
		sentinel = -1.0;
	int count = 0,
		i = 0,
		j = 0;
	cout << str << endl;
	str[0] = 'Y';
	cout << str << endl;
	cout << "Enter your name: ";
	cin.getline(str, STRING_SIZE);
	cout << "Hello there, " << str << ".\n";
	while (str[i] != ' ' && i < STRING_SIZE) {
		i++;
	}
	if (i >= STRING_SIZE) {
		for (i = 0; i < STRING_SIZE; i++) {
			firstName[i] = str[i];
		}
	}
	else {
		for (j = 0; j < i; j++) {
			firstName[j] = str[j];
		}
	}
	firstName[i] = '\0';
	cout << "How are you today, " << firstName
		<< "?\nDo you want fries with that?\n";
	while (count < CASH_SIZE) {
		cout << "Enter cash amount: ";
		cin >> input;
		if (input == sentinel) {
			break;
		}
		wallet[count] = input;
		count++;
	}
	cout << "Wallet Amount: "
		<< countMoney(CASH_SIZE, wallet)
		<< endl;
	cin.ignore();
	cin.get();
	return 0;
}

double countMoney(int cs, double w[]) {
	int i = 0;
	double sum = 0.0;
	for (i = 0; i < cs; i++) {
		sum += w[i];
	}
	return sum;
}