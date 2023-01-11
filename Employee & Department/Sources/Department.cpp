#include "Department.h"
#include <iostream>
#include "Employee.h"
#include "string.h"
using namespace std;

Department::Department()
{
    id=0;
    name="";
    top=0;
    ptr = new Employee[10];
}

Department::Department(int _id,string _name){
    id=_id;
    name=_name;
    top=0;
    ptr = new Employee[10];
}

void Department::set_id(int _id){
    id=_id;
}

int Department::get_id(){
    return id;
}

void Department::set_name(string _name){
    name=_name;
}

string Department::get_name(){
    return name;
}

void Department::push_Emp(Employee e){
    if(top < 10){
        ptr[top]=e;
        top++;
    }else{
        cout <<"\n**************************\n";
        cout <<"           Error\n";
        cout <<"     Department is Full "<<endl;
        cout <<"\n**************************\n";
    }
}

void Department::pop_emp(){
    if(top > 0){
        top--;
        ptr[top].print_Employee();
    }else{
        cout <<"\n**************************\n";
        cout <<"           Error\n";
        cout <<"     Department is Empty "<<endl;
        cout <<"\n**************************\n";
    }
}

void Department::print_Dep_Inf(){
    cout <<"Id     :"<<id    <<endl;
    cout <<"Name   :"<<name  <<endl;
}
void Department::print_Emp_Dep(){
    cout <<id << " : "<<name  <<endl;
    for(int i=0; i<top; i++){
        ptr[i].print_Employee();
    }
}


Department::~Department()
{
    delete [] ptr;
}
