#include <iostream>
#include "my_stack.h"
using namespace std;


my_stack::my_stack()
{
    Size = 5;
    top =0;
    ptr= new int[Size];
    counter++;
}
my_stack::my_stack(int _size)
{
    Size = _size;
    top =0;
    ptr= new int[Size];
    counter++;
}
void my_stack::push(int val){
    if(top < Size){
        ptr[top]=val;
        top++;
    }else{
        cout <<"\n***************************************\n";
        cout <<"                 Error\n";
        cout <<"Stack is Full "<<top-Size+1<<" values can not save!!" <<endl;
        cout <<"\n***************************************\n";
        }

}

int my_stack::pop(){
    if(top > 0){
        top--;
        return ptr[top];
    }else{
        return -1;
    }
}


my_stack::~my_stack()
{
    delete [] ptr;
}
