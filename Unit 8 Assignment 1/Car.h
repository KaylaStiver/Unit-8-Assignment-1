// Kayla Stiver
// CIS 1202 800
// April 25th 2022

#pragma once
#include <iostream>
#include <string>
#include "Vehicle.h"

using namespace std;

class Car : public Vehicle {
private:
	int numDoors;
public:
	Car();
	void setDoors(int);
	int getDoors();
	void displayCar();
};