#ifndef EMPLOYEE_H
#define EMPLOYEE_H
using namespace std;


class Employee
{
    private:
        int id;
        string name;
        float salary;
    public:
        Employee();
        Employee(int,string,float);
        void set_id(int);
        int get_id();
        void set_name(string);
        string get_name();
        void set_salary(float);
        float get_salary();
        void print_Employee();
        ~Employee();


};

#endif // EMPLOYEE_H
