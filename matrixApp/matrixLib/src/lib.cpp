#include "../include/lib.h"


int **creat_array(int columns, int rows)
{
    int **tmp_array= new int *[columns];


    for (int i = 0; i < columns; i++)
    {
        tmp_array[i] = new int[rows];
    }

    return tmp_array;
}

void  fill_array(int **array, int columns, int rows, int start_parm)
{
    int i = 0, j = 1;

    array[0][0] = start_parm;


    for (i; i < rows; ++i)
    {
        for (j; j < columns; ++j)
        {
            cout << "Liczba do komorki " << i << " " << j << endl;
            cin >> array[i][j];
        }

        j = 0;
    }
}

void print_array(int **array, int columns, int rows)
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
