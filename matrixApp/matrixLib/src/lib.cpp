#include "../include/lib.h"



int** create_array(int columns, int rows)
{
    int** temporary_array = NULL;

    temporary_array = new int*[columns];

    for (int i = 0; i < rows; ++i)
    {
        temporary_array[i] = new int[rows];
    }

    return temporary_array;
}

double** create_array(double columns, double rows)
{
    double** temporary_array = NULL;

    temporary_array = new double*[columns];

    for (int i = 0; i < rows; ++i)
    {
        temporary_array[i] = new double[rows];
    }

    return temporary_array;
}

void print_array(int** array, int columns, int rows)
{
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < columns; ++j)
        {
            cout << " " << array[i][j] << " ";
        }

        cout << "\n";
    }
}