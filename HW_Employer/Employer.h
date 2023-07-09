#pragma once
#include <iostream>
using namespace std;
class Employer
{
protected:
	string* name;
	string* birthDate;
	string* jobTitle;
public:
	Employer(string* name, string* birthDate, string* jobTitle) : name{ name }, birthDate{ birthDate }, jobTitle{ jobTitle } {};
	virtual void Print() = 0;
	virtual ~Employer();
};

