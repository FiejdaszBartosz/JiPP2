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

int **multiplyByScalar(int **matrix_a, int rows_a, int columns_a, int scalar)
{
    int **result_matrix = NULL;

    result_matrix = creat_matrix(rows_a, columns_a);

    for (int i = 0; i < rows_a; ++i)
    {
        for (int j = 0; j < columns_a; ++j)
        {
            result_matrix[i][j] = matrix_a[i][j] * scalar;
        }
    }

    return result_matrix;
}

int **transpozeMatrix(int **matrix, int rows, int columns)
{
    int **result_matrix = NULL;

    result_matrix = creat_matrix(rows, columns);

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < columns; ++j)
        {
            result_matrix[j][i] = matrix[i][j];
        }
    }

    return result_matrix;
}

int **powerMatrix(int **matrix, int rows, int columns, int m_power)
{
    int **result_matrix = NULL;

    result_matrix = matrix;

    for (int l = 1; l < m_power; ++l)
    {
        for (int i = 0; i < rows; ++i)
        {
            for (int j = 0; j < columns; ++j)
            {
                for (int k = 0; k < columns; ++k)
                {
                    result_matrix += result_matrix[i][k] * matrix[k][j];
                }
            }
        }
    }

    return result_matrix;
}

int determinantMatrix(int **matrix, int rows, int columns)
{
    return 0;
}

bool matrixIsDiagonal(int **matrix, int rows, int columns)
{
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < columns; ++j)
        {
            if (i != j && matrix[i][j] != 0)
            {
                return false;
            }
        }
    }

    return true;
}