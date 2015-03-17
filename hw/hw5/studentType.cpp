/* BCS 230 (CRN 23798)
 * HW 5 - Due 3/19/2015
 * Nicholas Sargente - ID R01621655
 * studentType.cpp - Class Definition for a student. 
 * Classful Version of Homework 4.
 ********************************************************************
 * I Hereby Claim All the following code is my own original work.
 */

using namespace std;

#include <iostream>
#include <iomanip>
#include "studentType.h"

// Constructor. "Zero" out the variables
studentType::studentType()
{
    int i;
    studentFName = "";
    studentLName = "";
    for(i=0; i<10; i++) {
        scores[i] = 0;
    }
    average = 0.0;
    grade = ' ';
}

string studentType::getFName()
{
    return studentFName;
}

string studentType::getLName()
{
    return studentLName;
}


// setStudent - Reads from an input stream and calculates
// Average and the Grade.
void studentType::setStudent(istream &in)
{
    int i;

    in >> studentFName;
    in >> studentLName;
    
    for(i=0;i<10;i++) {
        in >> scores[i];
    }
    average = getAverage();
    grade   = getGrade();
}

// getGrade - Figure out the letter grade from the average.
char studentType::getGrade()
{
    if(average < 60) {
        return 'F';
    } else if (average < 70) {
        return 'D';
    } else if (average < 80) {
        return 'C';
    } else if (average < 90) {
        return 'B';
    }
    return 'A'; 
}

// getAverage - Calculate an average from the test scores
double studentType::getAverage()
{
    int i;
    double a = 0.0; // Average 
    for(i=0; i<10; i++) {
       a += scores[i];
    }
    return a/10;    // 10 scores.
}

// printStudent - Print a formatted string of all informaiton
// to the standard output
void studentType::printStudent()
{
    int i;
    cout << setw(16) << studentFName + " " + studentLName;
    for(i = 0; i<10; i++) {
        cout << setw(5) << scores[i];
    }
    cout << setw(5) << getAverage() << setw(2) << getGrade() << endl;
}
