#ifndef CIRCLE_H
#define CIRCLE_H
#include <iostream>
#include "GeoShape.h"
using namespace std;


class Circle : protected GeoShape
{
    public:
        Circle();
        Circle(int);
        float CalcArea();
        void operator=(Circle);
        ~Circle();

    protected:

    private:
};

#endif // CIRCLE_H
