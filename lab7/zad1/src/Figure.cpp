//
// Created by Bartosz Fiejdasz on 23/11/2021.
//

#include "../include/Figure.h"

void Figure::print() const
{
    cout << "Nazwa: " << this->name << "Kolor: " << this->color << endl;
}

Circle::Circle(double in_r) : r(in_r)
{}

double Circle::pole() const
{
    return M_PI * r * r;
}

double Triangle::pole() const
{
    return abs((b.x - a.x) * (c.y - a.y) - (b.y - a.y) * (c.x - a.x));
}

double Triangle::obwod() const
{
    float ab = sqrt(pow((a.x - b.x), 2) + pow((a.y - b.y), 2));
    float bc = sqrt(pow((b.x - c.x), 2) + pow((b.y - c.y), 2));
    float ca = sqrt(pow((c.x - a.x), 2) + pow((c.y - a.y), 2));
    return ab + bc + ca;
}
