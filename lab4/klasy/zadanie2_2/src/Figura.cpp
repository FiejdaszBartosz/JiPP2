//
// Created by Bartek on 27.10.2021.
//

#include "../include/Figura.h"

Figura::Figura(int l_wierzcholkow)
        : liczba_wierzcholkow(l_wierzcholkow)
{
    wspolrzedne_wierzcholka = new punkt[l_wierzcholkow];

    for (int i = 0; i < l_wierzcholkow; ++i)
    {
        cout << "Podaj wspolrzedne " << i + 1 << ". wierzcholka" << endl;
        cin >> wspolrzedne_wierzcholka[i].x >> wspolrzedne_wierzcholka[i].y;
    }
}