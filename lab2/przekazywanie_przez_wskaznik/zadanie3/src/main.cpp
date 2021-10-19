#include "iostream"
#include "ctime"

using namespace std;

void sort(int *array, int n)
{
    int i, j, min;

    for (i = 0; i < n-1; i++)
    {
        min = i;

        for (j = i+1; j < n; j++)
            if (array[j] < array[min])
                min = j;

        swap(array[min], array[i]);
    }
}

int main()
{
    int* array;
    int array_size;

    cout << "Podaj rozmiar tablicy" << endl;
    cin >> array_size;

    array = new int[array_size]();
    srand(time(NULL));

    for (int i = 0; i < array_size; i++)
        array[i] = (rand() % 100) + 1;

    for (int i = 0; i < array_size; i++)
        cout << array[i] << " ";

    cout << endl;

    sort(array, array_size);

    for (int i = 0; i < array_size; i++)
        cout << array[i] << " ";

    cout << endl;

    delete[] array;

    return 0;
}