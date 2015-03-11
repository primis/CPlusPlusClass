#include <iostream>
#include <fstream>

/* Homework 2 Due 2/12/15
 * Nicholas Sargente
 * Array Processing Problems
 * Utilized heap allocation functions to keep memory safe
 * A bit overkill, but it certainly works
 */

using namespace std;
int streamCopy(istream &src, int dest[], int sz);
int printGrades(int list[], int sz);
int countElements(istream &in);
int paramCount(int bottom, int top, int list[], int sz);
const char* filename="hw2data.txt";
int range[10][2] = {
    { 0, 50}, {50, 55}, {55, 60}, {60, 65}, {65, 70},
    {70, 75}, {75, 80}, {80, 85}, {85, 90}, {90, 100}
};

int main()
{
    int *grades, size;          // Array pointer and its' Size.
    ifstream gFile(filename);
    if(!(gFile.is_open())) {    // File Error.
        cout << "File Error!" << endl;
        return -1;              // Return with an error code
    }
    size = countElements(gFile);
    grades = new int[size];
    streamCopy(gFile, grades, size);
    gFile.close();              // Done with the File, Close it.
    printGrades(grades, size);  // Display Grade zones to stdout.
    delete grades;              // Deallocate array
    system("PAUSE");
    return 0;
}

// Count elements in an input stream of type int.
int countElements(istream &in)
{
    int temp, start, size=0;
    start = in.tellg(); // Get Current Location
    while (!in.eof()) {
        in >> temp;     // Trash the actual content, we're just counting.
        size++;         // Get Elemet count
    }
    in.clear();         // Clear Stream's EOF Flag
    in.seekg(start);    // Rewind Stream.
    return --size;      // cin reads the EOF as an extra element
}

// Copy sz elements from Stream src to Array dest
int streamCopy(istream &src, int dest[], int sz)
{
    int i;
    for(i=0;i<sz;i++) {
        src >> dest[i];    // Get Grades into the array.
    }
    return i;              // Return Elements of the array
}

int printGrades(int list[], int sz)
{
    int i = 0;
    cout << "Range\t Number of Students"<< endl;
    for (i=0;i<10; i++) {
        cout << range[i][0] << "  --  " << range[i][1] << "\t";
        cout << paramCount(range[i][0], range[i][1], list, sz) << endl;
    }
}

// paramCount - Count numbers within parameters
int paramCount(int bottom, int top, int list[], int sz)
{
    int i, count=0;
    if(top == 100) {
        top = 101;  // Edge Case Fix.
    }
    for(i=0; i<sz; i++) {
        if((list[i] >= bottom) && (list[i] < top)){
            count++;
        }
    }
    return count;
}

