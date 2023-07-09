#include <iostream>
#include "Employer.h"
#include "President.h"
#include "Manager.h"
#include "Worker.h"

int main()
{
    string* nameP = new string("Pavlo Khasanov");
    string* birthDateP = new string("18.08.1999");
    string* jobTitleP = new string("President");
    string* electionDateP = new string("18.08.2024-18.08.2029");

    string* nameM = new string("Maria Klishenko");
    string* birthDateM = new string("11.03.1991");
    string* jobTitleM = new string("Manager");
    double* salaryM = new double{ 3150 };

    string* nameW = new string("Petro Dobrovolska");
    string* birthDateW = new string("15.05.1995");
    string* jobTitleW = new string("Worker");
    double* salaryW = new double{ 2650 };

    Employer* empl[3] = {new President(nameP, birthDateP, jobTitleP, electionDateP), new Manager(nameM, birthDateM, jobTitleM, salaryM), new Worker(nameW, birthDateW, jobTitleW, salaryW)};
    ((President*)empl[0])->Print();
    ((Manager*)empl[1])->Print();
    ((Worker*)empl[2])->Print();

    delete empl[0];
    delete empl[1];
    delete empl[2];
}