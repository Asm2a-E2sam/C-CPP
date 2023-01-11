#include <iostream>
#include <string.h>
#include "Student.h"
using namespace std;

int main()
{
    cout <<"Create student 1"<<endl;
    Student s1(1,"asmaa","asmaa@gmail.com");
    //s1.print_student();

    //cout <<"\nAfter Push Grades of student 1"<<endl;
    s1.push_grade(100);
    s1.push_grade(95);
    s1.push_grade(90);
    //s1.print_student();

    cout <<"\nAfter Generates of student 1"<<endl;
    s1.generate_U_P();
    s1.print_student();

    cout <<"\nTotal Grades of student 1 : "<< s1.totalgrade() <<endl<<endl;

    cout <<"Create student 2"<<endl;
    Student s2(2,"gana","gana@gmail.com");

    s2.push_grade(90);
    s2.push_grade(85);
    s2.push_grade(100);

    s2.generate_U_P();
    s2.print_student();

    cout <<"\nTotal Grades of student 1 : "<< s2.totalgrade() <<endl<<endl;

    cout <<"\nTotal Grades of 2 students : "<< s1+s2 <<endl<<endl;

    cout <<"Create student 1"<<endl;
    Student s3(1,"asmaa","asmaa@gmail.com");

    s3.generate_U_P();


    if(s1 == s3){
        cout <<"\nTwo student is same .."<<endl;
    }else{
        cout <<"\nTwo student is different .."<<endl;
    }


    return 0;
}
