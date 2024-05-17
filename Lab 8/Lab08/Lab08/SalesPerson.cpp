#include "SalesPerson.h"
#include <cstring>
#include <iostream>
using namespace std;

SalesPerson::SalesPerson(int pEmpNo, char pName[]) {
	empNo = pEmpNo;
	strcpy_s(name, pName);
}

void SalesPerson::calcSales(Item i1, Item i2) {
	int qty1, qty2;

	cout << "Input Quantity of the Item 1: ";
	cin >> qty1;

	cout << "Input Quantity of the Item 2: ";
	cin >> qty2;

	sales = i1.calcTotal(qty1) + i2.calcTotal(qty2);
}

void SalesPerson::printSales() {
	cout << "Employee No: " << empNo << endl;
	cout << "Employee Name: " << name << endl;
	cout << "Sales " << sales << endl;
}

SalesPerson::~SalesPerson() {
	std::cout << "Emp No :" << empNo << "deleted" << endl;
}
