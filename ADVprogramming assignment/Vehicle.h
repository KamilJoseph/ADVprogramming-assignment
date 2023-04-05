#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Vehicle
{
public:
	Vehicle(string RegNumber, string Model, string Make, int Age);
	~Vehicle();
	string getRegNumber();
	string getModel();
	string getMake();
	int getAge();
	
protected:
	virtual void getType();
private:
	string RegNumber;
	string Model; 
	string Make;
	int Age;

};

// used for sorting regnumber


void inline Vehicle::getType()
{
	cout << "Vehicle" << endl;
}

string inline Vehicle::getRegNumber()
{
	return RegNumber;
};

string inline Vehicle::getModel()
{
	return Model;
};

string inline Vehicle::getMake()
{
	return Make;
};

int inline Vehicle::getAge()
{
	return Age;
};