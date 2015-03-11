/* BCS 230 Lab 3 - 2/11/2015
 * Safely Initialize and process C Strings
 * We're using a quote that ends in a * for this lab as a delim
 * Why we didn't use real quotation marks is beyond me...
 */
#include <iostream>
#include <fstream>
using namespace std;

const int Max_Length = 300;
const char *filename = "lab3data.txt";

int countLetter(char arr[], char letter);

int main()
{
    char i;
    ifstream qFile(filename);
    char quote[Max_Length];
    
    // File Sanity Checks
    if(!(qFile.is_open())) {
        cout << "File \"" << filename << "\" Could not be opened!" << endl;
        return -1;
    }
    // Put Quote into our buffer with a * as a delim.
    qFile.get(quote, 299, '*'); 
    qFile.close();
    cout << quote << endl;
    /*
    cout << "\'e\' appears " << countLetter(quote, 'e') << " times" << endl;
    */

    for(i='a'; i <= 'z'; i++) {
        cout << i << " | " << countLetter(quote, i) << endl;
    }

    return 0;
}

// Count the instances of a letter in a char array
int countLetter(char arr[], char letter)
{
    int i, count=0;
    for(i=0; i<strlen(arr); i++) {
        if(arr[i] == letter) {
            count++;
        }
    }
    return count;
}
