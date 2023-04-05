#include <iostream>
#include <string>
#include "Management.h"
using namespace std;

int main()
{
	Management obj;
	int choose;

	do {
		cout << "1) Add Vehicle:" << endl;
		cout << "2) Remove Vehicle:" << endl;
		cout << "3) Search For Car:" << endl;
		cout << "4) Search For Bike:" << endl;
		cout << "5) Sort Vehicle by registeration number:" << endl;
		cout << "6) Record page" << endl;
		cout << "9) Exit:" << endl;

		cin >> choose;
		switch (choose)
		{
		case 1:
			obj.AddVehicle();
			break;
		case 2:
			obj.RemoveVehicle();
			break;
		case 3:
			obj.SearchForCar();
			break;
		case 4:
			obj.SearchForBike();
			break;
		case 5:
			obj.SortbyRegisterationNumber();
			break;
		case 6:
			obj.RecordPage();
		default:
			cout << "Please choose from the choices above:" << endl;

		}
	} while (choose != 9);

}