/* 
 * BCS 230 (CRN 23798) Lab3 - 2/18/2015
 * Nicholas Sargente - ID R01621655
 * Structures
 */
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// I used Typedef so I didn't have to keep using the "struct" to define things
// Also for dot addressing :)

typedef struct {
    string  courseName;
    int     courseID;
    int     credit;
} courseType;
typedef struct {
    string studentName;
    courseType firstCourse;
    courseType secondCourse;
} studentType;

void printCourse(courseType course);



int main()
{
    courseType  course1, course2;
    studentType student1;

    course1.courseName  = "Programming II";
    course1.courseID    = 71200;
    course1.credit      = 3;

    course2.courseName  = course1.courseName;
    course2.courseID    = course1.courseID;
    course2.credit      = course1.credit;
    course2.courseName  = "Web Database Development";
    course2.courseID   += 100;

    student1.studentName    = "Alice Brown";
    student1.firstCourse    = course1;
    student1.secondCourse   = course2;
    
    // Print Courses Out
    printCourse(course1);
    printCourse(course2);

    // Print Student Info
    cout << student1.studentName << ":" << endl;
    cout << student1.firstCourse.courseName << endl;
    printCourse(student1.secondCourse); // Hey, Why not reuse functionality!

    system("PAUSE");
    return 0;
}

void printCourse(courseType course)
{
    cout << course.courseID << ":\t" << left << setw(30) << course.courseName;
    cout << " Credits:" << course.credit << endl;
}

