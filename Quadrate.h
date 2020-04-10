#pragma once
#include "Figure.h"
class Quadrate : public Figure
{
	int side;
public:
	Quadrate(){}
	Quadrate(int side)
	{
		SetSide(side);
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
		tempSquare = side * side;
		SetSquare(tempSquare);
    }
	void SetSide(int side)
	{
		this->side = side;
	}
};