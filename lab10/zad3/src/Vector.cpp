//
// Created by Bartek on 04.01.2022.
//

#include "../include/Vector.h"

template<class T>
Vector<T>::Vector() {
  oneVal a;
  a.value = 0;
  a.empty = true;
}
template<class T>
Vector<T>::Vector(int n) {
  oneVal b;
  for (int i = 0; i < n; ++i) {
	oneVal a;
	a.empty = true;
	a.value = 0;
	if (i != 0) b.next = a;
	b = a;
  }
}
template<class T>
void Vector<T>::add(T x) {
  oneVal a;
  a = first;
  while (a.empty == false && a.next != nullptr) {
	a = a.next;
  }
  if (a.next == nullptr) {
	oneVal New;
	New.value = x;
	New.empty = false;
	a.next = New;
  } else {
	a.value = x;
	a.empty = false;
  }
}
template<class T>
void Vector<T>::pop() {
  oneVal a;
  a = first;
  while (a.empty == false && a.next != nullptr) {
	a;
	a = a.next;
  }
  a.value = 0;
  a.empty = true;
}

