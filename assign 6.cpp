#include <iostream>
using namespace std;

class Employee
{
public:
    int empId;
    string empName;

    // Constructor
    Employee(int id, string name)
    {
        empId = id;
        empName = name;
        cout << "Employee record created." << endl;
    }

    // Display function
    void display()
    {
        cout << "Employee ID: " << empId << endl;
        cout << "Employee Name: " << empName << endl;
    }

    // Destructor
    ~Employee()
    {
        cout << "Employee record removed from memory." << endl;
    }
};

int main()
{
    Employee e1(101, "Rahul");

    e1.display();

    return 0;
}
