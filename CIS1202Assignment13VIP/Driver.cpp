/*
Kacey Hall
CIS 1202
4/25/2022
*/

#include "SUV_C.h"

int main()
{
	Vehicle_C veh;
	Car_C car;
	SUV_C suv;
	string manu;
	int yb;
	int nD;
	int gtC;

	cout << "Enter manufacturer:" << endl;
	getline(cin, manu);

	cout << "Enter year built:" << endl;
	cin >> yb;
	cin.ignore();

	veh.Set_Manufacturer(manu);
	veh.Set_YearBuilt(yb);

	veh.Display_Info();

	cout << "Enter manufacturer:" << endl;
	getline(cin, manu);

	cout << "Enter year built:" << endl;
	cin >> yb;
	cin.ignore();

	cout << "Enter number of doors:" << endl;
	cin >> nD;
	cin.ignore();

	car.Set_Manufacturer(manu);
	car.Set_YearBuilt(yb);
	car.Set_NumDoors(nD);

	car.Display_Info();

	cout << "Enter manufacturer:" << endl;
	getline(cin, manu);

	cout << "Enter year built:" << endl;
	cin >> yb;
	cin.ignore();

	cout << "Enter number of doors:" << endl;
	cin >> nD;
	cin.ignore();

	cout << "Enter gas tank capacity:" << endl;
	cin >> gtC;
	cin.ignore();

	suv.Set_Manufacturer(manu);
	suv.Set_YearBuilt(yb);
	suv.Set_NumDoors(nD);
	suv.Set_GasCapacity(gtC);

	suv.Display_Info();
}