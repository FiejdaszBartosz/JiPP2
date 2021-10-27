//
// Created by Bartek on 26.10.2021.
//

#include "../include/Kula.h"

double Kula::get_r()
{
    return r;
}

void Kula::set_r(double r)
{
    this->r = r;
}

void Kula::podaj_promien()
{
    cout << "Podaj promien" << endl;
    cin >> r;
}

void Kula::objetosc()
{
    double pole;

    pole = M_PI * pow(r, 3);

    cout << "Objetosc: " << pole << endl;
}