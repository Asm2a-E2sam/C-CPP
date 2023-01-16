#include "GeoShape.h"

GeoShape::GeoShape(){dim1=dim2=0;}

GeoShape::GeoShape(int val){dim1=dim2=val;}

GeoShape::GeoShape(int _dim1,int _dim2){
    dim1=_dim1;
    dim2=_dim2;
}

void GeoShape::set_dim1(int _dim1){dim1=_dim1;}

int GeoShape::get_dim1(){return dim1;}

void GeoShape::set_dim2(int _dim2){dim2=_dim2;}

int GeoShape::get_dim2(){return dim2;}

GeoShape::~GeoShape(){}
