//
// Created by Bartek on 26.10.2021.
//

#include "../include/Prostopadloscian.h"


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
