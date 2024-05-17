#pragma once
#ifndef _EXAM
#define _EXAM

#include <string>
using namespace std;

class Exam {
private:
	string module;
	int marks;
public:
	Exam(string module, int marks);
	~Exam();
	void display();
	char grade();
};

#endif
