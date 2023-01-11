#ifndef STUDENT_H
#define STUDENT_H

using namespace std;


class Student
{
    private:
        int id;
        string name;
        int top;
        string email;
        int* grades;
        string username;
        string password;
    public:
        Student();
        Student(int,string, string);

        void set_id(int);
        int get_id();

        void set_name(string);
        string get_name();

        void set_email(string);
        string get_email();

        void push_grade(int);
        int pop_grade();

        void print_student();
        int totalgrade();
        void generate_U_P();

        int operator+(Student);
        bool operator==(Student);

        ~Student();

};

#endif // STUDENT_H
