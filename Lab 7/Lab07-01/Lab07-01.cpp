// Lab07-01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Distance.h"
#include <iostream>
using namespace std;

int main()
{
    // Ex - 01
    /*Distance d1;
    d1.printDistance();

    Distance d2(11, 6.25);
    d2.printDistance();
    */

    /*
    // Ex - 2
    Distance* d1p = new Distance();
    d1p->printDistance();

    Distance* d2p = new Distance(11, 6.25);
    d2p->printDistance();

    delete d1p;
    delete d2p;
    */

    // Ex - 3
    Distance dist1, dist3;
    Distance dist2(11, 6.25);

    dist1.inputDistance();
    dist3.addDistance(dist1, dist2);
    dist3.printDistance();

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
