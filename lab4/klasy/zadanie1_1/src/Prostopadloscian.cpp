//
// Created by Bartek on 26.10.2021.
//

#include "../include/Prostopadloscian.h"

int Prostopadloscian::get_a()
{
    return a;
}

int Prostopadloscian::get_b()
{
    return b;
}

int Prostopadloscian::get_h()
{
    return h;
}

void Prostopadloscian::set_a(int a)
{
    this->a = a;
}

void Prostopadloscian::set_b(int b)
{
    this->a = b;
}

void Prostopadloscian::set_h(int h)
{
    this->a = h;
}

void Prostopadloscian::wypelnij()
{
    cout << "Podaj a b h" << endl;
    cin >> a >> b >> h;
}

void Prostopadloscian::pole()
{
    int pole;

    pole = 2 * (a * b + b * h + h * a);

    cout << pole << endl;
}
