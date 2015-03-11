/* Homework 1
 * BCS 230 - Due 2/5/2015
 */

#include <iostream>
using namespace std;

void setData(double*, double*);
double getPay(double, double);
void printPay(double, double, double);
char nextCharByVal(char);
void nextCharByRef(char*);

int main()
{
    char z;
    double hours, rate;
    double amount;
    int i;

    setData(&hours, &rate);
    printPay(hours, rate, getPay(hours, rate));

    z = ' ';
    cout << "By Value" << endl;
    for(i=0; i<95; i++) {
        z = nextCharByVal(z);
        cout << z << ' ';
    }
    z = ' ';
    cout << endl;
    for(i=0; i<95; i++) {
        nextCharByRef(&z);
        cout << z << ' ';
    }
    system("pause");
    return 0;
}

void setData(double *_hours, double *_rate)
{
    cout << "Please enter the hourly rate: ";
    cin >> *_rate;
    cout << "Please enter hours worked: ";
    cin >> *_hours;
}

double getPay(double _hours, double _rate)
{
    double pay;
    // First we calculate the normal rate of pay
    pay = _hours * _rate;
    // Now we calculate overtime
    _hours -= 40;
    if(_hours > 0) {
        pay += _hours * (_rate /2);
    }
    return pay;
}

void printPay(double _hours, double _rate, double _pay)
{
    cout << "Hours Worked: " << _hours << endl;
    cout << "Normal Rate:  " << _rate  << endl;
    cout << "Gross Pay:    " << _pay   << endl;
}

char nextCharByVal(char x)
{
    // Returns the next ASCII charecter by value
    return ++x;
}

void nextCharByRef(char *x)
{
    char temp = ++*x;
    *x = temp;
}


