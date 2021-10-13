#include "../include/calc.h"

int addition(int d1, int d2)
{
    int result;

    result = d1 + d2;

    return result;
}

int subtraction(int d1, int d2)
{
    int result;

    result = d1 - d2;

    return result;
}

int volume(int d1, int d2, int d3)
{
    int result;

    result = d1 * d2 * d3;

    return result;
}

void help()
{
    cout << "Wprowadz parametry wejsciowe w podany sposob: " << endl << "1. Nazwa operacji: " << endl <<
    "\t add - dodawanie" << endl << "\t sub - odejmowanie" << endl << "\t vol - objetosc" << endl <<
            "\t help - pomoc" << endl << "2. zmienna jeden" << endl << "3. zmienna dwa" << endl << "4. zmienna trzy"
            << endl << "Zmienne jeden i dwa uzyane sa w dodawaniu i odejmowaniu a zmienna trzy w liczeniu objetosci."
            << endl;

}

bool cal(string operation_name, int digit1, int digit2, int digit3, int& p_result)
{
    if(operation_name == "add")
    {
        p_result = addition(digit1, digit2);
        return true;
    }
    else if ( operation_name == "sub")
    {
        p_result = subtraction(digit1, digit2);
        return true;
    }
    else if ( operation_name == "vol")
    {
        p_result = volume(digit1, digit2, digit3);
        return true;
    }
    else if ( operation_name == "help")
    {
        help();
        return false;
    }
    else
    {
        cout << "! Operation is not defined !" << endl;
        help();
        return false;
    }

    return false;
}

