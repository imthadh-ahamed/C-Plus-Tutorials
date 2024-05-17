#pragma once

#ifndef _BATCH
#define _BATCH

#include "Student.h"
#include <string>
using namespace std;

class Batch {
private:
	int year;
	string name;
public:
	Batch(int pyear, string pname);
	~Batch();
	void display();
	string getName();
};

#endif
