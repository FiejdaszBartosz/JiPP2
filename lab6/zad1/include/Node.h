//
// Created by Bartosz Fiejdasz on 16/11/2021.
//

#ifndef JIPP2_NODE_H
#define JIPP2_NODE_H

#include "iostream"
#include "math.h"

using namespace std;

class Node {
private:
    double x, y;

public:
    Node();

    Node(double x, double y);

    void display();

    void updateValue(double x, double y);

    friend double pointsDistance(Node a, Node b);
};

double pointsDistance(Node a, Node b);

#endif //JIPP2_NODE_H