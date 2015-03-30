/* BCS 230 (CRN 23798)
 * HW 6 - Due 3/26/2015
 * Nicholas Sargente - ID R01621655
 * ParttimeEmployee.cpp - Implementation of the Part time Employee class
 *********************************************************************
 * I hereby claim that all the following code is my own original work.
 */
#include <iostream>
#include "ParttimeEmployee.h"
using namespace std;

void ParttimeEmployee::print(void)
{
    Person::print();
    cout << "\t" << hours << " @ $" << rate << "/hour" << endl;
}

void ParttimeEmployee::setHoursRate(double h, double r)
{
    hours = h;
    rate = r;
}

double ParttimeEmployee::getHours(void)
{
    return hours;
}


double ParttimeEmployee::getRate(void)
{
    return rate;
}

double ParttimeEmployee::getSalary(void)
{
    int temp = 0;
    if(hours > 40) {
        temp = hours - 40;
    }
    return (hours * rate) + (temp * rate * 1.5); /* Overtime is 150% rate */
}

ParttimeEmployee::ParttimeEmployee()
{
    rate = 0.0;
    hours = 0.0;
    Person::setName("", "");
    Person::setID(0);
}

ParttimeEmployee::ParttimeEmployee(string f, string l, int i, double h, double r)
{
    rate = r;
    hours = h;
    Person::setName(f,l);
    Person::setID(i);
}
