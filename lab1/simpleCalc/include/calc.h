#ifndef JIPP2_CALC_H
#define JIPP2_CALC_H

#include <iostream>
#include <cstring>
#include <string>
#include <cstdlib>

using namespace std;

float addition(int d1, int d2);
float subtraction(int d1, int d2);
float volume(int d1, int d2, int d3, int d4);
void help();
bool cal(string operation_name, int digit1, int digit2, int digit3, int digit4, float& p_result);


#endif //JIPP2_CALC_H
