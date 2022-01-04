//
// Created by Bartek on 04.01.2022.
//

#ifndef ZAD2_LAB10_ZAD3_SRC_VECTOR_H_
#define ZAD2_LAB10_ZAD3_SRC_VECTOR_H_

template<class T>
class Vector{

  struct oneVal{
	bool empty;
	T value;
	oneVal* next = nullptr;
  } first;

 public:
  Vector();
  Vector(int n);
  void add(T x);
  void pop();
};


#endif //ZAD2_LAB10_ZAD3_SRC_VECTOR_H_
