//
// Created by Bartek on 26.10.2021.
//

#ifndef STRUKTURY_PROSTOPADLOSCIAN_H
#define STRUKTURY_PROSTOPADLOSCIAN_H

#include "iostream"

using namespace std;

class Prostopadloscian
{
    int a, b, h;

public:
    int get_a();

    int get_b();

    int get_h();

    void set_a(int a);

    void set_b(int b);

    void set_h(int h);

    void wypelnij();

    void pole();

};


#endif //STRUKTURY_PROSTOPADLOSCIAN_H
