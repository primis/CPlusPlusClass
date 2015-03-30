#ifndef __PARTTIMEEMPLOYEE_H
#define __PARTTIMEEMPLOYEE_H

/* BCS 230 (CRN 23798)
 * HW 6 - Due 3/26/2015
 * Nicholas Sargente - ID R01621655
 * ParttimeEmployee.h - Class for employee's. Inherits from Person.h
 *********************************************************************
 * I Hereby declare that All code in this file is my own original work
 */


#include <string>

#include "Person.h"
using namespace std;

class ParttimeEmployee: public Person
{
    private:
        double hours;
        double rate;
    public:
        ParttimeEmployee(void);
        ParttimeEmployee(string, string, int, double, double);
        void setHoursRate(double, double);
        double getHours(void);
        double getRate(void);
        double getSalary(void);
        void print(void);
};
#endif
