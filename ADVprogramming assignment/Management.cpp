#include "Management.h"

Management::Management(): storage(storage)
{

};
Management::~Management()
{

	// Deletes the memory of the object
	delete c;
	c = nullptr;

	delete b;
	b = nullptr;
};

void Management::AddVehicle()
{
	cout << "AddVehicle" << endl;
	cout << "__________" << endl;
	cout << "1) Add Car:" << endl;
	cout << "2) Add Bike:" << endl;
	int EngineSize{ 0 };
	int Wheels{ 0 };
	int Doors{ 0 };
	int Seats{ 0 };
	string RegNumber;
	string Model;
	string Make;
	int Age{ 0 };
	int option;
	cin >> option;
	if (option == 1)
	{
		cout << "Welcome to add car:" << endl;
		cout << "___________________" << endl;
		cout << "\n" << endl;

		cout << "RegNumber" << endl;
		cin >> RegNumber;

		cout << "Model" << endl;
		cin >> Model;

		cout << "Make:" << endl;
		cin >> Make;

		
		cout << "Age:" << endl;
		cin >> Age;
		
		cout << "Number of seats:" << endl;
		cin >> Seats;
		
		cout << "Number of doors:" << endl;
		cin >> Doors;
		
		storage.push_back(c);
		c->CarCost();
		cout << "\n" << endl;
		cout << "Vector Size:" << storage.size();
		cout << "\n" << endl;

	}

	if (option == 2)
	{
		cout << "RegisterstionNumber:" << endl;
		cin >> RegNumber;

		cout << "Model:" << endl;
		cin >> Model;

		cout << "Make:" << endl;
		cin >> Make;

		cout << "Age of vehicle:" << endl;
		cin >> Age;

		if (EngineSize > 0) 
		{
			cout << "Engine Size:" << endl;
			cin >> EngineSize;
		}

		if (Wheels > 0 || Wheels != 1 || Wheels == 2|| Wheels==3)
		{
			cout << "Number of Wheels:" << endl;
			cin >> Wheels;
		}
		storage.push_back(b);
		b->displayBike(storage);
		b->costOfBike();
		cout <<"Vector Size:" << storage.size();
		cout << "\n" << endl;
	}



};

void Management::RemoveVehicle()
{
	cout << "Remove vehicle by size:" << endl;
	cout << "_______________________" << endl;
	cout << "1) Remove Vehicle" << endl;
	cout << "9) Return to menue" << endl;
	int choice;
	cin >> choice;
	if (choice == 1)
	{
		cout << "Remove vehicle by index:" << endl;
		cout << "_______________" << endl;
		cout << "Cuurent size of the vector:" << storage.size() << endl;
		int index;
		cin >> index;

		if (index >= 0 || !storage.empty())
		{
			storage.erase((storage.begin()) + index);
		}
		cout << "New size of the vector:" << storage.size();
		cout << "\n" << endl;
	}
	if (choice == 9)
	{
		return;
	}
};

