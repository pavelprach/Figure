#pragma once
#include "Figure.h"
class Rectangle : public Figure
{
	int side1;
	int side2;
public:
	Rectangle(){}
	Rectangle(int side1,int side2) 
	{
		SetSide1(side1);
		SetSide2(side2);
	}
	void SetSide1(int side1)
	{
		this->side1 = side1;
	}
	void SetSide2(int side2)
	{
		this->side2 = side2;
	}
	void Perimetr() override
	{
		int tempPerimetr;
		tempPerimetr = side1 * 2 + side2 * 2;
		SetPerimetr(tempPerimetr);
	}
	void Square() override
	{
		double tempSquare;
		tempSquare = side1 * side2;
		SetSquare(tempSquare);
	}
};