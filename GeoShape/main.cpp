#include <iostream>
#include "Square.h"
#include "GeoShape.h"
#include "Circle.h"

using namespace std;



float SumOfAllShapesArea(Circle *ptr_c,Square *ptr_s, int _size){
    float sum=0;
    char type;
    int side,reduis;

    for(int i=0; i<_size;i++){
        cout <<"Enter type of shape "<<i+1<<" : ";
        cin >> type;
        switch(type){
            case 'c':
                cout <<"\nEnter reduis : ";
                cin>>side;
                ptr_c= new Circle(side);
                sum+=ptr_c->CalcArea();
                break;
            case 's':
                cout <<"\nEnter side   : ";
                cin>>side;
                ptr_s= new Square(side);
                sum+=ptr_s->CalcArea();
                break;
        }
    }
    return sum;
}

int main()
{
    int numOfShapes;
    Circle *ptr1;
    Square *ptr2;
    float sum;

    cout << "Enter the number of shapes : ";
    cin >> numOfShapes;
    cout <<"\n**********************\n";
    cout <<  "   Type of shapes :";
    cout <<"\n**********************\n";
    cout <<"     c. Circle"<<endl;
    cout <<"     s. Square"<<endl;
    cout <<"**********************\n";


    sum=SumOfAllShapesArea(ptr1,ptr2, numOfShapes);

    cout <<"\n\n********************\n\n";
    cout <<"The sum of all Areas = "<< sum <<endl;


    delete ptr1,ptr2;

    return 0;
}
