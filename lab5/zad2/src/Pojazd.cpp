#include "../include/Pojazd.h"

string Pojazd::najnowsza_wersja_oprogramowania = "1.9";

Pojazd::Pojazd(int rej, string nazwa_pojazdu, int miejsca, string typ_pojazdu) :
        numer_rej(rej),
        nazwa(nazwa_pojazdu),
        liczba_miejsc(miejsca),
        typ(typ_pojazdu),
        obecna_wersja_oprogramowania("1.0")
{
    nazwa_pasazera = new string[liczba_miejsc];

    for (int i = 0; i < liczba_miejsc; ++i)
    {
        nazwa_pasazera[i] = "puste";
    }
}

Pojazd::Pojazd(Pojazd &oryginal_pojazd) :
        numer_rej(oryginal_pojazd.numer_rej),
        nazwa(oryginal_pojazd.nazwa),
        liczba_miejsc(oryginal_pojazd.liczba_miejsc),
        typ(oryginal_pojazd.typ),
        obecna_wersja_oprogramowania(oryginal_pojazd.obecna_wersja_oprogramowania)
{
    nazwa_pasazera = new string[liczba_miejsc];

    for (int i = 0; i < liczba_miejsc; ++i)
    {
        nazwa_pasazera[i] = oryginal_pojazd.nazwa_pasazera[i];
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
        nazwa_pasazera[miejsce - 1] = personalia;
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

string Pojazd::get_typ()
{
    return this->typ;
}

void Pojazd::set_nazwa(string n_nazwa)
{
    this->nazwa = n_nazwa;
}

void Pojazd::set_numer_rej(int numer)
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