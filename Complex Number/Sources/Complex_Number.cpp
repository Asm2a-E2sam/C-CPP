#include "Complex_Number.h"
#include <iostream>

using namespace std;


Complex_Number::Complex_Number()
{
    real =0;
    img = 0;
    //cout << "default"<< endl;
}

Complex_Number::Complex_Number(float val):real(val),img (val){
    //cout << "one"<< endl;
}

Complex_Number::Complex_Number(float val1, float val2):real(val1),img (val2){
    //cout << "two"<< endl;
}

void Complex_Number::set_real(float real){
    Complex_Number::set_real(real);
}

float Complex_Number::get_real(){
    return real;
}

void Complex_Number::set_img(float _img){
    img=_img;
    //this.img= img;
}

float Complex_Number::get_img(){
    return img;
}

void Complex_Number::print_com_num(){
    if(img >= 0){
        cout << real << "+" << img << "i" << endl;
    }
    else{
        cout << real << img << "i" << endl;
    }
}

Complex_Number Complex_Number::add_complex(Complex_Number c2){
    Complex_Number result;
    result.real = real+c2.real;
    result.img  = img +c2.img;
    return result;
}

Complex_Number Complex_Number::sub_complex(Complex_Number c2){
    Complex_Number result;
    result.real = real-c2.real;
    result.img  = img -c2.img;
    return result;
}

Complex_Number Complex_Number::operator+(Complex_Number c2){
    Complex_Number result;
    result.real = real+c2.real;
    result.img = img+c2.img;
    return result;
}
Complex_Number Complex_Number::operator-(Complex_Number c2){
    Complex_Number result;
    result.real = real-c2.real;
    result.img = img-c2.img;
    return result;
}

Complex_Number Complex_Number::operator++(){
    ++real;
    ++img;
    return *this;
}

Complex_Number Complex_Number::operator++(int val){
    real++;
    img++;
    return *this;
}

Complex_Number Complex_Number::operator=(Complex_Number c2){
    real = c2.real;
    img = c2.img;
    return *this;
}

bool Complex_Number::operator==(Complex_Number c2){
    if(real == c2.real && img == c2.img)
        return true;
    return false;

}

Complex_Number Complex_Number::operator+=(Complex_Number c2){
    real += c2.real;
    img += c2.img;
    return *this;
}

Complex_Number Complex_Number::operator-=(Complex_Number c2){
    real -= c2.real;
    img -= c2.img;
    return *this;
}

float Complex_Number::operator[] (char ch){
    if (ch == 'r' || ch == 'R')
        return real;
    else if (ch == 'i' || ch == 'I')
        return img;
    else
        return -1;
}
Complex_Number Complex_Number::operator+(float val){
    real +=val;
    return *this;
}

Complex_Number::~Complex_Number(){
    cout << "Destructor ..."<< endl;
}
