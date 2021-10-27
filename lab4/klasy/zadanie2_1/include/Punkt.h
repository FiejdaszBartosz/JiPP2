//
// Created by Bartek on 27.10.2021.
//

#ifndef ZADANIE1_4_PUNKT_H
#define ZADANIE1_4_PUNKT_H

#include <string>
#include <cmath>
#include <iostream>

using namespace std;

struct punkt
{
    int x, y;
};

class Punkt
{
public:
    punkt a, b;

    double oblicz();

    Punkt();
};


#endif //ZADANIE1_4_PUNKT_H
