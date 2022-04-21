#include "Vehicle_C.h"

Vehicle_C::Vehicle_C()
{
	manufacturer = "";
	yearBuilt = 0;
}

Vehicle_C::Vehicle_C(string manu)
{
	manufacturer = manu;
}

Vehicle_C::Vehicle_C(int yb)
{
	yearBuilt = yb;
}

Vehicle_C::Vehicle_C(string manu, int yb)
{
	manufacturer = manu;
	yearBuilt = yb;
}

void Vehicle_C::Set_Manufacturer(string manu)
{
	manufacturer = manu;
}

void Vehicle_C::Set_YearBuilt(int yb)
{
	yearBuilt = yb;
}

string Vehicle_C::Get_Manufacturer()
{
	return manufacturer;
}

int Vehicle_C::Get_YearBuilt()
{
	return yearBuilt;
}

void Vehicle_C::Display_Info()
{
	cout << "Manufactured by: " << manufacturer << endl;
	cout << "Year built: " >> yearBuilt << endl;
}
