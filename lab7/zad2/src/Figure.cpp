//
// Created by Bartosz Fiejdasz on 23/11/2021.
//

#include "../include/Figure.h"

Circle::Circle(double in_r) : r(in_r)
{}

Rectangle::Rectangle(double in_a, double in_b) : a(in_a), b(in_b)
{}

double Circle::getArea()
{
    return M_PI * r * r;
}

double Rectangle::getArea()
{
    return a * b;
}