//
// Created by Bartek on 07.12.2021.
//

#ifndef EXAMPLE2_LINE_H
#define EXAMPLE2_LINE_H


#include <iostream>
#include <vector>
#include "Stop.h"

using namespace std;

class Line {
private:
    string number;
    string direction;
    vector<Stop *> stops;

public:
    Line(const string &number, const string &direction);

    void addStop(Stop *stop);

    void print();

    void refractor(vector<Stop> :: iterator A);
};


#endif //EXAMPLE2_LINE_H
