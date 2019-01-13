#pragma once

class Car
{
protected:
	char* name;
	char* body;
	int engine;
	int wheels;
	char* transmission;
public:
	void SetName(char* name)
	{
		this->name = name;
	}
	void SetBody(char* body)
	{
		this->body = body;
	}
	void SetEngine(int engine)
	{
		this->engine = engine;
	}
	void SetWheels(int wheels)
	{
		this->wheels = wheels;
	}
	void SetTransmission(char* transmission)
	{
		this->transmission = transmission;
	}
};

class DaewooLanos : public Car
{

};

class FordProbe : public Car
{

};

class UAZPatriot : public Car
{

};