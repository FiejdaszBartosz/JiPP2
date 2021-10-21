#include <iostream>
#include <math.h>
#include "../matrixLib/include/lib.h"

int main()
{
    int rows = 2, columns = 2;
    double start_parm = 1.0;

    int **main_array = creat_array(rows, columns);

    fill_array(main_array, rows, columns, start_parm);

    print_array(main_array, rows, columns);

    for (int i = 0; i < 2; ++i)
    {
        delete[] main_array[i];
    }

    delete[] main_array;

    return 0;
}