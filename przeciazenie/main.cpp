#include <iostream>

using namespace std;

double vol(int x, int y, int z)
{
     double result;

     result = 0.5 * (x + y) * z;

    return result;
}

int vol(int x, int y)
{
    int result;

    result = x * y;

    return result;
}

int main()
{
    double a;
    int b;

    a = vol(2, 2, 3);
    b = vol(1, 1);

    cout << a << endl << b << endl;
}