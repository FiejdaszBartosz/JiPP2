#include "../include/calc.h"

float addition(int d1, int d2)
{
    float result;

    result = d1 + d2;

    return result;
}

float subtraction(int d1, int d2)
{
    float result;

    result = d1 - d2;

    return result;
}

float volume(int d1, int d2, int d3, int d4)
{
    float result;

    result = (d1 + d2) / 2 * d3 * d4;

    return result;
}

void help()
{
    cout << "Wprowadz parametry wejsciowe w podany sposob: " << endl << "1. Nazwa operacji: " << endl <<
    "\t add - dodawanie" << endl << "\t sub - odejmowanie" << endl << "\t vol - objetosc" << endl <<
            "\t help - pomoc" << endl << "2. zmienna jeden" << endl << "3. zmienna dwa" << endl <<
            "4. zmienna trzy" << endl << "5. zmienna cztery" << endl << "Zmienne:" << endl <<
            "\tpierwsza i druga - doawanie i odejmowanie oraz podstawy trapezu" << endl <<
            "\ttrzecia - wysokosc trapezu" << endl << "\ttrzecia - wysokosc graniastoslupa";

}

bool cal(string operation_name, int digit1, int digit2, int digit3, int digit4, float& p_result)
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
        p_result = volume(digit1, digit2, digit3, digit4);
        return true;
    }
    else if ( operation_name == "help")
    {
        help();
        return false;
    }
    else
    {
        cout << "! Operation is not defined !" << endl << endl;
        help();
        return false;
    }

    return false;
}

