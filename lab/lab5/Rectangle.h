/*
 * Rectangle.h
 * Class declaration file.
 */

#ifndef __RECTANGLE_H
#define __RECTANGLE_H

#include <string>


class Rectangle
{
private:
    double length;
    double width;
    std::string color;
public:
    Rectangle();
    Rectangle(double, double, std::string);
    void print();
    void setDimension(double, double);
    void setColor(std::string);
    double getLength();
    double getWidth();
    std::string getColor();
    double perimeter();
    double area();
};

#endif
