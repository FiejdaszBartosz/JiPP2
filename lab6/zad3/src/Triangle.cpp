//
// Created by Bartek on 18.11.2021.
//

#include "../include/Triangle.h"

Triangle::Triangle(Node in_a, Node in_b, Node in_c, string in_name) :
        a(in_a),
        b(in_b),
        c(in_c),
        name(in_name)
{}

void Triangle::display() const
{
    cout << name << endl;
    a.display();
    b.display();
    c.display();
}

ostream &operator<<(ostream &lhs, Triangle &rhs)
{
    lhs << "Nazwa trojkata: " << rhs.name << "Pierwszy wierzcholek:" << endl << rhs.a.display() <<
        "Drugi wierzcholek:" << endl << rhs.b.display() << "Trzeci wierzcholek:" << endl <<
        rhs.c.display() << endl;
    return lhs;
}

double Triangle::distance(int firstPointIndex, int secondPointIndex)
{
    Node tab[3] = {a, b, c};
    return points_distance(tab[firstPointIndex], tab[secondPointIndex]);
}

void showTriangleData(Triangle triangle) {
    triangle.display();
}
void showTriangleData(Triangle &triangle) {
    triangle.display();
}
void showTriangleData(Triangle *triangle) {
    (*triangle).display();
}