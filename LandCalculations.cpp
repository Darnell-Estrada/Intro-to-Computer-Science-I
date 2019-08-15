// DARNELL JAMES V. ESTRADA
// CS 1160 SEC 01
// HOMEWORK 1
// Land Calculations

#include <iomanip>
#include <iostream>
using namespace std;

int main() {
	const double acreArea = 43560,
		parcelArea = 389616,
		acrePerParcel = parcelArea / acreArea;
	cout << "An acre of land has an area of " << acreArea << " square feet."
		<< "\nA parcel occupies " << parcelArea << " square feet."
		<< "\nThis parcel of land has " << setprecision(4) << acrePerParcel << " acres of land.\n";
	cin.ignore();
	cin.get();
	return 0;
}