#ifndef JIPP2_CALC_H
#define JIPP2_CALC_H

#include <iostream>
#include <cstring>
#include <string>
#include <cstdlib>

using namespace std;

int addition(int d1, int d2);
int subtraction(int d1, int d2);
int volume(int d1, int d2, int d3);
void help();
bool cal(string operation_name, int digit1, int digit2, int digit3, int& p_result);


#endif //JIPP2_CALC_H
