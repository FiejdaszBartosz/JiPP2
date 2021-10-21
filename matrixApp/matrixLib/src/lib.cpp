#include "../include/lib.h"

//int

int **creat_matrix(int rows, int columns)
{
    int **tmp_matrix = new int *[columns];


    for (int i = 0; i < columns; i++)
    {
        tmp_matrix[i] = new int[rows];
    }

    return tmp_matrix;
}

void fill_matrix(int **matrix, int rows, int columns)
{

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < columns; ++j)
        {
            cout << "Liczba do komorki " << i << " " << j << endl;
            cin >> matrix[i][j];
        }
    }
}

void print_matrix(int **matrix, int rows, int columns)
{
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < columns; ++j)
        {
            cout << " " << matrix[i][j] << " ";
        }

        cout << "\n";
    }
}

int **addMatrix(int **matrix_a, int **matrix_b, int rows_a, int columns_a)
{
    int **result_matrix = NULL;

    result_matrix = creat_matrix(rows_a, columns_a);

    for (int i = 0; i < rows_a; ++i)
    {
        for (int j = 0; j < columns_a; ++j)
        {
            result_matrix[i][j] = matrix_a[i][j] + matrix_b[i][j];
        }
    }

    return result_matrix;
}

int **subtractMatrix(int **matrix_a, int **matrix_b, int rows_a, int columns_a)
{
    int **result_matrix = NULL;

    result_matrix = creat_matrix(rows_a, columns_a);

    for (int i = 0; i < rows_a; ++i)
    {
        for (int j = 0; j < columns_a; ++j)
        {
            result_matrix[i][j] = matrix_a[i][j] - matrix_b[i][j];
        }
    }

    return result_matrix;
}

int **multiplyMatrix(int **matrix_a, int **matrix_b, int rows_a, int columns_a, int columns_b)
{
    int **result_matrix = NULL;

    result_matrix = creat_matrix(rows_a, columns_a);

    for (int i = 0; i < rows_a; ++i)
    {
        for (int j = 0; j < columns_b; ++j)
        {
            for (int k = 0; k < columns_a; ++k)
            {
                result_matrix += matrix_a[i][k] * matrix_b[k][j];
            }
        }
    }

    return result_matrix;
}