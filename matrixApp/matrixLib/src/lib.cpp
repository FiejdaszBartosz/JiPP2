#include "../include/lib.h"

//funkcja sprawdza czy podana przez uzytkownika komenda jest obslugiwana
bool check_command(string command)
{
    //tablica z dostepnymi operacjami
    string command_list[9] = {"addMatrix", "subtractMatrix", "multiplyMatrix", "multiplyByScalar",
                              "transpozeMatrix", "powerMatrix", "determinantMatrix",
                              "matrixIsDiagonal", "sortRowsInMatrix"};

    //sprawdza czy podana komenda wystepuje w tablicy
    for (int i = 0; i < 9; ++i)
    {
        if (command == command_list[i])
            return true;
    }

    return false;
}

void help()
{
    cout << "Program wykonuje rozne operacje na macierzach." << endl;
    cout << "Nalezy podac jedna z mozliwych operacji jak parametr wejsciowy funkcji main." << endl;
    cout << "Ponizej znaduje sie tabelka z mozliwymi operacjami oraz co nalezy wpisac:" << endl << endl;
    cout << "Dodanie macierzy A i B\t\t\t\t\t" << "addMatrix" << endl << "Odjecie macierzy B od A\t\t\t\t\t" <<
         "subtractMatrix" << endl << "Pomnozenie macierzy A razy macierz B\t\t\t" << "multiplyMatrix" << endl <<
         "Pommnozenie macierzy A razy skalar\t\t\t" << "multiplyByScalar" << endl
         << "Wyznaczenie macierzy transponowanej\t\t\t" <<
         "transpozeMatrix" << endl << "Podniesienie macierzy A do wskazanej potegi\t\t" << "powerMatrix" << endl <<
         "Wylicznie wyznacznika macierzy A\t\t\t" << "determinantMatrix" << endl
         << "Sprawdzenie czy macierz jest diagonalna\t\t\t" <<
         "matrixIsDiagonal" << endl << "Posortowanie wierszow w macierzy rosnaco\t\t" << "sortRowsInMatrix" << endl
         << endl;
    cout << "Nastepnie wypieramy typ zmiennych ktore bedziemy wpisywac w komorki macierzy mozemy wybrac calkowite" <<
         "(int) lub zmiennoprzecinkowe (double)" << endl;
    cout << "Nastepnie odbywa sie wpisywanie liczb do odpowiednich komorek macierzy" << endl;
}

//int

int **create_matrix_int(int rows, int columns)
{
    //najpierw tworzone sa wiersze
    int **tmp_matrix = new int *[rows];

    //tworzenie kolumn
    for (int i = 0; i < rows; i++)
    {
        tmp_matrix[i] = new int[columns];

        for (int j = 0; j < columns; ++j)
        {
            //przypisanie kazdej komorce macierzy wartosci 0
            tmp_matrix[i][j] = 0;
        }
    }

    return tmp_matrix;
}

bool fill_matrix(int **matrix, int rows, int columns)
{
//wypenianie macierzy wartosciami idac po wierszach
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < columns; ++j)
        {
            cout << "Liczba do komorki " << i + 1 << " " << j + 1 << endl;
            if (!(cin >> matrix[i][j]))
            {
                cout << "Wprowadzono nieprawidlowy znak" << endl;
                return false;
            }
        }
    }

    return true;
}

void print_matrix(int **matrix, int rows, int columns)
{
    //wyswietla macierz wdluz wierszow
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
    //tworzy macierz wynikowa
    int **result_matrix = nullptr;

    result_matrix = create_matrix_int(rows_a, columns_a);

    /*dokonuje dodawania ze np. do komorki [0][0] w macierzy wynikowej kopiowana jest wartosc
     powstala w wyniku dodania [0][0] macierzy a i macierzy b */

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
    int **result_matrix = nullptr;

    result_matrix = create_matrix_int(rows_a, columns_a);

    /*dokonuje odejmowania ze np. do komorki [0][0] w macierzy wynikowej kopiowana jest wartosc
     powstala w wyniku odejmowania [0][0] macierzy a i macierzy b */

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
    int **result_matrix = nullptr;

    result_matrix = create_matrix_int(rows_a, columns_b);

    /* dokonuje mnozenia ze np. do komorki [1][1] w macierzy wynikowej kopiowana jest wartosc
     powstala w wyniku mnozenia [1][1]a * [1][1]b + [1][2]a * [2][1]b */

    for (int i = 0; i < rows_a; ++i)
    {
        for (int j = 0; j < columns_b; ++j)
        {
            for (int k = 0; k < columns_a; ++k)
            {
                result_matrix[i][j] += matrix_a[i][k] * matrix_b[k][j];
            }
        }
    }

    return result_matrix;
}

