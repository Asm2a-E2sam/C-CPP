#include <iostream>
#include "overload_sum.h"

using namespace std;

overload_sum::overload_sum()
{
    cout << "welcome to new object"<<endl;
}

void overload_sum::sum (int n1,int n2){
    cout << n1 <<" + "<<n2 <<" = " <<n1+n2 <<endl;
}

void overload_sum::sum (float n1,float n2){
    cout << n1 <<" + "<<n2 <<" = "<<n1+n2<<endl;
}

void overload_sum::sum (int n1,float n2){
    cout << n1 <<" + "<<n2 <<" = "<<n1+n2<<endl;
}

void overload_sum::sum (float n1,int n2){
    cout << n1 <<" + "<<n2 <<" = "<<n1+n2<<endl;
}

void overload_sum::sum (int n1,float n2,double n3){
    cout << n1 <<" + "<<n2 <<" + "<< n3<<" = "<<n1+n2+n3<<endl;
}

int overload_sum::sum (int arr[]){
    int _size = sizeof(arr) / sizeof(int);
    int s = 0;
    for (int i=0;i<=_size;i++){
        s += arr[i];
    }
    return s;
}

overload_sum::~overload_sum()
{
    //dtor
}
