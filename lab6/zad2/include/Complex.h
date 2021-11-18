//
// Created by Bartosz Fiejdasz on 18/11/2021.
//

#ifndef ZAD2_IMAGINARY_H
#define ZAD2_IMAGINARY_H

#include "iostream"
#include <cmath>

using namespace std;

class Complex
{

    friend Complex operator*(const double &sk, const Complex &rhs);

    friend ostream &operator<<(ostream &lhs, const Complex &rhs);

private:
    double real, imaginary;

public:
    Complex();

    Complex(double in_real, double in_imaginary);

    double length() const;

    Complex operator+(const Complex &rhs) const;

    Complex operator-(const Complex &rhs) const;

    Complex operator*(const Complex &rhs) const;

    bool operator==(const Complex &rhs) const;

};

Complex operator*(const double &sk, const Complex &rhs);

#endif //ZAD2_IMAGINARY_H