int **multiplyByScalar(int **matrix_a, int rows_a, int columns_a, int scalar)
{
    int **result_matrix = nullptr;

    result_matrix = create_matrix_int(rows_a, columns_a);

    /* dokonuje mnozenia ze np. do komorki [0][0] w macierzy wynikowej kopiowana jest wartosc
     powstala w wyniku mnozenia [0][0] macierzy a przez wartosc skalar */

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
    int **result_matrix = nullptr;

    //tworzy macierz pomocnicza ktora zamienione wartosci rows z colums np 3x2 bedzie 2x3
    result_matrix = create_matrix_int(columns, rows);

    //kopiuje wartosc z np [1][2]a do [2][1]b
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
    //przypadek dla potegi 1 czyli zwrocenie podanej macierzy bez zmian
    if (m_power == 1)
        return matrix;
        //przypadek dla potegi 1 czyli zwrocenie macierzy jednostkowej
    else if (m_power == 0)
    {
        for (int i = 0; i < rows; ++i)
        {
            for (int j = 0; j < columns; ++j)
            {
                if (i == j)
                    matrix[i][j] = 1;
                else
                    matrix[i][j] = 0;
            }
        }

        return matrix;
    }
        //wykonanie mnozenia macierzy z rekursywnym wykorzystaniem powerMatrix
    else
        return multiplyMatrix(matrix, powerMatrix(matrix, rows, columns, m_power - 1), rows, columns, columns);
}

int **submatrix(int **matrix, int row_index, int column_index, int matrix_size)
{
    //tworzy macierz pomocnicza "wykraslajac" odpowiedni wiersz i kolumne

    int i = 0, j = 0;

    int **result_matrix = nullptr;

    result_matrix = create_matrix_int(matrix_size, matrix_size);

    for (int r = 0; r < matrix_size; ++r)
    {
        for (int c = 0; c < matrix_size; ++c)
        {
            //if odpowiada za pominiecie odpowiednich wierszy i kolumn ktore zostaly podane na wejsciu
            if (r != row_index && c != column_index)
            {
                //kopoiowanie do macierzy wynikowej wartosci z niepominietych komorek
                result_matrix[i][j++] = matrix[r][c];

                /* po dojsciu do konca wiersza nalezy wyzerowac wartosc do poruszania sie po wierszach
                oraz przejsc do kolejnego */

                if (j == matrix_size - 1)
                {
                    j = 0;
                    i++;
                }
            }
        }
    }

    return result_matrix;
}

int determinantMatrix(int **matrix, int rows, int columns)
{
    //przypadek dla macierzy 1x1
    if (rows == 1)
        return matrix[0][0];
        //przypadek dla macierzy 2x2 manualne wymnozenie odpowiednich komorek
    else if (rows == 2)
        return (matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]);
        //dla pozostalych rozmiarow
    else
    {
        int result = 0, sign = 1;

        int **temp_matrix = nullptr;

        for (int i = 0; i < rows; ++i)
        {
            //tworzymy podmacierz pomniejszona o odpowiedni wiersz i kolumne
            temp_matrix = submatrix(matrix, 0, i, rows);

            //wynik obliczamy ze wzoru sign to znak ktory musi byc na zmiane plus minus
            result += sign * matrix[0][i] * determinantMatrix(temp_matrix, rows - 1, columns - 1);

            //zmiana znaku
            sign = -sign;
        }

        return result;
    }
}

bool matrixIsDiagonal(int **matrix, int rows, int columns)
{
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < columns; ++j)
        {
            //sprawdzenie czy tylko na przekatnej wystepuja liczby a w pozostalych komorkach jest 0
            if (i != j && matrix[i][j] != 0)
            {
                return false;
            }
        }
    }

    return true;
}

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void sortRow(int *row, int columns)
{
    //wykonaie bublesort na wierszach od komorki 0 do n rozsnaco
    int i, j;
    for (i = 0; i < columns - 1; i++)
        for (j = 0; j < columns - i - 1; j++)
            if (row[j] > row[j + 1])
                swap(&row[j], &row[j + 1]);
}

void sortRowsInMatrix(int **matrix, int rows, int columns)
{
    //wykonanie sortowania na kolejnych wierszach
    for (int i = 0; i < rows; i++)
    {
        sortRow(matrix[i], columns);
    }
}

void delete_matrix(int **matrix, int rows)
{
    //usuwa macierz w odwrotnej kolejsnosci niz zostala stworzona aby nie doszlo do utraty pamieci
    for (int i = 0; i < rows; ++i)
    {
        delete[] matrix[i];
    }
    delete[] matrix;
}

//double
/* funkcje sa takie same jak powyzej maja tylko zmieniony typ na double w przypadku tych
ktore przechowuja wartosci */

double **create_matrix_double(int rows, int columns)
{
    double **tmp_matrix = new double *[columns];

    for (int i = 0; i < rows; i++)
    {
        tmp_matrix[i] = new double[columns];

        for (int j = 0; j < rows; ++j)
        {
            tmp_matrix[i][j] = 0;
        }
    }
    return tmp_matrix;
}

