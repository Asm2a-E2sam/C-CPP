#ifndef GEOSHAPE_H
#define GEOSHAPE_H
#include <iostream>

using namespace std;


class GeoShape
{
    private:
        int dim1;
        int dim2;
    protected:

    public:
        GeoShape();
        GeoShape(int);
        GeoShape(int,int);
        void set_dim1(int);
        int get_dim1();
        void set_dim2(int);
        int get_dim2();
        virtual float CalcArea()=0;
        ~GeoShape();

};

#endif // GEOSHAPE_H
