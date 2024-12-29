#pragma once

#define _USE_MATH_DEFINES

#include <cmath>


class Shape
{
public:
	virtual double getArea() const = 0;
};


class Rectangle : public Shape
{
public:
	double width;
	double height;

	Rectangle(double width, double height) : width(width), height(height) {}
	double getArea() const override
	{
		return width * height;
	}
};


class Circle : public Shape
{
public:
	double radius;

	Circle(double radius) : radius(radius) {}
	double getArea() const override
	{
		return M_PI * std::pow(radius, 2);
	}
};