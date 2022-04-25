// Kayla Stiver
// CIS 1202 800
// April 25th 2022

#include <iostream>
#include <string>
#include "Vehicle.h"
#include "Truck.h"

using namespace std;

Truck::Truck() {
	towCap = 5000;
}
void Truck::setTowCap(int userTowCap) {
	cout << "Enter towing capacity: ";
	cin >> userTowCap;
	towCap = userTowCap;
}
int Truck::getTowCap() {
	return towCap;
}
void Truck::displayTruck() {
	displayVehicle();
	cout << "Towing Capacity: " << getTowCap();
	cout << endl;
}
