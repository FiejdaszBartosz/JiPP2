//
// Created by Bartosz Fiejdasz on 18/11/2021.
//

#include "Complex.h"

Complex::Complex() : real(0), imaginary(0)
{}

Complex::Complex(double in_real, double in_imaginary) : real(in_real), imaginary(in_imaginary)
{}

double Complex::length() const
{
    return sqrt(pow(real, 2) + pow(imaginary, 2));
}

Complex Complex::operator+(const Complex &rhs) const
{
    return {this->real + rhs.real, this->imaginary + rhs.imaginary};
}

Complex Complex::operator-(const Complex &rhs) const
{
    return {this->real - rhs.real, this->imaginary - rhs.imaginary};
}

Complex Complex::operator*(const Complex &rhs) const
{
    return {this->real * rhs.real, this->imaginary * rhs.imaginary};
}

bool Complex::operator==(const Complex &rhs) const
{
    if (this->real == rhs.real && this->imaginary == rhs.imaginary)
        return true;
    else
        return false;
}

Complex operator*(const double &sk, const Complex &rhs)
{
    return {rhs.real * sk, rhs.imaginary * sk};
}

ostream &operator<<(ostream &lhs, const Complex &rhs)
{
    lhs << "(" << rhs.real << "," << rhs.imaginary << ")" << endl;

    return lhs;
}
