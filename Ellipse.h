#pragma once
#include "Figure.h"
class Ellipse : public Figure
{
	int axle1;
	int axle2;
	const int PI = 3.14;
public:
	Ellipse(){}
	Ellipse(int axle1,int axle2)
	{
		SetAxle1(axle1);
		SetAxle2(axle2);
	}
	void SetAxle1(int axle1)
	{
		this->axle1 = axle1;
	}
	void SetAxle2(int axle2)
	{
		this->axle2 = axle2;
	}
	void Square() override
	{
		double tempSquare;
		tempSquare = PI * axle1 * axle2;
		SetSquare(tempSquare);
	}
	void Perimetr() override
	{

	}
};