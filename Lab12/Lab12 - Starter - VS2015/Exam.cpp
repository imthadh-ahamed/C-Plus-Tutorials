#include "Exam.h"
#include <iostream>
using namespace std;

Exam::Exam(string module, int marks) {
	this->module = module;
	this->marks = marks;
}

void Exam::display() {
	cout << module << "   " << marks << "   " << grade() << endl;
}

char Exam::grade() {
	char mygrade;
	if (marks < 45)
		mygrade = 'F';
	else if (marks < 60)
		mygrade = 'C';
	else if (marks < 75)
		mygrade = 'B';
	else
		mygrade = 'A';
	return mygrade;
}

Exam::~Exam() {
	cout << "Exam " << module << ", with marks " << marks << " deleted. " << endl;
}

