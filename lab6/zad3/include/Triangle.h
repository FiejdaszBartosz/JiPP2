//
// Created by Bartek on 18.11.2021.
//

#ifndef ZAD2_TRIANGLE_H
#define ZAD2_TRIANGLE_H

#include "../include/Node.h"
#include <iostream>

using namespace std;

class Triangle
{
    Node a, b, c;
    string name;

    friend ostream &operator<<(ostream &lhs, Triangle &rhs);

public:
    Triangle(Node a, Node b, Node c, string in_name);

    void display() const;

    double distance(int firstPointIndex, int secondPointIndex);
};


//Mozemy uzyc albo jednej albo drugiej ale nie na raz
/* Kompilator pomimo tego ze w jednym korzystamy z kopi a w drugim z referencji
  nie widzi miedzy tym roznicy */
#define triangle_copy

#ifdef triangle_copy
void showTriangleData(Triangle triangle);
#endif //triangle_copy

#ifdef triangle_reference
void showTriangleData(Triangle &triangle);
#endif //triangle_reference

void showTriangleData(Triangle *triangle);

#endif //ZAD2_TRIANGLE_H
