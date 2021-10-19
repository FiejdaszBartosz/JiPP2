#include "iostream"

using namespace std;

double division(int a, int b)
{
    int result;

    if (a < b)
    {
        throw invalid_argument("Dzielna mniejsza od dzielnika");
    }
    if (a != result * b)
    {
        throw invalid_argument("Wynik nie jest naturalny");
    }

    return result  = a / b;
}

int main()
{
    int a, b;
    cout << "Podaj a i b" << endl;
    cin >> a;
    cin >> b;

    try
    {
        cout << division(a, b) << endl;
    }
    catch(invalid_argument& e)
    {
        cerr << e.what() << endl;
        return -1;
    }

    return 0;
}
