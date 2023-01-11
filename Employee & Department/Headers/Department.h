#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include <iostream>
#include "Employee.h"
using namespace std;

class Department
{
    private:
        int id;
        string name;
        int top;
        Employee* ptr;
    public:
        Department();
        Department(int,string);
        void set_id(int);
        int get_id();
        void set_name(string);
        string get_name();
        void push_Emp(Employee);
        void pop_emp();
        void print_Dep_Inf();
        void print_Emp_Dep();
        ~Department();

};

#endif // DEPARTMENT_H
