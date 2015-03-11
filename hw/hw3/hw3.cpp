/* BCS 230 (CRN 23798) HW 3 - Due 2/19/2015
 * Nicholas Sargente - ID R01621655
 * Find Frequency of letters in a string.
 */
#include <iostream>
#include <fstream>
using namespace std;

const int  Max_Length    = 300;
const int  Letter_Length = 26;   // Number of Letters
const char Letter_Seed   = 'A';  // Seed letter
const char *filename     = "hw3data.txt";

int countLetter(char[], char);
void findFreq(char[], char[], int[], int);
void printFreq(char[],int[], int);
void setText(char[], int);

int main()
{
    char i;
    ifstream qFile(filename);
    char quote[Max_Length], letter[Letter_Length];
    int freq[Letter_Length];
    
    // File Sanity Checks
    if(!(qFile.is_open())) {
        cout << "File \"" << filename << "\" Could not be opened!" << endl;
        return -1;
    }
    // Put Quote into our buffer with a # as a delim.
    qFile.get(quote, 299, '#'); 
    qFile.close();

    // Initialize letter array.
    for(i=0; i<Letter_Length; i++) {
        letter[i] = i + Letter_Seed;
    }

    findFreq(quote, letter, freq, Letter_Length);
    cout << quote << endl;
    printFreq(letter, freq, Letter_Length);
 
    setText(quote, strlen(quote));
    findFreq(quote, letter, freq, Letter_Length);
    cout << quote << endl;
    printFreq(letter, freq, Letter_Length);
 
    system("PAUSE");
    return 0;
}

void findFreq(char text[], char letter[], int frequency[], int elements)
{
    int i;
    for(i=0; i<elements; i++) {
        frequency[i] = countLetter(text, letter[i]);        
    }
}
void setText(char text[], int len)
{
    int i;
    for(i=0; i<len; i++) {
        if(text[i] == 'A') {
            text[i] = 'J';
        } else if(text[i] == 'I') {
            text[i] = 'Q';
        } else if(text[i] == 'S') {
            text[i] = 'Z';
        }
    }
}
void printFreq(char letter[], int frequency[], int elements)
{
    int i;
    cout << "Letter  Frequency" << endl;
    for(i=0; i<elements; i++) {
        if (frequency[i] != 0) {
            cout << letter[i] << "\t   " << frequency[i] << endl;
        }
    }
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
