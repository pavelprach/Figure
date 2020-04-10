#pragma once
#include "Figure.h"
class Circle : public Figure
{
	int radius;
	const int PI = 3.14;
public:
	Circle(){}
	Circle(int radius)
	{
		SetRadius(radius);
	}
	void SetRadius(int radius)
	{
		this->radius = radius;
	}
	void Perimetr() override
	{
		int tempPerimetr;
		tempPerimetr = PI * radius * 2;
		SetPerimetr(tempPerimetr);
	}
	void Square() override
	{
		double tempSquare;
		tempSquare = PI * radius * radius;
		SetSquare(tempSquare);
	}
};