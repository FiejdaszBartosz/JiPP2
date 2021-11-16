//
// Created by Bartosz Fiejdasz on 16/11/2021.
//

#include "../include/Vector.h"

Vector::Vector(): x(0), y(0) {}

Vector::Vector(double x, double y) : x(x), y(y) {}

double Vector::length() {
    return sqrt(x * x + y * y);
}