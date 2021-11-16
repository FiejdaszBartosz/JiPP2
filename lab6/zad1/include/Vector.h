//
// Created by Bartosz Fiejdasz on 16/11/2021.
//

#ifndef ZAD2_VECTOR_H
#define ZAD2_VECTOR_H

#include "iostream"
#include "math.h"

using namespace std;

class Vector{
private:
    double x, y;

public:
    Vector();

    Vector(double x, double y);

    double length();
};


#endif //ZAD2_VECTOR_H
