//
// Created by Bartosz Fiejdasz on 25/12/2021.
//

#include "../include/fun.h"

template <typename type1>
type1 myMin(type1 x,  type1 y){
  return (x < y)? x : y;
}

template <typename type2>
type2 myMax(type2 x, type2 y){
  return (x > y)? x : y;
}

template <typename type3>
type3 myPrintArray(type3 *pArray, int n){
  for (int i = 0; i < n; i++) {
    std::cout <<  pArray[i] << " ";
  }
}

template <typename type4>
type4 myPrintMatrix(type4 **pArray, int rows, int columns){
  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < columns; ++j)
      std::cout << pArray[i][j] << " ";
    std::cout << std::endl;
  }
}