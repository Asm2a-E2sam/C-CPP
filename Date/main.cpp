#include <iostream>
#include "Date.h"
using namespace std;

int calcDays(Date d1, Date d2){
    int d[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int days=0;
    if(d1.get_month() > d2.get_month()){
        int i=d2.get_month();
        while(i==d1.get_month()){
            days += d[i-1];
            i= (i+1)%12;
        }
        if(d1.get_day() > d2.get_day()){
            days +=(d1.get_day()-d2.get_day());
        }else{
            days +=(d2.get_day()-d2.get_day())+d[d2.get_month()-1];
        }
    }
    return days;
}



int main()
{
    Date d1(9,5,2023);
    cout << "Date 1 :";
    d1.PrintDate();

    Date d2;      //d2 = 2/4/1990
    int year, month, day;

    cout <<"Enter Date 2 :"<<endl;

    cout <<"Enter Day   :";
    cin  >> day;
    d2.set_day(day);

    cout <<"Enter Month :";
    cin >> month;
    d2.set_month(month);

    cout <<"Enter Year  :";
    cin >> year;
    d2.set_year(year);

    cout << "Date 2 :";
    d2.PrintDate();

    Date result;
    cout << "\nSum Two Dates = ";
    result = d1+d2;
    result.PrintDate();

    result = d1-d2;
    cout << "\nSub Two Dates = ";
    result.PrintDate();

    result = result+2;
    cout << "\nSum Date + 2 = ";
    result.PrintDate();

    Date result2;
    cout << "\nAssign Two Dates = ";
    result2=result;
    result2.PrintDate();

    if(result == result2)
        cout << "\nYes, Two Dates is same"<< endl;
    else
        cout << "\nNo, Two Dates is not same"<< endl;

    cout << "\n" << result['d']<<endl;
    cout << "\n" << result['M']<<endl;
    cout << "\n" << result['y']<<endl;
    cout << "\n" << result['i']<<endl;

    /*
    Date result = d2.subtractDate(d1);
    result.printDateAfterSubtracte();

    result.PrintDaysAfterSubtracte();
    cout <<"The Exact number of Days = "<<d2.calcDays(d1)<<endl;
    */

    return 0;
}
