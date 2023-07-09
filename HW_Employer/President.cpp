#include "President.h"

void President::Print()
{
	cout << "Name and Surname: " << *name << endl;
	cout << "Date of Birth: " << *birthDate << endl;
	cout << "Job title: " << *jobTitle << endl;
	cout << "Date of election: " << *electionDate << endl;
}

President::~President()
{
	cout << "I'm President destructor!" << endl;
	delete electionDate;
}
