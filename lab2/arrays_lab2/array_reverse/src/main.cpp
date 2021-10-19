#include <iostream>
#include <ctime>

using namespace std;

void print(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

void reverse(int array[], int left, int right)
{
    if(left < right)
    {
        swap(array[left], array[right]);
        reverse(array, left + 1, right - 1);
    }
}

int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 6, 7, 8};
    int n = sizeof(array) / sizeof(array[0]);

    print(array, n);
    reverse(array, 0 , n-1);
    print(array, n);

    return 0;
}