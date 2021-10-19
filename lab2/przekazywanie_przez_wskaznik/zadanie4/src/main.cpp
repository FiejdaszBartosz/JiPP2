#include "iostream"

using namespace std;

void replace(int a, int* ptr)
{
    *ptr = a;
}


int main()
{
    int a = 1, b = 2;
    int* ptr = &b;

    cout << a << " " << b << endl;
    replace(a , ptr);
    cout << a << " " << b << endl;

    return 0;
}