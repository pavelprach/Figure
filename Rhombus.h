#pragma once
#include "Figure.h"
class Rhombus : public Figure
{
	int side;
	int height;
public:
	Rhombus() {}
	Rhombus(int side,int height)
	{
		SetSide(side);
		SetHeight(height);
	}
	void SetSide(int side)
	{
		this->side = side;
	}
	void SetHeight(int height)
	{
		this->height = height;
	}
	void Perimetr() override
	{
		int tempPerimetr;
		tempPerimetr = side * 4;
		SetPerimetr(tempPerimetr);
	}
	void Square() override
	{
		double tempSquare;
		tempSquare = side * height;
		SetSquare(tempSquare);
	}
};
	