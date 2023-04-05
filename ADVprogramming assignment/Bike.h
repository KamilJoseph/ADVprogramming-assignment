#pragma once
#include <iostream>
#include <string>
#include "Vehicle.h"
using namespace std;
class Bike : public Vehicle
{
public:
	Bike(string RegNumber, string Model, string Make, int Age, int EngineSize, int Wheels);
	~Bike();
	
	//Need getters
	int getEngineSize();
	int getWheels();

	//Need boolean operators for search 
	bool CheckEngine(int EngineSize);
	bool CheckWheels(int Wheels);
	void displayBike(vector<Vehicle*> bikes);
	//Cost
	double costOfBike();

protected: 
	void getType() override;
private:
	int EngineSize;
	int Wheels;
	int Age;
	string RegNumber;
	string Model;
	string Make;
};
void inline Bike::getType()
{
	cout << "Bike" << endl;
}
bool inline Bike::CheckEngine(int EngineSize)
{
	return EngineSize == this->EngineSize;
};

bool inline Bike::CheckWheels(int Wheels)
{
	return Wheels == this->Wheels;
};

int inline Bike::getEngineSize()
{
	return EngineSize;
};

int inline Bike::getWheels()
{
	return Wheels;
};