#include "Car_C.h"

Car_C::Car_C()
{
	numDoors = 0;
}

Car_C::Car_C(int nD)
{
	numDoors = nD;
}

int Car_C::Get_NumDoors()
{
	return numDoors;
}

void Car_C::Set_NumDoors(int nD)
{
	numDoors = nD;
}

void Car_C::Display_Info()
{
	Vehicle_C::Display_Info();

	cout << "Number of doors: " << numDoors << endl;
}
