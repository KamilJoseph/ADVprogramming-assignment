#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <ranges>
#include <fstream>
#include <sstream>
#include <algorithm>
#include "Bike.h" 
#include "Car.h"
using namespace std;
class Management
{
public:
	Management();
	~Management();
	

	void AddVehicle();
	void RemoveVehicle();
	void SearchForCar();
	void SearchForBike();
	void SortbyRegisterationNumber();
	void RecordPage();
	//Creates new object below
	string RegNumber;
	string Model;
	string Make;
	int Doors {0};
	int Seats {0};
	int EngineSize{0};
	int Wheels{0};
	int Age {0};
	Car  *c = new Car(RegNumber, Model, Make, Age, Doors, Seats);
	Bike* b = new Bike(RegNumber, Model, Make, Age, EngineSize, Wheels);
	
 friend ostream& operator << (ostream& os, const vector<Vehicle*>& v); // shows the content of the vector
 friend ostream& operator << (ostream& out, const Management& rhs);


private:
	vector<Vehicle*>storage;

}; 

inline ostream& operator << (ostream& out, const Management& rhs)
{
	ofstream outfile("C:/Users/kamil/OneDrive/Desktop/Computer Science Sheffield Hallam/Level 5/Advanced Programming/Assignments/HistoryPage.txt");
};


inline ostream& operator << (ostream& os, const vector<Vehicle*>& v)
{
	os << "[";
	// Printing all the elements
// using <<
	for (auto element : v) {
		os << element << " ";
	}
	return os;
}
struct CompareRegNumber
{
	bool operator()(Vehicle* lhs, Vehicle* rhs)
	{
		return (lhs->getRegNumber() < rhs->getRegNumber());
	}
};

