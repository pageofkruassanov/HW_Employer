#pragma once
#include "Employer.h"
class Worker : public Employer
{
	double* salary;
public:
	Worker(string* name, string* birthDate, string* jobTitle, double* salary) : Employer{ name, birthDate, jobTitle }, salary{ salary } {};
	void Print();
	~Worker();
};

