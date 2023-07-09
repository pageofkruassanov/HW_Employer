#include "Employer.h"

Employer::~Employer()
{
	cout << "I'm employer destructor!" << endl;
	delete name;
	delete birthDate;
	delete jobTitle;
}
