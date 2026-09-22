#include <iostream>
using namespace std;
class student
{
 public:
        string name;
        string roll_no;
        float perecentage;

 void display()
 {
        cout<<"Name:"<<name<<endl;
        cout<<"Roll No:"<<roll_no<<endl;
        cout<<"percentage:"<<percentage<<endl;
        cout<<"-----------------------"<<endl;
 }
};
 int main()
 {
        student s1;
        s1.name="Anushka";
        s1.roll_no="39";
        s1.percentage=91.40;
        s1.display();

         student s2;
        s2.name="Riya";
        s2.roll_no="23";
        s2.percentage=90.40;
        s2.display();

         student s3;
        s3.name="Rita";
        s3.roll_no="42";
        s3.percentage=95.0;
        s3.display();
        return 0;
 }