/* BCS 230 (CRN 23798)
 * HW 5 - Due 3/19/2015
 * Nicholas Sargente - ID R01621655
 * studentType.h - Class declaration for a student. 
 * Classful Version of Homework 4.
 ********************************************************************
 * I Hereby Claim All the following code is my own original work.
 */

#ifndef __STUDENTTYPE_H
#define __STUDENTTYPE_H

#include <string>
#include <iostream>
class studentType 
{
private:
    std::string studentFName;
    std::string studentLName;
    int scores[10];
    double average;
    char grade;
public:
    studentType();
    void setStudent(std::istream&);
    std::string getFName();
    std::string getLName();
    double getAverage();
    char getGrade();
    void printStudent();
};

#endif
