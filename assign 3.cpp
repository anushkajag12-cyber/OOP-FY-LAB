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
        cout << "Name of Employee: ";
        cin >> Employeename;
        cout << "ID: ";
        cin >> ID;
        cout << "Salary: ";
        cin >> salary;
        cout << "Employee department name: ";
        cin >> Employeedepartmentname;
        cout << "-----------------------" << endl
             << endl;
    }

    void display()
    {

        cout << "Name of Employee:" << Employeename << endl;
        cout << "ID:" << ID << endl;
        cout << "Salary:" << salary << endl;
        cout << "Departmentname:" << Employeedepartmentname << endl;
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
