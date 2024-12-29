#pragma once
#include <string>
#include <stdexcept>


class Vehicle 
{
public:
	virtual double getMaxSpeed() const = 0;
};

enum CarTypes
{
	economic,
	sport,
	utility
};

class Car : public Vehicle
{
private:
	CarTypes type;

public:
	Car(CarTypes type) : type(type) {}
	double getMaxSpeed() const override
	{
		switch (type)
		{
		case economic:
			return 120;

		case sport:
			return 220;

		case utility:
			return 90;

		default:
			throw std::invalid_argument("Invalid car type");
			break;
		}
	}
};

class Bicycle : public Vehicle
{
private:
	int gearCount;

public:
	Bicycle(int gearCount) : gearCount(gearCount) {}
	double getMaxSpeed() const override
	{
		return gearCount * 3;
	}
};