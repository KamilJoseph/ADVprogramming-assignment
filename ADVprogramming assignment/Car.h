#pragma once
#include <string>
#include <iostream>
#include "Vehicle.h"
using namespace std;
class Car: public Vehicle
{
public:
	Car(string RegNumber, string Model, string Make, int Age, int Doors, int Seats);
	~Car();
	
	// Need getters
	int getDoors();
	int getSeats();

	//Need bool operators
	bool CheckDoors(int Doors);
	bool CheckSeats(int Seats);
	
	// Need Cost
	double CarCost();

	// display vector
	void display(vector<Vehicle*> storage);

protected:
	void getType() override;
private:
	string RegNumber;
	string Model;
	string Make;
	int Doors;
	int Seats;
	int Age;
};

void inline  Car::getType()
{
	cout << "Car" << endl;
}
bool inline Car::CheckDoors(int Doors)
{
	return Doors == this->Doors;
};

bool inline Car::CheckSeats(int Seats)
{
	return Seats == this->Seats;
};


int inline Car::getDoors()
{
	return Doors;
};
int inline Car::getSeats()
{
	return Seats;
};