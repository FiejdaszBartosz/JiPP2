//
// Created by Bartek on 26.10.2021.
//

#ifndef ZADANIE1_3_FUNKCJAKWADRATOWA_H
#define ZADANIE1_3_FUNKCJAKWADRATOWA_H

#include "iostream"
#include "cmath"

using namespace std;

class FunkcjaKwadratowa
{
    float a, b, c;

public:

    float get_a();

    float get_b();

    float get_c();

    void set_a(float a);

    void set_b(float b);

    void set_c(float c);

    void wczytaj();

    void wypisz();
};


#endif //ZADANIE1_3_FUNKCJAKWADRATOWA_H
