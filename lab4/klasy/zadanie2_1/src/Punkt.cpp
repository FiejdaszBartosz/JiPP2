//
// Created by Bartek on 27.10.2021.
//

#include "../include/Punkt.h"

Punkt::Punkt()
{
    cout << "Wpisz wspolrzedne punktu a" << endl;
    cin >> a.x >> a.y;

    cout << "Wpisz wspolrzedne punktu b" << endl;
    cin >> b.x >> b.y;
}

double Punkt::oblicz()
{
    return sqrt(pow((a.x - b.x), 2) + pow((a.y - b.y), 2));
}