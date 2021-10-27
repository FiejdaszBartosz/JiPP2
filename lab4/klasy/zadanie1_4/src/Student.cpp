//
// Created by Bartek on 26.10.2021.
//

#include "../include/Student.h"

string Student::get_imie()
{
    return imie;
}

string Student::get_nazwisko()
{
    return nazwisko;
}

double Student::get_numer_albumu()
{
    return numer_albumu;
}

double Student::get_liczba_pytan()
{
    return liczba_pytan;
}

double Student::get_poprawne_odpowiedzi()
{
    return poprawne_odpowiedzi;
}

void Student::set_imie(string imie)
{
    this->imie = imie;
}

void Student::set_nazwisko(string nazwisko)
{
    this->nazwisko = nazwisko;
}

void Student::set_numer_albumu(double numer_albumu)
{
    this->numer_albumu = numer_albumu;
}

void Student::set_liczba_pytan(double liczba_pytan)
{
    this->liczba_pytan = liczba_pytan;
}

void Student::set_poprawne_odpowiedzi(double poprawne_odpowiedzi)
{
    this->poprawne_odpowiedzi = poprawne_odpowiedzi;
}

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