#ifndef Car_C_
#define Car_C_

#include "Vehicle_C.h"

class Car_C : public Vehicle_C
{
private:
	int numDoors;

protected:



public:
	Car_C();
	Car_C(int);

	int Get_NumDoors();

	void Set_NumDoors(int);

	void Display_Info();
};

#endif