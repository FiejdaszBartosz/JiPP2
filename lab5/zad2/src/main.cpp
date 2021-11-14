#include "../include/Pojazd.h"


int main()
{
    Pojazd samochod1(1234, "Kia", 5, "hatchback");
    samochod1.przypisz("Bartek", 1);
    samochod1.print();

    Pojazd samochod1_kopia(samochod1);
    cout << "Kopia samochodu1:" << endl;
    samochod1_kopia.print();

    cout << "\n";

    samochod1.wypisz_wersje();

    cout << "Aktualizacja wersji oprogramowania w toku" << endl;
    samochod1.zmien_wersje();
    cout << "Ukonczono" << endl;
    samochod1.wypisz_wersje();

    samochod1.nowa_wersja("2.0");

    cout << "Aktualizacja wersji oprogramowania w toku" << endl;
    samochod1.zmien_wersje();
    cout << "Ukonczono" << endl;
    samochod1.wypisz_wersje();

    return 0;
}