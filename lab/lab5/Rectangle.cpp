/*
 * Rectangle.cpp
 * Class Definition file for the Rectangle
 */

#include <iostream>
#include "Rectangle.h"

using namespace std;

Rectangle::Rectangle()
{
    color   = "white";
    length  = 0;
    width   = 0;
}

Rectangle::Rectangle(double l, double w, string c)
{
    color   = c;
    length  = l;
    width   = w;
}

void Rectangle::setDimension(double l, double w)
{
    length = l;
    width = w;
}

void Rectangle::setColor(string c)
{
    color = c;
}

double Rectangle::getLength()
{
    return length;
}

double Rectangle::getWidth()
{
    return width;
}

string Rectangle::getColor()
{
    return color;
}

double Rectangle::perimeter()
{
    return 2*(length + width);
}

double Rectangle::area()
{
    return length * width;
}

void Rectangle::print()
{
    cout << length << "x" << width << ", " << color << endl;
}
