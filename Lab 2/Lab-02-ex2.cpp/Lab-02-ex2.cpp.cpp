// Lab-02-ex2.cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int area(int length, int width);

struct Rectangle {
    int length;
    int width;
};

int main()
{
    int areaOfYard, areaOfHouse, areaOfLawn;

    Rectangle yard;

    cout << "Enter Yard length: ";
    cin >> yard.length;

    cout << "Enter Yard width: ";
    cin >> yard.width;

    areaOfYard = area(yard.length, yard.width);

    Rectangle house;

    cout << "Enter House length: ";
    cin >> house.length;

    cout << "Enter house width: ";
    cin >> house.width;

    areaOfHouse = area(house.length, house.width);

    areaOfLawn = areaOfYard - areaOfHouse;

    cout << "Area of the green lawn floor: " << areaOfLawn;
}

int area(int length, int width)
{
    return length * width;
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
