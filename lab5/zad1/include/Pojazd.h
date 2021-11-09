//
// Created by Bartosz Fiejdasz on 09/11/2021.
//

#ifndef EXAMPLES_POJAZD_H
#define EXAMPLES_POJAZD_H

#include <iostream>

using namespace std;

class Pojazd {

private:
    int numer_rej;
    string nazwa;
    int liczba_miejsc;
    string *nazwa_pasazera;
    string typ;

public:
    Pojazd(int rej, string nazwa_pojazdu, int miejsca, string typ_pojazdu);
    Pojazd(Pojazd &pojazd);
    void print();
    void przypisz(string personalia, int miejsce);
};


#endif //EXAMPLES_POJAZD_H
