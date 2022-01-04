//
// Created by Bartek on 04.01.2022.
//

#include "../include/Array.h"

template<typename T, int size>
Array<T, size>::Array() {
  arr = new T[size];
}
template<typename T, int size>
Array<T, size>::~Array() {
  delete [] arr;
}
