#include "Manager.h"

void Manager::Print()
{
	cout << "Name and Surname: " << *name << endl;
	cout << "Date of Birth: " << *birthDate << endl;
	cout << "Job title: " << *jobTitle << endl;
	cout << "Salary: " << *salary << endl;
}

Manager::~Manager()
{
	cout << "I'm Manager destructor!" << endl;
	delete salary;
}
