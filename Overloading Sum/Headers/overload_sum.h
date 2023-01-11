#ifndef OVERLOAD_SUM_H
#define OVERLOAD_SUM_H


class overload_sum
{
    public:
        overload_sum();
        void sum (int ,int);
        void sum (float ,float);
        void sum (int,float);
        void sum (float ,int);
        void sum (int,float,double);
        int sum (int[]);
        ~overload_sum();
};

#endif // OVERLOAD_SUM_H
