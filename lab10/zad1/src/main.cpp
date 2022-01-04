//
// Created by Bartosz Fiejdasz on 30/11/2021.
//

#include "../include/fun.h"

int main()
{
  int a = 2, b = 4;
  double c = 4.0, d = 2.5;

  //tests for myMin
  std::cout << myMin(a, b) << std::endl;
  std::cout << myMin(c, d) << std::endl;

  //tests for myMax
  std::cout << myMax(a, b) << std::endl;
  std::cout << myMax(c, d) << std::endl;


  return 0;
}