#include <iostream>

using namespace std;

double average(double* a, double* b)
{
    return((*a + *b) / 2);
}

int main()
{
    double a, b;
    double * p_a, * p_b;

    cout << "Podaj a oraz b" << endl;
    cin >> a;
    cin >> b;
    p_a = &a;
    p_b = &b;

    cout << average(p_a, p_b) << endl;

    return 0;
}
