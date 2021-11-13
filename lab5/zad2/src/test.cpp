#include "iostream"

using namespace std;

int main(){

    int cVal = 314;
    const int *p = &cVal;
    //*p = 628; nie mozna modyfikowac wartosci wskaznika na stala
    const int cVal1 = 628;
    p = &cVal1;

    int cVal2 = 314;
    int *const p2 = &cVal;

    *p2 = 628;

    int cVal3 = 666;
    p2 = &cVal3; //nie mozna modyfikowac stalego wskaznika

    int cVal3 = 314;
    const int* const p4 = &cVal3;
    //*p4 = 123;  nie mozna modyfikowac wartosci
    //p4 = &cVal;  nie mozna modyfikowac wskaznika
}