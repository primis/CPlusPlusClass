/* BCS 230 (CRN 23798)
 * HW 6 - Due 3/26/2015
 * Nicholas Sargente - ID R01621655
 * hw6main.cpp - Test file for the classes
 ********************************************************************
 * I Hereby claim all the following code is my own original work.
 */

#include <iostream>

#include "Person.h"
#include "ParttimeEmployee.h"
using namespace std;

int main() 
{
    Person a;
    Person b("Joe", "Stallone", 33);
    ParttimeEmployee c("Mike", "Saunders", 34, 20, 50);
    ParttimeEmployee d;

    a.setName("Joe", "Stallone");
    a.print();
    b.print();
    if (a.equalName(b)) {
        cout << "SAME PERSON" << endl;
    } else {
        cout << "Different People" << endl;
    }
    d.setName("Billybob", "Johnson");
    d.setID(38);
    d.setHoursRate(50, 10);

    c.print();
    d.print();
    if (c.equalName(d)) {
        cout << "SAME PERSON" << endl;
    } else {
        cout << "Different People" << endl;
    }
    return 0;
}
