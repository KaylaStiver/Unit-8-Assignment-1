// Kayla Stiver
// CIS 1202 800
// April 25th 2022

#include <iostream>
#include <string>
#include "Vehicle.h"
#include "Car.h"

using namespace std;

Car::Car() {
	numDoors = 4;
}
void Car::setDoors(int userDoors) {
	cout << "Please enter the number of doors: ";
	cin >> userDoors;
	numDoors = userDoors;
}
int Car::getDoors() {
	return numDoors;
}
void Car::displayCar() {
	displayVehicle();
	cout << "Numbers of Doors: " << getDoors() << endl;
}