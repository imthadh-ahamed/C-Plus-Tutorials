#pragma once

#ifndef _STUDENT
#define _STUDENT

#include "Batch.h"
#include "Exam.h"
#include <string>
using namespace std;

// Forward Declaration needed as both Student and Batch are refering each other
class Batch;

class Student {
private:
	string name;
	string studentID;
	float GPA;
public:
	Student();
	Student(string pstudentID, string pname);
	~Student();
	void display();
	void displayLine();
	void displayResults();
};

#endif
