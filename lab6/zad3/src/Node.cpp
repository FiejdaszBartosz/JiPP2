//
// Created by Bartek on 18.11.2021.
//

#include "../include/Node.h"

Node::Node() : x(0), y(0)
{}

Node::Node(double x, double y) : x(x), y(y)
{}

void Node::display() const
{
    cout << "Punkt x = " << this->x << "Pynkt y = " << this->y << endl;
}

void Node::set_value(double in_x, double in_y)
{
    this->x = in_x;
    this->y = in_y;
}

double points_distance(Node a, Node b)
{
    return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
}

ostream &operator<<(ostream &lhs, Node &rhs)
{
    lhs << "(" << rhs.x << "," << rhs.y << ")";
    return lhs;
}