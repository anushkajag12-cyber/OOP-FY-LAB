#include <iostream>
using namespace std;
class emp
{
private:
    string Employeename;
    int ID;
    int salary;
    string Employeedepartmentname;

public:
    void input()
    {
        cout << "Name of Employee:";
        cin >> name;
        cout << "ID:";
        cin >> no;
        cout << "Salary:";
        cin >> salary;
        cout << "Employeedepartmentname:";
        cin >> dept;
        cout << "-----------------------" << endl
             << endl;
    }

    void display()
    {

        cout << "Name of Employee:" << name << endl;
        cout << "ID:" << no << endl;
        cout << "Salary:" << salary << endl;
        cout << "Departmentname:" << dept << endl;
        cout << "-------------------------" << endl;
    }
};
int main()
{

    emp e1;
    emp e2;
    emp e3;

    e1.input();
    e2.input();
    e3.input();

    cout << "-----Employee Details-----" << endl;
    e1.display();
    e2.display();
    e3.display();
    return 0;
}