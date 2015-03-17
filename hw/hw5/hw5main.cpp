/* BCS 230 (CRN 23798)
 * HW 5 - Due 3/19/2015
 * Nicholas Sargente - ID R01621655
 * hw5main.cpp - Test file for the classes. 
 * Classful Version of Homework 4.
 ********************************************************************
 * I Hereby Claim All the following code is my own original work.
 */


#include <iostream>
#include <fstream>
#include "studentType.h"

using namespace std;

const char *filename = "hw5data.txt";
const int  Class_Size= 25;

int main()
{    
    ifstream studentFile(filename);
    if(!(studentFile.is_open())) {
        cout << "File Error!" << endl;
        return 0; 
    }

    studentType s[Class_Size];
    int i;
    for(i=0;i<Class_Size;i++) {
        s[i].setStudent(studentFile);
        s[i].printStudent();
    }
    // All Done with the file, clean up and close it.
    studentFile.close();
    system("PAUSE");
    return 0;
}
