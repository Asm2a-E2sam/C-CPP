#include <iostream>
#include "Complex_Number.h"

using namespace std;

int main()
{
    Complex_Number c1(2,1);
    cout << "First  = ";
    c1.print_com_num();

    Complex_Number c2(4,2);
    cout << "Second = ";
    c2.print_com_num();

    cout << "\n ******* \n";
    ++c1;
    c1.print_com_num();

    cout << "\n ******* \n";
    c2++;
    c2.print_com_num();

    cout << "\n ******* \n";
    Complex_Number r1 =c1+c2;
    r1.print_com_num();

    cout << "\n ******* \n";
    Complex_Number r2 =c1-c2;
    r2.print_com_num();

    cout << "\n ******* \n";


    /*
    cout << "\n ******* \n";
    Complex_Number c3 = c1.add_complex(c2);
    cout << "Add = ";
    c3.print_com_num();

    cout << "\n ******* \n";
    Complex_Number c4 = c1.sub_complex(c2);
    cout << "Sub = ";
    c4.print_com_num();
    */

    return 0;
}
