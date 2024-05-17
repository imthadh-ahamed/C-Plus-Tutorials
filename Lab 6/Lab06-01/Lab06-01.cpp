// Lab06-01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    Circle circ1;
    Rectangle rec1, rec2;
    Square sqr1;

    circ1.setRadius(5.0);
    circ1.getRadius();
    cout << "Area of the circle: " << circ1.calcArea() << endl;
    cout << endl;

    rec1.setLength(18);
    rec1.setWidth(10);
    rec1.getLength();
    rec1.getWidth();
    cout << "Area of the Green Rectangle: " << rec1.calcArea() << endl;
    cout << endl;

    rec2.setLength(7);
    rec2.getLength();
    rec2.setWidth(2);
    rec2.getWidth();
    cout << "Area of the Gray rectangle: " << rec2.calcArea() << endl;
    cout << endl;

    sqr1.setLength(4);
    sqr1.getLength();
    cout << "Area of the square: " << sqr1.calcArea() << endl;
    cout << endl;

    cout << "Area of the green space: " << fixed << setprecision(2) <<  rec1.calcArea() - (rec2.calcArea() + circ1.calcArea() + sqr1.calcArea());


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
