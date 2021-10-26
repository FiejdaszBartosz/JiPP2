//
// Created by Bartek on 26.10.2021.
//

#ifndef ZADANIE1_3_STUDENT_H
#define ZADANIE1_3_STUDENT_H
#include "iostream"
#include "cmath"

using namespace std;

class Student
{
    string imie, nazwisko;
    double numer_albumu, liczba_pytan, poprawne_odpowiedzi;

public:
    void stworz();
    void oblicz();
};


#endif //ZADANIE1_3_STUDENT_H
