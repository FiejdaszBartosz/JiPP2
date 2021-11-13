//
// Created by Bartosz Fiejdasz on 09/11/2021.
//

#ifndef EXAMPLES_POJAZD_H
#define EXAMPLES_POJAZD_H

#include <iostream>

using namespace std;

class Pojazd
{

private:
    int numer_rej;
    string nazwa;
    int liczba_miejsc;
    string *nazwa_pasazera;
    string typ;
    static string najnowsza_wersja_oprogramowania;
    string obecna_wersja_oprogramowania;

public:
    Pojazd(int rej, string nazwa_pojazdu, int miejsca, string typ_pojazdu);

    Pojazd(Pojazd &pojazd);

    ~Pojazd();

    void print();

    void przypisz(string personalia, int miejsce);

    string get_nazwa();

    int get_numer_rej();

    int get_typ();

    void set_nazwa(string n_nazwa);

    void set_numer_rej(string numer);

    void wypisz_wersje();

    void zmien_wersje();

    void nowa_wersja(string wersja);
};


#endif //EXAMPLES_POJAZD_H
