#include <iostream>
#include "Employee.h"
#include "string.h"
#include "Department.h"

using namespace std;

int main()
{
    Employee e1(1,"Asmaa",2000);
    //e1.print_Employee();

    Employee e2(2,"Essam",2000);
    //e2.print_Employee();

    Department d1(1,"HR");
    d1.push_Emp(e1);
    d1.push_Emp(e2);

    cout << "Department Information:"<<endl;
    d1.print_Dep_Inf();
    cout << "Department Employees :"<<endl;
    d1.print_Emp_Dep();

    cout << "\nPoP Employees :"<<endl;
    d1.pop_emp();

    cout << "\nDepartment Employees after pop:"<<endl;
    d1.print_Emp_Dep();

    return 0;
}
