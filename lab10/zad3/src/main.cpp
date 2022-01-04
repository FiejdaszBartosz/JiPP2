//
// Created by Bartosz Fiejdasz on 30/11/2021.
//

#include "iostream"
using namespace std;

template <typename T>
T minX(T a, T b){
  T c;
  if(a>b) c = b;
  else c = a;
  return c;
}

template <typename T>
T maxX(T a, T b){
  T c;
  if(a>b) c = a;
  else c = b;
  return c;
}

template <class T, int n>
void printArray(T *a){
  for(int i = 0; i < n; i++)
	cout << a[i] << " ";
  cout << endl;
}

template <class T,int n, int m>
void printMatrix(T **a){
  for(int i = 0; i < n; i++){
	for(int j = 0; j < m; j++)
	  cout << a[i][j] << " ";
	cout << endl;
  }
}

int main()
{
  int **M = nullptr;
  M = new int *[3];
  for(int i = 0; i < 3; i++) {
	M[i] = new int[3];
	for(int j = 0; j< 3; j++){
	  M[i][j] = i+j;
	}
  }
  cout << minX<int>(M[0][1],M[2][0]) << endl;
  cout << maxX<int>(M[2][2],M[0][0]) << endl;
  printArray<int, 3>(M[1]);
  printMatrix<int, 3, 3>(M);

  return 0;
}