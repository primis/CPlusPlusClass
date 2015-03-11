/* 
 * Nicholas Sargnete
 * BCS 230
 * Lab 1 <1/28/15>
 * Read Three Integers from file and check if they're in order
 */

#include <iostream>
#include <fstream>

using namespace std;

void funcOne(int &a, int &b, int c)
{
    int x;
    cout << "Enter an Integer: ";
    cin >> x;
    a = c + x;
    b = c + x;
    return;
}

bool checkOrder(int a, int b, int c) 
{
    if ((a < b) && (b < c)) {
        return true;    // A < B < C
    } else if ((c < b) && (b < a)) {
        return true;    // C < B < A
    }
    return false;       // Not in Order.
}


int main()
{
    int a, b, c;
    ifstream infile;
    infile.open("lab1data.txt");
    
    infile >> a >> b >> c;
    cout << "a= "<< a << ", b= " << b << ", c= " << c << endl;
    if(checkOrder(a,b,c)) {
        cout << "They're in order too!" << endl;
    }
    
    funcOne(a,b,c);
    cout << "a= "<< a << ", b= " << b << ", c= " << c << endl;
    if(checkOrder(a,b,c)) {
        cout << "They're in order too!" << endl;
    }


    return 0;
}
