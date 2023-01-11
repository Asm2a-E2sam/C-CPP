#include <iostream>
#include <string.h>
#include "Student.h"
using namespace std;

Student::Student()
{
    id=0;
    top=0;
    name="";
    email ="";
    grades = new int[3];
    username="";
    password="";
}

Student::Student(int _id, string _name, string _email){
    id=_id;
    top=0;
    email =_email;
    name=_name;
    grades = new int[3];
    username="";
    password="";
}

void Student::set_id(int _id){
    id=_id;
}
int Student::get_id(){
    return id;
}

void Student::set_name(string _name){
    name=_name;
}

string Student::get_name(){
    return name;
}

void Student::set_email(string _email){
    email=_email;
}

string Student::get_email(){
    return email;
}

void Student::push_grade(int g){
    if(top<3){
        grades[top] =g;
        top++;
    }else{
        cout<< "You Fill All Grades"<<endl;
    }
}
int Student::pop_grade(){
    if(top>0){
        top--;
        return grades[top];
    }else{
        return -1;
    }
}

void Student::print_student(){
    cout << "ID     :" << id<<endl;
    cout << "Name   :" << name<<endl;
    cout << "Email  :" << email<<endl;
    cout << "Grades :" << endl;
    for(int i=0;i<top ;i++){
        cout <<"Subject " <<i+1<<" = "<< grades[i]<<endl;
    }
    if(username != "" && password != ""){
        cout << "Username :" <<username <<endl;
        cout << "Password :" ;
        for(int i=0; i<password.size();i++)
             cout << "*";
        cout << endl;
    }
}

int Student::totalgrade(){
    int total=0;
    for(int i=0;i<top ;i++){
        total += grades[i];
    }
    return total;
}
void Student::generate_U_P(){
     username = email;
     password = name;
     password+= id;
}

int Student::operator+(Student s2){
    int sum=0;
    sum =totalgrade();
    sum +=s2.totalgrade();
    return sum;
}

bool Student::operator==(Student s2){
    if(username == s2.username && password == s2.password)
        return true;
    return false;
}

Student::~Student()
{
    delete [] grades;
}
