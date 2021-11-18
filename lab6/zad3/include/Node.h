//
// Created by Bartek on 18.11.2021.
//

#ifndef ZAD2_NODE_H
#define ZAD2_NODE_H

#include "iostream"
#include "cmath"

using namespace std;

class Node
{
    double x, y;

    friend double points_distance(Node a, Node b);

    friend ostream &operator<<(ostream &lhs, Node &rhs);

public:

    Node();

    Node(double x, double y);

    void display() const;

    void set_value(double a, double b);
};


#endif //ZAD2_NODE_H
