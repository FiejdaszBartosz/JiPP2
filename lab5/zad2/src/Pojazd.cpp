//
// Created by Bartosz Fiejdasz on 09/11/2021.
//

#include "../include/Pojazd.h"

Pojazd::Pojazd(int rej, string nazwa_pojazdu, int miejsca, string typ_pojazdu) :
        numer_rej(rej),
        nazwa(nazwa_pojazdu),
        liczba_miejsc(miejsca),
        typ(typ_pojazdu)
{
    nazwa_pasazera = new string[liczba_miejsc];

    for (int i = 0; i < liczba_miejsc; ++i)
    {
        nazwa_pasazera = "puste";
    }
}

Pojazd::Pojazd(Pojazd &kopia_pojazd) :
        numer_rej(kopia_pojazd.numer_rej),
        nazwa(kopia_pojazd.nazwa),
        liczba_miejsc(kopia_pojazd.liczba_miejsc),
        typ(kopia_pojazd.typ)
{
    kopia_pasazerowie = new string[liczba_miejsc];

    for (int i = 0; i < liczba_miejsc; ++i)
    {
        kopia_pasazerowie[i] = this->nazwa_pasazera[i];
    }
}

Pojazd::~Pojazd()
{
    delete nazwa_pasazera;
}

void Pojazd::print()
{
    cout << "Numer rejstracyjny: " << numer_rej << endl;
    cout << "Nazwa pojazdu: " << nazwa << endl;
    cout << "Liczba miejsc w pojezdzie: " << liczba_miejsc << endl;
    cout << "Miejsca zajete: " << endl;

    for (int i = 0; i < liczba_miejsc; ++i)
    {
        cout << nazwa_pasazera[i] << endl;
    }

    cout << "Typ pojazdu: " << typ << endl;
}

void Pojazd::przypisz(string personalia, int miejsce)
{
    if (miejsce <= liczba_miejsc)
    {
        nazwa_pasazera[mijesce - 1] = personalia;
    }
    else
        cout << "W pojezdzie nie ma tyle miejsc" << endl;
}

string Pojazd::get_nazwa()
{
    return this->nazwa;
}

int Pojazd::get_numer_rej()
{
    return this->numer_rej;
}

int Pojazd::get_typ()
{
    return this->typ;
}

void Pojazd::set_nazwa(string n_nazwa)
{
    this->nazwa = n_nazwa;
}

void Pojazd::set_numer_rej(string numer)
{
    this->numer_rej = numer;
}

void Pojazd::wypisz_wersje()
{
    cout << "Obecna wersja: " << obecna_wersja_oprogramowania << endl;
}

void Pojazd::zmien_wersje()
{
    obecna_wersja_oprogramowania = najnowsza_wersja_oprogramowania;
}

void Pojazd::nowa_wersja(string wersja)
{
    najnowsza_wersja_oprogramowania = wersja;
}