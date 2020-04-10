#pragma once
#include <string>
using namespace std;
class Figure
{
    int perimetr;
    double square;
public:
    virtual void Perimetr() = 0;
    virtual void Square() = 0;
    void SetPerimetr(int perimetr)
    {
        this->perimetr = perimetr;
    }
    void SetSquare(double square)
    {
        this->square = square;
    }
    int GetPerimetr()
    {
        return perimetr;
    }
    double GetSquare()
    {
        return square;
    }

};
