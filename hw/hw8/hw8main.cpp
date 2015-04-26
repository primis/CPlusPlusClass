/* BCS 230 (CRN 23798)
 * HW 8 - Due 04/14/2015
 * Nicholas Sargente - ID R01621655
 * hw8main.cpp - Pointer Arithmetic
 ********************************************************************
 * I Hereby claim all the following code is my own original work.
 */

#include <iostream>
#include "Date.h"

using namespace std;

void addTen(int *p, int len)
{
    while(len--) {
        *(p++) += 10;
    }
}
void printArray(int y[], int len)
{
    int i;
    for(i = 0; i<len; i++) {
        cout << y[i] <<endl;
    }
}

int main()
{
    int i;   
    int     room = 12;
    int *roomPtr = &room;
    int arrayA[5]={1,3,5,7,9};
    int arrayB[5]={2,4,6,8,10};

    int *ptrA = arrayA;
    int *ptrB = arrayB;
    
    for(i=0; i<5; i++) {
        cout << "arrayA["<< i <<"] = " << arrayA[i] << endl;
    }

    for(i=0; i<5; i++) {
        cout << "arrayB["<< i <<"] = " << arrayB[i] << endl;
    }

    for(i=0; i<5; i++) {
        *(ptrA+i) += 10;
    }
    
    for(i=0; i<5; i++) {
        cout << "arrayA["<< i <<"] = " << arrayA[i] << endl;
    }

    addTen(ptrB, 5);

    for(i=0; i<5; i++) {
        cout << "arrayB["<< i <<"] = " << arrayB[i] << endl;
    }

    Date deadline(2015, 4, 18);
    deadline.print();
    cout << &deadline << endl;
    Date *deadlinePtr = &deadline;
    cout << &deadlinePtr << endl;
    deadlinePtr->print();
    deadlinePtr->setDate(2015, 4, 25);
    deadlinePtr->print();
    cout << "Size of Array: ";
    cin >> room;
    int *Ay = new int[room];
    for (i=0; i<room; i++) {
        cout << "Element " << i << " ";
        cin >> Ay[i];
    }   
    printArray(Ay, room);
    delete Ay;
    return 0;
}
