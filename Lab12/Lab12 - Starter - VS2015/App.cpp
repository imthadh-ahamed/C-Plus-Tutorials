#include <iostream>
using namespace std;

#include "Student.h"
#include "Batch.h"
#include "Exam.h"

int main() {
	Batch *batch1 = new Batch(1, "Batch 1 - Malabe Campus");
	Batch *batch2 = new Batch(2, "Batch 2 - Malabe Campus");

	Student *nimal = new Student("IT16231123", "Nimal");
	Student *surangi = new Student("IT16232332", "Surangi");
	Student *kamala = new Student("IT16123411", "Kamala");
	Student *kaushi = new Student("IT16327822", "Kaushi");


	batch1->addStudent(nimal);
	batch1->addStudent(surangi);
	batch2->addStudent(kamala);
	batch2->addStudent(kaushi);
	cout << "Display one Student's Details" << endl;
	kaushi->display();

	cout << "Display a Batch's Details " << endl;
	batch1->display();
	cout << "Display a Batch's Details " << endl;
	batch2->display();

	nimal->addExam("OOC", 89);
	nimal->addExam("IWT", 67);
	nimal->addExam("SPM", 44);

	nimal->displayResults();

	delete nimal;
	delete surangi;
	delete kamala;
	delete kaushi;
	delete batch1;
	delete batch2;

	return 0;
}
