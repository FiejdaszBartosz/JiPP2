//
// Created by Bartek on 27.10.2021.
//

#ifndef ZADANIE2_1_FIGURA_H
#define ZADANIE2_1_FIGURA_H

#include <iostream>

using namespace std;

struct punkt
{
    int x, y;
};

class Figura
{
public:
    int liczba_wierzcholkow;
    punkt *wspolrzedne_wierzcholka;

    Figura(int l_wierzcholkow);
};


#endif //ZADANIE2_1_FIGURA_H
