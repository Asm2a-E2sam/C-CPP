#ifndef MY_STACK_H
#define MY_STACK_H


class my_stack
{
    private:
        int top;
        int Size;
        int* ptr;
        static int counter;
    public:
        my_stack();
        my_stack(int);
        void push(int);
        int pop();
        static int get_counter();
        ~my_stack();

};

#endif // MY_STACK_H
