#pragma once
#include <string>
#include "Figure.h"
using namespace std;
class Triangle : public Figure
{
	int base;
	int height;
public:
	Triangle(){}
	Triangle(int base,int height)
	{
		SetBase(base);
		SetHeight(height);
	}
	void SetBase(int base)
	{
		this->base = base;
	}
	void SetHeight(int height)
	{
		this->height = height;
	}
	void Perimetr() override {
		int tempPerimetr;
		tempPerimetr = base * 3;
		SetPerimetr(tempPerimetr);
	}
	void Square() override {
		double tempSquare;
		tempSquare = 0.5 * base * height;
		SetSquare(tempSquare);
	}
};