#include <iostream>
#include <ctime>

using namespace std;

int random (int a, int b)
{
    int result;

    srand(time(NULL));

    result = rand() % (b - a) + a;

    return  result;
}

int main()
{
    int a, b;

    cin >> a;
    cin >> b;

    cout << "Wylosowana liczba to: " << random(a, b) << endl;
    return 0;
}