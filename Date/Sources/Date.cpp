#include "Date.h"
#include <iostream>
using namespace std;


Date::Date()
{
    day=1;
    month=1;
    year=2000;
}

Date::Date(int _day, int _month, int _year)
{
    day=_day;
    month=_month;
    year=_year;
}

void Date::set_day(int _day){
    day = _day;
}

int Date::get_day(){
    return day;
}

void Date::set_month(int _month){
    month = _month;
}

int Date::get_month(){
    return month;
}

void Date::set_year(int _year){
    year = _year;
}

int Date::get_year(){
    return year;
}

void Date::PrintDate(){
    cout << day <<"/"<<month<<"/"<<year<<endl;
}

Date Date::subtractDate(Date d2){
    Date result;

    if(year>=d2.get_year()){
        result.set_year(year-d2.get_year());
        if(month > d2.get_month()){
            result.set_month(month-d2.get_month());
            if(day > d2.get_day()){
                result.set_day(day-d2.get_day());
            }else{
                result.set_day((day-d2.get_day())+30);
                result.set_month(result.get_month()-1);
            }
        }else{
            result.set_month((month-d2.get_month())+12);
            result.set_year(result.get_year()-1);
            if(day > d2.get_day()){
                result.set_day(day-d2.get_day());
            }else{
                result.set_day((day-d2.get_day())+30);
                result.set_month(result.get_month()-1);
            }
        }
    }else{
        result.set_year(d2.get_year()-year);
        if(d2.get_month() > month){
            result.set_month(d2.get_month()-month);
            if(d2.get_day()>day){
                result.set_day(d2.get_day()-day);
            }else{
                result.set_day((d2.get_day()-day)+30);
                result.set_month(result.get_month()-1);
            }
        }else{
            result.set_month((d2.get_month()-month)+12);
            result.set_year(result.get_year()-1);
            if(d2.get_day()>day){
                result.set_day(d2.get_day()-day);
            }else{
                result.set_day((d2.get_day()-day)+30);
                result.set_month(result.get_month()-1);
            }
        }
    }

     return result;
}

int Date::calcDays(Date d2){
    return getDays()-d2.getDays();
}

int Date::getDays() {
    int ans = 0;
    for (int i = 1900; i < year; ++ i) {
        if (isLeap(i)) {
            ans += 366;
        } else {
            ans += 365;
        }
    }
    for (int i = 1; i < month; ++ i) {
        switch(i) {
            case 1: ans += 31; break;
            case 2:
                if(isLeap(year)){
                    ans +=29;
                }else{
                    ans +=28;
                }
                break;
            case 3: ans += 31; break;
            case 4: ans += 30; break;
            case 5: ans += 31; break;
            case 6: ans += 30; break;
            case 7: ans += 31; break;
            case 8: ans += 31; break;
            case 9: ans += 30; break;
            case 10: ans += 31; break;
            case 11: ans += 30; break;
            case 12: ans += 31; break;
        }
    }
    return ans += day - 1;
}


bool Date::isLeap(int y) {
        if (y % 400 == 0) {
            return true;
        } else if ( y % 100 == 0) {
            return false;
        } else if (y % 4 == 0) {
            return true;
        } else {
            return false;
        }
}

void Date::PrintDaysAfterSubtracte(){
     int days = year*365+month*30+day;
     cout << "Days (default month = 30) :" << days << endl;
}

void Date::printDateAfterSubtracte(){
     cout << "Days   :" << day << endl;
     cout << "Months :" << month<< endl;
     cout << "Years  :" << year<<endl;
}

Date Date::operator+(Date d2){
    Date result;
    result.day = day+d2.day;
    result.month=month+d2.month;
    result.year=year+d2.year;
    return result;
}
Date Date::operator-(Date d2){
    Date result;
    result.day = day-d2.day;
    result.month=month-d2.month;
    result.year=year-d2.year;
    return result;
}

Date Date::operator=(Date d2){
    day = d2.day;
    month=d2.month;
    year=d2.year;
    return *this;
}

Date Date::operator+(int d){
    day += d;
    return *this;
}

int Date::operator==(Date d2){
    if(day == d2.day && month==d2.month && year==d2.year)
        return 1;
    return 0;
}

int Date::operator[](char c){
    if(c=='d' || c=='D')
        return day;
    else if(c=='m' || c=='M')
        return month;
    else if(c=='y' || c=='Y')
        return year;
    else
        return -1;
}

Date::~Date()
{
    //cout << "Destructor ..."<<endl;

}
