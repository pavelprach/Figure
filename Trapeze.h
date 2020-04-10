#pragma once
#include "Figure.h"
class Trapeze : public Figure
{
	int side1;
	int side2;
	int side3;
	int height;
public:
	Trapeze(){}
	Trapeze(int side1,int side2,int side3,int height)
	{
		SetSide1(side1);
		SetSide2(side2);
		SetSide3(side3);
		SetHeight(height);
	}
	void SetSide1(int side1)
	{
		this->side1 = side1;
	}
	void SetSide2(int side2)
	{
		this->side2 = side2;
	}
	void SetSide3(int side3)
	{
		this->side3 = side3;
	}
	void SetHeight(int height)
	{
		this->height = height;
	}
	void Perimetr() override
	{
		int tempPerimetr;
		tempPerimetr = side1 + side2 + side3 * 2;
		SetPerimetr(tempPerimetr);
	}
	void Square() override
	{
		double tempSquare;
		tempSquare = (side1 + side2) / 2 * height;
		SetSquare(tempSquare);
	}
};