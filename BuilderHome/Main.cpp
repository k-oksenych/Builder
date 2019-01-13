#include "Builders.h"
#include "Director.h"

int main()
{
	Factory* builder = new DaewooLanosFactory();
	Shop* director = new Shop(builder);
	Car* car = director->BuildCar();
}