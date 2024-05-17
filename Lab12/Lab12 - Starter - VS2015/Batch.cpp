#include "Batch.h"
#include "Student.h"
#include <iostream>
using namespace std;

Batch::Batch(int pyear, string pname) {
	year = pyear;
	name = pname;
}

Batch::~Batch() {
	cout << "Batch " << name << " deleted " << endl;
}

void Batch::display() {
	cout << "Year     : " << year << endl;
	cout << "Name     : " << name << endl;
}

string Batch::getName() {
	return name;
}

