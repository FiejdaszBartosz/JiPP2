#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    int array_size, largest_number = 0;
    int* array;

    cout << "Podaj rozmiar tablicy: " << endl;
    cin >> array_size;

    array = new int[array_size]();
    srand(time(NULL));

    for (int i = 0; i < array_size; i++)
        array[i] = (rand() % 100) + 1;

    for (int i = 0; i < array_size; i++)
        cout << array[i] << endl;

    for (int i = 0; i < array_size; i++)
    {
        if(largest_number < array[i])
            largest_number = array[i];
    }

    cout << "Najwyzsza liczba to : " << largest_number << endl;

    delete[] array;
}