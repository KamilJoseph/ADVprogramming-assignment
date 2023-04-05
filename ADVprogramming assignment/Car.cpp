#include "Car.h"

Car::Car(string RegNumber, string Model, string Make, int Age, int Doors, int Seats):
	RegNumber(RegNumber), Model(Model),Make(Make), Age(Age), Doors(Doors), Seats(Seats), 
	Vehicle(RegNumber, Model, Make, Age)
{

};

Car::~Car()
{

};
void Car:: display(vector<Vehicle*> storage)
{
	for (int i = 0; i < storage.size(); i++)
	{
		cout << storage[i]->getRegNumber();
		cout << storage[i]->getMake();
		cout << storage[i]->getModel();
		cout << storage[i]->getAge();
	}
}

double Car::CarCost()
{
	double Cost = 2600 - getAge() * 150 - getDoors() * 200;
	if (Cost > 10)
		return Cost;
	else
		return 10;

};