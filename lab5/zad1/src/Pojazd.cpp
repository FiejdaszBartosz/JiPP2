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

Pojazd::Pojazd(Pojazd &pojazd) :

{
    nowa_nazwa_pojazdu = new string;

    nowa_nazwa_pojazdu =
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
        nazwa_pasazera[mijesce] = personalia;
    }
    else
        cout << "W pojezdzie nie ma tyle miejsc" << endl;
}