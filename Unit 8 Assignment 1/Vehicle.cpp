// Kayla Stiver
// CIS 1202 800
// April 25th 2022

#include <iostream>
#include <string>
#include "Vehicle.h"

using namespace std;

Vehicle::Vehicle() {
	manufacturer = "default";
	year = 1980;
}
void Vehicle::setManu(string userManu) {
	cout << "Please enter car manufacturer: ";
	cin >> userManu;
	manufacturer = userManu;
}
void Vehicle::setYear(int userYear) {
	cout << "Please enter car model year: ";
	cin >> userYear;
	year = userYear;
}
string Vehicle::getManu() {
	return manufacturer;
}
int Vehicle::getYear() {
	return year;
}
void Vehicle::displayVehicle() {
	cout << "Manufacturer: " << getManu() << endl;
	cout << "Year: " << getYear() << endl;
}