#include "../include/calc.h"

int main(int argc, char *argv[])
{
    string operation = "help";
    int x = 0, y = 0, z = 1;
    bool flag;

    //cout << "argc is: " << argc << endl;  //Debug: wypisuje liczbe podanych argumentow na wejsciu

    //Debug: wypisuje podane argumenty
    /*
    for (int i = 0; i < argc; ++i)
    {
        cout << "argv[" << i << "] = " << argv[i] << endl;
    }
    */

    if (argc = 4)
    {
        operation = argv[1];
        x = atoi(argv[2]);
        y = atoi(argv[3]);
        cout << "zmienna trzy przyjela wartosc domyslna 1" << endl;
    }
    else if (argc = 5)
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

    flag = cal(operation, x, y, z, result);

    if(flag != false)
        cout << "Wynik: " << result;

    return 0;
}