#pragma once
#include "Employer.h"
class President : public Employer
{
	string* electionDate;
public:
	President(string* name, string* birthDate, string* jobTitle, string* electionDate) : Employer{name, birthDate, jobTitle }, electionDate{ electionDate } {};
	void Print();
	~President();

};

