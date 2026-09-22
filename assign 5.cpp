#include<iostream>
using namespace std;
class student
{
    public:
    int RollNo;
    string StudentName;
    string StudentDepartmentName;
    char Student_grade;
    student(int RollNo,string StudentName,string StudentDe,char Student_grade)
    {
        this->RollNo=RollNo;
        this->StudentName=StudentName;
        this->StudentDepartmentName=StudentDepartmentName;
        this->Student_grade=Student_grade;
    }
    void display()
    {
        cout<<"------Student Details------"<<endl;
        cout<<"RollNo="<<this->RollNo<<endl;
        cout<<"StudentName="<<this->StudentName<<endl;
        cout<<"StudentDepartmentName="<<this->StudentDepartmentName<<endl;
        cout<<"Student_grade="<<this->Student_grade<<endl;
    }
};
int main()
{
    student s1(39,"Anushka_Jagdale","SOAI","A");
    s1.display();
    return 0;
}