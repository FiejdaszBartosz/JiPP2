#include <iostream>

using namespace std;

int **creat_matrix(int rows, int columns);

void fill_matrix(int **matrix, int rows, int columns);

void print_matrix(int **matrix, int rows, int columns);

int **addMatrix(int **matrix_a, int **matrix_b, int rows_a, int columns_a);

int **subtractMatrix(int **matrix_a, int **matrix_b, int rows_a, int columns_a);

int **multiplyMatrix(int **matrix_a, int **matrix_b, int rows_a, int columns_a, int columns_b);

int **multiplyByScalar(int **matrix, int rows, int columns, int scalar);

int **transpozeMatrix(int **matrix, int rows, int columns);

int **powerMatrix(int **matrix, int rows, int columns, int m_power);

int **submatrix(int **matrix, int row_index, int column_index, int matrix_size);

int determinantMatrix(int **matrix, int rows, int columns);

bool matrixIsDiagonal(int **matrix, int rows, int columns);