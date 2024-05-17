#include "Student.h"
#include <iostream>
using namespace std;

Student::Student() {
	myBatch = NULL;
}


Student::Student(string pstudentID, string pname) {
	name = pname;
	studentID = pstudentID;
}

Student::~Student() {
	cout << "Student " << name << " with id " << studentID << " deleted. " << endl;
	//   for (int r = 0; r < examCount; r++)
	//      delete myExams[r];
}


void Student::display() {
	cout << "Student ID : " << studentID << endl;
	cout << "Name       : " << name << endl;
	//   if (myBatch != NULL)
	//        cout << "Batch : " << myBatch->getName() << endl;
}

void Student::displayLine() {
	cout << studentID << "   " << name << endl;
}

void Student::displayResults() {
	cout << "Stduent ID : " << studentID << endl;
	cout << "Name       : " << name << endl;
	//   cout << "Results" << endl;
	//   for (int r = 0;r < examCount; r++)
	//      myExams[r]->display(); 
}
