#include "Square.h"

Square::Square(){}

Square::Square(int side){
    set_dim1(side);
}

float Square::CalcArea(){return get_dim1()*get_dim1();};

void Square::operator=(Square s){
    set_dim1(s.get_dim1());
}

Square::~Square(){}
