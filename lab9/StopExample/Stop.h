//
// Created by Bartek on 07.12.2021.
//

#ifndef EXAMPLE2_STOP_H
#define EXAMPLE2_STOP_H


#include <iostream>

using namespace std;

class Stop {
private:
    long id;
    string name;
    double latitude;
    double longitude;

public:
    Stop(long id, const string &name, double latitude, double longitude);

    Stop() {};

    void print();
};


#endif //EXAMPLE2_STOP_H
