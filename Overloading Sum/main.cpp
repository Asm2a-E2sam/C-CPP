#include <iostream>
#include "overload_sum.h"

using namespace std;

int main()
{
    int arr[3]={3,4,5};
    overload_sum s1;
    int s= s1.sum(arr);

    cout <<"\nThe sum of Array of int : "<<endl;
    cout << arr[0]<<" + "<<arr[1]<<" + "<<arr[2]<<" = "<<s <<endl;
    cout <<"\nThe sum of 2 int : "<<endl;
    s1.sum(4,6);
    cout <<"\nThe sum of 2 float : "<<endl;
    s1.sum(4.3f,6.3f);
    cout <<"\nThe sum of float & int : "<<endl;
    s1.sum(4.87f,6);
    cout <<"\nThe sum of int & float : "<<endl;
    s1.sum(6,4.65f);
    cout <<"\nThe sum of int & float & double : "<<endl;
    s1.sum(6, 6.299f, 4.22);

    return 0;
}
