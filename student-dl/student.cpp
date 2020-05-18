#include "StudentDL.h"
#include<cstring>
using namespace std;

void Student::setName(string name)
{
    this->name = name;  
}

string Student::getName()
{
    return this->name;
}

void Student::setRollNumber(int rollNumber)
{
    this->rollNumber = rollNumber;
}

int Student::getRollNumber()
{
    return this->rollNumber;
}