bool fill_matrix(double **matrix, int rows, int columns)
{
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < columns; ++j)
        {
            cout << "Liczba do komorki " << i + 1 << " " << j + 1 << endl;
            if (!(cin >> matrix[i][j]))
            {
                cout << "Wprowadzono nieprawidlowy znak" << endl;
                return false;
            }
        }
    }

    return true;
}

void print_matrix(double **matrix, int rows, int columns)
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

double **addMatrix(double **matrix_a, double **matrix_b, int rows_a, int columns_a)
{
    double **result_matrix = nullptr;

    result_matrix = create_matrix_double(rows_a, columns_a);

    for (int i = 0; i < rows_a; ++i)
    {
        for (int j = 0; j < columns_a; ++j)
        {
            result_matrix[i][j] = matrix_a[i][j] + matrix_b[i][j];
        }
    }

    return result_matrix;
}

double **subtractMatrix(double **matrix_a, double **matrix_b, int rows_a, int columns_a)
{
    double **result_matrix = nullptr;

    result_matrix = create_matrix_double(rows_a, columns_a);

    for (int i = 0; i < rows_a; ++i)
    {
        for (int j = 0; j < columns_a; ++j)
        {
            result_matrix[i][j] = matrix_a[i][j] - matrix_b[i][j];
        }
    }

    return result_matrix;
}

double **multiplyMatrix(double **matrix_a, double **matrix_b, int rows_a, int columns_a, int columns_b)
{
    double **result_matrix = nullptr;

    result_matrix = create_matrix_double(rows_a, columns_b);

    for (int i = 0; i < rows_a; ++i)
    {
        for (int j = 0; j < columns_b; ++j)
        {
            for (int k = 0; k < columns_a; ++k)
            {
                result_matrix[i][j] += matrix_a[i][k] * matrix_b[k][j];

            }
        }
    }

    return result_matrix;
}

double **multiplyByScalar(double **matrix, int rows, int columns, double scalar)
{
    double **result_matrix = nullptr;

    result_matrix = create_matrix_double(rows, columns);

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < columns; ++j)
        {
            result_matrix[i][j] = matrix[i][j] * scalar;
        }
    }

    return result_matrix;
}

double **transpozeMatrix(double **matrix, int rows, int columns)
{
    double **result_matrix = nullptr;

    result_matrix = create_matrix_double(columns, rows);

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < columns; ++j)
        {
            result_matrix[j][i] = matrix[i][j];
        }
    }

    return result_matrix;
}

double **powerMatrix(double **matrix, int rows, int columns, double m_power)
{
    if (m_power == 1)
        return matrix;
    else if (m_power == 0)
    {
        for (int i = 0; i < rows; ++i)
        {
            for (int j = 0; j < columns; ++j)
            {
                if (i == j)
                    matrix[i][j] = 1;
                else
                    matrix[i][j] = 0;
            }
        }

        return matrix;
    }
    else
        return multiplyMatrix(matrix, powerMatrix(matrix, rows, columns, m_power - 1), rows, columns, columns);
}

double **submatrix(double **matrix, int row_index, int column_index, int matrix_size)
{
    int i = 0, j = 0;

    double **result_matrix = nullptr;

    result_matrix = create_matrix_double(matrix_size, matrix_size);

    for (int r = 0; r < matrix_size; ++r)
    {
        for (int c = 0; c < matrix_size; ++c)
        {
            if (r != row_index && c != column_index)
            {
                result_matrix[i][j++] = matrix[r][c];

                if (j == matrix_size - 1)
                {
                    j = 0;
                    i++;
                }
            }
        }
    }

    return result_matrix;
}

double determinantMatrix(double **matrix, int rows, int columns)
{
    if (rows == 1)
        return matrix[0][0];
    else if (rows == 2)
        return (matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]);
    else
    {
        double result = 0, sign = 1;

        double **temp_matrix = nullptr;

        for (int i = 0; i < rows; ++i)
        {
            temp_matrix = submatrix(matrix, 0, i, rows);

            result += sign * matrix[0][i] * determinantMatrix(temp_matrix, rows - 1, columns - 1);

            sign = -sign;
        }

        return result;
    }
}

bool matrixIsDiagonal(double **matrix, int rows, int columns)
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

void swap(double *a, double *b)
{
    double tmp = *a;
    *a = *b;
    *b = tmp;
}

void sortRow(double *row, int columns)
{
    int i, j;
    for (i = 0; i < columns - 1; i++)
        for (j = 0; j < columns - i - 1; j++)
            if (row[j] > row[j + 1])
                swap(&row[j], &row[j + 1]);
}

void sortRowsInMatrix(double **matrix, int rows, int columns)
{
    for (int i = 0; i < rows; i++)
    {
        sortRow(matrix[i], columns);
    }
}

void delete_matrix(double **matrix, int rows)
{
    for (int i = 0; i < rows; ++i)
    {
        delete[] matrix[i];
    }
    delete[] matrix;
}