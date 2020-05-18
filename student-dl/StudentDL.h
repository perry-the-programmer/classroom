#include<string>
using namespace std;

class Student
{
private:
    int rollNumber;
    string name;

public:
    void setName(string);
    string getName();
    void setRollNumber(int);
    int getRollNumber();
};
