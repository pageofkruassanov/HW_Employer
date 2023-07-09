#pragma once
#include "Employer.h"
class Manager : public Employer
{
	double* salary;
public:
	Manager(string* name, string* birthDate, string* jobTitle, double* salary) : Employer{ name, birthDate, jobTitle }, salary{ salary } {};
	void Print();
	~Manager();
};

