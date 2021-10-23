#include <iostream>
#include "../matrixLib/include/lib.h"

int main(int argc, char *argv[])
{
    /*
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

    */

    if (argv[1] == "help")
    {

        //do napisania help

    }
    else if (check_command(argv[1]))
    {
        int rows_a = 1, columns_a = 1, variable_type = 0;

        int **int_matrix_a = NULL;


        cout << "Podaj liczbe wierszy i kolumn macierzy" << endl;
        cin >> rows_a;
        cin >> columns_a;

        cout << "Czy zmienne beda typu int -> 0 czy double -> 1:" << endl;
        cin >> variable_type;

        if (variable_type == 0)
        {
            int_matrix_a = create_matrix_int(rows_a, columns_a);
            fill_matrix(int_matrix_a, rows_a, columns_a);
        }
        else if (variable_type == 1)
            int_matrix_a = create_matrix_int(rows_a, columns_a);
        else
        {
            cout << "! Variable type error !" << endl;
            return 0;
        }


        if (argv[1] == "addMatrix")
        {

            if (variable_type == 0)
            {
                int rows_b = 1, columns_b = 1;

                int **int_matrix_b = NULL, **result_matrix = NULL;

                cout << "Podaj liczbe wierszy i kolumn drugiej macierzy" << endl;
                cin >> rows_b;
                cin >> columns_b;

                int_matrix_b = create_matrix_int(rows_b, columns_b);
                fill_matrix(int_matrix_a, rows_b, columns_b);

                result_matrix = addMatrix(int_matrix_a, int_matrix_b, rows_a, columns_a);

                cout << "Wynik to:" << endl;
                print_matrix(result_matrix, rows_a, columns_a);
            }
            else if (variable_type == 1)
            {
                int rows_b = 1, columns_b = 1;

                double **double_matrix_b = NULL, **result_matrix = NULL;

                cout << "Podaj liczbe wierszy i kolumn drugiej macierzy" << endl;
                cin >> rows_b;
                cin >> columns_b;

                double_matrix_b = create_matrix_double(rows_b, columns_b);
            }
        }
        else if (argv[1] == "subtractMatrix")
        {

        }
        else if (argv[1] == "multiplyMatrix")
        {

        }
        else if (argv[1] == "multiplyByScalar")
        {

        }
        else if (argv[1] == "transpozeMatrix")
        {

        }
        else if (argv[1] == "determinantMatrix")
        {

        }
        else if (argv[1] == "matrixIsDiagonal")
        {

        }
        else if (argv[1] == "sortRow")
        {

        }
        else if (argv[1] == "sortRowsInMatrix")
        {

        }
        else
        {
            cout << "error" << endl;
        }

    }
    else
    {
        cout << "! Nieznana komenda !" << endl;
    }


    return 0;
}