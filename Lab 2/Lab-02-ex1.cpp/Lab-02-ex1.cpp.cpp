// Lab-02-ex1.cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int searchKey(int srchNum, int numbers[]);
int findMax(int numbers[]);

int main()
{
	int numbers[10];
	int srchKey, i, srchNum, maxNum;

	for (i = 0; i < 10; i++)
	{
		cout << "Enter " << i + 1 << " value: ";
		cin >> numbers[i];
	}

	for (i = 0; i < 10; i++)
	{
		cout << "You entered number " << i + 1 << " value is: " << numbers[i] << endl;
	}

	cout << "Enter search number: ";
	cin >> srchNum;

	srchKey = searchKey(srchNum, numbers);
	if (srchKey == -1)
	{
		cout << "Value not found" << endl;
	}

	else
	{
		cout << "Value index " << srchKey << endl;
	}

	maxNum = findMax(numbers);
	cout << "Maximum number value " << maxNum << endl;
}

int searchKey(int srchNum, int numbers[])
{
	for (int i = 0; i < 10; i++)
	{
		if (numbers[i] == srchNum)
		{
			return i;
		}
	}
	return -1;
}

int findMax(int numbers[])
{
	int max = numbers[0];

	for (int i = 0; i < 10; i++)
	{
		if (max < numbers[i])
		{
			max = numbers[i];
		}
	}
	return max;
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
