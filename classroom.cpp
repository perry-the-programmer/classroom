#include<iostream>
#include "./student-dl/StudentDL.h"

using namespace std;

int main(){
    cout<<"------------------Classroom Application----------------"<<endl;
    Student s;
    s.setName("meetesh");
    s.setRollNumber(1001);
    cout<<"Name is "<<s.getName()<<endl;
    cout<<"Rollnumber is "<<s.getRollNumber()<<endl;
    return 0;
}
