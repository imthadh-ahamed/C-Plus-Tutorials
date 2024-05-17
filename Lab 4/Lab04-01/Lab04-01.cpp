// Lab04-01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

float areaOfCircle(float radius);
float areaOfRectangle(float recLength, float width);
float square(float sqrLength);
float fencePerimeter(float &len, float &wid);

struct Circle {
    float radius;
};

struct Rectangle {
    float recLength;
    float width;
};

struct Square {
    float sqrLength;
};

int main()
{
    Rectangle mainRec;
    Rectangle grayRec;
    Circle bluCirc;
    Square graySqr;

    float circArea, recAreaMain, recAreaG, sqrArea, areaOfGreen, fencePeri;

    cout << "Enter radius value: ";
    cin >> bluCirc.radius;

    circArea = areaOfCircle(bluCirc.radius);
    cout << "Area of Circle: " << setw(5) << setprecision(4) <<circArea << endl << endl;

    cout << "Enter length value of main rectangle: ";
    cin >> mainRec.recLength;

    cout << "Enter width value of main rectangle: ";
    cin >> mainRec.width;

    recAreaMain = areaOfRectangle(mainRec.recLength, mainRec.width);
    cout << "Area of Green rectangle: " << recAreaMain << endl << endl;

    cout << "Enter length value of gray rectangle: ";
    cin >> grayRec.recLength;

    cout << "Enter width value of gray rectangle: ";
    cin >> grayRec.width;

    recAreaG = areaOfRectangle(grayRec.recLength, grayRec.width);
    cout << "Area of Gray rectangle: " << recAreaG << endl << endl;

    cout << "Enter length value of Square: ";
    cin >> graySqr.sqrLength;

    sqrArea = square(graySqr.sqrLength);
    cout << "Area of Gray square: " << sqrArea << endl << endl;

    areaOfGreen = recAreaMain - (circArea + sqrArea + recAreaG);
    cout << "Area of Green Land: " << setw(5) << setprecision(4) << areaOfGreen << endl << endl;

    fencePeri = fencePerimeter(mainRec.recLength, mainRec.width);
    cout << "The cost per unit(in meters): " << setw(3) << setprecision(2) << fencePeri << endl;

    return 0;
}

float areaOfCircle(float radius) {
    return 22 / 7.0 * radius * radius;
}

float areaOfRectangle(float recLength, float width) {
    return recLength * width;
}

float square(float sqrLength) {
    return sqrLength * sqrLength;
}

float fencePerimeter(float& len, float& wid) {
    return (2 * len) + (2 * wid);
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
