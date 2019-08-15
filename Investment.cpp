// DARNELL JAMES V. ESTRADA
// CS 1160 SEC 01
// Investment
// This program calculates the present value of a desired future value.

#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

const double findPresentValue(double, double, int);
void collectInput(double&, double&, int&);
void displayResult(double);

int main() {
	double futureValue = 0.0,
		interestRate = 0.0,
		presentValue = 0.0;
	int	period = 0;
	collectInput(futureValue, interestRate, period);
	presentValue = findPresentValue(futureValue, interestRate, period);
	displayResult(presentValue);
	cin.ignore();
	cin.get();
	return 0;
}

void collectInput(double& fv, double& ir, int& p) {
	cout << "Enter how much money you want: ";
	cin >> fv;
	cout << "Enter the interest rate (for 3%, enter 0.03): ";
	cin >> ir;
	cout << "Enter how long can you wait (integers only): ";
	cin >> p;
}

const double findPresentValue(double fv, double ir, int p) {
	return fv / (pow(1 + ir, p));
}

void displayResult(double pv) {
	cout << "You should deposit $" << setprecision(2)
		<< fixed << pv << " in the bank today.\n";
}