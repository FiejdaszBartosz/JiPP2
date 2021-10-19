#include "iostream"

using namespace std;

void search(int *array, int n)
{
    for (int i = 0; i < n; i++)
    {
        if(array[i] > 0)
            cout << array[i] << " ";
    }
}

int main()
{
    int* array;
    int array_size;

    cout << "Podaj rozmiar tablicy" << endl;
    cin >> array_size;

    array = new int[array_size]();

    for (int i = 0; i < array_size; i++)
        cin >> array[i];

    search(array, array_size);

    delete[] array;

    return 0;
}