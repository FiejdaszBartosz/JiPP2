//
// Created by Bartek on 26.10.2021.
//

#include "../include/FunkcjaKwadratowa.h"

float FunkcjaKwadratowa::get_a()
{
    return a;
}

float FunkcjaKwadratowa::get_b()
{
    return b;
}

float FunkcjaKwadratowa::get_c()
{
    return c;
}

void FunkcjaKwadratowa::set_a(float a)
{
    this->a = a;
}

void FunkcjaKwadratowa::set_a(float b)
{
    this->b = b;
}

void FunkcjaKwadratowa::set_a(float c)
{
    this->c = c;
}


void FunkcjaKwadratowa::wczytaj()
{
    cout << "Podaj wspolczynniki a, b, c" << endl;
    cin >> a >> b >> c;
}

void FunkcjaKwadratowa::wypisz()
{
    cout << "f(x) = " << a << "x^2 + " << b << "x + " << c << endl;
}