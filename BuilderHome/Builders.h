#pragma once
#include "Car.h"

class Factory
{
public:
	virtual void BuildBody() = 0;
	virtual void BuildEngine() = 0;
	virtual void BuildWheels() = 0;
	virtual void BuildTransmission() = 0;
	virtual void CreateCar() = 0;
	virtual Car* GetBuiltCar() = 0;
};

class DaewooLanosFactory : public Factory
{
public:
	virtual void BuildBody() override
	{
		car->SetBody("Sedan");
	}
	virtual void BuildEngine() override
	{
		car->SetEngine(98);
	}
	virtual void BuildWheels() override
	{
		car->SetWheels(13);
	}
	virtual void BuildTransmission() override
	{
		car->SetTransmission("5 Manual");
	}
	virtual void CreateCar() override
	{
		car = new Car;
		car->SetName("DaewooLanos");
	}
	virtual Car* GetBuiltCar() override
	{
		return car;
	}
private:
	Car* car = nullptr;
};

class FordProbeFactory : public Factory
{
public:
	virtual void BuildBody() override
	{
		car->SetBody("Coupe");
	}
	virtual void BuildEngine() override
	{
		car->SetEngine(160);
	}
	virtual void BuildWheels() override
	{
		car->SetWheels(14);
	}
	virtual void BuildTransmission() override
	{
		car->SetTransmission("4 Auto");
	}
	virtual void CreateCar() override
	{
		car = new Car;
		car->SetName("FordProbe");
	}
	virtual Car* GetBuiltCar() override
	{
		return car;
	}
private:
	Car* car = nullptr;
};

class UAZPatriotFactory : public Factory
{
public:
	virtual void BuildBody() override
	{
		car->SetBody("Station wagon");
	}
	virtual void BuildEngine() override
	{
		car->SetEngine(120);
	}
	virtual void BuildWheels() override
	{
		car->SetWheels(16);
	}
	virtual void BuildTransmission() override
	{
		car->SetTransmission("4 Manual");
	}
	virtual void CreateCar() override
	{
		car = new Car;
		car->SetName("UAZPatriot");
	}
	virtual Car* GetBuiltCar() override
	{
		return car;
	}
private:
	Car* car = nullptr;
};

class HyundaiGetzFactory : public Factory
{
public:
	virtual void BuildBody() override
	{
		car->SetBody("Hatchback");
	}
	virtual void BuildEngine() override
	{
		car->SetEngine(66);
	}
	virtual void BuildWheels() override
	{
		car->SetWheels(13);
	}
	virtual void BuildTransmission() override
	{
		car->SetTransmission("5 Auto");
	}
	virtual void CreateCar() override
	{
		car = new Car;
		car->SetName("Hyundai Getz");
	}
	virtual Car* GetBuiltCar() override
	{
		return car;
	}
private:
	Car* car = nullptr;
};