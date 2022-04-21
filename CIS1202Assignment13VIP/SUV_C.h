#ifndef SUV_C_
#define SUV_C_

#include "Car_C.h"

class SUV_C : public Car_C
{
private:
	int gasCapacity;

protected:



public:
	SUV_C();
	SUV_C(int);

	int Get_GasCapacity();

	void Set_GasCapacity(int);

	void Display_Info();
};

#endif