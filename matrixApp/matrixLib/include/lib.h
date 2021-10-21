#include <iostream>

using namespace std;

int **creat_matrix(int rows, int columns);

void fill_matrix(int **matrix, int rows, int columns);

void print_matrix(int **matrix, int rows, int columns);

int **addMatrix(int **matrix_a, int **matrix_b, int rows_a, int columns_a);

int **subtractMatrix(int **matrix_a, int **matrix_b, int rows_a, int columns_a);

int **multiplyMatrix(int **matrix_a, int **matrix_b, int rows_a, int columns_a, int columns_b);
