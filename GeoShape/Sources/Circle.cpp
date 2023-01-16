#include "Circle.h"

Circle::Circle(){}

Circle::Circle(int val){
    set_dim1(val);
}

float Circle::CalcArea(){return 3.14*get_dim1()*get_dim1();}

void Circle::operator=(Circle c){
    set_dim1(c.get_dim1());
}

Circle::~Circle(){}
