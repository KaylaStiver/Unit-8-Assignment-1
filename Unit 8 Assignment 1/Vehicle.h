// Kayla Stiver
// CIS 1202 800
// April 25th 2022

#pragma once
#include <iostream>
#include <string>

using namespace std;

class Vehicle {
private:
	string manufacturer;
	int year;
public:
	Vehicle();
	void setManu(string);
	void setYear(int);
	string getManu();
	int getYear();
	void displayInfo(Vehicle&);
};

