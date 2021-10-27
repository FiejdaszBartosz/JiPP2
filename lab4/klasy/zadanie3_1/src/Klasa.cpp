//
// Created by Bartek on 27.10.2021.
//

#include "../include/Klasa.h"

void Klasa::pauza()
{
    system("PAUSE");
}

Klasa::Klasa()
{
    tab = new char[1024];
    cout << "Konstruktor wywolany" << endl;
}

Klasa::~Klasa()
{
    cout << "Destruktor wywolany" << endl;
    delete[] tab;
}