#include "SUV_C.h"

SUV_C::SUV_C()
{
	gasCapacity = 0;
}

SUV_C::SUV_C(int gC)
{
	gasCapacity = gC;
}

int SUV_C::Get_GasCapacity()
{
	return gasCapacity;
}

void SUV_C::Set_GasCapacity(int gC)
{
	gasCapacity = gC;
}

void SUV_C::Display_Info()
{
	Car_C::Display_Info();

	cout << "Gas tank capacity: " << gasCapacity << endl;
}
