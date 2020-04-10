#pragma once
#include "Figure.h"
class Parallelogram : public Figure
{
	int side1;
	int side2;
	int height;
public:
	Parallelogram() {}
	Parallelogram(int side1,int side2,int height)
	{
		SetSide1(side1);
		SetSide2(side2);
		SetHeight(height);
	}
	void SetSide1(int side1)
	{
		this->side1 = side1;
	}
	void SetHeight(int height)
	{
		this->height = height;
	}
	void SetSide2(int side2)
	{
		this->side2 = side2;
	}
	void Perimetr() override
	{
		int tempPerimetr;
		tempPerimetr = side1*2+side2*2;
		SetPerimetr(tempPerimetr);
	}
	void Square() override
	{
		int tempSquare;
		tempSquare = side1 * height;
		SetSquare(tempSquare);
	}
};