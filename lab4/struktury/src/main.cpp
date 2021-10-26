#include "iostream"
#include "string"

using namespace std;

struct samochod
{
    string marka;
    string model;
    int rok_podukcji;
    string kolor;
    string silnik;
};

struct zliczanie
{
    string marka;
    int licznik;
};

void liczba_aut(samochod *tab, zliczanie *zlicz)
{
    int index_licznika;
    bool flaga;

    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            if (tab[i].marka == zlicz[j].marka)
            {
                zlicz[j].licznik++;
                flaga = 1;
            }
        }
        if (flaga == 0)
        {
            zlicz[index_licznika].licznik = 1;
            zlicz[index_licznika].marka = tab[i].marka;
            index_licznika++;
        }
        flaga = 0;
    }

    for (int i = 0; i < 4; i++)
        cout << zlicz[i].marka << "--" << zlicz[i].licznik << endl;
}


int main()
{
    samochod pojazdy[5] = {{"mercedes", "a_klasa", 2021, "czarny"},
                           {"bmw",      "seria_7", 2001, "bialy"},
                           {"kia",      "ceed",    2014, "granatowy"},
                           {"audi",     "a4",      2015, "czerwony"},
                           {"audi",     "rs6",     2020, "czerwony"}};

    for (int i = 0; i < sizeof(pojazdy) / sizeof(samochod); ++i)
    {
        cout << pojazdy[i].marka << "\t" << pojazdy[i].model << "\t" << pojazdy[i].rok_podukcji
             << "\t" << pojazdy[i].kolor << "\t" << pojazdy[i].silnik << endl;
    }

    zliczanie spis_pojazdow[10];

    liczba_aut(pojazdy, spis_pojazdow);

    return 0;
}
