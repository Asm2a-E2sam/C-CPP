#include <iostream>
#include "my_stack.h"
using namespace std;

int my_stack::counter=0;

int my_stack::get_counter(){
    return counter;
}


int main()
{
    int _size;
    my_stack s1;

    s1.push(7);
    s1.push(3);
    s1.push(5);
    s1.push(1);

    cout << s1.pop()<< endl;
    cout << s1.pop()<< endl;
    cout << s1.pop()<< endl;

    cout<< "Enter size of stack 2 :";
    cin >> _size;

    my_stack s2(_size);
    s2.push(3);
    s2.push(4);
    s2.push(7);
    s2.push(1);

    cout << s2.pop()<< endl;
    cout << s2.pop()<< endl;
    cout << s2.pop()<< endl;

    return 0;
}
