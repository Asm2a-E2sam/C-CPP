#ifndef DATE_H
#define DATE_H


class Date
{
    private:
        int day;
        int month;
        int year;
    public:
        Date();
        Date(int, int , int);
        void set_day(int);
        int get_day();
        void set_month(int);
        int get_month();
        void set_year(int);
        int get_year();
        void PrintDate();
        Date subtractDate(Date);
        void printDateAfterSubtracte();
        int calcDays(Date);
        int getDays();
        bool isLeap(int y);
        void PrintDaysAfterSubtracte();

        Date operator+(Date);
        Date operator-(Date);
        Date operator=(Date);
        Date operator+(int);
        int operator==(Date);
        int operator[](char);

        ~Date();


};

#endif // DATE_H
