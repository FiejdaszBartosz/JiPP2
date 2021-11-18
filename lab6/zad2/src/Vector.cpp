//
// Created by Bartosz Fiejdasz on 16/11/2021.
//

#include "../include/Vector.h"


Vector::Vector()
{};

Vector::Vector(double x, double y) : x(x), y(y)
{}

double Vector::length()
{
    return sqrt(x * x + y * y);
}

Vector Vector::operator+(const Vector &rhs) const
{
    return {x + rhs.x, y + rhs.y};
}

Vector Vector::operator+=(const Vector &rhs)
{
    this->x = this->x + rhs.x;
    this->y = this->y + rhs.y;
    return *this;
}

Vector Vector::operator-(const Vector &rhs) const
{
    return {x - rhs.x, y - rhs.y};
}

Vector Vector::operator*(const double &sk) const
{
    return {x * sk, y * sk};
}

double Vector::operator*(const Vector &rhs) const
{
    return (x * rhs.x) + (y * rhs.y);
}

void Vector::print(Vector a)
{
    cout << "x = " << a.x << "y = " << a.y << endl;
}

Vector Vector::operator~() const
{
    return {x * (-1), y * (-1)};
}

bool Vector::operator<(const Vector &rhs) const
{
    if (x < rhs.x && y < rhs.y)
    {
        return true;
    }
    else return false;
}

bool Vector::operator>(const Vector &rhs) const
{
    if (x > rhs.y && y > rhs.y)
    {
        return true;
    }
    else return false;
}

Vector operator*(const double &sk, const Vector &rhs)
{
    return {rhs.x * sk, rhs.y * sk};
}

ostream &operator<<(ostream &lhs, const Vector &rhs)
{
    lhs << "(" << rhs.x << "," << rhs.y << ")" << endl;

    return lhs;
}
