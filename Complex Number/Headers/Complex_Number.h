#ifndef COMPLEX_NUMBER_H
#define COMPLEX_NUMBER_H


class Complex_Number
{
    private:
        float real;
        float img;

    public:
        Complex_Number();
        Complex_Number(float);
        Complex_Number(float,float);
        void set_real(float);
        float get_real();
        void set_img(float);
        float get_img();
        void print_com_num();
        Complex_Number add_complex(Complex_Number c2);
        Complex_Number sub_complex(Complex_Number c2);

        Complex_Number operator+(Complex_Number);
        Complex_Number operator-(Complex_Number);
        Complex_Number operator++();
        Complex_Number operator++(int);
        Complex_Number operator=(Complex_Number);

        bool operator==(Complex_Number);
        Complex_Number operator+=(Complex_Number);
        Complex_Number operator-=(Complex_Number);

        float operator[] (char);

        Complex_Number operator+(float);

        ~Complex_Number();

};

#endif // COMPLEX_NUMBER_H
