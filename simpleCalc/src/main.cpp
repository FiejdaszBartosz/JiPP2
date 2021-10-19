#include "../include/calc.h"

int main(int argc, char *argv[])
{
    string operation = "help"; //przechwouje komende
    int x = 0, y = 0, z = 0, h = 0; //zmienne uzywane do obliczen
    bool flag; //flaga czy wynik zostal zwrocony

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
        cout << "Zmienna trzy przyjela wartosc domyslna 0" << endl;
        cout << "Zmienna cztery przyjela wartosc domyslna 0" << endl << endl;
    }
    else if (argc == 6) //przypadek 5 wprowadzonych argumentow
    {
        operation = argv[1];
        x = atoi(argv[2]);
        y = atoi(argv[3]);
        z = atoi(argv[4]);
        h = atoi(argv[5]);
    }
    else
    {
        help();
        exit(0);
    }

    float result;

    //funkcja w przypadku result otrzymuje adres zmiennej
    flag = cal(operation, x, y, z, h, result);

    if(flag != false)
        cout << "Wynik: " << result;

    return 0;
}
