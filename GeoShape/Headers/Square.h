#ifndef SQUARE_H
#define SQUARE_H
#include <iostream>
#include "GeoShape.h"

using namespace std;


class Square : protected GeoShape
{
    public:
        Square();
        Square(int);
        float CalcArea();
        void operator=(Square);
        ~Square();
};

#endif // SQUARE_H
