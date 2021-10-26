//
// Created by Bartek on 26.10.2021.
//

#include "../include/Student.h"

void Student::stworz()
{
    cout << "Podaj imie oraz nazwisko:" << endl;
    cin >> imie >> nazwisko;

    cout << "Podaj nr albumu:" << endl;
    cin >> numer_albumu;

    cout << "Podaj liczbe pytan oraz poprawnych odpowiedzi" << endl;
    cin >> liczba_pytan >> poprawne_odpowiedzi;
}

void Student::oblicz()
{
    double srednia;

    srednia = (poprawne_odpowiedzi / liczba_pytan) * 100;

    cout << "Srednia to: " << srednia << "%" << endl;
}