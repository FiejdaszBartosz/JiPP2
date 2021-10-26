//
// Created by Bartek on 26.10.2021.
//

#include "../include/Kula.h"


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