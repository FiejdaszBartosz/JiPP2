#include <iostream>
#include "../matrixLib/include/lib.h"

int main(int argc, char *argv[])
{
    string operation = "help";
    operation = argv[1];

    if (operation == "help")
    {

        //do napisania help

    }
    else if (check_command(argv[1]))
    {
        int rows_a = 1, columns_a = 1, variable_type = 0;

        int **int_matrix_a = nullptr;
        double **double_matrix_a = nullptr;


        cout << "Podaj liczbe wierszy i kolumn macierzy" << endl;
        if(!(cin >> rows_a))
        {
            cout << "Wprowadzono nieprawidlowy znak" << endl;
            return 0;
        }
        else if(!(cin >> columns_a))
        {
            cout << "Wprowadzono nieprawidlowy znak" << endl;
            return 0;
        }

        cout << "Czy zmienne beda typu int -> 0 czy double -> 1:" << endl;
        if(!(cin >> variable_type))
        {
            cout << "Wprowadzono nieprawidlowy znak" << endl;
            return 0;
        }

        if (variable_type == 0)
        {
            int_matrix_a = create_matrix_int(rows_a, columns_a);
            if (!fill_matrix(int_matrix_a, rows_a, columns_a))
            {
                delete_matrix(int_matrix_a, rows_a);
                return 0;
            }
        }
        else if (variable_type == 1)
        {
            double_matrix_a = create_matrix_double(rows_a, columns_a);
            if (!fill_matrix(double_matrix_a, rows_a, columns_a))
            {
                delete_matrix(double_matrix_a, rows_a);
                return 0;
            }
        }
        else
        {
            cout << "! Niewlasciwy wybor !" << endl;
            return 0;
        }


        if (operation == "addMatrix")
        {

            if (variable_type == 0)
            {
                int rows_b = 1, columns_b = 1;

                int **int_matrix_b = nullptr, **result_matrix = nullptr;

                cout << "Podaj liczbe wierszy i kolumn drugiej macierzy" << endl;
                if (!(cin >> rows_b))
                {
                    cout << "Wprowadzono nieprawidlowy znak" << endl;
                    delete_matrix(int_matrix_a, rows_a);
                    return 0;
                }

                if (!(cin >> columns_b))
                {
                    cout << "Wprowadzono nieprawidlowy znak" << endl;
                    delete_matrix(int_matrix_a, rows_a);
                    return 0;
                }

                int_matrix_b = create_matrix_int(rows_b, columns_b);
                if (!fill_matrix(int_matrix_b, rows_b, columns_b))
                {
                    delete_matrix(int_matrix_a, rows_a);
                    delete_matrix(int_matrix_b, rows_b);
                    return 0;
                }

                result_matrix = addMatrix(int_matrix_a, int_matrix_b, rows_a, columns_a);

                cout << "Wynik to:" << endl;
                print_matrix(result_matrix, rows_a, columns_a);

                delete_matrix(int_matrix_b, rows_b);
                delete_matrix(result_matrix, rows_b);
            }
            else if (variable_type == 1)
            {
                int rows_b = 1, columns_b = 1;

                double **double_matrix_b = nullptr, **result_matrix = nullptr;

                cout << "Podaj liczbe wierszy i kolumn drugiej macierzy" << endl;
                if (!(cin >> rows_b))
                {
                    cout << "Wprowadzono nieprawidlowy znak" << endl;
                    delete_matrix(double_matrix_a, rows_a);
                    return 0;
                }

                if (!(cin >> columns_b))
                {
                    cout << "Wprowadzono nieprawidlowy znak" << endl;
                    delete_matrix(double_matrix_a, rows_a);
                    return 0;
                }

                double_matrix_b = create_matrix_double(rows_b, columns_b);
                if (!fill_matrix(double_matrix_b, rows_b, columns_b))
                {
                    delete_matrix(double_matrix_a, rows_a);
                    delete_matrix(double_matrix_b, rows_b);
                    return 0;
                }

                result_matrix = addMatrix(double_matrix_a, double_matrix_b, rows_a, columns_a);

                cout << "Wynik to:" << endl;
                print_matrix(result_matrix, rows_a, columns_a);

                delete_matrix(double_matrix_b, rows_b);
                delete_matrix(result_matrix, rows_b);
            }
        }
        else if (operation == "subtractMatrix")
        {
            if (variable_type == 0)
            {
                int rows_b = 1, columns_b = 1;

                int **int_matrix_b = nullptr, **result_matrix = nullptr;

                cout << "Podaj liczbe wierszy i kolumn drugiej macierzy" << endl;
                if (!(cin >> rows_b))
                {
                    cout << "Wprowadzono nieprawidlowy znak" << endl;
                    delete_matrix(int_matrix_a, rows_a);
                    return 0;
                }

                if (!(cin >> columns_b))
                {
                    cout << "Wprowadzono nieprawidlowy znak" << endl;
                    delete_matrix(int_matrix_a, rows_a);
                    return 0;
                }

                int_matrix_b = create_matrix_int(rows_b, columns_b);
                if (!fill_matrix(int_matrix_b, rows_b, columns_b))
                {
                    delete_matrix(int_matrix_a, rows_a);
                    delete_matrix(int_matrix_b, rows_b);
                    return 0;
                }

                result_matrix = subtractMatrix(int_matrix_a, int_matrix_b, rows_a, columns_a);

                cout << "Wynik to:" << endl;
                print_matrix(result_matrix, rows_a, columns_a);

                delete_matrix(int_matrix_b, rows_b);
                delete_matrix(result_matrix, rows_b);
            }
            else if (variable_type == 1)
            {
                int rows_b = 1, columns_b = 1;

                double **double_matrix_b = nullptr, **result_matrix = nullptr;

                cout << "Podaj liczbe wierszy i kolumn drugiej macierzy" << endl;
                if (!(cin >> rows_b))
                {
                    cout << "Wprowadzono nieprawidlowy znak" << endl;
                    delete_matrix(double_matrix_a, rows_a);
                    return 0;
                }

                if (!(cin >> columns_b))
                {
                    cout << "Wprowadzono nieprawidlowy znak" << endl;
                    delete_matrix(double_matrix_a, rows_a);
                    return 0;
                }

                double_matrix_b = create_matrix_double(rows_b, columns_b);
                if (!fill_matrix(double_matrix_b, rows_b, columns_b))
                {
                    delete_matrix(double_matrix_a, rows_a);
                    delete_matrix(double_matrix_b, rows_b);
                    return 0;
                }

                result_matrix = subtractMatrix(double_matrix_a, double_matrix_b, rows_a, columns_a);

                cout << "Wynik to:" << endl;
                print_matrix(result_matrix, rows_a, columns_a);

                delete_matrix(double_matrix_b, rows_b);
                delete_matrix(result_matrix, rows_b);
            }
        }
        else if (operation == "multiplyMatrix")
        {
            if (variable_type == 0)
            {
                int rows_b = 1, columns_b = 1;

                int **int_matrix_b = nullptr, **result_matrix = nullptr;

                cout << "Podaj liczbe wierszy i kolumn drugiej macierzy" << endl;
                if (!(cin >> rows_b))
                {
                    cout << "Wprowadzono nieprawidlowy znak" << endl;
                    delete_matrix(int_matrix_a, rows_a);
                    return 0;
                }

                if (!(cin >> columns_b))
                {
                    cout << "Wprowadzono nieprawidlowy znak" << endl;
                    delete_matrix(int_matrix_a, rows_a);
                    return 0;
                }

                int_matrix_b = create_matrix_int(rows_b, columns_b);
                if (!fill_matrix(int_matrix_b, rows_b, columns_b))
                {
                    delete_matrix(int_matrix_a, rows_a);
                    delete_matrix(int_matrix_b, rows_b);
                    return 0;
                }

                result_matrix = multiplyMatrix(int_matrix_a, int_matrix_b, rows_a, columns_a, columns_b);

                cout << "Wynik to:" << endl;
                print_matrix(result_matrix, rows_a, columns_b);

                delete_matrix(int_matrix_b, rows_b);
                delete_matrix(result_matrix, rows_b);
            }
            else if (variable_type == 1)
            {
                int rows_b = 1, columns_b = 1;

                double **double_matrix_b = nullptr, **result_matrix = nullptr;

                cout << "Podaj liczbe wierszy i kolumn drugiej macierzy" << endl;
                if (!(cin >> rows_b))
                {
                    cout << "Wprowadzono nieprawidlowy znak" << endl;
                    delete_matrix(double_matrix_a, rows_a);
                    return 0;
                }

                if (!(cin >> columns_b))
                {
                    cout << "Wprowadzono nieprawidlowy znak" << endl;
                    delete_matrix(double_matrix_a, rows_a);
                    return 0;
                }

                double_matrix_b = create_matrix_double(rows_b, columns_b);
                if (!fill_matrix(double_matrix_b, rows_b, columns_b))
                {
                    delete_matrix(double_matrix_a, rows_a);
                    delete_matrix(double_matrix_b, rows_b);
                    return 0;
                }

                result_matrix = multiplyMatrix(double_matrix_a, double_matrix_b, rows_a, columns_a, columns_b);

                cout << "Wynik to:" << endl;
                print_matrix(result_matrix, rows_a, columns_b);

                delete_matrix(double_matrix_b, rows_b);
                delete_matrix(result_matrix, rows_b);
            }
        }
        else if (operation == "multiplyByScalar")
        {
            if (variable_type == 0)
            {
                int scalar;

                int **result_matrix = nullptr;

                cout << "Podaj skalar" << endl;
                if (!(cin >> scalar))
                {
                    cout << "Wprowadzono nieprawidlowy znak" << endl;
                    delete_matrix(int_matrix_a, rows_a);
                    return 0;
                }

                result_matrix = multiplyByScalar(int_matrix_a, rows_a, columns_a, scalar);

                cout << "Wynik to:" << endl;
                print_matrix(result_matrix, rows_a, columns_a);

                delete_matrix(result_matrix, rows_a);
            }
            else if (variable_type == 1)
            {
                double scalar;

                double **result_matrix = nullptr;

                cout << "Podaj skalar" << endl;
                if (!(cin >> scalar))
                {
                    cout << "Wprowadzono nieprawidlowy znak" << endl;
                    delete_matrix(double_matrix_a, rows_a);
                    return 0;
                }

                result_matrix = multiplyByScalar(double_matrix_a, rows_a, columns_a, scalar);

                cout << "Wynik to:" << endl;
                print_matrix(result_matrix, rows_a, columns_a);

                delete_matrix(result_matrix, rows_a);
            }
        }
        else if (operation == "transpozeMatrix")
        {
            if (variable_type == 0)
            {
                int **result_matrix = nullptr;

                result_matrix = transpozeMatrix(int_matrix_a, rows_a, columns_a);

                cout << "Wynik to:" << endl;
                print_matrix(result_matrix, rows_a, columns_a);

                delete_matrix(result_matrix, rows_a);
            }
            else if (variable_type == 1)
            {
                double **result_matrix = nullptr;

                result_matrix = transpozeMatrix(double_matrix_a, rows_a, columns_a);

                cout << "Wynik to:" << endl;
                print_matrix(result_matrix, rows_a, columns_a);

                delete_matrix(result_matrix, rows_a);
            }
        }
        else if (operation == "powerMatrix")
        {
            if (variable_type == 0)
            {
                int power;

                int **result_matrix = nullptr;

                cout << "Podaj potege" << endl;
                if (!(cin >> power))
                {
                    cout << "Wprowadzono nieprawidlowy znak" << endl;
                    delete_matrix(int_matrix_a, rows_a);
                    return 0;
                }

                result_matrix = powerMatrix(int_matrix_a, rows_a, columns_a, power);

                cout << "Wynik to:" << endl;
                print_matrix(result_matrix, rows_a, columns_a);

                delete_matrix(result_matrix, rows_a);
            }
            else if (variable_type == 1)
            {
                double power;

                double **result_matrix = nullptr;

                cout << "Podaj potege" << endl;
                if (!(cin >> power))
                {
                    cout << "Wprowadzono nieprawidlowy znak" << endl;
                    delete_matrix(int_matrix_a, rows_a);
                    return 0;
                }


                result_matrix = powerMatrix(double_matrix_a, rows_a, columns_a, power);

                cout << "Wynik to:" << endl;
                print_matrix(result_matrix, rows_a, columns_a);

                delete_matrix(result_matrix, rows_a);
            }
        }
        else if (operation == "determinantMatrix")
        {
            if (variable_type == 0)
            {
                int result = 0;

                result = determinantMatrix(int_matrix_a, rows_a, columns_a);

                cout << "Wynik to: " << result << endl;

            }
            else if (variable_type == 1)
            {
                double result = 0;

                result = determinantMatrix(double_matrix_a, rows_a, columns_a);

                cout << "Wynik to: " << result << endl;
            }
        }
        else if (operation == "matrixIsDiagonal")
        {
            if (variable_type == 0)
            {
                bool result = false;

                result = matrixIsDiagonal(int_matrix_a, rows_a, columns_a);

                if (result)
                    cout << "Podana maciez jest diagonalna" << endl;
                else
                    cout << "Podana maciez nie jest diagonalna" << endl;

            }
            else if (variable_type == 1)
            {
                bool result = false;

                result = matrixIsDiagonal(double_matrix_a, rows_a, columns_a);

                if (result)
                    cout << "Podana maciez jest diagonalna" << endl;
                else
                    cout << "Podana maciez nie jest diagonalna" << endl;
            }
        }
        else if (operation == "sortRowsInMatrix")
        {
            if (variable_type == 0)
            {
                sortRowsInMatrix(int_matrix_a, rows_a, columns_a);

                cout << "Wynik to:" << endl;
                print_matrix(int_matrix_a, rows_a, columns_a);
            }
            else if (variable_type == 1)
            {
                sortRowsInMatrix(double_matrix_a, rows_a, columns_a);

                cout << "Wynik to:" << endl;
                print_matrix(double_matrix_a, rows_a, columns_a);
            }
        }
        else
        {
            cout << "error" << endl;
        }

        if (variable_type == 0)
            delete_matrix(int_matrix_a, rows_a);
        else if (variable_type == 1)
            delete_matrix(double_matrix_a, rows_a);

    }
    else
    {
        cout << "! Nieznana komenda !" << endl;
    }


    return 0;
}