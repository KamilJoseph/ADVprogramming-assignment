#include "Bike.h"

Bike::Bike(string RegNumber, string Model, string Make, int Age, int EngineSize, int Wheels):
	RegNumber(RegNumber), Model(Model), Make(Make), Age(Age), EngineSize(EngineSize), Wheels(Wheels),
	Vehicle(RegNumber, Model, Make, Age)
{

};

Bike::~Bike()
{

};

void Bike::displayBike(vector<Vehicle*> bikes)
{
	for (int i = 0; i < bikes.size(); i++)
	{
		cout << "Registeration Number" << bikes[i]->getRegNumber();
		cout << "Model:" << bikes[i]->getModel();
		cout << "Make:" << bikes[i]->getMake();
		cout << "Age:" << bikes[i]->getAge();
	}
}
double Bike::costOfBike()
{
	double Cost = 1500 + (double)getEngineSize() - 1500 + getEngineSize() % 100 / 100;
	if (Cost > 10)
		return Cost;
	else
		return 10.00;
};