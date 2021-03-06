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

    void print() const;

};

class Circle : public Figure {
    double r;
public:
    Circle(double in_r);

    double pole() const;
};

class Triangle : public Figure {
    point a, b, c;
public:
    double pole() const;

    double obwod() const;
};


#endif //MATRIXAPP_FIGURE_H
