#include "../include/calc.h"

int main(int argc, char *argv[])
{
    string operation;
    int x, y;

    //cout << "argc is: " << argc << endl;  //Debug: wypisuje liczbe podanych argumentow na wejsciu

    //Debug: wypisuje podane argumenty
    /*
    for (int i = 0; i < argc; ++i)
    {
        cout << "argv[" << i << "] = " << argv[i] << endl;
    }
    */

    if (argc != 4)
    {
        exit(0);
    }
    else
    {
        operation = argv[1];
        x = atoi(argv[2]);
        y = atoi(argv[3]);
    }



    int z;

    z = cal(operation, x, y);

    cout << z;
    return 0;
}