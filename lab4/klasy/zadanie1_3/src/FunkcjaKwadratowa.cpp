//
// Created by Bartek on 26.10.2021.
//

#include "../include/FunkcjaKwadratowa.h"

void FunkcjaKwadratowa::wczytaj()
{
    cout << "Podaj wspolczynniki a, b, c" << endl;
    cin >> a >> b >> c;
}

void FunkcjaKwadratowa::wypisz()
{
    cout << "f(x) = " << a << "x^2 + " << b << "x + " << c << endl;
}