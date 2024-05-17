#pragma once
#include "Item.h"
class SalesPerson
{
private:
	int empNo;
	char name[20];
	double sales;

public:
	SalesPerson(int pEmpNo, char pName[]);
	void calcSales(Item i1, Item i2);
	void printSales();
	~SalesPerson();
};

