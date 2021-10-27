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
    string get_imie();

    string get_nazwisko();

    double get_numer_albumu();

    double get_liczba_pytan();

    double get_poprawne_odpowiedzi();

    void set_imie(string imie);

    void set_nazwisko(string nazwisko);

    void set_numer_albumu(double numer_albumu);

    void set_liczba_pytan(double liczba_pytan);

    void set_poprawne_odpowiedzi(double poprawne_odpowiedzi);

    void stworz();

    void oblicz();
};


#endif //ZADANIE1_3_STUDENT_H
