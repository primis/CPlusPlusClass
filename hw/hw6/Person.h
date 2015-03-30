/* BCS 230 (CRN 23798)
 * HW 6 - Due 3/26/2015
 * Nicholas Sargente - ID R01621655
 * Person.h - Class definition 
 ********************************************************************
 * I Hereby Claim All the following code is my own original work
 */
#ifndef __PERSON_H
#define __PERSON_H

#include <string>
using namespace std;
class Person
{
    private:
        string  firstName;
        string  lastName;
        int     id;
    public:
        void print(void);
        void setName(string, string);
        void setID(int);
        string getFName();
        string getLName();
        int getID();
        Person(void);
        Person(string, string, int);
        bool equalName(Person &b);
};

#endif
