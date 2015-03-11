#include <iostream>
using namespace std;
// Lab 2, 2/4/2015
// init an array and do stuff with it.

void printArray(int array[], int SIZE);
void FibArray(int array[], int SIZE);

int main()
{
    const int size = 20;
    int alpha[size] = { 1, 2, 3 };
    int i;
    for(i=3; i < size; i++) {
        alpha[i]=0;
    }
    printArray(alpha, size);
    
    FibArray(alpha, size);
    printArray(alpha, size);
    
    alpha[11] = (6*alpha[13])-7;
    printArray(alpha,size);
    
    // This wont work because alpha[20] is out of bounds
/*    
    cout << alpha[20];
    alpha[20] = 555; 
*/
    return 0;
}

// Why is size in caps? I dunno, but the lab said so
void printArray(int array[], int SIZE)
{
    int i;
    for(i=0; i<SIZE; i++) {
        cout << array[i] << ' ';
    }
    cout << endl;
}

//What is this, JAVA? Though I guess Fibonacci is a proper name...
void FibArray(int array[], int SIZE)
{
    int i;
    array[0] = 1;
    array[1] = 1;
    for(i=2; i<SIZE; i++) {
        array[i] = array[i-1] + array[i-2];
    }
}

