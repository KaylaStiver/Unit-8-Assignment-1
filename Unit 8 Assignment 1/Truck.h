// Kayla Stiver
// CIS 1202 800
// April 25th 2022

#pragma once
#include <iostream>
#include <string>
#include "Vehicle.h"

using namespace std;

class Truck : public Vehicle {
private:
	int towCap;
public:
	Truck();
	void setTowCap();
	int getTowCap();
	void displayTruck();
};

