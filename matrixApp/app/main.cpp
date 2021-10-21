#include <iostream>
#include "../matrixLib/include/lib.h"

int main()
{
    int rows = 2, columns = 2, start_parm = 1;

    int **main_array = new int *[columns];


    for (int i = 0; i < columns; i++)
    {
        main_array[i] = new int[rows];
    }

    fill_array(main_array, rows, columns, start_parm);

    print_array(main_array, rows, columns);


    for (int i = 0; i < 2; ++i)
    {
        delete[] main_array[i];
    }

    delete[] main_array;

    return 0;
}