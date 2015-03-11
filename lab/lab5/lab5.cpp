/*
 * Lab 5 - 3/11/2015
 * Classes. Create and initialize a class
 * Nick Sargente.
 * I hereby declare that this is my own original work.
 */
#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
    Rectangle square(5, 5, "Blue");
    Rectangle r;
    
    r.print();  // Default Construction.
    square.print(); // Defined Construction.
    
    r.setDimension(6, 7.5);
    r.setColor("Green");
    r.print(); 
    cout << "Perimeter " << r.perimeter() << endl;
    cout << "Area " << r.area() << endl;

    return 0;
}
