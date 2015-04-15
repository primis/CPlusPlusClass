/* BCS 230 Lab 8 - 4/15/15
 * Nicholas Sargente
 * Pointers.
 */

#include <iostream>
using namespace std;

/* Horizontal Rule, because I like seperating things */
void hr()
{
    cout <<
    "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="
    << endl;
}
void printArray(int a[], int len)
{
    int i;
    for (i=0; i<len; i++) {
        cout << i+1 << ": " << a[i] << endl;
    }
}

int main()
{
    int *ptr, *numPtr;
    int arrayLen, i;

    ptr = new int;
    *ptr = 10;
    *ptr *= 2;
    cout << "Address: " << &ptr << " Value:" << ptr 
        << " Referenced Value:" << *ptr << endl;

    delete ptr;
    
    cout << "Please enter size of the Array: ";
    cin >> arrayLen;
    numPtr = new int[arrayLen];
    hr();
    
    cout << "Enter Data" << endl;
    for(i=0; i<arrayLen; i++) {
        cout << i+1 << ": ";
        cin >> numPtr[i];   
    }
    hr();

    printArray(numPtr, arrayLen);
    /* This is cheating. I don't Care */
    ptr = (int*)realloc(numPtr, sizeof(int)*++arrayLen);
    cout << "Enter Value to Append: ";
    cin >> ptr[arrayLen-1];    
    hr();

    printArray(ptr, arrayLen);

    /* Free pointer */
    free(ptr);
    return 0;
}
