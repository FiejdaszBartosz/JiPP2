#include <iostream>
#include "../matrixLib/include/lib.h"

int main()
{
    int rows = 2, columns = 2, variable_type = 0;

    cout << "Czy zmienne beda typu int -> 0 czy double -> 1:" << endl;
    cin >> variable_type;

    if (variable_type == 0)
    {
        //integer case
        int **matrix_a = creat_matrix(rows, columns);
        int **matrix_b = creat_matrix(rows, columns);
        int **matrix_r = NULL;

        fill_matrix(matrix_a, rows, columns);
        fill_matrix(matrix_b, rows, columns);

        matrix_r = addMatrix(matrix_a, matrix_b, rows, columns);

        print_matrix(matrix_r, rows, columns);

        for (int i = 0; i < columns; ++i)
        {
            delete[] matrix_r[i];
        }

        delete[] matrix_r;

        for (int i = 0; i < columns; ++i)
        {
            delete[] matrix_a[i];
        }

        delete[] matrix_a;

        for (int i = 0; i < columns; ++i)
        {
            delete[] matrix_b[i];
        }

        delete[] matrix_b;
    } else if (variable_type == 0)
    {
        //double case

    } else
    {
        cout << "Nieznana opcja!" << endl;
    }


    return 0;
}