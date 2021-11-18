//
// Created by Bartek on 18.11.2021.
//
#include "../include/Node.h"
#include "../include/Triangle.h"


int main()
{
    Node a, b(1, 1), c(8, -2);

    Triangle abc(a, b, c, "abc");

    abc.display();
    cout << abc << endl;

    cout << "Dystans miedzy 1 a 3 wierzcholkiem wynosi: " <<
    abc.distance(0, 1) << endl;

    showTriangleData(abc);
    showTriangleData(&abc);

}


