#include "Worker.h"

void Worker::Print()
{
	cout << "Name and Surname: " << *name << endl;
	cout << "Date of Birth: " << *birthDate << endl;
	cout << "Job title: " << *jobTitle << endl;
	cout << "Salary: " << *salary << endl;
}

Worker::~Worker()
{
	cout << "I'm Worker destructor!" << endl;
	delete salary;
}
