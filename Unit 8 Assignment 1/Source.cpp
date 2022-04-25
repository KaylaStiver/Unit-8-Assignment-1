// Kayla Stiver
// CIS 1202 800
// April 25th 2022

#include <iostream>
#include <string>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

using namespace std;

int main() {

	Vehicle myVehicle;
	string myManu;
	int myYear = 0;

	cout << "Vehicle: " << endl;
	myVehicle.setManu(myManu);
	myVehicle.setYear(myYear);
	myVehicle.displayVehicle();
	cout << endl;

	Car myCar;
	int myDoors = 0;

	cout << "Car: " << endl;
	myCar.setManu(myManu);
	myCar.setYear(myYear);
	myCar.setDoors(myDoors);
	myCar.displayCar();
	cout << endl;

	Truck myTruck;
	int myTowCap = 0;

	cout << "Truck: " << endl;
	myTruck.setManu(myManu);
	myTruck.setYear(myYear);
	myTruck.setTowCap(myTowCap);
	myTruck.displayTruck();

	return 0;
}
