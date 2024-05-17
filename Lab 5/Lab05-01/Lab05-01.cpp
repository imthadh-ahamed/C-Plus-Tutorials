// Lab05-01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "ShapeArea.h"
using namespace std;

int main()
{
    Rectangle greenRec;
    Rectangle grayRec;
    Circle bluCirc;
    Square graySqr;

    float circArea, recAreaGn, recAreaG, sqrArea, areaOfGreen;

    cout << "Enter radius value: ";
    cin >> bluCirc.radius;

    circArea = areaOfCircle(bluCirc.radius);
    cout << "Area of Circle: " << circArea << endl;

    cout << "Enter length value of green rectangle: ";
    cin >> greenRec.recLength;

    cout << "Enter width value of green rectangle: ";
    cin >> greenRec.width;

    recAreaGn = areaOfRectangle(greenRec.recLength, greenRec.width);
    cout << "Area of Green rectangle: " << recAreaGn << endl;

    cout << "Enter length value of gray rectangle: ";
    cin >> grayRec.recLength;

    cout << "Enter width value of gray rectangle: ";
    cin >> grayRec.width;

    recAreaG = areaOfRectangle(grayRec.recLength, grayRec.width);
    cout << "Area of Gray rectangle: " << recAreaG << endl;

    cout << "Enter length value of Square: ";
    cin >> graySqr.sqrLength;

    sqrArea = square(graySqr.sqrLength);
    cout << "Area of Gray square: " << sqrArea << endl;

    areaOfGreen = recAreaGn - (circArea + sqrArea + recAreaG);

    return 0;
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
