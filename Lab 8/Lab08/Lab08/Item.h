#pragma once
class Item
{
private:
	int itemNo;
	char Name[20];
	double price;
public:
	Item(int pItemNo, char pName[] );
	void setPrice(double pPrice);
	double calTotal(int qty);
	~Item();
};

// Class name should be start with capital letter

