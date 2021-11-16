//
// Created by Bartosz Fiejdasz on 16/11/2021.
//
#include "../include/Vector.h"

int main() {
    Vector v1, v2(5,10);
    Vector v3 = v1 + v2;
    v3 = v1.operator+(v2);
}