void Management::SearchForCar()
{
	cout << "Search for a car by:" << endl;
	cout << "____________________" << endl;
	cout << "1) Registeration number: " << endl;
	cout << "2) Search for Doors " << endl;
	cout << "3) Search for seats" << endl;
	cout << "9) Return to main menu" << endl;
	int option;
	cout << "Please choose an option:" << endl;
	cin >> option;
	
	if (option == 1)
	{
		
		cout << "Enter Registeration Number:" << endl;
		cout << "___________________________" << endl;
		std::string Reg;
		std::cin >> Reg;
		for (int i = 0; i < storage.size(); i++)
		{
			cout << Reg << "\n" << endl;
			if (Reg == storage[i]->getRegNumber())
			{

				cout << "Registeration Number:" << "\n" << storage[i]->getRegNumber() << endl;

				cout << "Weldone match has been found" << endl;
			}
			else
			{
				if (Reg != storage[i]->getRegNumber())
				{
					cout << "Match has not been found!" << endl;
					cout << "_________________________" << endl;
				}
			}
		}
	}

	if (option == 2)
	{
		cout << "Enter the number of doors:" << endl;
		cout << "Vector size:" << storage.size() << endl;
		vector<Vehicle*>::iterator it(storage.begin());
		int Doors;
		cin >> Doors;
		while (it != storage.end())
		{
			if (dynamic_cast<Car*>(*it)->CheckDoors(Doors))
			{
				cout << "Welldone match has been found" << endl;
			 // pushes back the *it if it has been founded in the vector.
			}
		}
		cout << storage.size();
		cout << "\n" <<endl;


		// Returns vehicle is a car if casting is correct

		return;
	}


	if (option == 3)
	{
		cout << "Enter the number of seats:" << endl;
		cout << "Vector size:" << endl;
		vector<Vehicle*>::iterator it;

		cin >> Doors;
		for (it = storage.begin(); it!=storage.end(); it++) {
	;
			if (Doors == dynamic_cast<Car*>(*it)->CheckDoors(Doors))
			{
				cout << "Welldone the door amount is correct"<<endl;
				break;
			}

			if (Doors != c->CheckDoors(Doors))
			{
				cout << "Match has not been found" << endl;
				break;
			}
		}
		cout << storage.size();
		cout << "\n" << endl;
	}

	if (option == 9)
	{
		return;
	}

};

void Management::SearchForBike()
{
	cout << "Search for a bike:" << endl;
	cout << "__________________" << endl;
	cout << "1) Registeration Number:" << endl;
	cout << "2) Search for Engine Size:" << endl;
	cout << "3) Search for Wheel:" << endl;
	cout << "9) return to menue:" << endl;
	int option;
	cin >> option;
	if (option == 1)
	{
		cout << "Enter Registeration Number:" << endl;
		cout << "___________________________" << endl;
		std::string Reg;
		std::cin >> Reg;
		for (int i = 0; i < storage.size(); i++)
		{
			cout << Reg << "\n" << endl;
			if (Reg == storage[i]->getRegNumber())
			{

				cout << "Registeration Number:" << "\n" << storage[i]->getRegNumber() << endl;
				cout << "Weldone match has been found" << endl;
			}
			else
			{
				if (Reg != storage[i]->getRegNumber())
				{
					cout << "Match has not been found!" << endl;
					cout << "_________________________" << endl;
				}
			}
		}
	}

	if (option == 2)
	{
		vector<Vehicle*>::iterator it(storage.begin());
		int EngineSize;
		cin >> EngineSize;
		// dynamic casting is used to check if the match has been founded or not
		// the condition check engine is used to check if the Enginsize checked is true or not etc. 
		while (it != storage.end()) {
			if (dynamic_cast<Bike*>(*it)->CheckEngine(EngineSize))
			{

				cout << "Match not been found" << endl;
			} else{
				cout << "Match has been found" << endl;
			}
		}
	}

	if (option == 3)
	{
		vector<Vehicle*>::iterator it(storage.begin());
		int Wheels;
		cin >> Wheels;
		while (it != storage.end()) 
		{
			if (dynamic_cast<Bike*>(*it)->CheckWheels(Wheels))
			{

				cout << "Match not been found" << endl;
			}
			else {
				cout << "Match has been found" << endl;
			}
		}
	}

	if (option == 9)
	{
		return;
	}
};

void Management::SortbyRegisterationNumber()
{
	cout << "Sorting Registeration Number" << endl;
	for (auto i = storage.begin(); i < storage.end(); i++)
	{
		cout << "" << *i;
	}
	sort(storage.begin(), storage.end(), CompareRegNumber());
	for (int j = 0; j < storage.size(); j++)
	{
		cout << storage[j]->getRegNumber();
	}
	cout << "\n" << endl;
};



void Management::RecordPage()
{
	//reads from the file.
	fstream new_file;
	new_file.open("C:/Users/kamil/OneDrive/Desktop/Advanced programming assignment blue sticker/HistoryPage.txt", ios::in);
	if (!new_file)
	{
		cout << "No such file";
	}
	else 
	{
		char ch; while (!new_file.eof()) {
			new_file >> ch;
			cout << ch;
		}
	}
		new_file.close();
		return;

};