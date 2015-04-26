/* BCS 230 (CRN 23798)
 * HW 8 - Due 04/14/2015
 * Nicholas Sargente - ID R01621655
 * Date.cpp - Calendaric Functions 
 ********************************************************************
 * I Hereby claim all the following code is my own original work.
 */

#include <iostream>
#include "Date.h"
using namespace std;

Date::Date()
{
   day = month = 1;
   year = 1900;
}

void Date::print()
{
    cout << month << "/" << day << "/" << year << endl;
}

Date::Date(int y, int m, int d)
{
    setDate(y, m, d);
}

void Date::setDate(int y, int m, int d)
{
    if(y<2016 && y>1899) {
        year = y;
    } else {
        year = 1900;
    }

    if (m<13 && m>0) {
        month = m;
    } else {
        month = 1;
    }

    switch(m){
        case 2:
            if(d < 29) {
                day = d;
            } else {
                day = 1;
            }
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            if(d < 31) {
                day = d;
            } else {
                day = 1;
            }
            break;
        default:
            if(d < 32) {
                day = d;
            } else {
                day = 1;
            }
    }
}

int Date::getYear() 
{
    return year;
}
int Date::getMonth()
{
    return month;
}
int Date::getDay()
{
    return day;
}

bool Date::equalDate(Date b)
{
    if(day != b.getDay()) {
        return false;
    } else if (month != b.getMonth()) {
        return false;
    } else if (year != b.getYear()) {
        return false;
    } else {
        return true;
    }
}

