//
// Created by Bartosz Fiejdasz on 23/11/2021.
//

#ifndef MATRIXAPP_FIGURE_H
#define MATRIXAPP_FIGURE_H

#include "iostream"
#include "cmath"

using namespace std;

struct point {
    double x, y;
};

class Figure {
    string name, color;
public:
    void print();
};

class Circle : public Figure {
    double r;
public:
    Circle(double r);

    double pole();
};

class Triangle : public Figure {
    point a, b, c;
public:
    double pole();

    double obwod();
};


#endif //MATRIXAPP_FIGURE_H
