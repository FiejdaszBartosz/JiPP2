#include "../include/calc.h"

int main(int argc, char *argv[])
{
    string operation = "help"; //przechwouje komende
    int x = 0, y = 0, z = 1; //zmienne uzywane do obliczen
    bool flag; //flaga czy ynik zostal zwrocony

    //cout << "argc is: " << argc << endl;  //Debug: wypisuje liczbe podanych argumentow na wejsciu

    //Debug: wypisuje podane argumenty
    /*
    for (int i = 0; i < argc; ++i)
    {
        cout << "argv[" << i << "] = " << argv[i] << endl;
    }
    */

    if (argc == 4) //przypadek 3 wprowadzonych argumentow
    {
        operation = argv[1];
        x = atoi(argv[2]);
        y = atoi(argv[3]);
        cout << "zmienna trzy przyjela wartosc domyslna 1" << endl;
    }
    else if (argc == 5) //przypadek 4 wprowadzonych argumentow
    {
        operation = argv[1];
        x = atoi(argv[2]);
        y = atoi(argv[3]);
        z = atoi(argv[4]);
    }
    else
    {
        exit(0);
    }

    int result;

    //funkcja w przypadku result otrzymuje adres zmiennej
    flag = cal(operation, x, y, z, result);

    if(flag != false)
        cout << "Wynik: " << result;

    return 0;
}