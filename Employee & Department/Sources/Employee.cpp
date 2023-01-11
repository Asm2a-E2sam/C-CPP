#include <iostream>
#include "Employee.h"
#include "string.h"
using namespace std;

Employee::Employee()
{
    id = 0;
    name= "";
    salary=0.0;
}
Employee::Employee(int _id ,string _name,float _salary){
    id = _id;
    name= _name;
    salary=_salary;
}
void Employee::set_id(int _id){
    id=_id;
}
int Employee::get_id(){
    return id;
}
void Employee::set_name(string _name){
    name=_name;
}
string Employee::get_name(){
    return name;
}
void Employee::set_salary(float _salary){
    salary=_salary;
}
float Employee::get_salary(){
    return salary;
}

void Employee::print_Employee(){
    cout <<"Id     :"<<id    <<endl;
    cout <<"Name   :"<<name  <<endl;
    cout <<"salary :"<<salary<<endl;
}
Employee::~Employee()
{
    //dtor
}
