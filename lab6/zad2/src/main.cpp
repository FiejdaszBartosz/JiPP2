//
// Created by Bartosz Fiejdasz on 16/11/2021.
//
#include "../include/Complex.h"

int main() {
    Complex x(4, 8);
    Complex y(2, 0);

    cout << "A = " << x << endl;
    cout << "B = " << y << endl;
    cout << "A + B = " << x + y << endl;
    cout << "A - B = " << x - y << endl;
    cout << "A * B = " << x * y << endl;
    cout << "A * 3 = " << 2 * x << endl;
}