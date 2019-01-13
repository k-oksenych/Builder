#pragma once

#include "Builders.h"
#include "Car.h"

class Shop
{
public:
	Shop(Factory* builder) :
		builder(builder)
	{

	}

	Car* BuildCar()
	{
		builder->CreateCar();

		builder->BuildBody();
		builder->BuildEngine();
		builder->BuildWheels();
		builder->BuildTransmission();

		return builder->GetBuiltCar();
	}

private:
	Factory* builder = nullptr;
};