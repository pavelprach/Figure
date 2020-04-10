
#pragma once
#include <iostream>
#include "Figure.h"
#include "Triangle.h"
#include "Quadrate.h"
#include "Rhombus.h"
#include "Rectangle.h"
#include "Parallelogram.h"
#include "Trapeze.h"
#include "Circle.h"
#include "Ellipse.h"
using namespace std;
int main()
{
    cout << "Triangle" << endl;
    Triangle triangle(15,20);
    triangle.Perimetr();
    cout << triangle.GetPerimetr() << endl;;
    triangle.Square();
    cout << triangle.GetSquare() << endl << "/////" << endl;
    /////////
    /////////
    cout << "Quadrate" << endl;
    Quadrate quadrate(10);
    quadrate.Perimetr();
    quadrate.Square();
    cout << quadrate.GetPerimetr() << endl;
    cout << quadrate.GetSquare() << endl << "/////" << endl;
    /////////
    cout << "Rhombus" << endl;
    Rhombus rhombus(10, 20);
    rhombus.Perimetr();
    rhombus.Square();
    cout << rhombus.GetPerimetr() << endl;
    cout << rhombus.GetSquare() << endl;
    cout << "//////" << endl;
    ///////
    cout << "Rectangle" << endl;
    Rectangle rectangle(10, 20);
    rectangle.Perimetr();
    rectangle.Square();
    cout << rectangle.GetPerimetr() << endl;
    cout << rectangle.GetSquare() << endl<<"//////"<<endl;
    ///////
    cout << "Parallelogram" << endl;
    Parallelogram parallelogram(10, 15, 20);
    parallelogram.Perimetr();
    parallelogram.Square();
    cout << parallelogram.GetPerimetr() << endl;
    cout << parallelogram.GetSquare() << endl<<"/////"<<endl;
    ///////
    cout << "Trapeze" << endl;
    Trapeze trapeze(10, 15, 20, 30);
    trapeze.Perimetr();
    trapeze.Square();
    cout << trapeze.GetPerimetr() << endl;
    cout << trapeze.GetSquare() << endl<<"//////"<<endl;
    ///////
    cout << "Circle" << endl;
    Circle circle(10);
    circle.Perimetr();
    circle.Square();
    cout << circle.GetPerimetr() << endl;
    cout << circle.GetSquare() << endl<<"//////"<<endl;
    ///////
    cout << "Ellipse" << endl;
    Ellipse ellipse(10, 20);
    ellipse.Square();
    cout << ellipse.GetSquare() << endl<<"//////"<<endl;

}

