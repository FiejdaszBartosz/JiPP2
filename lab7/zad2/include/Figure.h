//
// Created by Bartosz Fiejdasz on 23/11/2021.
//

#ifndef MATRIXAPP_FIGURE_H
#define MATRIXAPP_FIGURE_H

#include "iostream"
#include "cmath"

using namespace std;

class Figure
{
public:
    virtual double getArea() = 0;
};

class Circle : public Figure
{
    double r;
public:
    Circle(double in_r);

    double getArea();
};

class Rectangle : public Figure
{
    double a, b;
public:
    Rectangle(double in_a, double in_b);

    double getArea();
};


#endif //MATRIXAPP_FIGURE_H
