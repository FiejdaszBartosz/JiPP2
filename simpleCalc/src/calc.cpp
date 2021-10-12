#include "../include/calc.h"

float addition(float d1, float d2)
{
    float result;

    result = d1 + d2;

    return result;
}

float subtraction(float d1, float d2)
{
    float result;

    result = d1 - d2;

    return result;
}

float multiplication(float d1, float d2)
{
    float result;

    result = d1 * d2;

    return result;
}

float division(float d1, float d2)
{
    float result;

    result = d1 / d2;

    return result;
}

float cal(string operation_name, float x, float y)
{
    float output;

    if(operation_name == "add")
    {
        output = addition(x, y);
    }
    else if ( operation_name == "sub")
    {
        output = subtraction(x, y);
    }
    else if ( operation_name == "sub")
    {
        output = multiplication(x, y);;
    }
    else if ( operation_name == "div")
    {
        if (y != 0)
            output = division(x, y);
        else
            cout << "Division by zero!" << endl;
    }
    else
        cout << "Operation is not defined" << endl;


    return output;
}
