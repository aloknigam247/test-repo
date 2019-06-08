#include <iostream>

void printArray(const int arr[], const int size) {
  for(int i=0; i<size; ++i)
    std::cout << arr[i] << ' ';
  std::cout << '\n';
}

int arrayMinPos(const int arr[],const int size) {
  int min_pos = 0;
  for(int i=0; i<size; ++i)
    if(arr[i] < arr[min_pos])
      min_pos = i;
  return min_pos;
}

void swap(int &a, int &b) {
  int t = a;
  a = b;
  b = t;
}

