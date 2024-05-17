#include "Item.h"
#include <iostream>
#include <cstring>
using namespace std;

Item::Item(int pItemNo, char pName[]) {
	itemNo = pItemNo;
	strcpy_s(Name, pName);
}

void Item::setPrice(double pPrice) {
	price = pPrice;
}

double Item::calTotal(int qty) {
	return price * qty;
}

Item::~Item() {
	cout << "Item No: " << itemNo << "deleted" << endl;
}
