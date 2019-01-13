#include "Builders.h"
#include "Director.h"

int main()
{//test
	Factory* builder = new DaewooLanosFactory();
	Shop* director = new Shop(builder);
	Car* car = director->BuildCar();
}