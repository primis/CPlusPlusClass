/* BCS 230 (CRN 23798) HW 4- Due 2/24/2015
 * Nicholas Sargente - ID R01621655
 * I Hereby Claim all the following code is my own original work.
 * Record Keeping.
 */

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

const int Class_Size = 25;
const char* filename="hw4data.txt";

typedef struct {
    string  fName;
    string  lName;
    int     score[10];
    double  average;
    char    grade;
} student;
student getData(istream &in);
char    getGrade(double average);
double  getAverage(student s);
void    printStudent(student s);

int main()
{
    ifstream studentFile(filename);
    if(!(studentFile.is_open())) {
        cout << "File Error!" << endl;
        return -1;
    }

    student s[Class_Size];
    int i;
    for(i=0;i<Class_Size;i++) {
        s[i] = getData(studentFile);
        printStudent(s[i]);
    }
    // All Done with the file, clean up and close it.
    studentFile.close();
    system("PAUSE");
    return 0;
}


student getData(istream &in)
{
    student temp;
    int i;

    in >> temp.fName;
    in >> temp.lName;
    
    for(i=0;i<10;i++) {
        in >> temp.score[i];
    }
    temp.average = getAverage(temp);
    temp.grade   = getGrade(temp.average);
    return temp;
}

double getAverage(student s)
{
    int i, temp=0;
    for(i=0; i<10; i++) {
        temp += s.score[i];
    }
    return double(temp)/10.0;
}

char getGrade(double average)
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

void printStudent(student s)
{
    cout << s.fName << " " << s.lName << "\t Average:";
    cout << setw(5) << s.average <<" (" << s.grade << ")" << endl;
}

