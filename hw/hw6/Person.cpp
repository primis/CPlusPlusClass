/* BCS 230 - HW6 due 3/26/2015
 * HW 6 - Due 3/26/2015
 * Nicholas Sargente - ID R01621655
 * Person.cpp - Implementation file of the Person class.
 ********************************************************************
 * I Hereby claim that all code in this file is my own original work.
 */

#include <iostream>
#include <string.h>
#include "Person.h"
using namespace std;

Person::Person(void)
{
    firstName = "";
    lastName = "";
    id = 0;
}
void Person::print(void)
{
    cout << id << ": " << firstName << " " << lastName << endl;
}

void Person::setName(string f, string l)
{
    firstName   = f;
    lastName    = l;
}

void Person::setID(int i)
{
    id = i;
}

string Person::getFName(void)
{
    return firstName;
}

string Person::getLName(void)
{
    return lastName;
}

int Person::getID(void)
{   
    return id;
}

Person::Person(string f, string l, int i)
{
    setID(i);
    setName(f,l);
}

bool Person::equalName (Person &b)
{
    return (getFName() == b.getFName()) && (getLName() == b.getLName());
}

